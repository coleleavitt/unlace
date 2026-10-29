// Alternative name is '_ZN7ida_mcp3mcp14PromptArgumentD1Ev'
void __fastcall ida_mcp::mcp::PromptArgument::~PromptArgument(void **this)
{
  void **v2; // rdi
  void **v3; // [rsp+0h] [rbp-10h]

  if ( !*((_BYTE *)this + 64) || (v2 = (void **)*(this + 4), v2 == this + 6) )
  {
    if ( *this != this + 2 )
      operator delete(*this, (unsigned __int64)*(this + 2) + 1);
  }
  else
  {
    v3 = this;
    operator delete(v2, (unsigned __int64)*(this + 6) + 1);
    if ( *v3 != v3 + 2 )
      operator delete(*v3, (unsigned __int64)v3[2] + 1);
  }
}

