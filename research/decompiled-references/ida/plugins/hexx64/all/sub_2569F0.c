__int64 __fastcall sub_2569F0(unsigned __int64 **a1, unsigned __int64 **a2, double a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 result; // rax

  if ( !a1[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC394u, a3);
LABEL_10:
    BUG();
  }
  if ( !a2[1] )
  {
    if ( !under_debugger )
      sub_383060(0xC395u, a3);
    goto LABEL_10;
  }
  v3 = **a1;
  v4 = **a2;
  result = 1;
  if ( v3 >= v4 )
    return (unsigned int)-(v4 < v3);
  return result;
}

