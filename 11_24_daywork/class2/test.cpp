#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> split(string &str, char ch)//将给定string分割成n个string类，ch作为分隔符
{

    vector<string> res;
    str += ch;
    size_t start = 0;
    size_t last = str.find(ch);
    while (last < str.size())
    {
        if (start != last)
            res.push_back(str.substr(start, last - start));
        start = last + 1;
        last = str.find(ch, start);
    }
    return res;
}
bool judgeRule(vector<string>& v){ 
    //是否是5连
    vector<string> vpoke = { "3","4","5","6","7","8", \
        "9","10","J","Q","K", \
            "A","2","joker","JOKER" };
    if(v.size()>=5){
        int flag=0;
        size_t pos=vpoke.find(v[0]);
        for(size_t i=0;i<v.size();i++){
            
        }
        return flag;
    }
    return false;
    
};
int main() {
    vector<string> vpoke = { "3","4","5","6","7","8", \
        "9","10","J","Q","K", \
            "A","2","joker","JOKER" };
    string tmp;
    vector<string> sum;
    vector<string> left;
    vector< string> right;
    getline(cin, tmp);
    //将输入的牌分别存储在两个vector中
    auto result = split(tmp, ' ');
    for(size_t i=0;i<result.size();++i){
        if(result[i].find('-')!=-1){
            left.push_back(result[i]);
        }else {
            auto result2=split(result[i],'-');
            left.push_back(result2[0]);
            right.push_back(result[2]);
            i++;
            for(;i<result.size();++i){
                right.push_back(result[i]);
            }
        }
    }
    // das ----------------------------------------------------
    
    //判断各边是否符合要求
    return 0;

}

