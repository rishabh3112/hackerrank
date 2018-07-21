#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n,temp,maxCount=-1,currCount = 0;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    vector<int> number;
    while(n>0){
        temp = n%2;
        number.push_back(temp);
        n/=2;
    }
    
    for(int i=0; i<number.size(); i++){
        if(number[i]==0){
            if(currCount>maxCount){
                maxCount = currCount;
            }
            currCount = 0;
        }
        else
        {
            currCount++;
            if(i==number.size()-1){
               if(currCount>maxCount){
                    maxCount = currCount;
                } 
            }
        }
    }
    
    cout<<maxCount;
    return 0;
}