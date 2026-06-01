__int64 __fastcall sub_1AE00(const __m128i *a1, __m128i *a2, __int64 a3, char a4)
{
  unsigned __int64 *v7; // rbx
  unsigned int v8; // r14d
  unsigned int v9; // esi
  int v10; // ebp
  unsigned __int64 *v12; // r8
  __int64 (*v13)(); // rax
  unsigned int v14; // eax
  unsigned __int64 *v15; // [rsp+8h] [rbp-70h]
  unsigned __int64 v16; // [rsp+18h] [rbp-60h] BYREF
  _BYTE v17[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( a1 < a2 && (unsigned __int64)((char *)a2 - (char *)a1) > 0x17 )
  {
    v7 = &a1[1].m128i_u64[1];
    *(_QWORD *)&v17[16] = a1[1].m128i_i64[0];
    *(__m128i *)v17 = _mm_loadu_si128(a1);
    if ( !a4 )
      goto LABEL_4;
LABEL_18:
    *(_DWORD *)v17 = _byteswap_ulong(*(unsigned int *)v17);
    *(__m128i *)&v17[8] = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(
                              _mm_cvtsi32_si128(_byteswap_ulong(*(unsigned int *)&v17[8])),
                              _mm_cvtsi32_si128(_byteswap_ulong(*(unsigned int *)&v17[12]))),
                            _mm_unpacklo_epi32(
                              _mm_cvtsi32_si128(_byteswap_ulong(*(unsigned int *)&v17[16])),
                              _mm_cvtsi32_si128(_byteswap_ulong(*(unsigned int *)&v17[20]))));
    goto LABEL_4;
  }
  v7 = (unsigned __int64 *)a2;
  memset(v17, 0, sizeof(v17));
  if ( a4 )
    goto LABEL_18;
LABEL_4:
  v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *, unsigned __int64 *, __m128i *))(*(_QWORD *)a3 + 216LL))(
         a3,
         v17,
         v7,
         a2);
  if ( v8 )
    return v8;
  v9 = *(_DWORD *)&v17[20];
  v10 = 0;
  if ( !*(_DWORD *)&v17[20] )
    return v8;
  while ( v7 < (unsigned __int64 *)a2 )
  {
    if ( (unsigned __int64)((char *)a2 - (char *)v7) > 7 )
    {
      v12 = v7 + 1;
      v16 = *v7;
      if ( a4 )
        goto LABEL_14;
    }
    else
    {
      v16 = 0;
      v12 = (unsigned __int64 *)a2;
      if ( a4 )
      {
LABEL_14:
        v16 = _byteswap_uint64(__PAIR64__(v16, HIDWORD(v16)));
        v13 = *(__int64 (**)())(*(_QWORD *)a3 + 224LL);
        if ( v13 == sub_10B50 )
          goto LABEL_9;
        goto LABEL_15;
      }
    }
    v13 = *(__int64 (**)())(*(_QWORD *)a3 + 224LL);
    if ( v13 == sub_10B50 )
      goto LABEL_9;
LABEL_15:
    v15 = v12;
    v14 = ((__int64 (__fastcall *)(__int64, unsigned __int64 *, unsigned __int64 *, __m128i *, unsigned __int64 *, __int64 (*)()))v13)(
            a3,
            &v16,
            v7,
            a2,
            v12,
            sub_10B50);
    if ( v14 )
      return v14;
    v9 = *(_DWORD *)&v17[20];
    v12 = v15;
LABEL_9:
    if ( ++v10 >= v9 )
      return v8;
    v7 = v12;
  }
  if ( !byte_66C4B )
    sub_196C0((__int64)"Inconsistent number of tools %u in LC_BUILD_VERSION command");
  byte_66C4B = 1;
  return v8;
}

