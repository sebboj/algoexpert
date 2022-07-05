//by sebbo

using namespace std;

bool isValidSubsequence(vector<int> array, vector<int> sequence) {
  int p = 0;
  for(int i = 0; i < array.size(); i++){
    if(p >= sequence.size())
      return true;
    if(array[i] == sequence[p])
      p++;
  }
  return p == sequence.size();
}
