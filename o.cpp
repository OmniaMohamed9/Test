
#include<iostream>
using namespace std;

int main()
{
    int num,x,y;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int target;
    bool f=false;
    cin>>target;
    for(int i=0;i<num;i++){
        for(int j=i+1;j<num;j++){
            if (arr[i]+arr[j]==target){
                x=i;
                y=j;
               f=true;
                break;
            }
        
    }
    if(f==true)
    break;
    }
    cout<<x<<","<<y;

    return 0;
}