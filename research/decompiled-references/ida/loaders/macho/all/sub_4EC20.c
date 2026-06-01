__int64 __fastcall sub_4EC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  int v8; // eax
  __int64 v9; // rsi

  memset(a5, 0, 0xB908u);
  *a5 = a3;
  a5[1] = a3;
  a5[3] = a1;
  a5[4] = a1;
  a5[2] = a4 + a3;
  a5[5] = a1 + a2;
  v8 = sub_4ED20(a5);
  if ( v8 == -2 )
    return a2;
  v9 = 0;
  if ( !v8 )
    return a5[3] - a1;
  return v9;
}

