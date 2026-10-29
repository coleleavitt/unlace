__int64 __fastcall sub_E7800(__int64 *a1, __int64 a2, int a3, _QWORD *a4, int a5, __int64 a6, double a7)
{
  __int64 v8; // rbp
  __int64 v11; // r14
  int v12; // r12d
  unsigned int v13; // eax
  int *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int8 *i; // r12
  __int64 v18; // rbx
  __int64 v19; // rsi
  __m128i v20; // xmm0
  unsigned int v21; // ebx
  __int64 v23; // r12
  __int64 v24; // rax
  unsigned int v25; // [rsp+Ch] [rbp-8Ch]
  int v27; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v28; // [rsp+44h] [rbp-54h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v8 = a5;
  v29 = __readfsqword(0x28u);
  if ( !sub_11CA80(a3) )
  {
    v23 = *(_QWORD *)(a1[2] + 8);
    v24 = (unsigned __int8)getinf() ? (unsigned __int8)getinf() : *(_QWORD *)(v23 + 120);
    if ( a3 != v24 )
    {
      if ( !under_debugger )
        sub_383060(0xCB24u, a7);
      goto LABEL_25;
    }
  }
  v11 = *a4 + 80 * v8;
  if ( *(_DWORD *)(v11 + 4) >= a3 )
  {
    if ( !under_debugger )
      sub_383060(0xCB2Cu, a7);
LABEL_25:
    BUG();
  }
  v12 = a3;
  copy_argloc();
  if ( a3 > 0 )
  {
    while ( v11 != *a4 + 80LL * a4[1] )
    {
      v12 -= *(_DWORD *)(v11 + 4);
      if ( v12 < 0 || (unsigned int)compare_arglocs() )
        break;
      v11 += 80;
      if ( !v12 )
        goto LABEL_10;
    }
    goto LABEL_15;
  }
  if ( a3 )
  {
LABEL_15:
    v21 = 0;
    goto LABEL_16;
  }
LABEL_10:
  v13 = sub_138140((_QWORD *)a1[1], a3, 1);
  v25 = v13;
  if ( v13 == -1 )
    goto LABEL_15;
  v14 = &v27;
  v27 = 1;
  v28 = __PAIR64__(v13, a3);
  sub_125180(a2, (unsigned __int8 *)&v27);
  sub_11CDA0((__int64)&v27);
  for ( i = (unsigned __int8 *)(*a4 + 80 * v8); i != (unsigned __int8 *)v11; i += 80 )
  {
    v18 = j__qalloc_or_throw(80, (__int64)v14, v15, v16);
    v19 = *(_QWORD *)(a6 + 24);
    *(_QWORD *)(v18 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 40) = 0;
    *(_QWORD *)(v18 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 56) = 0;
    *(_QWORD *)(v18 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v18 + 72) = 0;
    sub_330970(v18, v19);
    *(_DWORD *)v18 = 4;
    sub_125180(v18 + 32, i);
    v20 = _mm_cvtsi32_si128(*(_DWORD *)(v18 + 36));
    v27 = 1;
    v20.m128i_i64[0] = _mm_unpacklo_epi32(v20, _mm_cvtsi32_si128(v25)).m128i_u64[0];
    v28 = v20.m128i_i64[0];
    sub_125180(v18 + 64, (unsigned __int8 *)&v27);
    sub_11CDA0((__int64)&v27);
    v14 = (int *)v18;
    v25 += *(_DWORD *)(v18 + 68);
    sub_A3160(*a1, (_QWORD *)v18, *(_QWORD *)(a6 + 16), *(double *)v20.m128i_i64);
  }
  v21 = 1;
LABEL_16:
  cleanup_argloc();
  return v21;
}

