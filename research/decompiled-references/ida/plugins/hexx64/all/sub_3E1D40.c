__int64 __fastcall sub_3E1D40(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        char a4,
        _DWORD *a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 *func; // rdx
  __int64 v12; // r13
  __int64 *v13; // rax
  __int64 *v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r11
  __m128i v17; // xmm0
  volatile signed __int32 *v18; // xmm2_8
  unsigned int v19; // ebx
  __m128i v21; // [rsp+0h] [rbp-68h] BYREF
  __m128i v22; // [rsp+10h] [rbp-58h] BYREF
  __m128i v23; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+38h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a4 )
  {
    func = (__int64 *)get_func();
    if ( !func )
      return 0;
    sub_3D1130(&v23, **(_QWORD **)(a1 + 48), func, a3, a5, a6, a7, (__m128i)a8, *(double *)a9.m128_u64);
    v12 = v23.m128i_i64[0];
    if ( !v23.m128i_i64[0] )
      return 0;
    sub_84290(v23.m128i_i64[0]);
    j__qfree(v12);
  }
  v13 = (__int64 *)sub_3D4440(*(_QWORD *)(a1 + 48), a2);
  if ( v13 == v14 )
    return 0;
  while ( a3 != *(_DWORD *)(*v13 + 56) )
  {
    if ( v14 == ++v13 )
      return 0;
  }
  sub_3DEE30(&v22, *v13, *v16, v15, a6, a7, *(double *)a8.m128_u64, a9);
  v17 = _mm_load_si128(&v22);
  v18 = (volatile signed __int32 *)_mm_movehl_ps(a8, (__m128)v17).m128_u64[0];
  v21 = v17;
  if ( !v17.m128i_i64[0] )
  {
    if ( v18 )
      sub_3D56E0(v18);
    return 0;
  }
  sub_3D27D0(v17.m128i_i64[0]);
  sub_3DE640(v17.m128i_i64[0], v17);
  v23 = _mm_load_si128(&v21);
  v19 = sub_3D5A90(a1, &v23);
  if ( v23.m128i_i64[1] )
    sub_3D56E0((volatile signed __int32 *)v23.m128i_i64[1]);
  return v19;
}

