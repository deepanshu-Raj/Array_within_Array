#include<iostream>
using namespace std;

typedef struct x
{
    int a;
    int *p;
}x;
typedef struct y
{
    int c;
    int d;
}y;
int main()
{
   int t,q;
   cin>>t>>q;
   int i;
   x arr[t];
   for(i=0;i<t;i++)
   {
      cin>>arr[i].a;
      arr[i].p=new int[arr[i].a];
      for(int m=0;m<arr[i].a;m++)
        cin>>*(arr[i].p+m);
   }
   y ar[q];
   for(i=0;i<q;i++)
   {
       cin>>ar[i].c>>ar[i].d;
       cout<<*(arr[ar[i].c].p+ar[i].d)<<endl;
   }
   return 0;
}
