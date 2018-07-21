#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
    Difference(vector<int> el){
        elements = el;
    }
    void computeDifference(){
        int maxDiff = 0;
        for(int i=0; i<elements.size(); i++){
            for(int j=0; j<elements.size(); j++){
                if(i!=j){
                    if(abs(elements[i]-elements[j])>maxDiff){
                        maxDiff = abs(elements[i]-elements[j]);
                    }
                }
            }
        }
        maximumDifference = maxDiff;
    }
};
int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}