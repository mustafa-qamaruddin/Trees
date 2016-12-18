/*
 * TreeNode.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Qamaruddin
 */

#ifndef DS_TREENODE_H_
#define DS_TREENODE_H_


namespace MQ_AVL
{
	template <class T>
	class TreeNode
	{
	public:
		TreeNode(T _key);

		T getKey() const;

		void setLeft(const TreeNode* _left);
		TreeNode* getLeft() const;

		void setRight(const TreeNode* _right);
		TreeNode* getRight() const;

		void setHeight(int _height);
		int getHeight() const;
	private:
		T key;
		TreeNode* left;
		TreeNode* right;
		int height;
	};
}


#endif /* DS_TREENODE_H_ */
