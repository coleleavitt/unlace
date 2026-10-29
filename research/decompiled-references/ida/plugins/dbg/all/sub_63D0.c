unsigned __int64 __fastcall sub_63D0(_QWORD *a1, int *a2, unsigned int a3, char a4)
{
  __int64 v5; // rbp
  unsigned __int64 v7; // rcx
  int *v8; // rcx
  __int64 v9; // rax
  char v10; // bp
  unsigned __int64 v11; // r13
  int v12; // esi
  unsigned int v13; // edx
  unsigned __int64 result; // rax
  __int64 v15; // rsi
  __int64 v16; // rax

  v5 = a3;
  v7 = a1[8];
  if ( v7 < a3 )
  {
    v15 = a1[7];
    if ( a1[9] < (unsigned __int64)a3 )
    {
      v16 = qvector_reserve(a1 + 7, v15, a3, 24);
      v7 = a1[8];
      a1[7] = v16;
      v15 = v16;
    }
    memset((void *)(v15 + 24 * v7), 0, 24 * (v5 - v7));
    a1[8] = v5;
  }
  else if ( a3 != v7 )
  {
    a1[8] = a3;
  }
  v8 = (int *)a1[7];
  v9 = 3 * v5;
  v10 = 0;
  v11 = (unsigned __int64)&v8[2 * v9];
  do
  {
    while ( v10 )
    {
      --v10;
      result = (unsigned __int64)memmove(v8, a2, 0x18u);
      a2 += 6;
      v8 = (int *)(result + 24);
      if ( result + 24 >= v11 )
        return result;
    }
    v12 = *a2;
    *v8 = *a2;
    v8[1] = a2[1];
    *((_QWORD *)v8 + 1) = (unsigned int)a2[2];
    v13 = a2[4];
    LOWORD(result) = *((_WORD *)a2 + 6);
    v10 = *((_BYTE *)a2 + 21);
    *((_WORD *)v8 + 11) = *((_WORD *)a2 + 10);
    if ( a4 )
    {
      if ( !v12 )
        v8[1] = _byteswap_ulong(a2[1]);
      LOWORD(v13) = _byteswap_ulong(v13);
      *((_QWORD *)v8 + 1) = _byteswap_ulong(a2[2]);
      LOWORD(result) = __ROL2__(*((_WORD *)a2 + 6), 8);
    }
    result = (unsigned __int16)result;
    *((_WORD *)v8 + 10) = v13;
    v8 += 6;
    a2 += 6;
    *(v8 - 2) = (unsigned __int16)result;
  }
  while ( (unsigned __int64)v8 < v11 );
  return result;
}

