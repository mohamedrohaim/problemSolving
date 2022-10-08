#include <bits/stdc++.h>

using namespace std;

int main()
{


    int t;
    cin>>t;
    int ma;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
           cout<<arr[i]<<" ";

        }for(int i=0;i<n;i++){
            int maxi=arr[i];
          for(int j=i+1;j<n;j++){
            maxi=max(maxi,arr[j]);
            cout<<maxi<<" ";

          }



    }

    cout<<endl;
    }
    return 0;
}
