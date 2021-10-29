#ifndef LISTNODE_H
#define LISTNODE_H

#include <vector>

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(): val(0), next(nullptr) {}
    ListNode(int x): val(x), next(nullptr) {}
    ListNode(int x, ListNode *next): val(x), next(next) {}
};

namespace ln
{
    ListNode* createListNode(std::vector<int> num);
    void printListNode(ListNode* listNode);
}

#endif