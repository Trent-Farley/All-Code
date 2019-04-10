#include <iostream>
using namespace std;


class Bag{
    public:
        int add();
        int subtract();
        
    int add(int add){
        int addition = add;
        int marbles = 0;
        return marbles+addition;
    }
    int subtract(int subtract){
        int sub = subtract;
        int marbles = 0;
        return marbles-sub;

    }
};
int main(){
    int add = 5;
    Bag mybag;
    int final = mybag.subtract(add);
    cout<< final<<endl;
}
