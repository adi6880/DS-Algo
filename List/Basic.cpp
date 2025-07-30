#include<iostream>
#include<list>
using namespace std;
void display(list<int> & list1){
    list<int>:: iterator it;
    for(it=list1.begin(); it!=list1.end(); it++){
        cout<<*it<<" ";
    }
    cout<<"\n";

}
int main(){
    list<int> list1; // list of 0 length
    list<int> list3={1,2,3,4}; // List direct store data
    // cout<<list2.empty();
    for(int i=0; i<5; i++){
        list1.push_back(i+1);
    }
    list<int> :: iterator iter;
    // iter=list1.begin();
    // cout<< *iter<<" ";
    // iter++;
    // cout<< (*iter)<<" ";
    // iter++;
    // cout<< *iter;
     display(list1);
    //  list1.pop_front();
    //  display(list1);
     list<int> list2(3); // Empty list of size 5
     iter=list2.begin();
     *iter=45;
     iter++;
     *iter=60;
     iter++;
     *iter=55;
     list2.merge(list1);
     list2.sort();
     display(list2);
    cout<<"\n";
}