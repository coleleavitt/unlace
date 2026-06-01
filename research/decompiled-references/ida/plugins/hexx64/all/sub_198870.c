__int64 __fastcall sub_198870(_QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rax
  __m128i v14; // kr00_16
  __m128i v15; // xmm0
  __int64 *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // r9d
  char v21; // r13
  __int64 *v22; // r13
  __m128i v23; // kr10_16
  __int64 *v24; // r13
  __m128i v25; // kr20_16
  __int64 v26; // rbx
  __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  int v32; // eax
  __int64 v33; // [rsp+8h] [rbp-80h] BYREF
  __m128i v34; // [rsp+10h] [rbp-78h] BYREF
  __int64 v35; // [rsp+20h] [rbp-68h] BYREF
  __int128 v36; // [rsp+28h] [rbp-60h] BYREF
  __int128 v37; // [rsp+38h] [rbp-50h]
  unsigned __int64 v38; // [rsp+48h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v1 = a1[4];
  if ( *(_DWORD *)v1 != 2 )
    return 0;
  v33 = 0;
  v3 = v1 + 48;
  if ( *(_BYTE *)(v1 + 48) == 4 )
  {
    v4 = *(_QWORD *)(v1 + 56);
    if ( *(_DWORD *)v4 != 12 || !(unsigned __int8)sub_11FD80((char *)(v4 + 48), &v33, 0) )
      return 0;
    v3 = *(_QWORD *)(v1 + 56) + 32LL;
  }
  if ( !(unsigned __int8)sub_32F330(v3, &v35) )
    return 0;
  v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1[5] + 16LL) + 24LL))(*(_QWORD *)(a1[5] + 16LL));
  v7 = a1[5];
  v8 = *(_QWORD *)(v7 + 120);
  v9 = v8 + (*(_QWORD *)(v7 + 128) << 7);
  if ( v8 == v9 )
    return 0;
  while ( 1 )
  {
    if ( (*(_BYTE *)(v8 + 8) & 0x12) != 0 )
      goto LABEL_10;
    v10 = *(_QWORD *)(v8 + 72);
    if ( v10 + *(__int16 *)(v6 + 2) == v35 )
      break;
    if ( v35 == v10 + *(__int16 *)(v6 + 4) )
    {
      v11 = *(_QWORD *)(v8 + 56);
      goto LABEL_15;
    }
LABEL_10:
    v8 += 128;
    if ( v9 == v8 )
      return 0;
  }
  v11 = *(_QWORD *)(v8 + 32);
LABEL_15:
  if ( v11 != -1 )
  {
    v12 = v33 + v11;
    v13 = *(int *)(a1[4] + 68LL);
    v34.m128i_i64[0] = v12 + *(_QWORD *)(a1[1] + 1440LL);
    v34.m128i_i64[1] = v13;
    if ( (unsigned __int8)sub_317E70(a1 + 8, &v34, 0) )
    {
      v14 = v34;
      v15.m128i_i64[0] = 0;
      v35 = 0;
      v36 = 0;
      if ( (unsigned __int64)(v34.m128i_i64[0] + v34.m128i_i64[1] - 1) >= v34.m128i_i64[0] )
      {
        v35 = qvector_reserve((__int64)&v35, 0, 1, 16);
        v15 = _mm_unpacklo_epi64((__m128i)v14.m128i_u64[0], (__m128i)v14.m128i_u64[1]);
        *(__m128i *)(v35 + 16 * v36) = v15;
        *(_QWORD *)&v36 = v36 + 1;
      }
      v16 = &v35;
      v21 = sub_317F40(a1 + 8, (__int64)&v35);
      if ( v35 )
      {
        *(_QWORD *)&v36 = 0;
        qfree(v35);
      }
      if ( !v21 )
      {
        if ( !under_debugger )
          sub_383060(0xCB52u, *(double *)v15.m128i_i64);
        BUG();
      }
      v22 = (__int64 *)a1[6];
      if ( v22 )
      {
        v23 = v34;
        v35 = 0;
        v36 = 0u;
        v37 = 0;
        if ( (unsigned __int64)(v34.m128i_i64[0] + v34.m128i_i64[1] - 1) >= v34.m128i_i64[0] )
        {
          *((_QWORD *)&v36 + 1) = qvector_reserve((__int64)&v36 + 8, 0, 1, 16);
          v17 = 16 * v37;
          *(__m128i *)(*((_QWORD *)&v36 + 1) + 16 * v37) = _mm_unpacklo_epi64(
                                                             (__m128i)v23.m128i_u64[0],
                                                             (__m128i)v23.m128i_u64[1]);
          *(_QWORD *)&v37 = v37 + 1;
        }
        sub_64640(v22, &v35, v17, v18, v19, v20);
        v16 = (__int64 *)&v36 + 1;
        sub_317C60(v22 + 2, (__int64)&v36 + 8);
        if ( *((_QWORD *)&v36 + 1) )
        {
          *(_QWORD *)&v37 = 0;
          qfree(*((__int64 *)&v36 + 1));
        }
        qfree(v35);
      }
      v24 = (__int64 *)a1[7];
      if ( v24 )
      {
        v25 = v34;
        v35 = 0;
        v36 = 0u;
        v37 = 0;
        if ( (unsigned __int64)(v34.m128i_i64[0] + v34.m128i_i64[1] - 1) >= v34.m128i_i64[0] )
        {
          *((_QWORD *)&v36 + 1) = qvector_reserve((__int64)&v36 + 8, 0, 1, 16);
          v17 = 16 * v37;
          *(__m128i *)(*((_QWORD *)&v36 + 1) + 16 * v37) = _mm_unpacklo_epi64(
                                                             (__m128i)v25.m128i_u64[0],
                                                             (__m128i)v25.m128i_u64[1]);
          *(_QWORD *)&v37 = v37 + 1;
        }
        sub_64640(v24, &v35, v17, v18, v19, v20);
        v16 = (__int64 *)&v36 + 1;
        sub_317C60(v24 + 2, (__int64)&v36 + 8);
        if ( *((_QWORD *)&v36 + 1) )
        {
          *(_QWORD *)&v37 = 0;
          qfree(*((__int64 *)&v36 + 1));
        }
        qfree(v35);
      }
      *(_DWORD *)a1[4] = 4;
      v26 = a1[4];
      v27 = a1[1];
      sub_11CDA0(v26 + 32);
      *(_BYTE *)(v26 + 32) = 5;
      v30 = (_QWORD *)j__qalloc_or_throw(16, (__int64)v16, v28, v29);
      *v30 = v27;
      v30[1] = v12;
      *(_QWORD *)(v26 + 40) = v30;
      *(_DWORD *)(a1[4] + 36LL) = *(_DWORD *)(a1[4] + 68LL);
      sub_11CDA0(a1[4] + 48LL);
      v31 = a1[2];
      v32 = *(_DWORD *)(v31 + 24);
      BYTE1(v32) &= ~2u;
      LOBYTE(v32) = v32 | 0x80;
      *(_DWORD *)(v31 + 24) = v32;
    }
  }
  return 0;
}

