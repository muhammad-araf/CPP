#include <iostream>
using namespace std;
int main() 
{   
  srand(time(0));  // Initialize random number generator.
int ran= (rand() % 5) + 1;
int inp1;
      cout<<"Enter a number between 1 to 5 "<<endl;
      cin>>inp1;
      if (ran == inp1){
          cout<<"Congrats! YOU WON\n"<<"computer think "<<ran;
      }
      else {
          cout<<"OHH! YOU LOSE \n"<<"computer think "<<ran;
      }
  return 0; 
}
 