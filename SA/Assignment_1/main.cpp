//Tested a few times by hand, everything works for me. 

#include "bag.h" //Bag class
#include "marble.h" //Marble class
#include <iostream>
#include <string>

using namespace std;
int put_together(int add);
int main(){
  //initialize a bunch of variables. 
  int playing = 1;
  int start = 0;
  int pull = 0;
  int out = 0;
  int print_out = 0;
  int par_var = 0;
  int add_in = 0;
  int m_added = 0; 
  string marble;

  //Start this coolio classes
  Bag mybag; 
  cout<<"Welcome to pulling marbles out of a bag!"<<endl;

  while(playing == 1){
//Menu options
    cout <<"Here are your options:\n\
1. Pull marbles\n\
2. Put in marbles\n\
3. Exit program"<<endl;
    cin >> pull;
    
  //First if statement, for pulling out non-random marbles. 
    if(pull == 1){
      cout<<"Ok, how many would you like to pull out?"<<endl;
      cin>>out;
      print_out = mybag.subtract(out);

    //Subtract returns 10 if it is empty
      if(print_out == 10){
        cout<<"Sorry bag is empty!"<<endl;
      }
      else{
      //For loop in an else statement...
        for(out; out>0; out = out-1){
          //non-random variable 
          par_var = par_var + 1;
          if(par_var>3){
            par_var = 1;
          }
          put_together(par_var);
        }
        //prints how many marbles are left
        cout<<"\nThere are "<< print_out<<" left"<<endl;
      }
    }
    if(pull == 2){
      //Put marbles in, just adds to the private variable
      cout<<"How many would you like to add?"<<endl;
      cin>>add_in;
      m_added = mybag.add(add_in);
      cout<<"Got it! there are now "<< m_added<<" marbles"<<endl;
    }
    else{
      //for exit, this is not great but works so well. 
      playing = pull;
    
    }
  }
}
//I would have stuck this inside the marble class but since
// I could not figure out how to return
// A string I decided to do this. 

//Takes marble class and actually uses it. 
int put_together(int add){
  int adds = add;
  int color = 0;
  double weight = 4.2;
  int size = 2;
  
  
  string s_color;
  //more non-random behavior
  color = color + adds;
  weight = weight + adds;
  size = size + adds;

  //initialize marble class
  Marble marbles;
  
  //Call the attributes of the class
  int new_color= marbles.color(color);
  double new_weight = marbles.weight(weight);
  int new_size = marbles.size(size);

  //Last step with color, I will look through a tutorial on how 
  // to return a string but this works. 
  
  if(new_color == 1){
    s_color = "Blue";
  }
  else if(new_color == 2 ){
    s_color = "Flamingo";
  }
  else if(new_color == 3 ){
    s_color = "Mango";
  }
  //Final print out statement 
  cout<< "Marble Details\nColor: "<<s_color<<" \nweight: "<<new_weight<<" grams \nsize: "<< new_size<<" cm"<<endl;
  
  return 0;
}