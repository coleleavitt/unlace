unsigned __int64 __fastcall sub_49A70(__int64 a1, __int64 a2, __int64 a3, __int64 (__fastcall *a4)(__int64, __int64))
{
  __int64 v5; // rsi
  __int64 v9; // r15
  __int64 v10; // rdi
  unsigned __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-48h]

  v5 = a2 - a1;
  v14 = a3 + v5;
  if ( v5 <= 864 )
    return sub_409F0(a1, a2, a4);
  v9 = a1;
  do
  {
    v10 = v9;
    v9 += 1008;
    sub_409F0(v10, v9, a4);
  }
  while ( a2 - v9 > 864 );
  result = sub_409F0(v9, a2, a4);
  if ( v5 > 1008 )
  {
    v12 = 7;
    do
    {
      sub_499A0(a1, a2, a3, v12, a4);
      v13 = 2 * v12;
      v12 *= 4;
      result = sub_499A0(a3, v14, a1, v13, a4);
    }
    while ( (__int64)(0x8E38E38E38E38E39LL * (v5 >> 4)) > v12 );
  }
  return result;
}
