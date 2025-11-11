#include<iostream>
#include<string>
using namespace std;
void RemoveDuplicates(string str,string ans,int i,int map[26]){
if(i==str.length()){
  cout<<"ans:"<<ans<<endl;
  return;
}
char ch=str[i];
int mapIdx=int(ch-'a');
if(map[mapIdx]==true){
  RemoveDuplicates(str,ans,i+1,map);
}
else{
  map[mapIdx]=true;
  RemoveDuplicates(str,ans+str[i],i+1,map);
} 
}
int main(){
  string str="appnnacollege";
  string ans="";
  int map[26]={false};
  RemoveDuplicates(str,ans,0,map);
  return 0;
}