#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &nums){
    for(int i=0; i<nums.size(); i++){
        cout<<nums[i]<<" ";
    }
    cout<<"\n";
}
int main(){
    vector<int> vec1={10,20,30,40,50};
    // int element;
    // for(int i=0; i<5; i++){
    //     cout<<"Enter the element: \n";
    //     scanf("%d",&element);
    //     vec1.push_back(element);
    // }

    // ------
    // max-size function is capacity of datatypes ***
  //  cout<<vec1.max_size(); 
    // ------

    //at funtion to index same work ***
  //  cout<<vec1.at(1);   
    // -------

    // push_back and pop_back using to add and remove ***
     //vec1.push_back(41);  
    //  vec1.pop_back();
    //------

    // emplce and emplace_back using ***
    // auto it=vec1.emplace(vec1.begin()+1,100);
    // vec1.emplace(it+2,200);
    // vec1.emplace(vec1.end()-1,300);
   /* emplace back:- Inserts a new element at the end of the vector, right after its
    current last element.This new element is constructed in place using 
   args as the arguments for its constructor.;*/
    vec1.emplace_back(100);
    vec1.emplace_back(200);
     //------

    // Display the vector values ***
     display(vec1);
    // ------
}
