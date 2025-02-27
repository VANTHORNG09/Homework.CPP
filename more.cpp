#include <iostream>
using namespace std;
void userGreeting(string username, string subject)
{
  // function body function definition
  cout << "===============" << endl;
  cout << "\t  hello" << username << endl;
  cout << "\t hello to" << subject << " programming" << endl;
  cout << "===============" << endl;
}
int sum()
{
  int value1, value2;
  cout << "Enter value1:";
    cin >> value1;
  cout << "Enter value2:";
      cin >> value2;
  int result = value1 * value2;
  cout << "Result is:" << result << endl;
  return result;
}
float exchangUSDorRiels(float usd){
  return usd * 4000;
}
int main()
{
  // system("cls");
  // userGreeting("Vanthoeng", "c++");
  // userGreeting("koko", "ython");
  // // userGreeting();

  // int result = sum();
  // cout << "Add 100 to the " << endl;
  // result += 100;
  // cout << "Final result is : " << result << endl;
  // cout << sum() << endl;
   int usd;
  cout << " Enter usd vslue:";
  cin >> usd;
  cout<< "USD is : "<<usd<< endl; 
  float rieil = exchangUSDorRiels(usd);
  cout<< "Riels ="<<rieil<<"rieels";
      
  return 0;
}