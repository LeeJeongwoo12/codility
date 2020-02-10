vector<int> solution(vector<int> &A, int K) {
	int *temp = new int[A.size()];

	 // 벡터에 이렇게 넣기는 힘들다고 생각해서 배열로 만들어서 벡터에 다시 값을 삽입
	for (int i = 0; i < A.size(); i++) {
		temp[(i + K) % A.size()] = A.at(i);
	}

	vector <int> ans;
	for (int i = 0; i < A.size(); i++) {
		ans.push_back(temp[i]);
	}

	return ans;
}