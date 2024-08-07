#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    
    auto sum = [] ( int a, int b) { return (a+b); };
    
    int sum1 = sum(5,6);
    cout << "Sum is " << sum1 << endl;

    
  return 0;
}

