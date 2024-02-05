#include <iostream>
using namespace std;
int min(int my_array[],int n)
{
    int r= my_array[0];
    for(int i=1;i<n;i++)
    {
        if(my_array[i]<r)
        {
            r=my_array[i];
        }
    }
    return r;
} 
int max(int my_array[],int n)
{
    int r= my_array[0];
    for(int i=1;i<n;i++)
    {
        if (my_array[i]>r)
        {
            r=my_array[i];
        }
        
    }
    return r;
}
int main()
{
    int my_array[]={4,6,39,73,2,5,7};
    int n= sizeof(my_array)/sizeof(my_array[0]);
    cout<<"The minmum number of the array is "<<min(my_array,n)<<"."<<endl;
    cout<<"The maximum number of the array is "<<max(my_array,n)<<"."<<endl;
    return 0;
}