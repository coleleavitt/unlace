unsigned __int64 __fastcall sub_6A7B0(__int64 a1, __int64 *a2)
{
  __int64 v2; // r13
  unsigned __int64 result; // rax
  __int64 i; // rbx
  size_t v5; // rdx
  const char *v6; // r15
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 24);
  result = sub_69D50(a2);
  if ( v2 )
  {
    for ( i = 0; i != v2; ++i )
    {
      v6 = s1;
      v7 = *(_QWORD *)(a1 + 16) + 24 * i;
      if ( *(_QWORD *)(v7 + 8) )
        v6 = *(const char **)v7;
      if ( v6 )
      {
        v5 = strlen(v6) + 1;
      }
      else
      {
        v5 = 1;
        v6 = "";
      }
      result = (unsigned __int64)sub_67AC0(a2, v6, v5);
    }
  }
  return result;
}
