#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    
  // auto sum = [] ( int a, int b) { return (a+b); };
  
  // int sum1 = sum(20,30);
  // cout << "Sum is " << sum1 << endl;


  vector<int> vect1, vect2;
  vect1.push_back(3);
  vect1.push_back(30);
  vect1.push_back(50);

  cout << "Printing Vector 1" << endl;
  
  vector<int> :: iterator vect1_iter;
  for( vect1_iter=vect1.begin() ; vect1_iter!=vect1.end() ; vect1_iter++ )
  {
    cout << *(vect1_iter) << " ";
  }
  
  cout << "HELLO I AM HERE" << endl;
  cout << "testing checkout commit ids" << endl;

  vect2.push_back(5);
  vect2.push_back(6);
  vect2.push_back(7);
  
  cout << "Printing Vector 2" << endl;
  vector<int> :: iterator vect2_iter;
  for( vect2_iter=vect2.begin() ; vect2_iter!=vect2.end() ; vect2_iter++ )
  {
	  cout << *(vect2_iter) << " ";
  }
  
  return 0;
}

