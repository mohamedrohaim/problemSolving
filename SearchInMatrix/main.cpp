#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,item;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    cin>>item;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==item){
                cout<<"will not take number";
                return 0;
            }
        }

    }
    cout<<"will take number";
    return 0;
}
