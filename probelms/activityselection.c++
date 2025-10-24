#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void print (vector<int> v) {
    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void actselc(vector<int> start, vector<int> end) {
    //solve using greedy approachs
    //step 1: sort the activities based on their end time
    vector<pair<int, int>> activities;
    for(int i=0; i<start.size(); i++) {
        activities.push_back(make_pair(end[i], start[i]));
    }
    sort(activities.begin(), activities.end());
    //print the activities
    cout<<"Activities sorted by end time: ";
    for(auto activity : activities) {
        cout<<"("<<activity.second<<", "<<activity.first<<") ";
    }
    cout<<endl;
    //step 2: select the first activity
    vector<pair<int, int>> selectedActivities;
    selectedActivities.push_back({activities[0].first, activities[0].second});
    int lastEndTime = activities[0].first;

    for(int i=1; i<activities.size(); i++) {
        if(activities[i].second >= lastEndTime) {
            selectedActivities.push_back({activities[i].first, activities[i].second});
            lastEndTime = activities[i].first;
        }
    }

    cout<<"Selected activities: ";
    for(pair<int,int> activity : selectedActivities) {
        cout<<"("<<activity.second<<", "<<activity.first<<") ";
    }


}

int main(){
    vector<int> start={1, 3, 0, 5, 8 ,5};
    cout<<"Start times: ";
    print(start);
    
    vector<int> end={2, 4, 6, 7, 9, 9};
    cout<<"End times: ";
    print(end);
    actselc(start, end);
}