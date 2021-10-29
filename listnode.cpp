#include "listnode.h"

#include <iostream>

using namespace std;

namespace ln
{
    ListNode* createListNode(vector<int> nums)
    {
        switch (nums.size())
        {
        case 0:
            return nullptr;
        case 1:
            return new ListNode(nums[0]);
        case 2:
            return new ListNode(nums[0], new ListNode(nums[1]));
        default:
            break;
        }

        ListNode* listnode = new ListNode();
        ListNode* pointer = listnode;

        for (vector<int>::iterator iter = nums.begin(); iter < nums.end() - 1; iter++)
        {
            pointer->val = *iter;
            pointer->next = new ListNode();
            pointer = pointer->next;
        }

        pointer->val = nums[nums.size() - 1];

        return listnode;
    }

    void printListNode(ListNode* listNode)
    {
        while (listNode != nullptr)
        {
            cout << listNode->val << " ";
            listNode = listNode->next;
        }
        cout << endl;
    }
}

#ifdef DEBUG

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    ListNode* listnode = ln::createListNode(nums);
    ln::printListNode(listnode);
    return 0;
}

#endif