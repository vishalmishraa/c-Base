#include "iostream"
#include "fstream"
#include "map"
#include "vector"
#include "cstdlib"
using namespace std;

#define MIN_BALANCE 500
class InSufficientFund
{
};

//ACCOUNT CALSS
class Account
{
    private:
    long accountNumber;
    string firstName;
    string lastName;
    float balance;
    static long NextAccountNumber;

    public:
    Account(){};
    Account(string fname, string lname , float balance);
    long getAccNo();
    string getfirstName();
    string getlastName();
    float getBalance();

    void Deposit(float amount);
    void withdrow(float amount);

    static void setLastAccountNumber(long accountNumber);
    static long getLastAccountNumber();
    
    //overloading
    friend ofstream & operator<<(ofstream &ofs,Account &acc);
    friend ifstream & operator>>(ifstream &ifs,Account &acc);
    friend ostream & operator<<(ostream &ost,Account &acc);
};
long Account::NextAccountNumber = 0;

class Bank
{
    private:
    map<long,Account> accounts;
    public:
    Bank();
    //open an account
    Account openAccount(string fname, string lname , float balnace);
    //balance enwuiry
    Account BalanceEnquiry(long accountNumber);
    //deposit in account
    Account Deposit(long accountnumber,float amount);
    //withdraw from account
    Account Withdraw(long accountnumber, float amount);
    //close account
    void CloseAccount(long accountNumber);
    //show all account
    void ShowAllAccount();
    ~Bank();
};

int main(){
    Bank b;
    Account acc;
    int choice;
    string fname,lname;
    long accountNumber;
    float balance;
    float amount;
    
    cout<<"**BANKING SYSTEM**"<<endl;
    do
    {
        cout<<"\n\t SELECT ONE OPTION BELOW: ";
        cout<<"\n\t1 Open an Account.";
        cout<<"\n\t2 Balance Enquiry.";
        cout<<"\n\t3 Deposit.";
        cout<<"\n\t4 Withdraw.";
        cout<<"\n\t5 Close an Account.";
        cout<<"\n\t6 Show all Account.";
        cout<<"\n\t7 Exit"<<endl;
        cout<<"\n\t Enter your Choice: ";
        cin>>choice;
        switch (choice)
        {
        case 1:
            cout<<"Enter your First name: ";
            cin>>fname;
            cout<<"Enter your Last name: ";
            cin>>lname;
            cout<<"Enter your initial balance: ";
            cin>>balance;
            acc =b.openAccount(fname,lname,balance);
            cout<<endl<<"**Congratulation Your Account is created**"<<endl;
            cout<<acc;
            break;
        case 2:
            cout<<"Enter account number: ";
            cin>>accountNumber;
            acc = b.BalanceEnquiry(accountNumber);
            cout<<acc;
            break;
        case 3:
            cout<<"Enter your account number: ";
            cin>>accountNumber;
            cout<<"Enter Balance: ";
            cin>>amount;
            acc  = b.Deposit(accountNumber,amount);
            cout<<endl<<"Amount is Deposited."<<endl;
            cout<<acc;
            break;
        case 4:
            cout<<"Enter your account number: ";
            cin>>accountNumber;
            cout<<"Enter Balance: ";
            cin>>amount;
            acc  = b.Withdraw(accountNumber,amount);
            cout<<endl<<"Amount is Withrdrawn."<<endl;
            cout<<acc;
            break;
        case 5:
            cout<<"Enter account number: ";
            cin>>accountNumber;
            b.CloseAccount(accountNumber);
            cout<<"Account is Closed"<<endl;
            cout<<acc;
            break;
        case 6:
            b.ShowAllAccount();
            break;
        case 7:
            break;   
        default:
        cout<<"\nEnter your choice: ";
            exit(0);
        }
    } while (choice!=7);
    return 0;
}

