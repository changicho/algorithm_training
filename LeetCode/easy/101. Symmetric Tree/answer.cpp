#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
 public:
  bool isSymmetric(TreeNode *root) {
    queue<TreeNode *> leftQueue;
    queue<TreeNode *> rightQueue;

    if (root->left) {
      leftQueue.push(root->left);
    }
    if (root->right) {
      rightQueue.push(root->right);
    }
    while (!leftQueue.empty() && !rightQueue.empty()) {
      TreeNode *left = leftQueue.front();
      TreeNode *right = rightQueue.front();
      leftQueue.pop();
      rightQueue.pop();

      if (!left && !right) continue;
      if (!left || !right) return false;
      if (left->val != right->val) return false;

      leftQueue.push(left->left);
      leftQueue.push(left->right);

      rightQueue.push(right->right);
      rightQueue.push(right->left);
    }

    if (!leftQueue.empty() || !rightQueue.empty()) return false;

    return true;
  }
};

// recursive

class Solution {
 public:
  bool isSymmetric(TreeNode *root) {
    return isMirror(root, root);
  }

  bool isMirror(TreeNode *t1, TreeNode *t2) {
    if (!t1 && !t2) return true;
    if (!t1 || !t2) return false;

    if (t1->val != t2->val) return false;
    if (!isMirror(t1->right, t2->left)) return false;
    if (!isMirror(t1->left, t2->right)) return false;

    return true;
  }
};