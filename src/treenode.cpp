/*
 * TreeNode.cpp
 *
 *  Created on: ??þ/??þ/????
 *      Author: Qamaruddin
 */
#include "treenode.h"

using namespace MQ_AVL;

template <class T>
TreeNode<T>::TreeNode(T _key)
:key(_key), height(0), left(nullptr), right(nullptr)
{
}

template <class T>
T TreeNode<T>::getKey() const
{
	return key;
}

template <class T>
void TreeNode<T>::setLeft(const TreeNode* _left)
{
	left = _left;
}

template <class T>
TreeNode<T>* TreeNode<T>::getLeft() const
{
	return left;
}

template <class T>
void TreeNode<T>::setRight(const TreeNode* _right)
{
	right = _right;
}

template <class T>
TreeNode<T>* TreeNode<T>::getRight() const
{
	return right;
}

template <class T>
void TreeNode<T>::setHeight(int _height)
{
	height = _height;
}

template <class T>
int TreeNode<T>::getHeight() const
{
	return height;
}
