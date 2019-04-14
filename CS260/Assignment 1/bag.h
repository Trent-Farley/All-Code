class Bag{
    private:
        int marbles =2;
    public:
        int subtract();
        int add();

    //Adds marbles into the bag
    int add(int add){
        int adding = add;
        marbles = marbles + adding;
        return marbles;
    }
    //subtracts marbles from the bag
    int subtract(int sub){
        int subtract = sub;
        // for error checking later
        if(marbles == 0){
            return 10;
        }
        // dont know if this is convention but I think it will work
        marbles = marbles - subtract;
        return marbles;
    }
};