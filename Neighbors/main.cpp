#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,x,y;
    cin>>n>>m;
    char arr[n+3][m+3];
     for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cin>>arr[i][j];
        }
    }
    cin>>x>>y;
    x=x-1;
    y=y-1;
    if(
      ( arr[x][y-1]!='.') && (arr[x][y+1]!='.') &&
       (arr[x-1][y]!='.' )&& (arr[x-1][y+1]!='.' )&& (arr[x-1][y-1]!='.' )&&
       (arr[x+1][y]!='.') && (arr[x+1][y+1]!='.' )&& (arr[x+1][y-1]!='.')

       ){
        cout<<"yes";
       }else{
       cout<<"no";
       }




        return 0;
}
