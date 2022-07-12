#include <vector>
using namespace std;

int river_size(vector<vector<int>>& land, vector<vector<int>>& been, int r, int c){
  if(r < 0 || c < 0 || r >= land.size() || c >= land[0].size() || been[r][c] == 1 || land[r][c] == 0)
    return 0;
  been[r][c] = 1;
  return 1 + river_size(land, been, r - 1, c) + river_size(land, been, r + 1, c) + river_size(land, been, r, c - 1) + river_size(land, been, r, c + 1);
}

vector<int> riverSizes(vector<vector<int>> matrix) {
  if(matrix.size() == 0 || matrix[0].size() == 0)
    return {};
  
  vector<vector<int>> been;
  vector<int> sizes;

  for(int r = 0; r < matrix.size(); r++){
    vector<int> v;
    been.push_back(v);
    for(int c = 0; c < matrix[0].size(); c++)
      been[r].push_back(0);
  }
    
  for(int r = 0; r < matrix.size(); r++)
    for(int c = 0; c < matrix[0].size(); c++)
      if(matrix[r][c] == 1 && been[r][c] == 0)
        sizes.push_back(river_size(matrix, been, r, c));

  return sizes;
}
