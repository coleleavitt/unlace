__int64 __fastcall sub_98F0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rsi
  __int64 v6; // rdx
  void *v7; // rbp
  int v8; // edx
  __int64 result; // rax

  v5 = *(_QWORD **)a2;
  v6 = v5[2];
  if ( a1[27] == v6 )
    return 1;
  v7 = a1 + 655;
  if ( v5 == a1 + 655 )
  {
    a1[657] = v6;
    v6 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
    a1[656] = v6;
  }
  else
  {
    qmemcpy(v7, v5, 0x168u);
    a4 = 0;
  }
  v8 = sub_89C0((__int64)a1, (__int64)v7, v6, a4);
  result = 0;
  if ( v8 )
  {
    *(_QWORD *)a2 = v7;
    return 1;
  }
  return result;
}

