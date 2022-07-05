//by sebbo

#include <vector>
using namespace std;


vector<string> phoneNumberMnemonics(string phoneNumber) {
  string key[] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
  vector<string> mnes;
  string curr;
  string code;
  int len;
  
  for(int i = 0; i < phoneNumber.length(); i++){
    code = key[phoneNumber[i] - '0'];
    
    if(mnes.size() == 0){
      mnes.assign(code.length(), "");
      for(int x = 0; x < code.length(); x++){
        mnes[x] = code[x];
      } 
    }
               
    else{
      len = mnes.size();
      
      for(int y = 0; y < len; y++){
        curr = mnes[0];
        
        for(int x = 0; x < code.length(); x++) {
          mnes.push_back(curr + code[x]);
        }  

        mnes.erase(mnes.begin());   
      }
    }
  }
    
  return mnes;
}
