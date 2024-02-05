#include <iostream>
using namespace std;
int main()
{
    int n=0;
    int i=1;
    int k=1;
    cout<<"Enter the number of rows: ";
    cin>>n;
    cout<<endl;
while(i<=n)
{
    int j=1;
    while (j<=i)
    {
        cout<<k<<" ";
        k++;
        j++;
    }
    cout<<endl;
    i++;
    
}
} 

