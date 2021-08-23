#pragma once

template <typename T>
ListNodePosi<T> ListNode<T>::insertNodeAsPred(T &const e) {
    ListNodePosi<T> x = new ListNode(e, pred, this);
    pred->succ = x;
    pred = x;
    return x;
}