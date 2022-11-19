#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int>arr;
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(7);
    arr.push_back(9);
    arr.emplace_back(4);
    cout<<arr.size()<<endl;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i]<<endl;
    // }

    vector<int>::iterator it=arr.begin(); //it points to the address of begining of arr

    cout<<"arr.begin(): "<<*arr.begin()<<endl;
    // cout<<"arr.end(): "<<*arr.end()-1<<endl; //returns and iterator pointing to one past the last element
    cout<<"arr.rbegin(): "<<*arr.rbegin()<<endl;
    // cout<<"arr.rend(): "<<*arr.rend()<<endl;
    cout<<"arr.back(): "<<arr.back()<<endl;

    for (vector<int>::iterator it = arr.begin(); it!= arr.end(); it++)
    {
        /* code */
        cout<<*it<<" ";
    }
    
    cout<<endl<<"Other Way"<<endl;
    for (auto it = arr.begin(); it!=arr.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl<<"After Erase"<<endl;
    arr.erase(arr.begin()+1, arr.begin()+3);
    for (auto item:arr){
        cout<<item<<" ";
    }
    cout<<endl<<"Insert: "<<endl;
    vector<int>arr2(5,100); //{100,100,100,100,100}

    arr2.insert(arr2.begin()+1,2,300);
    for(auto item:arr2){
        cout<<item<<" ";
    }

}