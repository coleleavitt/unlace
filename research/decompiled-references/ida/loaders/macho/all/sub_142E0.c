__int64 *__fastcall sub_142E0(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // rsi

  v5 = 2 * a4;
  v6 = (a2 - a1) >> 6;
  v9 = a1;
  if ( 2 * a4 <= v6 )
  {
    v10 = a4 << 7;
    v11 = -64 * a4;
    do
    {
      v12 = v9;
      v9 += v10;
      a3 = sub_13EF0(v12, v9 + v11, v9 + v11, v9, a3, a5);
      v6 = (a2 - v9) >> 6;
    }
    while ( v6 >= v5 );
  }
  v13 = a4;
  if ( a4 > v6 )
    v13 = v6;
  return sub_13EF0(v9, v9 + (v13 << 6), v9 + (v13 << 6), a2, a3, a5);
}

