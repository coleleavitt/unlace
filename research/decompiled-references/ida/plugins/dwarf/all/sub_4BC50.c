unsigned __int64 __fastcall sub_4BC50(
        __m128i *a1,
        __m128i *a2,
        _QWORD *a3,
        __int64 (__fastcall *a4)(__m128 *, __m128i *))
{
  __int64 v5; // rsi
  __m128i *v9; // r15
  __m128i *v10; // rdi
  unsigned __int64 result; // rax
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // [rsp+0h] [rbp-48h]

  v5 = (char *)a2 - (char *)a1;
  v14 = (__int64)a3 + v5;
  if ( v5 <= 288 )
    return sub_461E0(a1, a2, a4);
  v9 = a1;
  do
  {
    v10 = v9;
    v9 += 21;
    sub_461E0(v10, v9, a4);
  }
  while ( (char *)a2 - (char *)v9 > 288 );
  result = sub_461E0(v9, a2, a4);
  if ( v5 > 336 )
  {
    v12 = 7;
    do
    {
      sub_4BB80((__int64)a1, (__int64)a2, a3, v12, (__int64 (__fastcall *)(__m128i *, __m128i *))a4);
      v13 = 2 * v12;
      v12 *= 4;
      result = sub_4BB80((__int64)a3, v14, a1, v13, (__int64 (__fastcall *)(__m128i *, __m128i *))a4);
    }
    while ( (__int64)(0xAAAAAAAAAAAAAAABLL * (v5 >> 4)) > v12 );
  }
  return result;
}

