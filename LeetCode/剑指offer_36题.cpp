

struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(nullptr), right(nullptr) {
	}
};


class Solution
{
public:
	TreeNode* Convert(TreeNode* root)
	{
		if (!root)
			return nullptr;
		if (!root->left && !root->right)
		{
			leftLast = root;
			return root;
		}

		TreeNode*   left = Convert(root->left);
		if (left)
		{
			leftLast->right = root;
			root->left = leftLast;
		}
		//更新最后的右节点
		leftLast = root;
		TreeNode*  right = Convert(root->right);
		if (right)
		{
			root->right = right;
			right->left = root;
		}
		return left != nullptr ? left : root;
	}

private:
	TreeNode*   leftLast = nullptr;
};


//方法一：非递归版
//解题思路：
//1.核心是中序遍历的非递归算法。
//2.修改当前遍历节点与前一遍历节点的指针指向。
//import java.util.Stack;
//public TreeNode ConvertBSTToBiList(TreeNode root) {
//	if (root == null)
//		return null;
//	Stack<TreeNode> stack = new Stack<TreeNode>();
//	TreeNode p = root;
//	TreeNode pre = null;// 用于保存中序遍历序列的上一节点
//	boolean isFirst = true;
//	while (p != null || !stack.isEmpty()) {
//		while (p != null) {
//			stack.push(p);
//			p = p.left;
//		}
//		p = stack.pop();
//		if (isFirst) {
//			root = p;// 将中序遍历序列中的第一个节点记为root
//			pre = root;
//			isFirst = false;
//		}
//		else {
//			pre.right = p;
//			p.left = pre;
//			pre = p;
//		}
//		p = p.right;
//	}
//	return root;
//}