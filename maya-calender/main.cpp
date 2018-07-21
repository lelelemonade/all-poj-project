#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int a,i,j,total;
    char dot;
    cin>>a;
    vector<int>b(a);
    vector<string>c(a);
    vector<int>d(a);
    vector<int>e(a);
    vector<string>f(a);
    vector<int>g(a);
    for(i=0;i<a;i++)
    {
        cin>>b[i]>>dot>>c[i]>>d[i];
    }
    cout<<a<<endl;
    for(i=0;i<a;i++)
    {
        if(c[i]=="pop")
        {
            total=365*d[i]+b[i];
        }
        else if(c[i]=="no")
        {
            total=365*d[i]+20+b[i];
        }
        else if(c[i]=="zip")
        {
            total=365*d[i]+40+b[i];
        }
        else if(c[i]=="zotz")
        {
            total=365*d[i]+60+b[i];
        }
        else if(c[i]=="tzec")
        {
            total=365*d[i]+80+b[i];
        }
        else if(c[i]=="xul")
        {
            total=365*d[i]+100+b[i];
        }
        else if(c[i]=="yoxkin")
        {
            total=365*d[i]+120+b[i];
        }
        else if(c[i]=="mol")
        {
            total=365*d[i]+140+b[i];
        }
        else if(c[i]=="chen")
        {
            total=365*d[i]+160+b[i];
        }
        else if(c[i]=="yax")
        {
            total=365*d[i]+180+b[i];
        }
        else if(c[i]=="zac")
        {
            total=365*d[i]+200+b[i];
        }
        else if(c[i]=="ceh")
        {
            total=365*d[i]+220+b[i];
        }
        else if(c[i]=="mac")
        {
            total=365*d[i]+240+b[i];
        }
        else if(c[i]=="kankin")
        {
            total=365*d[i]+260+b[i];
        }
        else if(c[i]=="muan")
        {
            total=365*d[i]+280+b[i];
        }
        else if(c[i]=="pax")
        {
            total=365*d[i]+300+b[i];
        }
        else if(c[i]=="koyab")
        {
            total=365*d[i]+320+b[i];
        }
        else if(c[i]=="cumhu")
        {
            total=365*d[i]+340+b[i];
        }
        else if(c[i]=="uayet")
        {
            total=365*d[i]+360+b[i];
        }
        g[i]=(total)/260;
//        total=(total)%260;
        e[i]=(total%13)+1;
        total=total%20;
        if(total==0)
        {
            f[i]="imix";
        }
        else if(total==1)
        {
            f[i]="ik";
        }
        else if(total==2)
        {
            f[i]="akbal";
        }
        else if(total==3)
        {
            f[i]="kan";
        }
        else if(total==4)
        {
            f[i]="chicchan";
        }
        else if(total==5)
        {
            f[i]="cimi";
        }
        else if(total==6)
        {
            f[i]="manik";
        }
        else if(total==7)
        {
            f[i]="lamat";
        }
        else if(total==8)
        {
            f[i]="muluk";
        }
        else if(total==9)
        {
            f[i]="ok";
        }
        else if(total==10)
        {
            f[i]="chuen";
        }else if(total==11)
        {
            f[i]="eb";
        }else if(total==12)
        {
            f[i]="ben";
        }
        else if(total==13)
        {
            f[i]="ix";
        }
        else if(total==14)
        {
            f[i]="mem";
        }
        else if(total==15)
        {
            f[i]="cib";
        }
        else if(total==16)
        {
            f[i]="caban";
        }
        else if(total==17)
        {
            f[i]="eznab";
        }else if(total==18)
        {
            f[i]="canac";
        }
        else if(total==19)
        {
            f[i]="ahau";
        }
        cout<<e[i]<<" "<<f[i]<<" "<<g[i]<<endl;
    }
    return 0;
}
