/*
 * AVLTree.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: Qamaruddin
 */

#ifndef DS_AVLTREE_H_
#define DS_AVLTREE_H_

#include "treenode.h"
#include <iostream>

using namespace std;

namespace MQ_AVL
{
	template <class T>
	class AVLTree
	{
	public:
		AVLTree();
		TreeNode<T>* insert(T _key);
		void remove(T _key);
		void display(const ostream& out) const;
	protected:
		TreeNode<T>* rotateLeft(TreeNode<T>* p);
		TreeNode<T>* rotateRight(TreeNode<T>* p);
		int calcBalanceFactor(const TreeNode<T>* p) const;
		void fixHeight(TreeNode<T>* p);
	private:
		TreeNode<T>* root;
	};
}

#endif /* DS_AVLTREE_H_ */