//ACCOUNT CLASS FUNCTIONS
Account::Account(string fname, string lname , float balance){
        NextAccountNumber++;
        //generating account number
        accountNumber = NextAccountNumber+20201000;
        firstName = fname;
        lastName = lname;
        this->balance = balance;
    };

//accessord and mutertors
long Account::getAccNo(){
        return accountNumber;
    };

string Account::getfirstName(){
        return firstName;
    };

string Account::getlastName(){
        return lastName;
    };

float Account::getBalance(){
        return balance;
    };

void Account::Deposit(float amount){
    balance += amount;
    };

void Account::withdrow(float amount){
        if (balance-amount<MIN_BALANCE)
                throw InSufficientFund();
        balance -= amount;   
    };

void Account::setLastAccountNumber(long accountNumber){
        NextAccountNumber = accountNumber;
    };

long Account::getLastAccountNumber(){
    return NextAccountNumber;
    };

ofstream & operator<<(ofstream &ofs,Account &acc){
    ofs<<acc.accountNumber<<endl;
    ofs<<acc.firstName<<endl;
    ofs<<acc.lastName<<endl;
    ofs<<acc.balance<<endl;
    return ofs;
    };

ifstream & operator>>(ifstream &ifs,Account &acc){
        ifs>>acc.accountNumber;
        ifs>>acc.firstName;
        ifs>>acc.lastName;
        ifs>>acc.balance;
        return ifs;
    };

ostream & operator<<(ostream &ost,Account &acc){
        ost<<"First Name: "<<acc.getfirstName()<<endl;
        ost<<"Last Name: "<<acc.getlastName()<<endl;
        ost<<"Account Number: " <<acc.getAccNo()<<endl;
        ost<<"Balance: "<<acc.getBalance()<<endl;
        return ost;
    }

//BANCK CALSS FUNCTIONS==================================
Bank::Bank(){
        Account account;
        ifstream infile;

        infile.open("Bank.data");
        if (!infile)
        {
            cout<<"Something went wrong,Bank Data File not Found"<<endl;
            return;
        }
        while (!infile.eof())
        {
            infile>>account;
            accounts.insert(pair<long,Account>(account.getAccNo(),account));
        }
        Account::setLastAccountNumber(account.getAccNo());
        infile.close();
    };

Account Bank::openAccount(string fname, string lname , float balnace){
    ofstream outfile;
    Account account(fname,lname,balnace);
    accounts.insert(pair<long,Account>(account.getAccNo(),account));
    outfile.open("Bank.data",ios::trunc);
    map<long,Account>::iterator itr;
    for(itr=accounts.begin();itr!=accounts.end();itr++){
    outfile<<itr->second;
    };
    outfile.close();
    return account;
  };

Account Bank::BalanceEnquiry(long accountNumber){
    map<long,Account>::iterator itr = accounts.find(accountNumber);
    return itr->second;
    };

Account Bank::Deposit(long accountnumber,float amount){
    map<long,Account>::iterator itr = accounts.find(accountnumber);
    itr->second.Deposit(amount);
    return itr->second;
    };

Account Bank::Withdraw(long accountnumber, float amount){
    map<long,Account>::iterator itr = accounts.find(accountnumber);
    itr->second.withdrow(amount);
    return itr->second;
    };

void Bank::CloseAccount(long accountNumber){
        map<long,Account>::iterator itr = accounts.find(accountNumber);
        cout<<"Account Deleted,See you soon again:)"<<itr->second<<endl;
        accounts.erase(accountNumber);
    };

void Bank::ShowAllAccount(){
        map<long,Account>::iterator itr;
        for(itr = accounts.begin();itr != accounts.end();itr++){
            cout<<"Accounts: "<<itr->first<<endl<<itr->second<<endl;
        }
    };

    Bank::~Bank(){
        ofstream outfile;
        outfile.open("Bank.data",ios::trunc);
        map<long,Account>::iterator itr;
        for(itr = accounts.begin();itr != accounts.end();itr++){
            outfile<<itr->second;
        };
        outfile.close();
    }
