#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int n,t,l=0,j,m,l1,l2,l3,d,e,f;
    string k;   
    cin>>n;
    t=0;
    while(t<n)
    {    cout<<"Loop: "<<t<<"\n";

         getline (cin,k);
         l=k.size();
         char w[l];
         for(int i=0;i<l;i++)
         w[i]=0;
         l1=l2=l3=0;
         d=e=f=0;
         m=0;
         j=0;
         for(int i=0;i<l;i++)
         {
                 if(k[i]!=' ')
                 {
                 w[j]=k[i];
                 j++;
                 }
         }
         m=j-1;
         for(int i=0;i<=m;i++)                 
         {
                 if(w[i]=='m')
                 l1=i;
                 else if(w[i]=='+')
                 l2=i;
                 else if(w[i]=='=')
                 l3=i;
         }
         //cout<<l1<<" "<<l2<<" "<<l3<<"\n";
         if(l1>l2 && l1>l3)
         {
             for(int i=0;i<l2;i++)
             d=d*10+w[i]-48;
             for(int i=l2+1;i<l3;i++)
             e=e*10+w[i]-48;
             f=e+d;
             cout<<d<<" + "<<e<<" = "<<f<<"\n";
         }
         else if(l1<l2 && l1<l3)
         {
             for(int i=l3+1;i<=m;i++)
             f=f*10+w[i]-48;
             for(int i=l2+1;i<l3;i++)
             e=e*10+w[i]-48;
             d=f-e;
             cout<<d<<" + "<<e<<" = "<<f<<"\n";
         }
         else if(l1>l2 && l1<l3)
         {
             for(int i=l3+1;i<=m;i++)
             f=f*10+w[i]-48;
             for(int i=0;i<l2;i++)
             d=d*10+w[i]-48;
             e=f-d;
             cout<<d<<" + "<<e<<" = "<<f<<"\n";
         }
         t++;
    }
         system("pause");
         return 0;

}      
         
                           
