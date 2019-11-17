#include<iostream>
using namespace std;
int main(){
    cout<<"------------------------------------------------"<<endl;
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int row=0;
    int col=2;
    cout<<"please the number of finding:";
    int result=0;
    cin>>result;
    while(row<=2&&col>=0){
        if(result<arr[row][col]){
            col--;
        }
        else if(result>arr[row][col]){
            row++;
        }else{
            cout<<"get it is :"<<arr[row][col]<<endl;
            return 0;
        }
    }
    cout<<"don't get it!\n";
    return 0;

}
