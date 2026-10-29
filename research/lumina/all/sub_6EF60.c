unsigned __int64 __fastcall sub_6EF60(_QWORD *a1, __int64 *a2, int a3)
{
  const char *v5; // rsi
  const char *v6; // rsi
  unsigned __int64 result; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // r12

  sub_69D50(a2);
  v5 = s1;
  if ( a1[2] )
    v5 = (const char *)a1[1];
  sub_6AA10(a2, v5);
  sub_6E8A0((__int64)(a1 + 4), a2);
  sub_6A9B0(a2, a1[19]);
  v6 = s1;
  if ( a1[21] )
    v6 = (const char *)a1[20];
  sub_6AA10(a2, v6);
  result = sub_69D50(a2);
  if ( a3 > 5 )
  {
    v8 = a1[25];
    result = sub_69D50(a2);
    if ( v8 )
    {
      v9 = 0;
      do
      {
        v10 = 3 * v9++;
        v11 = a1[24] + 8 * v10;
        sub_69D50(a2);
        sub_69D50(a2);
        sub_6A9B0(a2, *(_QWORD *)(v11 + 8));
        result = sub_6A9B0(a2, *(_QWORD *)(v11 + 16));
      }
      while ( v8 != v9 );
    }
  }
  return result;
}
