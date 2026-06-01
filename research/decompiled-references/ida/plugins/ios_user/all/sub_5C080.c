__int64 __fastcall sub_5C080(__m128i *a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  __int64 v4; // r12
  _DWORD *i; // rbp
  __int64 v6; // rbx
  __int32 v7; // eax
  int v8; // edx

  if ( !a3 )
    return 1;
  v3 = a3;
  v4 = 0;
  for ( i = (_DWORD *)(a2 + 4); ; i += 4 )
  {
    v8 = i[1];
    if ( *i )
      break;
    v6 = 7 - ((v8 == 0) - 1) + 32LL;
    v7 = a1->m128i_i32[v6 + 3];
    if ( !v7 )
    {
LABEL_9:
      sub_5BD70(a1);
      if ( a1->m128i_i32[v6 + 3] == 2 )
        return 0;
      goto LABEL_6;
    }
LABEL_5:
    if ( v7 == 2 )
      return 0;
LABEL_6:
    if ( ++v4 == v3 )
      return 1;
  }
  if ( *i == 1 )
  {
    v6 = 5 - ((v8 == 0) - 1) + 32LL;
    v7 = a1->m128i_i32[v6 + 3];
    if ( !v7 )
      goto LABEL_9;
    goto LABEL_5;
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_5C150(1840, a2);
}

