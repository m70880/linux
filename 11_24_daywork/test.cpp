#include<iostream>
#include<vector>
using namespace std;
int getFaterSum(int n){
    int sum=0;
    if(n==1){
        return 1;
    }
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
          sum+=i;
        }
    }
    return sum;
}

int main(){
    int n;
    int count=0;
    cin >>n;
    for(int i=2;i<=n;i++){
        if(i==getFaterSum(i)){
            count++;
            cout<<i<<endl;
        }
    }
    cout<<count<<endl;
    return 0;
}

