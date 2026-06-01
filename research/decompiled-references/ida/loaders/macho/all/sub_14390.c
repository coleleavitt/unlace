__int64 __fastcall sub_14390(__int64 *a1, __int64 *a2, __int64 *a3, int a4)
{
  __int64 v4; // r15
  __int64 *v8; // r14
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // [rsp+0h] [rbp-48h]
  __int64 v14; // [rsp+8h] [rbp-40h]

  v4 = ((char *)a2 - (char *)a1) >> 6;
  v14 = (char *)a2 - (char *)a1;
  v13 = (__int64)a3 + (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 384 )
    return sub_139D0((__int64)a1, a2, a4);
  v8 = a1;
  do
  {
    v9 = (__int64)v8;
    v8 += 56;
    sub_139D0(v9, v8, a4);
  }
  while ( (char *)a2 - (char *)v8 > 384 );
  result = sub_139D0((__int64)v8, a2, a4);
  if ( v14 > 448 )
  {
    v11 = 7;
    do
    {
      sub_142E0((__int64)a1, (__int64)a2, a3, v11, a4);
      v12 = 2 * v11;
      v11 *= 4;
      result = (__int64)sub_142E0((__int64)a3, v13, a1, v12, a4);
    }
    while ( v4 > v11 );
  }
  return result;
}

