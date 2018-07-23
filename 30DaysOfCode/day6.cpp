#include <iostream>
#include <string>
using namespace std;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    string a;
    int T;
    cin>>T;
    getline(cin,a);
    for(int t=0;t<T;t++){
        getline(cin,a);
        for(int i=0; i<a.size(); i+=2){
            cout<<a.at(i);
        }
        cout<<" ";
        for(int i=1; i<a.size(); i+=2){
            cout<<a.at(i);
        } 
        cout<<endl;
    }
    return 0;
}
