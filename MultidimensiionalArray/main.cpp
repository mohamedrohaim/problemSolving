#include <iostream>
#include <iomanip>

using namespace std;
//int N=5;
enum dir { //spiral order
    RIGHT,
    DOWN,
    LEFT,
    UP,
    };
 int dir_r[]={0 ,1 ,0 ,-1 };
 int dir_c[]={1 ,0 ,-1 , 0};
 /*
 //wrap
 dir=0  => dir+1   =>1%4=1
 dir=1  => dir+1   =>2%4=2
 dir=2  => dir+1   =>1%4=3
 dir=3  => dir+1   =>4%4=0

 */
void spiral(int arr[5][5],int N){
    cout<<"Case N= "<<N<<":\t"<<endl;
    int cnt=0,r=0,c=0,steps=N ,dir=0;// dir=right
    while(cnt<N*N){

        for(int s=0;s<4&&cnt<N*N;++s)//right,down,left,up
        {
            int m=steps-1; //   N-1 steps per direction
            if(s==3) --m;  //except last direction     m the steps i will walk in one direction
            for(int i=0;i<m&&cnt<N*N;++i) // movie in specific direction
            {
                cout<<arr[r][c]<<" ";
                ++cnt,r+=dir_r[dir],c+=dir_c[dir]; //move step
            }
           dir=(dir+1)%4; //change direction -wrap
        }
         cout<<arr[r][c]<<"\n";     // last element
         ++cnt,r+=dir_r[dir],c+=dir_c[dir];
        steps-=2; //6>>4>>2>>0
    }





}



int main()
{

    int arr[5][5]={
    {1,2,3,4,5},
    {6,7,8,9,10},
    {11,12,13,14,15},
    {16,17,18,19,20},
    {21,22,23,24,25},
    };
   // spiral(arr,1);
   // spiral(arr,2);
   // spiral(arr,3);
   // spiral(arr,4); // test even
    spiral(arr, 5); // test odd



    return 0;
}

