////
////����һ������������ֵ��β��ͷ��˳�򷵻�һ��ArrayList��
//
//#include "common.h"
//#include<stack>
//
//
//
// struct ListNode {
//       int val;
//       struct ListNode *next;
//       ListNode(int x) :
//             val(x), next(NULL) {
//       }
// };
//
//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head) 
//	{
//		stack<int>    listStack;
//		ListNode*	tempPtr = head;
//		vector<int>   arrs;
//
//		while (tempPtr)
//		{
//			listStack.push(tempPtr->val);
//			tempPtr = tempPtr->next;
//		}
//		while (!listStack.empty())
//		{
//			arrs.push_back(listStack.top());
//			listStack.pop();
//		}
//
//		return arrs;
//	}
//};//
////����һ������������ֵ��β��ͷ��˳�򷵻�һ��ArrayList��
//
//#include "common.h"
//#include<stack>
//
//
//
// struct ListNode {
//       int val;
//       struct ListNode *next;
//       ListNode(int x) :
//             val(x), next(NULL) {
//       }
// };
//
//class Solution {
//public:
//	vector<int> printListFromTailToHead(ListNode* head) 
//	{
//		stack<int>    listStack;
//		ListNode*	tempPtr = head;
//		vector<int>   arrs;
//
//		while (tempPtr)
//		{
//			listStack.push(tempPtr->val);
//			tempPtr = tempPtr->next;
//		}
//		while (!listStack.empty())
//		{
//			arrs.push_back(listStack.top());
//			listStack.pop();
//		}
//
//		return arrs;
//	}
//};