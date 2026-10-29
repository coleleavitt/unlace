__int64 __fastcall sub_EB20(_QWORD *a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rax

  v7 = a1[4];
  if ( !v7 )
  {
    v10 = a1[3];
    v9 = 1;
    v8 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_3;
LABEL_5:
    v12 = qvector_reserve(a1 + 3, v10, v8, 1, a5, a6);
    a1[3] = v12;
    v10 = v12;
    goto LABEL_3;
  }
  v8 = v7 + 1;
  v9 = a1[4];
  v10 = a1[3];
  --v7;
  if ( a1[5] < v8 )
    goto LABEL_5;
LABEL_3:
  a1[4] = v8;
  *(_BYTE *)(v10 + v7) = a2;
  result = a1[3];
  *(_BYTE *)(result + v9) = 0;
  return result;
}
