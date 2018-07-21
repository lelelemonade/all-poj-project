#include <iostream>
#include <vector>
#include<cmath>
using namespace std;
int main() {
    int m,n,i,j,x;
    cin>>n>>m;
    int c;
    vector<vector<char> >a(m,vector<char>(n));
    vector<int>b(m);

    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        for(j=0;j<n;j++)
        {
            for(c=j;c<n;c++)
            {
                if(a[i][j]>a[i][c])
                    b[i]++;
            }
        }
    }
    vector<int>d(b);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(d[i]<d[j])
            {
                x=d[i];
                d[i]=d[j];
                d[j]=x;
            }
        }
    }
    vector<int>e(m);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(d[i]==b[j]&&e[j]==0)
            {
                for(x=0;x<n;x++)
                {
                    cout<<a[j][x];
                }
                cout<<endl;
                e[j]=1;
            }
        }
    }
    return 0;
}
