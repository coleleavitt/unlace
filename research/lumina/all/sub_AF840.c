unsigned __int64 __fastcall sub_AF840(__int64 a1, __int64 *a2)
{
  const char *v3; // rbx
  size_t v4; // rdx
  const char *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // r13
  unsigned __int64 result; // rax
  size_t v9; // rdx
  const char *v10; // r15
  __int64 v11; // rax

  v3 = s1;
  if ( *(_QWORD *)(a1 + 8) )
    v3 = *(const char **)a1;
  if ( v3 )
  {
    v4 = strlen(v3) + 1;
  }
  else
  {
    v4 = 1;
    v3 = "";
  }
  v5 = v3;
  v6 = 0;
  sub_9E3C0(a2, v5, v4);
  v7 = *(_QWORD *)(a1 + 32);
  result = sub_69D50(a2);
  if ( v7 )
  {
    do
    {
      v10 = s1;
      v11 = *(_QWORD *)(a1 + 24) + 24 * v6;
      if ( *(_QWORD *)(v11 + 8) )
        v10 = *(const char **)v11;
      if ( v10 )
      {
        v9 = strlen(v10) + 1;
      }
      else
      {
        v9 = 1;
        v10 = "";
      }
      ++v6;
      result = (unsigned __int64)sub_9E3C0(a2, v10, v9);
    }
    while ( v7 != v6 );
  }
  return result;
}
