#pragma once

using Rank = int;
template <typename T> struct ListNode;
template <typename T> using ListNodePosi = ListNode<T>*;
template <typename T> struct ListNode {
    T data;
    ListNodePosi<T> pred;
    ListNodePosi<T> succ;

    ListNode() {}
    ListNode(T e, ListNodePosi<T> p = NULL, ListNodePosi<T> s = NULL)
        : data(e), pred(p), succ(s) {}

    ListNodePosi<T> insertAsPred (T &const e);
    ListNodePosi<T> insertAsSucc (T &const e);
};

#include "listNode_implementation.h"