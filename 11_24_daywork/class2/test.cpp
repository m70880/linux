#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> split(string &str, char ch)
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
int main() {
    vector<string> vpoke = { "3","4","5","6","7","8", \
        "9","10","J","Q","K", \
            "A","2","joker","JOKER" };
    string tmp;
    vector<string> sum;
    vector<string> left;
    vector< string> right;
    getline(cin, tmp);
    auto result = split(tmp, ' ');
    for(size_t i=0;i<result.size();++i){
        if(result[i].find('-')!=-1){

        }
    }


    return 0;

}

