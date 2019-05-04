// CPP program to illustrate the 
// list::size() function 
#include <bits/stdc++.h> 
using std::cout; 
using std::endl;
using std::list;
int main() 
{ 
    // Creating a list 
    list<int> demoList; 
  
    // Add elements to the List 
    for(int i = 0; i<10; i++){
    demoList.push_back(10+i); 
    demoList.push_back(20+i); 
    demoList.push_back(30+i); 
    demoList.push_back(40+i); 
    demoList.push_front(10+i);
    
    }
    // getting size of the list 
    int size = demoList.size(); 
  
    cout << "The list contains " << size << " elements"<<endl; 
  
    return 0; 
} 