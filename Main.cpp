//
// Created by jayka on 06-05-2024.
//
# include <iostream>
# include <vector>
# include <algorithm>

using namespace  std;

int x = 0;

// practice with small programs

//int way2sort(vector<int> x)
//{ return x[1]}

//Function to find all the multiples of the smallest even number
vector<int> Sortoutput(vector<int> anArray){
    int i = 0;
// 1. sort
    sort(anArray.begin(),anArray.end());
    vector<int> out;
    // 2. Find index of smallest even number
    while (i< anArray.size()){
        if (anArray[i]%2!=0){
            break;
        }
        i++; }
    //3. From that number to end - Find all multiples
    for(int j=i; j<anArray.size();j++){
        if (anArray[j]%anArray[i]==0)
        {out.push_back(anArray[j]);};

    }
    return out;
    }


   // Sorting function for 2d matrix:
   bool sortMyway(vector <int> a, vector <int> b){
    return a[1] < b[1] ;
}


int main(){

// Understanding size of variables, new operator
cout<< " test - print statement"<< endl;
int *mydouble{nullptr} ;
mydouble = new int(3); // how new is used
int *myint = new int(2);
cout << "size of int "<< sizeof(int)<<endl;
cout << "size of float "<< sizeof(float)<<endl;
cout << "Size of pointer (double) : " << sizeof(mydouble)<<endl; // a pointer stores addresses so its a double
cout << "whats in the pointer" << mydouble<<endl; // The variable stores pointer
cout << "Lets dereference the pointer: "<< *mydouble<<endl; // use deferencing operator to find values

//
 double high (100);
 double low (20);
 double *ptr {&high};
 cout << "ptr- first time "<< *ptr<<endl;
 ptr = &low;
 cout << "ptr - second time " <<*ptr<<endl;

 *ptr = high;
 cout << "value of low: "<< low << endl;

// array
const int days {365};
double arr [days]{0,1};
cout << "array value intial: "<< arr[3] << endl;

double arr1[days]{0,1};
cout << "array1 value intial: "<< arr1[3] << endl;

//for(int i = 0; i<days; i++){
//    cout<< arr1[i]<<endl;
//}

arr[5] = 100;
cout<< "Accessing 5th element using array name: "<< *(arr+5)<<endl;

// Understanding vectors
vector <int> myarr{8,2,5} ;
    sort(myarr.begin(),myarr.end());
//for(int i: myarr){
//    cout<< i<<endl;



//vector <int> myarr1;
//cout << myarr1 << endl



 int a =0;

 // USING FUNCTION  to FIND ALL Multiples of samllest odd number
vector<int> examp{-2,8,5,7,9,16,3,9,15};
    myarr=Sortoutput(examp);
    // print and check
    for(int i: myarr){
        cout<< i<<endl;
    };


    // Type conversion in C++
    int a1 = 10;
    int b1 =9;
    cout << a1/((float)b1) << endl;  // promotion to float for a1
    // ++ operator
    b1= a1++;
    cout<<"b1 "<<b1<<"and a1: "<< a1<<endl;

    // ways to cast a variable
    int c1 = a1/((float)b1);  // demotion
    // static cast is safer than c-style cast
    float c2 = (static_cast<float> (a1))/ b1;
    cout<<"c1: "<<c1<<endl;  // float value is again converted to int
    cout<<"c2: "<< c2 <<endl;


    // Sort 2D vector based on second element
vector <vector<int>> arrToSort{{51,87},{-9,58},{123,0},{-78,7}};

sort(arrToSort.begin(),arrToSort.end(), sortMyway);
    for (auto i: arrToSort){
        cout << '[';
        for (int j: i){
            cout << j << ", ";
        }
        cout << ']';
    }

return 0;


}
