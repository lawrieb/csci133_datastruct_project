// ============================================================================
// File: CBinaryNode.tpp
// ============================================================================
// Implementation file for the class CBinaryNode
// ============================================================================



// ==== CBinaryNode<ItemType>::CBinaryNode =====================================
//
// This is the default constructor for CBinaryNode<ItemType>.  It initializes
// the left and right child pointer to nullptr and leave m_item as garbage.
//
// Input:
//       void
//       
// Output:
//       Nothing
//
// =============================================================================

template <class ItemType>
CBinaryNode<ItemType>::CBinaryNode(): m_leftChildPtr(nullptr), m_rightChildPtr(nullptr)
{
	
}// end Default Constructor



// ==== CBinaryNode<ItemType>::CBinaryNode =====================================
//
// This is the type constructor for CBinaryNode<ItemType>.  It initializes
// m_item and sets the left and right child pointer to nullptr.
//
// Input:
//       item [IN]      - A const ItemType reference to initialize the new node.
//       
// Output:
//       Nothing
//
// =============================================================================

template <class ItemType>
CBinaryNode<ItemType>::CBinaryNode(const ItemType &item): m_item(item)
{
	
}// End Type Constructor



// ==== CBinaryNode<ItemType>::CBinaryNode =====================================
//
// This is the type constructor for CBinaryNode<ItemType>.  It initializes all
// the private data members with the supplied arguments.
//
// Input:
//       item           [IN]    - A const ItemType reference to initialize the
//                                  new node.
//       leftChildPtr   [IN]    - A CBinaryNode<ItemType> pointer that points to
//                                  the left child.
//       rightChildPtr  [IN]    - A CBinaryNode<ItemType> pointer that points to
//                                  the right child.
//       
// Output:
//       Nothing
//
// =============================================================================

template <class ItemType>
CBinaryNode<ItemType>::CBinaryNode(const ItemType &item,
              CBinaryNode<ItemType> *leftChildPtr,
              CBinaryNode<ItemType> *rightChildPtr): 
              				m_item(item), m_leftChildPtr(nullptr), m_rightChildPtr(nullptr)
{
	
}// End Type Constructor



// ==== CBinaryNode<ItemType>::SetItem =========================================
//
// This function assigns a value to m_item.
//
// Input:
//       item [IN]      - A const ItemType reference.
//       
// Output:
//       void
//
// =============================================================================

template <class ItemType>
void CBinaryNode<ItemType>::SetItem(const ItemType &item)
{
	m_item = item;
}// End SetItem()



// ==== CBinaryNode<ItemType>::GetItem =========================================
//
// This function returns the value of m_item.
//
// Input:
//       void
//
// Output:
//       An ItemType.
//
// =============================================================================

template <class ItemType>
ItemType  GetItem() const
{
	return m_item;
}// End GetItem()



// ==== CBinaryNode<ItemType>::IsLeaf ==========================================
//
// This function checks if the node is a leaf.
//
// Input:
//       void
//
// Output:
//       Returns true if the node is a leaf, false otherwise.
//
// =============================================================================

template <class ItemType>
bool	 CBinaryNode<ItemType>::IsLeaf(const ItemType &item) const
{
	return (m_leftChildPtr == m_rightChildPtr == nullptr);
}// End IsLeaf()



// ==== CBinaryNode<ItemType>::GetLeftChildPtr =================================
//
// This function returns the pointer to the left node.
//
// Input:
//       void
//
// Output:
//       Returns a CBinaryNode<ItemType> pointer.
//
// =============================================================================

template <class ItemType>
CBinaryNode<ItemType>*  CBinaryNode<ItemType>::GetLeftChildPtr()
{
	return m_leftChildPtr;
}// End GetLeftChildPtr()



// ==== CBinaryNode<ItemType>::GetRightChildPtr ================================
//
// This function returns the pointer to the right node.
//
// Input:
//       void
//
// Output:
//       Returns a CBinaryNode<ItemType> pointer.
//
// =============================================================================

template <class ItemType>
CBinaryNode<ItemType>*  CBinaryNode<ItemType>::GetRightChildPtr()
{
	return m_rightChildPtr;
}// End GetRightChildPtr()



// ==== CBinaryNode<ItemType>::SetLeftChildPtr =================================
//
// This function assigns the poitner to the left node.
//
// Input:
//       leftChildPtr   [IN]    - A CBinaryNode<ItemType> pointer to the left
//                                  node.
//       
// Output:
//       void
//
// =============================================================================

template <class ItemType>
void   SetLeftChildPtr(CBinaryNode<ItemType> *leftChildPtr)
{
	m_leftChildPtr = leftChildPtr;
}// End SetLeftChildPtr()


// ==== CBinaryNode<ItemType>::SetRightChildPtr ================================
//
// This function assigns the poitner to the right node.
//
// Input:
//       rightChildPtr   [IN]    - A CBinaryNode<ItemType> pointer to the left
//                                  node.
//       
// Output:
//       void
//
// =============================================================================

template <class ItemType>
void   SetRightChildPtr(CBinaryNode<ItemType> *rightChildPtr)
{
	m_rightChildPtr = rightChildPtr;
}// End SetRightChildPtr()

