__int64 __fastcall sub_3DA440(
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
  __int64 func; // rdx
  __int64 *v12; // rax
  __int64 *v13; // rdx
  unsigned __int64 *v14; // r11
  __m128i v15; // xmm0
  volatile signed __int32 *v16; // xmm2_8
  unsigned int v17; // ebx
  __m128i v19; // [rsp+0h] [rbp-68h] BYREF
  __m128i v20; // [rsp+10h] [rbp-58h] BYREF
  __m128i v21; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( a4 )
  {
    func = get_func();
    if ( !func )
      return 0;
    sub_3C9830(&v21, **(_QWORD **)(a1 + 48), func, a3, a5);
    if ( !v21.m128i_i64[0] )
      return 0;
    sub_7DBD0(v21.m128i_i64[0]);
    j__qfree();
  }
  v12 = (__int64 *)sub_3CCB40(*(_QWORD *)(a1 + 48), a2);
  if ( v12 == v13 )
    return 0;
  while ( a3 != *(_DWORD *)(*v12 + 56) )
  {
    if ( v13 == ++v12 )
      return 0;
  }
  sub_3D7530(&v20, *v12, *v14, a6, a7, *(double *)a8.m128_u64, a9);
  v15 = _mm_load_si128(&v20);
  v16 = (volatile signed __int32 *)_mm_movehl_ps(a8, (__m128)v15).m128_u64[0];
  v19 = v15;
  if ( !v15.m128i_i64[0] )
  {
    if ( v16 )
      sub_3CDDE0(v16);
    return 0;
  }
  sub_3CAED0(v15.m128i_i64[0]);
  sub_3D6D40(v15.m128i_i64[0], v15);
  v21 = _mm_load_si128(&v19);
  v17 = sub_3CE190(a1, &v21);
  if ( v21.m128i_i64[1] )
    sub_3CDDE0((volatile signed __int32 *)v21.m128i_i64[1]);
  return v17;
}

