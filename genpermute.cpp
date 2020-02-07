#include<iostream>
using namespace std;
int counter=1;
void genpermute(char cap[],int a,int b)
{
    if(a==b)
    {
            cout<<counter++<<"\t"<<cap<<"\n";   
    }
    else
    {
        for(int i=a;i<=b;i++)
        {
            swap(cap[a],cap[i]);
            genpermute(cap,a+1,b);
            swap(cap[a],cap[i]);
        }
    }
}
int main()
{
   int result=0;
   int num;
   char store[27];
   char arr[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\n'};
   cout<<"Enter the number of words";
   cout<<endl;
   cin>>num;
   for(int i=0;i<num;i++)
   {
       store[i]=arr[i];
   }
   genpermute(store,0,num-1);
   return 0;
}