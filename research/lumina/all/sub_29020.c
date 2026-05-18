__int64 __fastcall sub_29020(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rbp
  size_t v10; // rbx
  const void *v11; // r12
  __int64 result; // rax
  __int64 v13; // rax
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax

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
    v5 = 1;
    v4 = 2;
    if ( a1[20] >= 2u )
      goto LABEL_3;
  }
  v13 = sub_1987B0(a1 + 18, v6, v4, 1);
  a1[18] = v13;
  v6 = v13;
LABEL_3:
  a1[19] = v4;
  *(_BYTE *)(v6 + v3) = 66;
  *(_BYTE *)(a1[18] + v5) = 0;
  v7 = a1[22];
  v8 = a1[21];
  if ( a1[23] < (unsigned __int64)(v7 + 1) )
  {
    v15 = sub_1987B0(a1 + 21, v8, v7 + 1, 32);
    v7 = a1[22];
    a1[21] = v15;
    v8 = v15;
  }
  v9 = v8 + 32 * v7;
  *(_OWORD *)(v9 + 8) = 0;
  *(_BYTE *)v9 = 2;
  *(_QWORD *)(v9 + 24) = 0;
  ++a1[22];
  v10 = *(_QWORD *)(a2 + 8);
  v11 = *(const void **)a2;
  result = sub_176520(v9);
  *(_BYTE *)v9 = 7;
  *(_QWORD *)(v9 + 8) = 0;
  *(_OWORD *)(v9 + 16) = 0;
  if ( v10 )
  {
    v14 = nullptr;
    if ( v10 != -1 )
    {
      v16 = sub_1987B0(v9 + 8, 0, v10 + 1, 1);
      *(_QWORD *)(v9 + 8) = v16;
      v14 = (void *)v16;
    }
    *(_QWORD *)(v9 + 16) = v10 + 1;
    memmove(v14, v11, v10);
    result = *(_QWORD *)(v9 + 8);
    *(_BYTE *)(result + v10) = 0;
  }
  return result;
}
