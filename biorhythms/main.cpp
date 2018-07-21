#include <iostream>
#include <vector>
using namespace std;
int getmin(int a,int b,int c)
{
    if(a<b)
    {
        if(a<c)
            return a;
        else
            return c;
    }
    else{
        if(b<c)
            return b;
        else
            return c;
    }
}
int getday(int a,int b,int c)
{
    int e;
    do
    {
        e=getmin(a,b,c);
        if(e==a)
        {
            a+=23;
        }
        else if(e==b&&e!=a)
        {
            b+=28;
        }
        else if(e==c&&e!=a&&e!=b)
        {
            c+=33;
        }
    }while(a!=b||a!=c||b!=c);

    return a;
}
int main() {
    int a,b,c,d,f;
    int i=0,j=0;
    vector<vector<int> >e(4);
    while(true)
    {
        cin>>a>>b>>c>>d;
        if(a==-1&&b==-1&&c==-1&&d==-1)
            break;
        e[0].push_back(a);
        e[1].push_back(b);
        e[2].push_back(c);
        e[3].push_back(d);
        i++;
    }
    for(j=0;j<i;j++)
    {
        f=getday(e[0][j],e[1][j],e[2][j])-e[3][j];
        if(f>21252)
        {
            f-=21252;
            cout<<"Case "<<j+1<<": the next triple peak occurs in "<<f<<" days."<<endl;
        }
        else if(f<0)
            cout<<"Case "<<j+1<<": the next triple peak occurs in "<<f+21252<<" days."<<endl;
        else
            cout<<"Case "<<j+1<<": the next triple peak occurs in "<<f<<" days."<<endl;
    }
    return 0;
}


