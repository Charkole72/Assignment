#include <iostream>
using namespace std;

enum seasons{Hot,Rainy,Cold};
void months(seasons s)
{
    switch (s)
    {
    case seasons::Hot:
        cout<<"The Hot season(Summer) lasts from mid-February to mid-May."<<endl;
        break;
    case seasons::Rainy:
        cout<<"The Rainy season lasts from mid-May to late October."<<endl;
        break;
    case seasons::Cold:
        cout<<"The Cold season(Winter) lasts from late October to mid-February."<<endl;
        break;
    default:
        cout<<"There is no season like this!"<<endl;
        break;
    }
}

int main()
{
    char sea=0;
   cout<<"The three seasons are:The Hot season,the Rainy season and the Cold season."<<endl;
   cout<<"Choose one season that you want to know the time interval(H,R,C): ";
   cin>>sea;
   cout<<endl;
   switch (sea)
   {
   case 'H':
    months(seasons::Hot);
    break;
case 'R':
    months(seasons::Rainy);
    break;
case 'C':
    months(seasons::Cold);
    break;
   
default:
    cout<<"Invalid choice of season!"<<endl;
    break;
   }
} 

