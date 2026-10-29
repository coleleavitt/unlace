unsigned __int64 __fastcall sub_FD830(__int64 a1, __int64 a2, _QWORD *a3, int a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+8h] [rbp-50h]
  __int64 v14; // [rsp+10h] [rbp-48h]
  int v15; // [rsp+18h] [rbp-40h]
  __m128i v16; // [rsp+20h] [rbp-38h] BYREF
  __int64 (__fastcall ***v17)(); // [rsp+30h] [rbp-28h]
  __m128i v18; // [rsp+38h] [rbp-20h]
  unsigned __int64 v19; // [rsp+48h] [rbp-10h]

  v19 = __readfsqword(0x28u);
  v12 = &off_4A9BC0;
  v5 = *(_QWORD *)(a2 + 1440);
  v6 = *(_QWORD *)(a2 + 128);
  v13 = a1;
  v14 = a2;
  v16 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4A9D18), (__m128i)(unsigned __int64)&off_4A9AA0);
  v15 = a4;
  v17 = &v12;
  v18 = _mm_unpacklo_epi64((__m128i)v5, (__m128i)(v5 + v6));
  if ( !(unsigned int)sub_5E8E0(a3, (__int64)&v16, 0) )
    ((void (__fastcall *)(_QWORD *, unsigned __int64 *, __int64, __int64, __int64, __int64, __int64 (__fastcall **)(), __int64, __int64, int, __int64))sub_3100D0)(
      a3 + 2,
      &v16.m128i_u64[1],
      v7,
      v8,
      v9,
      v10,
      v12,
      v13,
      v14,
      v15,
      v16.m128i_i64[0]);
  return v19 - __readfsqword(0x28u);
}

