/*
 * AVLTree.cpp
 *
 *  Created on: ??þ/??þ/????
 *      Author: Qamaruddin
 */

#include "avltree.h"
#include "treenode.h"

#include <ostream>
#include <iomanip>
#include <queue>


using namespace MQ_AVL;
using namespace std;

template <class T>
AVLTree<T>::AVLTree()
:root(nullptr)
{

}

template <class T>
TreeNode<T>* AVLTree<T>::insert(T _key)
{
	if(!root)
		root = new TreeNode<T>(_key);

	return root;
}

template <class T>
void AVLTree<T>::remove(T _key)
{

}

template <class T>
void AVLTree<T>::display(const ostream& out) const
{
	int height = 0;
	TreeNode<T>* p;
	queue<TreeNode<T>*> q;
	q.push(root);
	while(!q.empty())
	{
		p = q.front();
		q.pop();

		out << p->getKey();
		if(p->getHeight() > height){
			++height;
		}

		q.push(p->getLeft());
		q.push(p->getRight());
	}
}

template <class T>
int AVLTree<T>::calcBalanceFactor(const TreeNode<T>* p) const
{
	return (p->getRight()->geHeight() - p->getLeft()->getHeight());
}

template <class T>
TreeNode<T>* rotateLeft(TreeNode<T>* p)
{
	TreeNode<T>* x = p->getRight();
	TreeNode<T>* s = x->getLeft();

	p->setRight(s);
	x->setLeft(p);

	fixHeight(p);
	fixHeight(x);

	return x;
}

template <class T>
TreeNode<T>* rotateRight(TreeNode<T>* p)
{
	TreeNode<T>* x = p->getLeft();
	TreeNode<T>* s = x->getRight();

	p->setLeft(s);
	x->setRight(p);

	fixHeight(p);
	fixHeight(x);

	return x;
}

template <class T>
void AVLTree<T>::fixHeight(TreeNode<T>* p)
{
	int lh = p->getLeft()->getHeight();
	int rh = p->getRight()->getHeight();

	p->setHeight(max(lh, rh)+1);
}
