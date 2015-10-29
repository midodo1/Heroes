#include "ElementAlloc.h"

using namespace std ; 



template <typename ID , class E> ElementAlloc<ID,E>::ElementAlloc(ID id) {this->id = id;}

template <typename ID , class E> Element*  ElementAlloc<ID,E>::newInstance()
{

}


