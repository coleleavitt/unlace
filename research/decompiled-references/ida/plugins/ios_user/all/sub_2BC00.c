__int64 __fastcall sub_2BC00(const __m128i *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r15
  __int64 result; // rax
  int v8; // r14d
  const __m128i *i; // rdx
  const __m128i *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-E8h] BYREF
  __m128i v15; // [rsp+10h] [rbp-D8h]
  __m128i v16; // [rsp+20h] [rbp-C8h]
  __m128i v17; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v18; // [rsp+40h] [rbp-A8h] BYREF
  __m128i v19; // [rsp+50h] [rbp-98h] BYREF
  __m128i v20; // [rsp+60h] [rbp-88h]
  __m128i v21; // [rsp+70h] [rbp-78h]
  __m128i v22; // [rsp+80h] [rbp-68h]
  __m128i v23; // [rsp+90h] [rbp-58h]
  unsigned __int64 v24; // [rsp+A8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  if ( (unsigned __int64)a1 >= a2 || a2 - (unsigned __int64)a1 <= 0x47 )
  {
    v18 = 0;
    v6 = a2;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    if ( !a4 )
      goto LABEL_4;
    v13 = 0;
    goto LABEL_25;
  }
  v12 = a1[4].m128i_u64[0];
  v6 = (__int64)&a1[4].m128i_i64[1];
  v14 = _mm_loadu_si128(a1);
  v18 = v12;
  v15 = _mm_loadu_si128(a1 + 1);
  v13 = v15.m128i_u64[1];
  v16 = _mm_loadu_si128(a1 + 2);
  v17 = _mm_loadu_si128(a1 + 3);
  if ( a4 )
  {
LABEL_25:
    v13 = _byteswap_uint64(v13);
    v15.m128i_i64[1] = v13;
    v14.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v14.m128i_u32[0], v14.m128i_u32[1]));
    v16.m128i_i64[0] = _byteswap_uint64(v16.m128i_u64[0]);
    v16.m128i_i64[1] = _byteswap_uint64(v16.m128i_u64[1]);
    v17.m128i_i64[0] = _byteswap_uint64(v17.m128i_u64[0]);
    v17.m128i_i64[1] = _byteswap_uint64(__PAIR64__(v17.m128i_u32[2], v17.m128i_u32[3]));
    v18 = _byteswap_uint64(__PAIR64__(v18, HIDWORD(v18)));
  }
  if ( HIWORD(v13) && (v13 & 0x4000000000000000LL) == 0 )
    v15.m128i_i64[1] = ((__int64)(v13 << 21) >> 21) & 0xFFFFFFFFFFFFFFLL | (v13 << 13) & 0xFF00000000000000LL;
LABEL_4:
  sub_2AA60(0, (unsigned int *)&v18, 0x50u, "number of sections", v6, a2);
  result = (*(__int64 (__fastcall **)(__int64, __m128i *, __int64, unsigned __int64))(*(_QWORD *)a3 + 264LL))(
             a3,
             &v14,
             v6,
             a2);
  if ( !(_DWORD)result && (_DWORD)v18 )
  {
    v8 = 0;
    for ( i = (const __m128i *)v6; ; i = v10 )
    {
      if ( (unsigned __int64)i >= a2 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      if ( a2 - (unsigned __int64)i <= 0x4F )
        break;
      v10 = i + 5;
      v19 = _mm_loadu_si128(i);
      v20 = _mm_loadu_si128(i + 1);
      v21 = _mm_loadu_si128(i + 2);
      v11 = v21.m128i_i64[0];
      v22 = _mm_loadu_si128(i + 3);
      v23 = _mm_loadu_si128(i + 4);
      if ( a4 )
        goto LABEL_18;
LABEL_8:
      if ( v11 > 0xFFFFFFFFFFFFLL && (v11 & 0x4000000000000000LL) == 0 )
        v21.m128i_i64[0] = ((__int64)(v11 << 21) >> 21) & 0xFFFFFFFFFFFFFFLL | (v11 << 13) & 0xFF00000000000000LL;
LABEL_11:
      result = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, unsigned __int64))(*(_QWORD *)a3 + 280LL))(
                 a3,
                 &v19,
                 i,
                 a2);
      if ( !(_DWORD)result && ++v8 < (unsigned int)v18 )
        continue;
      return result;
    }
    v10 = (const __m128i *)a2;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    if ( !a4 )
      goto LABEL_11;
    v11 = 0;
LABEL_18:
    v11 = _byteswap_uint64(v11);
    v21.m128i_i64[0] = v11;
    v21.m128i_i64[1] = _byteswap_uint64(v21.m128i_u64[1]);
    v23.m128i_i64[0] = _byteswap_uint64(__PAIR64__(v23.m128i_u32[0], v23.m128i_u32[1]));
    v22 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(_byteswap_ulong(v22.m128i_u32[0])),
              _mm_cvtsi32_si128(_byteswap_ulong(v22.m128i_u32[1]))),
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128(_byteswap_ulong(v22.m128i_u32[2])),
              _mm_cvtsi32_si128(_byteswap_ulong(v22.m128i_u32[3]))));
    v23.m128i_i32[2] = _byteswap_ulong(v23.m128i_u32[2]);
    goto LABEL_8;
  }
  return result;
}

