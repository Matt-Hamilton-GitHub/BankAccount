#include <iostream>
#include <string>
#include "Account.h"
using namespace std;

int main()
{
    int depos {0};
    int withd {0};
    Account matt_account;
    
    matt_account.set_name("Matt's acount");
    matt_account.set_balance(2300);
	
    cout << "How much money would you like to deposit ?" ;
    cin >> depos;
    if (matt_account.deposit(depos))
        cout << "OK" << endl;
        else
            cout << "Deposite is not allowed"<< endl;
    cout << "How much money would you like to deposit ?" ;
    cin >> withd;    
            
    if (matt_account.withdraw(withd))
        cout << "Withdraw is ok " << endl;
        else 
            cout <<"Not suffient found" << endl;
    
	system("pause");
	return 0;
}
