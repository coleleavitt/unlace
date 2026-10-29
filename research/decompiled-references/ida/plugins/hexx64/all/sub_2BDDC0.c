__int64 *__fastcall sub_2BDDC0(_DWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v10; // rax

  v5 = a2[1];
  if ( !v5 )
  {
    v8 = *a2;
    v7 = 1;
    v6 = 2;
    if ( (unsigned __int64)a2[2] >= 2 )
      goto LABEL_3;
LABEL_5:
    v10 = qvector_reserve((__int64)a2, v8, v6, 1);
    *a2 = v10;
    v8 = v10;
    goto LABEL_3;
  }
  v6 = v5 + 1;
  v7 = a2[1];
  v8 = *a2;
  --v5;
  if ( a2[2] < v6 )
    goto LABEL_5;
LABEL_3:
  a2[1] = v6;
  *(_BYTE *)(v8 + v5) = 60;
  *(_BYTE *)(*a2 + v7) = 0;
  sub_1C7B80(a3, a1, a2, a1[20], 0);
  return sub_FAAD0(a2);
}

