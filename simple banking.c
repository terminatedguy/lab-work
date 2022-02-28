#include <iostream>
using namespace std;
class Bank 
{
private:
    int acc_no;
    char name[30];
    char type[20];
    long balance;
    long phno;
public:
    void getdata()
    {
        cout << "Enter Account Number ";
        cin >> acc_no;
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Type: ";
        cin >> type;
        cout << "Enter Phone Number";
        cin >> phno;
        cout << "Enter  Balance: ";
        cin >> balance;
    };
    void Deposit()
    {
        long amt;
        long abc;
        cout << "How much money you want to deposit?";
        cin >> amt;
        abc = balance + amt;
        cout << "You now have "<< abc << " in your account";
    };
    void Withdraw()
    {
        long minus;
        long xyz;
        cout << "How much money you want to withdraw?";
        cin >> minus;
        xyz = balance - minus;
        cout << "You now have "<< xyz << " in your account";
    };
    void Display()
    {
    	cout << "Name:"<< name<<endl;
    	cout << "balance:"<< balance<<endl;
    };
};
int main()
{
	int i;
	Bank b;
	b.getdata();
	int choice;
	cout<< "What is your choice?\n";
	cout<< "1)Deposit\n";
	cout<< "2)Withdraw\n";
	cout<< "3)Display\n";
	cin >> choice;
	if (choice == 3)
	{   
	   b.Display();
    }
    else if (choice == 2)
	{   
	   b.Withdraw();
    }
    else if (choice == 1)
	{   
	   b.Deposit();
    }
    return 0;
}
	   
	
	
	
	

    


