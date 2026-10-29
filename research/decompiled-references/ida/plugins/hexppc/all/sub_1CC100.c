unsigned __int64 *__fastcall sub_1CC100(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 *v2; // r8
  __int64 v3; // rax
  unsigned __int64 *v4; // rdi
  unsigned __int64 *v5; // r9
  __int64 i; // rax
  __int64 v7; // rcx
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v9; // rax
  bool v10; // zf

  v2 = *(unsigned __int64 **)(a1 + 1192);
  v3 = 2LL * *(_QWORD *)(a1 + 1200);
  v4 = v2;
  v5 = &v2[v3];
  for ( i = (v3 * 8) >> 4; i > 0; i = i - 1 - v7 )
  {
    while ( 1 )
    {
      v7 = i >> 1;
      v8 = &v4[2 * (i >> 1)];
      if ( *v8 < a2 )
        break;
      i >>= 1;
      if ( v7 <= 0 )
        goto LABEL_5;
    }
    v4 = v8 + 2;
  }
LABEL_5:
  if ( v5 == v4 || a2 < *v4 )
  {
    v9 = v4 - 2;
    v10 = v2 == v4;
    v4 = nullptr;
    if ( !v10 )
      return v9;
  }
  return v4;
}

