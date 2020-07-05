#ifndef __B_TREE_NODE__H__
#define __B_TREE_NODE__H__

#define B_TREE_ORDER 6

typedef struct _b_tree_node BTreeNode;

BTreeNode* b_tree_node_create (int nivel);
void b_tree_node_add_item (BTreeNode *node, int C, int Pr);
void b_tree_node_push_back_P (BTreeNode *node, int P);
void b_tree_node_set_P (BTreeNode *node, int P, int position);

#endif  //!__B_TREE_NODE__H__