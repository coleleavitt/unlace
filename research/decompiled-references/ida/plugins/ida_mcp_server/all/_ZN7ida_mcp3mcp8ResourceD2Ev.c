// Alternative name is '_ZN7ida_mcp3mcp8ResourceD1Ev'
void __fastcall ida_mcp::mcp::Resource::~Resource(ida_mcp::mcp::Resource *this)
{
  char *v2; // rdi
  void *v3; // rdi
  char *v4; // rdi
  char *v5; // rdi

  if ( *((_BYTE *)this + 232) )
  {
    *((_BYTE *)this + 232) = 0;
    if ( *((_BYTE *)this + 224) )
    {
      *((_BYTE *)this + 224) = 0;
      std::string::_M_dispose();
    }
    if ( *((_BYTE *)this + 168) )
    {
      v3 = *((void **)this + 18);
      if ( v3 )
        operator delete(v3, *((_QWORD *)this + 20) - (_QWORD)v3);
    }
  }
  if ( *((_BYTE *)this + 136) )
  {
    v5 = *((char **)this + 13);
    if ( v5 != (char *)this + 120 )
      operator delete(v5, *((_QWORD *)this + 15) + 1LL);
  }
  if ( *((_BYTE *)this + 96) )
  {
    v4 = *((char **)this + 8);
    if ( v4 != (char *)this + 80 )
      operator delete(v4, *((_QWORD *)this + 10) + 1LL);
  }
  v2 = *((char **)this + 4);
  if ( v2 != (char *)this + 48 )
    operator delete(v2, *((_QWORD *)this + 6) + 1LL);
  if ( *(ida_mcp::mcp::Resource **)this != (ida_mcp::mcp::Resource *)((char *)this + 16) )
    operator delete(*(void **)this, *((_QWORD *)this + 2) + 1LL);
}

