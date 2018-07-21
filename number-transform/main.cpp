#include <iostream>
#include <vector>
using namespace std;
int main() {
    int a,i,j;
    char b[50][50];

    cin>>a;
    vector<vector<char> >c(a);
    vector<vector<int> >d(a,vector<int>(2));
    vector<int>e(a);
    for(i=0;i<a;i++)
    {
        cin>>b[i];
        d[i][0]=1;
        d[i][1]=0;
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<50;j++)
        {
            if(b[i][j]&&b[i][j]!='-')
            {
                if(b[i][j] == 'A'||b[i][j] == 'B'||b[i][j] == 'C')
                    c[i].push_back('2');
                else if(b[i][j] == 'D'||b[i][j] == 'E'||b[i][j] == 'F')
                    c[i].push_back('3');
                else if(b[i][j] == 'G'||b[i][j] == 'H'||b[i][j] == 'I')
                    c[i].push_back('4');
                else if(b[i][j] == 'J'||b[i][j] == 'K'||b[i][j] == 'L')
                    c[i].push_back('5');
                else if(b[i][j] == 'M'||b[i][j] == 'N'||b[i][j] == 'O')
                    c[i].push_back('6');
                else if(b[i][j] == 'P'||b[i][j] == 'R'||b[i][j] == 'S')
                    c[i].push_back('7');
                else if(b[i][j] == 'T'||b[i][j] == 'U'||b[i][j] == 'V')
                    c[i].push_back('8');
                else if(b[i][j] == 'W'||b[i][j] == 'X'||b[i][j] == 'Y')
                    c[i].push_back('9');
                else
                    c[i].push_back(b[i][j]);
            }
        }
    }
    for(i=0;i<a;i++)
    {
        e[i]=c[i][0]*1000000+c[i][1]*100000+c[i][2]*10000+c[i][3]*1000+c[i][4]*100+c[i][5]*10+c[i][6];
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(e[i]<e[j])
            {
                int x;
                vector<char>y;
                x=e[i];
                e[i]=e[j];
                e[j]=x;
                y=c[i];
                c[i]=c[j];
                c[j]=y;
            }
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i!=j)
            {
                if(c[i]==c[j]&&d[i][1]*d[j][1]==0)
                {
                    d[i][0]++;
                    d[i][1]=1;
                    d[j][1]=-1;
                }
            }
        }
    }
    for(i=0;i<a;i++)
    {
        if(d[i][1]==1)
        {
            j=0;
            for(vector<char>::const_iterator p=c[i].begin();p!=c[i].end();p++)
            {
                cout<<*p;
                j++;
                if(j==3)
                {
                    cout<<"-";
                }
            }
            cout<<" "<<d[i][0]<<endl;
        }
    }
}