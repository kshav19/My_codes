#include<iostream>
#include<conio.h>
#include<fstream>
#include<list>
using namespace std;
int main()
{
 int c,i,d=0,e=0;
  srand(time(0));
  ofstream fout[50];
  char s[]="fil.txt";
   for(i=0;i<50;i++)
   {
    s[1]=i/10+48;
    s[2]=i%10+48;
    fout[i].open(s,ios::app);  //open all the file in append mode
   }
  for(i=0;i<=1000;i++)
  {
   c=rand()%1000;         //random no. generation
   d=(c/20)/10;
   e=(c/20)%10;
   s[1]=d+48;
   s[2]=e+48;
   fout[10*d+e]<<c<<"\n";     //generated no are inserted into file in append mode
  }
  for(i=0;i<50;i++)
  fout[i].close();
  ifstream fin[i];
  list<int>v;
  fout[0].open("f50.txt",ios::app);   //file f50 is open to insert no. in asc order
  for(i=0;i<50;i++)
  {
    s[1]=i/10+48;
    s[2]=i%10+48;
    fin[i].open(s,ios::out);
    fin[i].seekg(0,ios::beg);   //file is open from beg 
    while(fin[i])
     {
      fin[i]>>c;
      v.push_back(c);
     }
    v.sort();     //sort the list
    list<int>::iterator pos;
    for(pos=v.begin();pos!=v.end();pos++)
    fout[0]<<*pos<<"\n";
    v.clear();
  }                                     
 return 0;
}
 
