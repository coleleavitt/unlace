__int64 __fastcall sub_5C3E0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  char v7; // r14
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = a2[1] + *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 32) < v2 )
    *(_QWORD *)(a1 + 16) = qvector_reserve(a1 + 16, *(_QWORD *)(a1 + 16), v2, 8);
  if ( *(_QWORD *)(a1 + 56) < v2 )
    *(_QWORD *)(a1 + 40) = qvector_reserve(a1 + 40, *(_QWORD *)(a1 + 40), v2, 1);
  v4 = *a2;
  if ( 24 * a2[1] )
  {
    while ( *(_WORD *)(v4 + 16) == 286 )
    {
      v8 = *(_QWORD *)(a1 + 24);
      v9 = *(_QWORD *)(v4 + 8);
      v10 = *(_QWORD *)(a1 + 16);
      if ( *(_QWORD *)(a1 + 32) < (unsigned __int64)(v8 + 1) )
      {
        v11 = qvector_reserve(a1 + 16, v10, v8 + 1, 8);
        *(_QWORD *)(a1 + 16) = v11;
        v10 = v11;
        v8 = *(_QWORD *)(a1 + 24);
      }
      *(_QWORD *)(v10 + 8 * v8) = v9;
      v5 = *(_QWORD *)(a1 + 48);
      ++*(_QWORD *)(a1 + 24);
      v6 = *(_QWORD *)(a1 + 40);
      v7 = *(_BYTE *)(v4 + 18) & 1;
      if ( *(_QWORD *)(a1 + 56) < (unsigned __int64)(v5 + 1) )
      {
        v12 = qvector_reserve(a1 + 40, v6, v5 + 1, 1);
        *(_QWORD *)(a1 + 40) = v12;
        v6 = v12;
        v5 = *(_QWORD *)(a1 + 48);
      }
      *(_BYTE *)(v6 + v5) = v7;
      v4 += 24;
      ++*(_QWORD *)(a1 + 48);
      if ( v4 == *a2 + 24 * a2[1] )
        goto LABEL_13;
    }
    return 0;
  }
  else
  {
LABEL_13:
    *(_QWORD *)(a1 + 144) = 0;
    *(_BYTE *)(a1 + 152) = 1;
    return 1;
  }
}
