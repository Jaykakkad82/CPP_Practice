//
// Created by jayka on 30-05-2024.
//

// Given a vector - Find

#include <Vector>
#include <iostream>
#include <algorithm>
# include <map>
# include <set>

using namespace std;


// Function 1 : Find the largest number in the vector
int FindLargest(const vector<int> & arr){
    int amax {arr.at(0)};
    for(const auto i : arr){
        amax = max(amax,i);
    }
    return amax;

}

// function 2 : print largest k elements in the vector
void largestK(vector<int>& arr, int k){
    make_heap(arr.begin(),arr.end());
    cout<< "Below is the out of largest "<< k<< endl;
    int out {0};
    for (int i=0; i<k;i++){
        pop_heap(arr.begin(),arr.end());
        cout << arr.back()<< "    " ;
        arr.pop_back();
    }
    cout<<endl;

}

// function 3 : Valid paranthesis - solved in Leetcode 20
bool isValid(string s) {
    map<char,char>mymap;
    mymap[')']= '(';
    mymap[']']= '[';
    mymap['}'] = '{';
    set<char> allkeys = {'(', '[', '{'};
    set<char> allval = {')', ']', '}'};

    vector<char> astack;

    for(char c: s){
        // cout << c <<endl;

        if (allkeys.count(c)){
            astack.push_back(c);
        }
        else if (allval.count(c)){
            if ((astack.size()!=0) && (astack.back() == mymap[c])) {

                astack.pop_back();
            }
            else{
                return false;}
        }
    }

    //
    // cout<<"Hi "<< astack.size()<<endl;
    // for(auto i : astack){
    //     cout<<i<<endl;
    // }
    if (astack.size() == 0){
        return true;
    }
    else{

    }
        return false;
}



int main(){
    vector<int> avec {8,85,65,98,105};
    int amax = FindLargest(avec);
    cout << amax << endl;

// pass by reference leads to change in array
    largestK(avec,3);
    vector<int> avec2 {8,85,65,98,105};

    largestK(avec2,5);

    return 0;
}
