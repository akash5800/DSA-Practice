#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare(pair<int,int>a,pair<int,int>b){
  return a.second<b.second;// sort according to end time
}
int main(){
  vector<int>start={0,1,2};
  vector<int>end={9,2,4};
  vector<pair<int,int>>activity(3,make_pair(0,0));
  activity[0]=make_pair(0,9);
  activity[1]=make_pair(1,2);
  activity[2]=make_pair(2,4);
// above line create a vector of size 3 in which every index there is a pair of 0,0

for(int i=0;i<activity.size();i++){
  cout<<"A"<<i<<":"<<activity[i].first<<","<<activity[i].second<<"\n";
}
sort(activity.begin(),activity.end(),compare);
cout<<"---------sorted-----------\n";
for(int i=0;i<activity.size();i++){
  cout<<"A"<<i<<":"<<activity[i].first<<","<<activity[i].second<<"\n";
}

return 0;
}