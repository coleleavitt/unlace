void __fastcall sub_12BE0(__int64 *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax

  v7 = a1[1];
  if ( v7 < a2 )
  {
    v8 = *a1;
    if ( a1[2] < a2 )
    {
      v9 = qvector_reserve(a1, v8, a2, 32, a5, a6);
      v7 = a1[1];
      *a1 = v9;
      v8 = v9;
    }
    memset((void *)(v8 + 32 * v7), 0, 32 * (a2 - v7));
    a1[1] = a2;
  }
  else if ( v7 != a2 )
  {
    a1[1] = a2;
  }
}

