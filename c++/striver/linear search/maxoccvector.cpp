#include<map>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    string s;
    getline(cin,s);


    map<char,long long int> m;
    vector<char> v;
    for(int i =0 ;i<s.size();i++){
        m[s[i]]++;
    }
     long long int maxi=-2e9;
     for(auto i:m)

   {

       if(i.second>maxi)

       maxi=i.second;

   }

   for(auto i:m)

   {

       if(i.second==maxi)

       v.push_back(i.first);

   }
   sort(v.begin(),v.end());

   if(v[0]==' ')

   cout<<v[1]<<" "<<maxi;

   else

   cout<<v[0]<<" "<<maxi;

    return 0;
}