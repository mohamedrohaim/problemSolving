#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cin>>arr[i][j];
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cout<<arr[i][m-j-1]<<" ";
        }
        cout<<endl;
    }
/*
2 3 5
7 9 20
35 1 12

*/


    return 0;
}
