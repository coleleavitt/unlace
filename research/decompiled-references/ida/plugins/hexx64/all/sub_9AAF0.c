__int64 __fastcall sub_9AAF0(__int128 a1)
{
  const __m128i *v2; // r12
  _DWORD *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r15
  __m128i si128; // xmm0
  __int64 v7; // r13
  __int64 v8; // r14
  __int32 v9; // eax
  unsigned __int8 v10; // [rsp+Fh] [rbp-71h]
  __int64 v11; // [rsp+18h] [rbp-68h] BYREF
  __int64 v12[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v13; // [rsp+30h] [rbp-50h] BYREF
  __int128 v14; // [rsp+38h] [rbp-48h]
  unsigned __int64 v15; // [rsp+48h] [rbp-38h]

  v15 = __readfsqword(0x28u);
  if ( *(_BYTE *)(*((_QWORD *)&a1 + 1) + 64LL) != 4 )
    return 0;
  v2 = (const __m128i *)a1;
  v3 = *(_DWORD **)(*((_QWORD *)&a1 + 1) + 72LL);
  if ( *v3 != 12 )
    return 0;
  if ( !v3 )
    return 0;
  v4 = sub_11C8A0((__int64)v3, &v11);
  if ( !v4
    || *(_DWORD *)(*((_QWORD *)&a1 + 1) + 36LL) != sub_32ABC0(
                                                     *(_QWORD *)(*(_QWORD *)(v4 + 8) + 16LL),
                                                     *(_DWORD *)(v4 + 4),
                                                     1)
    || *(_BYTE *)(*((_QWORD *)&a1 + 1) + 32LL) != 4 )
  {
    return 0;
  }
  v5 = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL);
  v14 = 0;
  v12[0] = 0;
  v12[1] = 0;
  v13 = 0;
  v13 = qvector_reserve((__int64)&v13, 0, 1, 16);
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  *(__m128i *)(v13 + 16 * v14) = si128;
  *(_QWORD *)&v14 = v14 + 1;
  v7 = sub_129150((__int64)v2, v12, v5, 0, 0, 0, 0x101u);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  qfree(v12[0]);
  if ( v7
    && *(_DWORD *)v7 == 1
    && (v8 = *(_QWORD *)(v2[30].m128i_i64[0] + 112),
        sub_30D8F0(v8, (__int64)v2, *((__int64 *)&a1 + 1), *(_DWORD **)(*((_QWORD *)&a1 + 1) + 40LL), v7, v7 + 32))
    && (unsigned __int8)sub_12EA80(v8, v2, *((__int64 *)&a1 + 1), *((_QWORD *)&a1 + 1) + 48LL, v7, v7 + 48, 0)
    && (v10 = sub_12EA80(v8, v2, *((__int64 *)&a1 + 1), v11, v7, v7 + 64, 0)) != 0 )
  {
    sub_1207E0(
      (char *)(v7 + 32),
      v8,
      8,
      *(_QWORD *)(*((_QWORD *)&a1 + 1) + 24LL),
      2 * *(_DWORD *)(*((_QWORD *)&a1 + 1) + 36LL));
    sub_11D5A0(*((__int64 *)&a1 + 1));
    v9 = v2[1].m128i_i32[2];
    BYTE1(v9) &= ~2u;
    LOBYTE(v9) = v9 | 0x80;
    v2[1].m128i_i32[2] = v9;
    sub_11D890(*((__int64 *)&a1 + 1), v7);
    *(_QWORD *)&a1 = v2;
    sub_993D0(a1, *(double *)si128.m128i_i64);
  }
  else
  {
    return 0;
  }
  return v10;
}

