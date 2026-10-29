__int64 __fastcall sub_E1140(__int64 *a1, __int64 a2, int a3, _QWORD *a4, int a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 v10; // r14
  int v11; // r12d
  unsigned int v12; // eax
  __int64 i; // r12
  __int64 v14; // rbx
  __int64 v15; // rsi
  __m128i v16; // xmm0
  unsigned int v17; // ebx
  __int64 v19; // r12
  __int64 v20; // rax
  unsigned int v21; // [rsp+Ch] [rbp-8Ch]
  int v22; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+44h] [rbp-54h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v7 = a5;
  v24 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_1163C0((unsigned int)a3) )
  {
    v19 = *(_QWORD *)(a1[2] + 8);
    v20 = (unsigned __int8)getinf() ? (unsigned __int8)getinf() : *(_QWORD *)(v19 + 120);
    if ( a3 != v20 )
    {
      if ( !under_debugger )
        sub_37B760(52004);
      goto LABEL_25;
    }
  }
  v10 = *a4 + 80 * v7;
  if ( *(_DWORD *)(v10 + 4) >= a3 )
  {
    if ( !under_debugger )
      sub_37B760(52012);
LABEL_25:
    BUG();
  }
  v11 = a3;
  copy_argloc();
  if ( a3 > 0 )
  {
    while ( v10 != *a4 + 80LL * a4[1] )
    {
      v11 -= *(_DWORD *)(v10 + 4);
      if ( v11 < 0 || (unsigned int)compare_arglocs() )
        break;
      v10 += 80;
      if ( !v11 )
        goto LABEL_10;
    }
    goto LABEL_15;
  }
  if ( a3 )
  {
LABEL_15:
    v17 = 0;
    goto LABEL_16;
  }
LABEL_10:
  v12 = sub_131A80(a1[1], a3, 1);
  v21 = v12;
  if ( v12 == -1 )
    goto LABEL_15;
  v22 = 1;
  v23 = __PAIR64__(v12, a3);
  sub_11EAC0(a2);
  sub_1166E0(&v22);
  for ( i = *a4 + 80 * v7; i != v10; i += 80 )
  {
    v14 = j__qalloc_or_throw();
    v15 = *(_QWORD *)(a6 + 24);
    *(_QWORD *)(v14 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 40) = 0;
    *(_QWORD *)(v14 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 56) = 0;
    *(_QWORD *)(v14 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v14 + 72) = 0;
    sub_329320(v14, v15);
    *(_DWORD *)v14 = 4;
    sub_11EAC0(v14 + 32);
    v16 = _mm_cvtsi32_si128(*(_DWORD *)(v14 + 36));
    v22 = 1;
    v23 = _mm_unpacklo_epi32(v16, _mm_cvtsi32_si128(v21)).m128i_u64[0];
    sub_11EAC0(v14 + 64);
    sub_1166E0(&v22);
    v21 += *(_DWORD *)(v14 + 68);
    sub_9CAA0(*a1, (_QWORD *)v14, *(_QWORD *)(a6 + 16));
  }
  v17 = 1;
LABEL_16:
  cleanup_argloc();
  return v17;
}

