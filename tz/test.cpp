#include<iostream>
#include<unistd.h>
using namespace std;
int main(int argc,char* argv[],char* env[]){
  (void)argc;
  for(int i=0;i<argc;i++){
    cout<<(argv[i])<<endl;
  }
  for(int i=0;env[i];i++){
    cout<<env[i]<<endl;
  }
  cout<<("begin-----------------------before fork")<<endl;
  return 0;
}
