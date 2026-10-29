__int64 __fastcall sub_3B3340(
        _QWORD *a1,
        unsigned __int64 a2,
        __m128i si128,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (__fastcall *v15)(__int64, __int64 *); // rax
  __m128 v17; // [rsp+0h] [rbp-48h] BYREF
  int v18; // [rsp+10h] [rbp-38h]
  unsigned __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  int v20; // [rsp+30h] [rbp-18h]
  unsigned __int64 v21; // [rsp+38h] [rbp-10h]

  v21 = __readfsqword(0x28u);
  v18 = 0;
  v17.m128_u64[1] = 0xFFFFFFFFLL;
  if ( a2 < a1[28] )
  {
    v9 = a1[27] + 48 * a2;
    v10 = *(_QWORD *)(v9 + 24);
    v11 = **(_QWORD **)v9;
    v20 = *(_DWORD *)(v9 + 32);
    v19 = __PAIR128__(v10, v11);
    si128 = _mm_load_si128((const __m128i *)&v19);
    v18 = v20;
    v17 = (__m128)si128;
  }
  sub_3B2980((unsigned __int64)a1, 1u, *(double *)si128.m128i_i64, a4, a5, a6, a7, a8, a9);
  v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a1 + 72LL);
  if ( v15 == sub_3A3DA0 )
    return sub_3A3DA0((__int64)a1, (__int64 *)&v17);
  else
    return ((__int64 (__fastcall *)(_QWORD *, __m128 *, __int64 (__fastcall *)(__int64, __int64 *), __int64, __int64, __int64, unsigned __int64, unsigned __int64, int))v15)(
             a1,
             &v17,
             sub_3A3DA0,
             v12,
             v13,
             v14,
             v17.m128_u64[0],
             v17.m128_u64[1],
             v18);
}

