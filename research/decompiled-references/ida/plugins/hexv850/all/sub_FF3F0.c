unsigned __int64 __fastcall sub_FF3F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 (__fastcall **v14)(); // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+8h] [rbp-60h]
  __int64 v16; // [rsp+10h] [rbp-58h]
  __int64 v17; // [rsp+18h] [rbp-50h]
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  __m128i v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 (__fastcall ***v21)(); // [rsp+40h] [rbp-28h]
  __m128i v22; // [rsp+48h] [rbp-20h]
  unsigned __int64 v23; // [rsp+58h] [rbp-10h]

  v23 = __readfsqword(0x28u);
  v16 = a3;
  v6 = *(_QWORD *)(a1 + 320);
  v14 = &off_4B0DF8;
  v7 = *(_QWORD *)(v6 + 128);
  v8 = *(_QWORD *)(v6 + 1440);
  v17 = a4;
  v15 = a1;
  v18 = a5;
  v20 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_4B0EB8), (__m128i)(unsigned __int64)&off_4B0C40);
  v21 = &v14;
  v22 = _mm_unpacklo_epi64((__m128i)v8, (__m128i)(v8 + v7));
  if ( !(unsigned int)sub_603E0(a2, (__int64)&v20, 0) )
    ((void (__fastcall *)(_QWORD *, unsigned __int64 *, __int64, __int64, __int64, __int64, __int64 (__fastcall **)(), __int64, __int64, _DWORD, __int64, __int64, __int64))sub_311B90)(
      a2 + 2,
      &v20.m128i_u64[1],
      v9,
      v10,
      v11,
      v12,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20.m128i_i64[0]);
  return v23 - __readfsqword(0x28u);
}

