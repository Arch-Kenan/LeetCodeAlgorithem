

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
		//���������ҽڵ�
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


//����һ���ǵݹ��
//����˼·��
//1.��������������ķǵݹ��㷨��
//2.�޸ĵ�ǰ�����ڵ���ǰһ�����ڵ��ָ��ָ��
//import java.util.Stack;
//public TreeNode ConvertBSTToBiList(TreeNode root) {
//	if (root == null)
//		return null;
//	Stack<TreeNode> stack = new Stack<TreeNode>();
//	TreeNode p = root;
//	TreeNode pre = null;// ���ڱ�������������е���һ�ڵ�
//	boolean isFirst = true;
//	while (p != null || !stack.isEmpty()) {
//		while (p != null) {
//			stack.push(p);
//			p = p.left;
//		}
//		p = stack.pop();
//		if (isFirst) {
//			root = p;// ��������������еĵ�һ���ڵ��Ϊroot
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