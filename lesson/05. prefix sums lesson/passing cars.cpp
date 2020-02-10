int solution(vector<int> &A) {
    vector<int> sum(A.size());
    
    int count = 0;
    
    for(int i=A.size()-1;i>=0;i--){ // i+1 ~ A의 크기까지 1이 나온 횟수
        sum[i] = count;
        
        if(A[i] == 1) // 자기 자신은 포함하지 않음
            count++;
    }
    
    count = 0;
    for(int i=0;i<A.size();i++){
        if(A[i] == 0){ // 0인 경우에만 1인 차와 마주침
            count += sum[i];
        }
       
        if(count > 1000000000)
            return -1;
    }
    return count;
}