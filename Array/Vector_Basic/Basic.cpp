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
    vector<int> vec1;
    int element;
    for(int i=0; i<5; i++){
        cout<<"Enter the element: \n";
        scanf("%d",&element);
        vec1.push_back(element);
    }
    // ------
    // max-size function is capacity of datatypes ***
  //  cout<<vec1.max_size(); 
    // ------
    //at funtion to index same work ***
  //  cout<<vec1.at(1);   
    // -------
    // push_back and pop_back using to add and remove ***
     vec1.push_back(41);  
    //  vec1.pop_back();
    // Display the vector values ***
     display(vec1);
    // ------
}
