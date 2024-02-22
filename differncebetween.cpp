//FIND THE DIFFERENCE BETWEEN THE SUM OF ELEMENTS AT EVEN INDICES TO THE SUM OF ELEMENTS AT ODD INDICES.
#include<iostream>

using namespace std;
int main(){
    int arr[]={1,2,1,2,3,5}; //5-9=-4
    int anssum=0;
    for(int i=0;i<6;i++){
        if(i%2==0){
            anssum+=arr[i]; 
        }
        else{
            anssum-=arr[i]; //-4
        }
    }
    cout<<anssum<<endl;
    return 0;
}