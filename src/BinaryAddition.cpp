#include <iostream>
#include <string>
#include <bitset>

std::string add_binary(uint64_t a, uint64_t b) {
  uint64_t sum = a+b;
  std::string s = (std::bitset<8> (sum)).to_string();
  uint64_t i = 0;
  while(s[i] == '0'){ i++; }
  std::string ans = "";
  while(i < s.length()){
  	ans += s[i];
  	i++;
  }
  if(ans == ""){ ans = "0"; }
  return ans;
}

int main(){
	std::cout << add_binary(0,0) << std::endl;
	return 0;
}
