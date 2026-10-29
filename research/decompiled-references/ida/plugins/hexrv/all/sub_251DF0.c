__int64 __fastcall sub_251DF0(unsigned __int64 **a1, unsigned __int64 **a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax

  if ( !a1[1] )
  {
    if ( !under_debugger )
      sub_37DDE0(50068);
LABEL_10:
    BUG();
  }
  if ( !a2[1] )
  {
    if ( !under_debugger )
      sub_37DDE0(50069);
    goto LABEL_10;
  }
  v2 = **a1;
  v3 = **a2;
  result = 1;
  if ( v2 >= v3 )
    return (unsigned int)-(v3 < v2);
  return result;
}

