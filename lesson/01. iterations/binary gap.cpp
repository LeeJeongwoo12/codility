int soultion(int N){
	string temp_str, str;
	
		while (temp > 1) {
			temp_str += to_string(temp % 2);
			temp /= 2;
		}
		temp_str += to_string(temp);

		for (int i = temp_str.length() - 1; i >= 0; i--) {
			str += temp_str[i];
		}

		int len = 0;
		int max = 0;
		int index = 0;

		while (index < str.length()) {
			if ((index = str.find("1", index)) != std::string::npos) { // 시작할 1의 위치를 찾음
				if ((temp = str.find("1", index + 1)) != std::string::npos) { // 끝날 1의 위치를 찾음
					len = temp - index - 1; // 시작과 끝의 index 차이만큼 길이

					if (len > max)
						max = len;

					index = temp;
				}
				else // 1로 끝나는 경우가 없다면 종료(100000과 같은 경우)
					break;
			}
			else // 아예 1이 없다면 종료(0의 경우)
				break;
		}
        return max;
}