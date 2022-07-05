//by sebbo

using namespace std;

class BinaryTree {
public:
  int value;
  BinaryTree *left;
  BinaryTree *right;

  BinaryTree(int value) {
    this->value = value;
    left = nullptr;
    right = nullptr;
  }
};

int getSum(BinaryTree * node, int lvl){
    if(node == nullptr)
      return 0;
  
    if(node->left != nullptr && node->right != nullptr){
      return lvl + getSum(node->left, lvl + 1) + getSum(node->right, lvl + 1);
    }

    if(node->left != nullptr){
      return lvl + getSum(node->left, lvl + 1);
    }
      
    if(node->right != nullptr){
      return lvl +getSum(node->right, lvl + 1);
    }
      
    return lvl;
}

int nodeDepths(BinaryTree *root) {
  int sum = -1;
  if(root != nullptr){
    sum = getSum(root, 0);  
  }
  return sum;
}
