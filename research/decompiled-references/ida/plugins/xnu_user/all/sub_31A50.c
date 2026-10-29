__int64 __fastcall sub_31A50(const __m128i *a1, unsigned __int64 a2, __int64 a3, char a4)
{
  const __m128i *v6; // rbx
  __int64 result; // rax
  int v8; // r15d
  __m128i i; // xmm2
  const __m128i *v10; // r13
  unsigned __int64 v11; // rax
  _OWORD v12[3]; // [rsp+0h] [rbp-C8h] BYREF
  unsigned __int64 v13; // [rsp+30h] [rbp-98h] BYREF
  __m128i v14; // [rsp+40h] [rbp-88h] BYREF
  __m128i v15; // [rsp+50h] [rbp-78h]
  __m128i v16; // [rsp+60h] [rbp-68h]
  __m128i v17; // [rsp+70h] [rbp-58h]
  unsigned int v18; // [rsp+80h] [rbp-48h]
  unsigned __int64 v19; // [rsp+88h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  if ( (unsigned __int64)a1 < a2 && a2 - (unsigned __int64)a1 > 0x37 )
  {
    v11 = a1[3].m128i_u64[0];
    v6 = (const __m128i *)((char *)a1 + 56);
    v12[0] = _mm_loadu_si128(a1);
    v13 = v11;
    v12[1] = _mm_loadu_si128(a1 + 1);
    v12[2] = _mm_loadu_si128(a1 + 2);
    if ( !a4 )
      goto LABEL_4;
LABEL_17:
    *(_QWORD *)&v12[0] = _byteswap_uint64(__PAIR64__(v12[0], DWORD1(v12[0])));
    *((_QWORD *)&v12[2] + 1) = _byteswap_uint64(__PAIR64__(DWORD2(v12[2]), HIDWORD(v12[2])));
    *(__m128i *)((char *)&v12[1] + 8) = _mm_unpacklo_epi64(
                                          _mm_unpacklo_epi32(
                                            _mm_cvtsi32_si128(_byteswap_ulong(DWORD2(v12[1]))),
                                            _mm_cvtsi32_si128(_byteswap_ulong(HIDWORD(v12[1])))),
                                          _mm_unpacklo_epi32(
                                            _mm_cvtsi32_si128(_byteswap_ulong(v12[2])),
                                            _mm_cvtsi32_si128(_byteswap_ulong(DWORD1(v12[2])))));
    v13 = _byteswap_uint64(__PAIR64__(v13, HIDWORD(v13)));
    goto LABEL_4;
  }
  v13 = 0;
  v6 = (const __m128i *)a2;
  memset(v12, 0, sizeof(v12));
  if ( a4 )
    goto LABEL_17;
LABEL_4:
  sub_206F0(0, (unsigned int *)&v13, 0x44u, "number of sections", (__int64)v6, a2);
  result = (*(__int64 (__fastcall **)(__int64, _OWORD *, const __m128i *, unsigned __int64))(*(_QWORD *)a3 + 256LL))(
             a3,
             v12,
             v6,
             a2);
  if ( !(_DWORD)result && (_DWORD)v13 )
  {
    v8 = 0;
    for ( i = 0; ; i = 0 )
    {
      if ( (unsigned __int64)v6 >= a2 )
      {
        if ( !under_debugger )
          interr();
        BUG();
      }
      if ( a2 - (unsigned __int64)v6 > 0x43 )
      {
        v10 = (const __m128i *)((char *)v6 + 68);
        v14 = _mm_loadu_si128(v6);
        v15 = _mm_loadu_si128(v6 + 1);
        v16 = _mm_loadu_si128(v6 + 2);
        v17 = _mm_loadu_si128(v6 + 3);
        v18 = v6[4].m128i_u32[0];
        if ( a4 )
          goto LABEL_14;
      }
      else
      {
        v18 = 0;
        v10 = (const __m128i *)a2;
        v14 = i;
        v15 = i;
        v16 = i;
        v17 = i;
        if ( a4 )
        {
LABEL_14:
          v16 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(_byteswap_ulong(v16.m128i_u32[0])),
                    _mm_cvtsi32_si128(_byteswap_ulong(v16.m128i_u32[1]))),
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(_byteswap_ulong(v16.m128i_u32[2])),
                    _mm_cvtsi32_si128(_byteswap_ulong(v16.m128i_u32[3]))));
          v18 = _byteswap_ulong(v18);
          v17 = _mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(_byteswap_ulong(v17.m128i_u32[0])),
                    _mm_cvtsi32_si128(_byteswap_ulong(v17.m128i_u32[1]))),
                  _mm_unpacklo_epi32(
                    _mm_cvtsi32_si128(_byteswap_ulong(v17.m128i_u32[2])),
                    _mm_cvtsi32_si128(_byteswap_ulong(v17.m128i_u32[3]))));
        }
      }
      result = (*(__int64 (__fastcall **)(__int64, __m128i *, const __m128i *, unsigned __int64))(*(_QWORD *)a3 + 272LL))(
                 a3,
                 &v14,
                 v6,
                 a2);
      if ( (_DWORD)result )
        return result;
      if ( ++v8 >= (unsigned int)v13 )
        return result;
      v6 = v10;
    }
  }
  return result;
}

