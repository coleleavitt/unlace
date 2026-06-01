signed __int64 __fastcall sub_4910(__int64 a1, void *a2, signed __int64 a3)
{
  signed __int64 v5; // rbx
  _QWORD *v6; // rbp
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // rax

  v5 = 0;
  v6 = *(_QWORD **)a1;
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v8 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  if ( v7 >= v8 || v7 >= a3 + v7 )
    return v5;
  v5 = v8 - v7;
  if ( v8 >= a3 + v7 )
    v5 = a3;
  if ( v5 <= 0 )
    return v5;
  memcpy(a2, (const void *)(*v6 + v7), v5);
  v6[3] += v5;
  return v5;
}
