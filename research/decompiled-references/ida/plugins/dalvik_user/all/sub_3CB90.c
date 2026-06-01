__int64 __fastcall sub_3CB90(__int64 a1, void *a2, int a3)
{
  unsigned int v3; // r12d
  unsigned __int64 v6; // rax
  const void *v7; // rsi
  unsigned __int64 v8; // rax
  size_t v9; // rbp

  v3 = 0;
  if ( a3 >= 0 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(const void **)(a1 + 8);
    if ( (unsigned __int64)v7 < v6 )
    {
      v8 = v6 - (_QWORD)v7;
      v9 = a3;
      if ( v8 < a3 )
      {
        a3 = v8;
        v9 = v8;
      }
      v3 = a3;
      memcpy(a2, v7, v9);
      *(_QWORD *)(a1 + 8) += v9;
    }
  }
  return v3;
}

