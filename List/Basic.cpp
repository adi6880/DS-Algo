#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> list1; // list of 0 length
    list<int> list2(5); // Empty list of size 5
    list<int> list3={1,2,3,4}; // List direct store data
    // cout<<list2.empty();
    for(int i=0; i<5; i++){
        list1.push_back(i+1);
    }
    list<int> :: iterator iter;
    iter=list1.begin();
    cout<< *iter<<" ";
    iter++;
    cout<< (*iter)<<" ";
    iter++;
    cout<< *iter;
    cout<<"\n";
}