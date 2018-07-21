#include<iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    int i=0;
    double j;
    float a,b;
    vector<float>c;
    cin>>a;
    c.push_back(a);
    while(cin>>a)
    {
        if(a==0.00)break;
        c.push_back(a);
    }

    for(vector<float>::const_iterator p=c.begin();p!=c.end();p++)
    {
        if(*p==0)
        {
            continue;
        }
        for(i=1;i<=273;i++)
        {
            b=0;
            for(j=1;j<=i;j++)
            {
                if(b>=*p)
                    break;
                b+=(float)1/(j+1);
            }
            if(b>=*p)
                break;
        }
        cout<<i<<" card(s)"<<endl;
    }
}