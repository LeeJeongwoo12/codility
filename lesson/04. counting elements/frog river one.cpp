#include <map>

int solution(int X, vector<int> &A) {
    map<int, int> m; // key : leaf location, value : index
    int ans = -1;
    
    for(int i=0;i<A.size();i++){
        m.insert(pair<int,int>(A[i], i));
        
        if(m.size() == X){
            ans = i;
            break;
        }
    }
    
    return ans;
}