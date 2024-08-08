#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    
  auto sum = [] ( int a, int b) { return (a+b); };
  
  int sum1 = sum(20,30);
  cout << "Sum is " << sum1 << endl;


  vector<int> vect1;
  vect1.push_back(3);
  vect1.push_back(40);
  vect1.push_back(50);

  vector<int> :: iterator vect1_iter;
  for( vect1_iter=vect1.begin() ; vect1_iter!=vect1.end() ; vect1_iter++ )
  {
    cout << *(vect1_iter) << " ";
  }


    
  return 0;
}

