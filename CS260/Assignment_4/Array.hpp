class Array
{
    
public:
    int sized = 1;
    int *size = &sized;
    int data = 0;
    int arr[sizeof(sized)] = {data};
    
};

