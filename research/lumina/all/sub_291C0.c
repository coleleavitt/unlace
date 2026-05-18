__int64 __fastcall sub_291C0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = a1[19];
  if ( v3 )
  {
    v4 = v3 + 1;
    v5 = a1[19];
    v6 = a1[18];
    --v3;
    if ( a1[20] >= v4 )
      goto LABEL_3;
  }
  else
  {
    v6 = a1[18];
    v4 = 2;
    v5 = 1;
    if ( a1[20] >= 2u )
      goto LABEL_3;
  }
  v11 = sub_1987B0(a1 + 18, v6, v4, 1);
  a1[18] = v11;
  v6 = v11;
LABEL_3:
  a1[19] = v4;
  *(_BYTE *)(v6 + v5) = 0;
  *(_BYTE *)(a1[18] + v3) = 116;
  v7 = a1[22];
  v8 = a1[21];
  if ( a1[23] < (unsigned __int64)(v7 + 1) )
  {
    v12 = sub_1987B0(a1 + 21, v8, v7 + 1, 32);
    a1[21] = v12;
    v8 = v12;
    v7 = a1[22];
  }
  v9 = v8 + 32 * v7;
  *(_BYTE *)v9 = 2;
  *(_QWORD *)(v9 + 24) = 0;
  *(_OWORD *)(v9 + 8) = 0;
  ++a1[22];
  result = sub_176520(v9);
  *(_BYTE *)v9 = 9;
  *(_QWORD *)(v9 + 8) = a2;
  return result;
}
