#include <iostream>
#include <vector>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    double R;
    int n;
    double a=3.12342134123412351234123512412341235125125341;
    cout<<setprecision(30)<<a;
    vector<long double> r;
    while (cin>>R>>n)
    {
        cout<<fixed<<setprecision(100)<<pow(R,n)<<'\n';
    }




    cout << "Hello, World!" << endl;
    return 0;
}