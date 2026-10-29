// Alternative name is '_ZN7ida_mcp3mcp15ResourceContentD2Ev'
void __fastcall ida_mcp::mcp::ResourceContent::~ResourceContent(ida_mcp::mcp::ResourceContent *this)
{
  void *v2; // rdi
  char *v3; // rdi
  ida_mcp::mcp::ResourceContent *v4; // rdi
  ida_mcp::mcp::ResourceContent *v5; // rdi

  if ( !*((_BYTE *)this + 144) || (v3 = *((char **)this + 14), v3 == (char *)this + 128) )
  {
    if ( !*((_BYTE *)this + 104) )
      goto LABEL_3;
  }
  else
  {
    operator delete(v3, *((_QWORD *)this + 16) + 1LL);
    if ( !*((_BYTE *)this + 104) )
      goto LABEL_3;
  }
  v4 = *((ida_mcp::mcp::ResourceContent **)this + 9);
  if ( v4 == (ida_mcp::mcp::ResourceContent *)((char *)this + 88) )
  {
LABEL_3:
    if ( !*((_BYTE *)this + 64) )
      goto LABEL_4;
    goto LABEL_10;
  }
  operator delete(v4, *((_QWORD *)this + 11) + 1LL);
  if ( !*((_BYTE *)this + 64) )
    goto LABEL_4;
LABEL_10:
  v5 = *((ida_mcp::mcp::ResourceContent **)this + 4);
  if ( v5 == (ida_mcp::mcp::ResourceContent *)((char *)this + 48) )
  {
LABEL_4:
    v2 = *(void **)this;
    if ( *(ida_mcp::mcp::ResourceContent **)this == (ida_mcp::mcp::ResourceContent *)((char *)this + 16) )
      return;
    goto LABEL_5;
  }
  operator delete(v5, *((_QWORD *)this + 6) + 1LL);
  v2 = *(void **)this;
  if ( *(ida_mcp::mcp::ResourceContent **)this != (ida_mcp::mcp::ResourceContent *)((char *)this + 16) )
LABEL_5:
    operator delete(v2, *((_QWORD *)this + 2) + 1LL);
}

