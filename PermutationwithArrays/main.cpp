#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int a[n];
   int b[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }for(int i=0;i<n;i++){
    cin>>b[i];
   }
   sort(a,a+n);
   sort(b,b+n);
   for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
             cout<<"no";
             return 0;
        }
   }
   cout<<"yes";



   /*
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
            if(a[i]==b[j]){
                break;
            }else if(j==n-1 &&a[i]!=b[j]){
            cout<<"no";
            return 0;
            }

   }

   */





    return 0;
}
