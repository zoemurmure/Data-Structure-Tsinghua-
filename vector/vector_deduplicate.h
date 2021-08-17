#pragma once
// 无序向量去重 
template <typename T>
int Vector<T>::deduplicate() {
    int oldSize = _size;
// 错误版：因为如果进行了remove操作，不需要对r进行递增
/*    for (Rank r = 1; r < _size; ++r) {
        if (find(_elem[r], 0, r) != -1) {
            remove(r);
        }
    }
*/
    Rank r = 1;
    while (r < _size) {
        if (find(_elem[r], 0, r) < 0)
            ++r;
        else
            remove(r);
    }
    return oldSize - _size;
}