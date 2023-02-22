#include<bits/stdc++.h>
using namespace std;
int main()
{
    // In arrays we have to fix the size 
    //To fit more elements we generally take a large number 
    //which makes some of memeory waste
    //Dynamic arrays are vectors where size of vector can be changed
    
    //Defining vector
    vector<int> v // v is a vector which stores data of integer type
    
    v.push_back(2);
    v.push_back(6);
    v.push_back(289);
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i];
    }
    
    for(auto x :v)
    {
        cout<<x<<endl;
    }
    
    cout<<v.back()<<endl;
    v.pop_back();
    cout<<v.back()<<endl;
    
    vector<int> ve[10];  
    //Creates a vector ve with the size of 10 and initalizes them to 0
    vector<int> vec[10,5]; 
       //Creates a vector vec with the size of 10 and initalizes them to 5


// string is another dynamic array where we have the concat operator       
string a = "hatti";
string b = a+a;
cout << b << "\n"; // hattihatti
b[5] = ’v’;
cout << b << "\n"; // hattivatti
string c = b.substr(3,4);
cout << c << "\n"; // tiva  
    
}