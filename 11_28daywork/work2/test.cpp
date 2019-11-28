#include<iostream>
#include<string>
#include<vector>
using namespace std;
string compstring(string&s1,string& s2){
    string big;
    string small;
    big=s1.size()>s2.size()?s1:s2;
    small=s1.size()>s2.size()?s2:s1;
    int len=small.size();
    for(int head=0;head<len;head++){
        for(int real=len-head;real>head+1;real--){
            string tmp=small.substr(head,real);
            if(big.find(tmp)!=string::npos){
                return tmp;
            }
        }
    }
    return string();
}
int main(){
    string s1;
    string s2;
    while(getline(cin,s1)){
    getline(cin,s2);
    string ret=compstring(s1,s2);
    for(size_t i=0;i<ret.size();i++){
        cout<<ret[i];
    }
    cout<<endl;
    }
    return 0;
}
