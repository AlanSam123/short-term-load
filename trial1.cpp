#include <iostream>
#include <string>

void main()
{
  int N,f[100],m[100],a[100],t[100],alpha,beta;
  cout<<"Enter the value of N, alpha,beta,a0,m0,f0,to";
  cin>>N>>" ">>alpha>>beta>>a[0]>>m[0]>>f[0]>>t[0];
  cout<<"Enter the A array";
  for (int i=1;i<N; i++)
   {
       cin>>a[i]>>"\n";
   }
   for(int i=0;i<N;i++)
   {
       f[i]=m[i-1]+alpha(a[i-1]-m[i-1];
       t[i[=t[i-1]+beta(f[i]-m[i-1]);
       m[i]=f[i]+t[i];
   }
   cout<<"f, t, m values coming up"
   for (int i=0;i<N; i++)
   {
       cout<<f[i]<<" "<<t[i]<<" "<<m[i]<<"\n";
   }
   
}
