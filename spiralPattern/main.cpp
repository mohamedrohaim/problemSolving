#include <iostream>
#include <iomanip>


using namespace std;
const int ROWS=2,COLS=3;

void printArray(int arr[ROWS][COLS]){
   for(int r=0;r<ROWS;++r){
        for(int c=0;c<COLS;++c){
            cout<<setw(4)<<arr[r][c]<<" ";
        }
    cout<<"\n";
   }
}


void add(int arr1[ROWS][COLS],int arr2[ROWS][COLS],int arr3[ROWS][COLS]){
   for(int r=0;r<ROWS;++r){
        for(int c=0;c<COLS;++c){
            arr3[r][c]=arr1[r][c]+arr2[r][c];

        }

   }
   printArray(arr3);
}

int main()
{
                                        // arr1            arr2
    int arr1[ROWS][COLS]={1,2,3,4};//first 4 elements and others =0      // 1 2  3           4  0  0
    int arr2[ROWS][COLS]={{4},{8}};                                       // 4 0  0           8  0  0
    int arr3[ROWS][COLS];
    add(arr1,arr2,arr3);


    return 0;
}
