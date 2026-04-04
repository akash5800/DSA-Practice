#include<bits/stdc++.h>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b){
  return a.second<b.second; //ascendingorder according to second element of pair
}
int maxLength(vector<pair<int,int>>pairs){
  int n=pairs.size();
  sort(pairs.begin(),pairs.end(),compare);
  int ans=1;
  int currEnd=pairs[0].second;
  for(int i=1;i<n;i++){
    if(pairs[i].first>currEnd){
      ans++;
      currEnd=pairs[i].second;
    }
  }
  cout<<"maximum length of chain="<<ans<<endl;
  return ans;

}
int main(){
  int n=5;
  vector<pair<int,int>>pairs(n,make_pair(0,0));
  pairs[0]={5,24};
  pairs[1]={39,60};
  pairs[2]={5,28};
  pairs[3]={27,40};
  pairs[4]={50,90};
  maxLength(pairs);
  return 0;
}