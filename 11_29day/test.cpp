#include <iostream>
#include <vector>
using namespace std;
void myshuffle(vector<int>& poke){
    vector<int> left;
    vector<int> right;
    vector<int> result;
    for(size_t i=0;i<poke.size();i++){//分牌
        if(i<poke.size()/2){
            left.push_back(poke[i]);
        }else{
            right.push_back(poke[i]);
        }
    }
    while(!left.empty()||!right.empty()){
        if(!left.empty()){
            result.push_back(*(left.back()-1));
            left.pop_back();
        }
        if(!right.empty()){
            result.push_back(*(right.back()-1));
            right.pop_back();
        }
    }
    for(auto e:result){
        cout<<e;
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int tmp;
    while(cin>>tmp){
        v.push_back(tmp);
    }
    myshuffle(v);
    return 0;
}
