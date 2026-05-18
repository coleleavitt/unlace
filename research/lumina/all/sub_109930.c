unsigned __int64 __fastcall sub_109930(
        __m128i *a1,
        int a2,
        __int64 *a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        __int64 a12,
        int a13,
        int a14)
{
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rsi
  _OWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars28; // [rsp+28h] [rbp+28h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_1081B0(a1, a2, a3, vars0, a13, a14, a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    if ( !vars28 )
      sub_C88C0((__int64)vars0);
    v17 = a1->m128i_i64[0];
    v18 = *(_QWORD *)&vars0[0] / 1000LL - 210866760000LL;
    if ( (*(_WORD *)(a1->m128i_i64[0] + 20) & 0x9000) != 0 )
    {
      sub_C9430(v17, v18, *(_QWORD *)&vars0[0] / 1000LL, *(__int64 *)&vars0[0] >> 63, v15, v16);
    }
    else
    {
      *(_QWORD *)v17 = v18;
      *(_WORD *)(v17 + 20) = 4;
    }
  }
  return __readfsqword(0x28u) ^ vars38;
}
