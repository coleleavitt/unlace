__int64 __fastcall sub_3B85C0(
        _QWORD *a1,
        unsigned __int64 a2,
        __m128i si128,
        double a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        double a10)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64, __int64 *); // rax
  __m128i v18; // [rsp+0h] [rbp-48h] BYREF
  int v19; // [rsp+10h] [rbp-38h]
  unsigned __int128 v20; // [rsp+20h] [rbp-28h] BYREF
  int v21; // [rsp+30h] [rbp-18h]
  unsigned __int64 v22; // [rsp+38h] [rbp-10h]

  v22 = __readfsqword(0x28u);
  v19 = 0;
  v18.m128i_i64[1] = 0xFFFFFFFFLL;
  if ( a2 < a1[28] )
  {
    v10 = a1[27] + 48 * a2;
    v11 = *(_QWORD *)(v10 + 24);
    v12 = **(_QWORD **)v10;
    v21 = *(_DWORD *)(v10 + 32);
    v20 = __PAIR128__(v11, v12);
    si128 = _mm_load_si128((const __m128i *)&v20);
    v19 = v21;
    v18 = si128;
  }
  sub_3B7C00((__int64)a1, 1u, si128, a4, a5, a6, a7, a8, a9, a10);
  v16 = *(__int64 (__fastcall **)(__int64, __int64 *))(*a1 + 72LL);
  if ( v16 == sub_3A9020 )
    return sub_3A9020((__int64)a1, v18.m128i_i64);
  else
    return ((__int64 (__fastcall *)(_QWORD *, __m128i *, __int64 (__fastcall *)(__int64, __int64 *), __int64, __int64, __int64, __int64, __int64, int))v16)(
             a1,
             &v18,
             sub_3A9020,
             v13,
             v14,
             v15,
             v18.m128i_i64[0],
             v18.m128i_i64[1],
             v19);
}

