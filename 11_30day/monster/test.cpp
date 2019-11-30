#include <iostream>
#include <vector>
using namespace std;
int getfacter(int m,int n){
    int max=m>n?m:n;
    int min=m>n?n:m;
    for(int i=min;i>=1;i--){
        if(max%i==0&&min&&i==0){
            return i;
        }
    }
    return 1;
}

void playMonster(vector<int>& v,int& power){
    for(size_t i=0;i<v.size();i++){
        if(power<=v[i]){
            power+=v[i];
        }
        else {
            power+=getfacter(power,v[i]);
        }
    }
}

int main(){
    int power=0;
    int n;
    int tmp;
    vector<int> monster;
    while(cin>>n){
        cin>>power;
       while(cin>>tmp){
           monster.push_back(tmp);
        }
       //进行打怪升级
      playMonster(monster,power); 
      cout<<power<<endl;
    }


    return 0;
}
