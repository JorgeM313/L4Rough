//Jorge Martinez
//CPSC 121 Lab 4
//10/10/2018
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
string getInput(string starter)
{
  cout << "Enter your new string: ";
  getline(cin,starter);
  cout << "This is the new string: " << starter << endl;

}
int main()
{
  string starter = "metroid313";
  int menu_choice = 0;
  int go_back = 0;
  cout << "Welcome to the string modifier." << endl;
  cout << "This is my starting string: " << starter << endl;
  cout << "Choose what you would like to do with the string: " << endl;
  cout << "1. getInput" << endl;
  cout << "2. string printBetween(int a, int b, int step = 1)" << endl;
  cout << "3. string nonalnum_removed(string input)" << endl;
  cout << "4. string alphabet_numberified(string input)" << endl;
  cout << "5. int sumDigits(string digitString)" << endl;
  cout << "6. void saveString(string savedStr)" << endl;
  cin >> menu_choice;
  if (menu_choice == 1)
  {
    getInput(starter);
  }
  else
  {
    cout << "Not yet" << endl;
  }
cout << "Would you like to return to the menu?" << endl;
cout << "1. Yes " << endl;
cout << "2. No " << endl;
cin >> go_back;
if (go_back == 1)
return 0;
}
