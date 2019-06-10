// #include <time>
// #include <Stdlib>
// for some reason these are not found, I will look into 
// it this weekend. 

class Marble{

    public:
        int color();
        int weight();
        int size();
    //Random(ish) color, had to build it 'cause of time not 
    // importing
    int color(int cur_color){
        int new_color = cur_color;
        if(new_color == 1){
            new_color = 3;
        }
        else if(new_color == 2){
            new_color = 1;
        }
        else{
            new_color = 2;
        }
        return new_color;
    }
    //marbles weigh roughly 5.2 grams so..
    //Another made random function
    double weight(double cur_weight){
        double weight = cur_weight;
        if(weight == 5.2){
            weight = 4.2;
        }
        else if(weight == 4.2){
            weight = 5.5;
        }
        else{
            weight = 5.2;
        }
        return weight;
    }
    //Average size 1 mm to 8 mm
    //Random sizes, excpet only three options. 
    int size(int cur_size){
        int size = cur_size;
        if(size == 3){
            size = 4;
        }
        else if(size == 4){
            size = 3;
        }
        else{
            size = 4;
        }
        return size;

    }
};
