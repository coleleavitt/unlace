// Alternative name is '_ZNSt10filesystem7__cxx114pathD1Ev'
void __fastcall std::filesystem::__cxx11::path::~path(void **this)
{
  void **v2; // rdi

  if ( *(this + 4) )
  {
    std::filesystem::__cxx11::path::_List::_Impl_deleter::operator()();
    if ( *this != this + 2 )
      operator delete(*this, (unsigned __int64)*(this + 2) + 1);
  }
  else
  {
    v2 = (void **)*this;
    if ( v2 != this + 2 )
      operator delete(v2, (unsigned __int64)*(this + 2) + 1);
  }
}

