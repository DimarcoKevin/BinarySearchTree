#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int number;
} NodeData;

typedef struct treenode {
NodeData data; // struct inside a struct
struct treenode* left;
struct treenode* right;
} TreeNode;

typedef struct {
TreeNode* root;
} BinaryTree;

TreeNode* newTreeNode(NodeData node) {
TreeNode* p = (TreeNode*) malloc(sizeof(TreeNode));
p->data = node; // Copies the node data
p->left = p->right = NULL;
return p;
}

void insertInteger(BinaryTree* bt, int number){
	NodeData node;
	
	// if root is null then the tree is empty
	if (bt->root == NULL) {
		return bt->root = newTreeNode(node);
	}
	
	TreeNode* curr = bt->root;
	while (cmp ) 
}



TreeNode* findOrInsert(BinaryTree* bt, char str[]) {
NodeData node;
strcpy(node.word, str); // Put 'str' in a node data structure
if (bt->root == NULL) // Is tree empty?
return bt->root = newTreeNode(node); // Returns value assigned
TreeNode* curr = bt->root; // Temporary pointer, current position
int cmp;
while ((cmp = strcmp(node.word, curr->data.word)) != 0) {
if (cmp < 0) { // Should we go left?
	if (curr->left == NULL)
		return curr->left = newTreeNode(node);
	curr = curr-> left;
} else { // Must be right
	if (curr->right == NULL)
	return curr->right = newTreeNode(node);
	curr = curr->right;
}
}
printf("Item was found\n"); // If we reach here, item was found in the tree!
return curr;
}




int main(int argc, char** argv) {
	char word[MAX_WORD_SIZE];
	BinaryTree bt;
	bt.root = NULL;
	printf("Please enter words. Enter X to finish.\n");
	while (true) {
		int cnt = scanf("%s", word);
		if (cnt != 1 || strcmp(word, "X") == 0)
			break;
		// Add word (string) to the BST
		findOrInsert(&bt, word);
	}
	inOrder(bt.root); // Print out the tree
	return 0;
}
