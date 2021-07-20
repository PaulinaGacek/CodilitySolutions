// June 2021 training
// Height of the binary tree
// Scored for 100%
// Time complexity O(N), N - nr of nodes

int solution(tree * T) {
    if(T==nullptr)
        return -1;
    int left_tree_height = solution(T->l);
    int right_tree_height = solution(T->r);
    if(left_tree_height > right_tree_height)
        return left_tree_height + 1;
    else
        return right_tree_height + 1;
}
