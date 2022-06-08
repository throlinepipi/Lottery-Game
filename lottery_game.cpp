#include <iostream>
using namespace std;
int main()
{
    int age;
	int id=0;
	int money=0;
	int number=0;
	int choose;
	
	cout << "Welcome to our lottery game" <<endl;
	cout << "---------------------------" << endl;
	
	cout << "Please enter your age: ";
	cin >> age;
	
	if (age > 17)
	{
	    while (age > 17)
	      {
		   cout << "Please enter yourr id : ";
	       cin >> id;
	       while (id==111)
	         { 
			  cout << "Please enter yur money more than 1000MMK : ";
	          cin >> money;
	          while (money > 999)
	           {
	         	cout << "\nPlease enter your number : ";
	         	cin >> number;
	        	if (number == 123)
	        	{
				  cout << "Congratulations!! You win in lottery ** " << endl;
				  cout << "\n If you want to play again, Press 1 ! \n If you want to quit , Press 2 ! \n";
			
				}
	        	else
		    	{cout << "Sorry.. Good luck next time!!";}
		        }
		     }
	      }
	}
	else
	{cout << "Sorry, You cannot play game!";}
	
	
	return 0;
}
