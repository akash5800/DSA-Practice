#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int>a={1,2,3,};
  vector<int>b={3,1,2};
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());  
  int absDiff=0;
  for(int i=0;i<a.size();i++){
    absDiff+=abs(a[i]-b[i]);
  }
  cout<<"minimum absolute difference="<<absDiff<<endl;
  return 0;

}