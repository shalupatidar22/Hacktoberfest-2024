#include<iostream>
#include<string>
#include<vector>
using namespace std;

bool isanagram(string s1,string s2){
    vector<int> fre(26,0);
    if(s1.length()!=s2.length()){
        return false;
    }

    for(int i=0;i<s1.length();i++){
        fre[s1[i]-'a']++;
        fre[s2[i]-'a']--;
    }

    for(int i=0;i<26;i++){
        if(fre[i]!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string st ,str;
    cin>>st>>str;


    if(isanagram(st,str)){
        cout<<"strings are anagram";
    }
    else{
       cout<<"strings are not anagram";
    }
}
