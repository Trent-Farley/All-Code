#include <iostream>
#include "Bag.cpp"

using namespace std;

int main() {
  
  /*int nums[3];
  nums[0] = 1;

  cout << "dublin(nums[0]): " << dublin(nums[0]) << endl;
  */
  
  Bag myBag;
  myBag.add(10);
  
  for(int i = 0; i < 100; ++i)
  {
    myBag.add(i);
  }
  
  cout << myBag.remove(100) << endl;

  return 0;
}

int dublin(int num)
{
  return num * 2;
}