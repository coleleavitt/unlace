__int64 __fastcall sub_81CE0(unsigned __int64 **a1)
{
  unsigned __int64 *v1; // rdx
  unsigned __int64 *v2; // rax
  __int64 v3; // rsi
  __int64 *v4; // rdi
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx

  v1 = a1[1];
  v2 = *a1;
  v3 = v1 != nullptr;
  v1 = (unsigned __int64 *)(24LL * (_QWORD)v1);
  v4 = (__int64 *)((char *)v1 + (_QWORD)*a1);
  if ( !v1 )
    return v3;
  while ( 1 )
  {
    v5 = v2[1];
    v6 = *v2;
    if ( v5 < *v2 )
      break;
    if ( *((_BYTE *)v2 + 16) )
    {
      v2 += 3;
      v3 = 0;
      if ( v2 == (unsigned __int64 *)v4 )
        return v3;
    }
    else
    {
      v2 += 3;
      v3 *= v5 + 1 - v6;
      if ( v2 == (unsigned __int64 *)v4 )
        return v3;
    }
  }
  if ( under_debugger )
    BUG();
  interr(30369);
  return sub_81D60(30369, v3);
}
