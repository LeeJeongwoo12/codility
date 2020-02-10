vector<int> solution(int N, vector<int> &A) {
	vector<int> ans(N);

	int max = 0;
	int tempMax = 0;
	
	for (int i = 0; i < A.size(); i++) {
		if (A[i] == N + 1) { // 마지막에 최댓값보다 작은 수를 바꾸기 위한 변수
			max = tempMax;
		}
		else {
		    if(ans[A[i] - 1] < max) // 최댓값보다 작은 경우, 최댓값 + 1
		        ans[A[i]-1] = max + 1;
		    else // 최댓값보다 크거나 같은 경우, 1 증가
			    ans[A[i] - 1]++;

		if (ans[A[i] - 1] > tempMax) // 현재까지의 최댓값을 구함
			tempMax = ans[A[i] - 1];
		}
	}
	
	for(int i=0;i<N;i++){
	    if(ans[i] < max)
	        ans[i] = max;
	}

	return ans;
}