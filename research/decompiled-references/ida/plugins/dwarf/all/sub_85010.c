void __fastcall sub_85010(__int64 *a1, const char *a2)
{
  unsigned __int64 v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r14
  __int64 v7; // rsi
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax

  if ( a2 )
  {
    v3 = a1[1];
    if ( v3 > 1 )
    {
      v8 = v3 - 1;
      v9 = v3 + 1;
      v10 = *a1;
      v11 = v3 + 2;
      if ( a1[2] < v11 )
      {
        v13 = qvector_reserve(a1, v10, v11, 1);
        *a1 = v13;
        v10 = v13;
      }
      a1[1] = v11;
      *(_BYTE *)(v10 + v9) = 0;
      *(_WORD *)(*a1 + v8) = 14906;
      v3 = a1[1];
    }
    v4 = strlen(a2);
    v5 = v4;
    v6 = v4;
    if ( v3 )
    {
      --v3;
      v6 = v4 + v3;
    }
    v7 = *a1;
    if ( a1[2] < v6 + 1 )
    {
      v12 = qvector_reserve(a1, v7, v6 + 1, 1);
      *a1 = v12;
      v7 = v12;
    }
    a1[1] = v6 + 1;
    *(_BYTE *)(v7 + v6) = 0;
    memmove((void *)(v3 + *a1), a2, v5);
  }
}

