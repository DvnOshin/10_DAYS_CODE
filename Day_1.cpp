#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() 
{
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";
    int j,sum1;
    double c;
    float sum2;
    string g,sum3;
        cin>>j>>c;
        cin.ignore();
        getline(cin,g);
    sum1=i+j;
    sum2=(d+c);
    sum3 = s + g;
        cout<<sum1<<endl;
        cout<<fixed<<setprecision(1)<<sum2<<endl;
        cout<<sum3;
    return 0;
}
