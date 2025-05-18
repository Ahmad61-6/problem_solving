#include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> margeIntervals(vector<pair<int,int>>& inetrvals){

    if(inetrvals.empty())
    return {};

    sort(inetrvals.begin(), inetrvals.end());

    vector<pair<int,int>> marged;
    marged.push_back(inetrvals[0]);

    for(int i = 1; i<inetrvals.size();i++){
        if(inetrvals[i].first <= marged.back().second){
            marged.back().second = max(marged.back().second, inetrvals[i].second);
        }
        else{
            marged.push_back(inetrvals[i]);
        }
    }


return marged;
  
}
     
int main() {
 int n;
 cin >> n;
vector<pair<int,int>> intervals(n);

 for(int i = 0 ; i<n ; i++){
    cin >> intervals[i].first >> intervals[i].second;
 }

 vector<pair<int, int>> result = margeIntervals(intervals);

 for (auto& interval : result) {
     cout << interval.first << " " << interval.second << "\n";
 }

 return 0;

    return 0;
}

