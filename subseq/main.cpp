#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    int counter=0;
    int temp=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }for(int i=0;i<m;i++){
        cin>>b[i];
    }for(int i=0;i<n;i++){

        if(a[i]==b[counter]){
            counter++;
        }
        }
        if(counter==m){
            cout<<"YES";
        }else{
            cout<<"NO";
        }



    return 0;
}
/*
3 2
1 4 7
1 7
1 1

*/
