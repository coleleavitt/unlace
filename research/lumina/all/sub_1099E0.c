unsigned __int64 __fastcall sub_1099E0(
        __m128i *a1,
        __int64 a2,
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
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD vars0[2]; // [rsp+0h] [rbp+0h] BYREF
  char vars28; // [rsp+28h] [rbp+28h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  if ( !(unsigned int)sub_1081B0(a1, a2, a3, vars0, a13, a14, a4, a5, a6, a7, a8, a9, a10, a11) )
  {
    if ( !vars28 )
      sub_C88C0((__int64)vars0);
    sub_C95A0(a1->m128i_i64[0], a2, v14, v15, v16, v17, (double)SLODWORD(vars0[0]) / 86400000.0);
  }
  return __readfsqword(0x28u) ^ vars38;
}
