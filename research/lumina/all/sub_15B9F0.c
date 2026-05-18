unsigned __int64 __fastcall sub_15B9F0(const __m128i *a1, int a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  _BYTE *v6; // r12
  unsigned __int8 v9[24]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v5 = 1;
  v10 = __readfsqword(0x28u);
  v6 = *(_BYTE **)(*(_QWORD *)(a1->m128i_i64[0] + 32) + 32LL * a2);
  do
  {
    sub_E89C0(24, (__int64)v9, "sqlite_stat%d", v5);
    if ( sub_CA640(a1->m128i_i64[0], v9, v6) )
      sub_15B750(a1, "DELETE FROM %Q.%s WHERE %s=%Q", v6, v9, a3, a4);
    ++v5;
  }
  while ( v5 != 5 );
  return __readfsqword(0x28u) ^ v10;
}
