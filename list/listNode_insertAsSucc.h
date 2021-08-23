#pragma once

template <typename T> 
ListNodePosi<T> ListNode<T>::insertNodeAsSucc(T &const e) {
    ListNodePosi<T> x = new ListNode(e, this, succ);
    succ->pred = x;
    succ = x;
    return x;
}