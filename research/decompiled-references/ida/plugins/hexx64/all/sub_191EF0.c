__int64 __fastcall sub_191EF0(__int64 a1, __int64 *a2, __int64 a3, unsigned int a4, __m128i a5)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  unsigned __int8 *v11; // r14
  __int64 v12; // rsi
  unsigned __int8 *v13; // r13
  __int64 v14; // r12
  unsigned int v15; // eax
  int v16; // eax
  unsigned __int8 v18; // al
  unsigned __int8 v19; // dl
  char v20; // r15
  __int64 v21; // rsi
  char v22; // r15
  __int64 v23; // rdx
  __int64 v26; // [rsp+18h] [rbp-60h]
  unsigned __int8 v27[24]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v6 = *(_QWORD **)(a1 + 128);
  v7 = &v6[*(_QWORD *)(a1 + 136)];
  v28 = __readfsqword(0x28u);
  if ( v6 != v7 )
  {
    while ( a2[1] != *v6 )
    {
      if ( v7 == ++v6 )
        goto LABEL_6;
    }
    if ( v7 != v6 )
    {
      if ( !under_debugger )
        sub_383060(0xC952u, *(double *)a5.m128i_i64);
      BUG();
    }
  }
LABEL_6:
  sub_191D40((_QWORD *)(a1 + 16), a2);
  v10 = j__qalloc_or_throw(80, (__int64)a2, v8, v9);
  v11 = (unsigned __int8 *)(v10 + 48);
  v12 = *(_QWORD *)(a2[1] + 24);
  *(_QWORD *)(v10 + 40) = 0;
  v13 = (unsigned __int8 *)(v10 + 64);
  *(_QWORD *)(v10 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 56) = 0;
  *(_QWORD *)(v10 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v10 + 72) = 0;
  sub_330970(v10, v12);
  *(_DWORD *)v10 = 12;
  sub_125180((unsigned __int8 *)(v10 + 32), (unsigned __int8 *)(a1 + 192));
  sub_125180((unsigned __int8 *)(v10 + 48), (unsigned __int8 *)(a2[1] + 32));
  *(_DWORD *)(v10 + 68) = *(_DWORD *)(v10 + 36);
  v14 = *(_QWORD *)(*(_QWORD *)(*a2 + 480) + 112LL);
  v26 = *(_QWORD *)(*a2 + 480);
  v15 = *(_DWORD *)(v14 + 84);
  if ( *(_DWORD *)(v10 + 52) != v15 )
  {
    sub_125180(v13, (unsigned __int8 *)(a2[1] + 64));
    v18 = *(_BYTE *)(v10 + 64);
    v19 = *(_BYTE *)(a3 + 8);
    if ( v18 == 1 )
    {
      v21 = *(int *)(v10 + 72);
    }
    else
    {
      if ( v18 != 5 )
      {
        v20 = 0;
        v21 = -1;
        if ( v19 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v21 = *(_QWORD *)(*(_QWORD *)(v10 + 72) + 8LL);
    }
    v20 = 0;
    if ( v18 < v19 || v19 < v18 )
      goto LABEL_15;
LABEL_14:
    v20 = *(_QWORD *)a3 == v21;
LABEL_15:
    v22 = sub_11CC50(v13, v26, 0, *(double *)a5.m128i_i64) == v20;
    sub_191CF0((unsigned __int64 *)v14, v11, *(unsigned int *)(v14 + 84), v22, a5);
    v23 = *(unsigned int *)(v14 + 84);
    if ( a4 == -1 )
    {
      sub_191CF0((unsigned __int64 *)v14, v13, v23, v22, a5);
    }
    else
    {
      *(_DWORD *)v27 = 1;
      a5.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23), _mm_cvtsi32_si128(a4)).m128i_u64[0];
      *(_QWORD *)&v27[4] = a5.m128i_i64[0];
      sub_125180(v13, v27);
      sub_11CDA0((__int64)v27);
    }
    goto LABEL_9;
  }
  if ( a4 != -1 )
  {
    *(_DWORD *)v27 = 1;
    a5.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(a4)).m128i_u64[0];
    *(_QWORD *)&v27[4] = a5.m128i_i64[0];
    sub_125180(v13, v27);
    sub_11CDA0((__int64)v27);
LABEL_9:
    sub_A3160(*a2, (_QWORD *)v10, a2[1], *(double *)a5.m128i_i64);
    goto LABEL_10;
  }
  sub_1262E0(a2[1] + 32, (unsigned __int8 *)v10, *(double *)a5.m128i_i64);
  if ( v10 )
  {
    sub_11CDA0((__int64)v13);
    sub_11CDA0((__int64)v11);
    sub_11CDA0(v10 + 32);
    j__qfree(v10);
  }
LABEL_10:
  v16 = *(_DWORD *)(*a2 + 24);
  BYTE1(v16) &= ~2u;
  LOBYTE(v16) = v16 | 0x80;
  *(_DWORD *)(*a2 + 24) = v16;
  return 1;
}

