#include<iostream>
using namespace std;
int main(){
    int battle=10;
    int co=0;
    int tmp=0;
    while(battle>2){
        tmp=battle/3;
        co+=tmp;
        battle=battle%3+tmp;
    }
    if(battle==2){
        co++;
    }
    cout<<"battle is:"<<co<<endl;
    return 0;
}
