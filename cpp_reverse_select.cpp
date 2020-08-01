#include<bits/stdc++.h>
using namespace std;
long long int length(string a){
    int str_length=0;
    for(auto i: a){
        str_length+=1;
    }
    return str_length;
}
vector<string> split(string str, string delim=" ")
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos)
            pos = str.length();
        string token = str.substr(prev, pos - prev);
        if (!token.empty())
            tokens.push_back(token);
        prev = pos + delim.length();
    } while (pos < str.length() && prev < str.length());
    return tokens;
}
string reverse(string a){
    int n=length(a);
    string b;
    for(int i=n-1;i>=0;i--){
        b+=(a.at(i));
    }
    return b;
}
int main(){
    string a;
    getline(cin,a);
    string result_string;
    vector<string> split_string,reversed_string,norm_string;
    split_string = split(a);
    int no_of_words=split_string.size();
    if(no_of_words%2==1){
        for(int i=0;i<split_string.size();i++){
            if(i%2==0){
                reversed_string.push_back(reverse(split_string.at(i))+" ");
            }
            else{
                norm_string.push_back((split_string.at(i))+" ");
            }
        }
        
    }
    else{
        for (int i = 0; i < split_string.size(); i++){
            if (i % 2 == 1){
                reversed_string.push_back(reverse(split_string.at(i)) + " ");
            }
            else{
                norm_string.push_back((split_string.at(i)) + " ");
            }
        }
    }
    for(auto const& s : reversed_string){
        result_string+=s;
    }
    for (auto const &s : norm_string){
        result_string += s;
    }
    cout<<result_string;
    return 0;
}