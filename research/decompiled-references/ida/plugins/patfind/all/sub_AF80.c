__int64 __fastcall sub_AF80(_QWORD *a1, void *a2, int a3)
{
  int v3; // r12d
  size_t v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rax

  v3 = 0;
  if ( a3 >= 0 )
  {
    v6 = a3;
    v7 = a1[4];
    if ( !__CFADD__(a3, v7) )
    {
      v8 = a1[2];
      v3 = a3;
      if ( v8 < a3 + v7 )
      {
        v3 = v8 - v7;
        v6 = (int)v8 - (int)v7;
      }
      if ( v3 > 0 )
      {
        memcpy(a2, (const void *)(a1[1] + v7), v6);
        v7 = a1[4];
      }
      a1[4] = v7 + v6;
    }
  }
  return (unsigned int)v3;
}

