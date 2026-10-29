unsigned __int64 __fastcall sub_2D86F0(__int64 a1, __int64 a2, __m128 a3)
{
  _QWORD *v3; // r13
  __int64 v5; // rdi
  __int64 v6; // r12
  __int64 i; // rbx
  __int64 v8; // rax
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r12
  _QWORD *v13; // rdi
  _QWORD *v14; // rdi
  unsigned __int64 v15; // rax
  _QWORD *v16; // rdi

  v3 = (_QWORD *)(a1 + 32);
  v5 = *(_QWORD *)(a1 + 32);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      for ( i = 0; i != v6; ++i )
      {
        v8 = 3 * i;
        sub_2B9980((_QWORD *)(32 * v8 + v5));
        v5 = *(_QWORD *)(a1 + 32);
      }
    }
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v5);
    *(_QWORD *)(a1 + 32) = 0;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v9 = *(unsigned __int64 **)(a1 + 56);
  if ( !v9 )
    goto LABEL_18;
  v10 = *v9;
  if ( *(_QWORD *)(a1 + 64) )
  {
    v12 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( (*(_BYTE *)(v10 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
    {
LABEL_17:
      *v9 = v10 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
      v15 = *(_QWORD *)(a1 + 56);
      a3 = (__m128)_mm_unpacklo_epi64((__m128i)v15, (__m128i)v15);
      *(__m128 *)(v15 + 8) = a3;
      **(_QWORD **)(a1 + 56) &= ~1uLL;
      **(_QWORD **)(a1 + 56) |= 2uLL;
LABEL_18:
      *(_QWORD *)(a1 + 64) = 0;
      goto LABEL_19;
    }
    v13 = *(_QWORD **)(v12 + 8);
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_21;
    }
    else
    {
      sub_2B0820(v13);
      v14 = *(_QWORD **)(v12 + 16);
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_13;
    }
    sub_2B0820(v14);
LABEL_13:
    if ( (*(_BYTE *)v12 & 2) != 0 )
    {
LABEL_14:
      if ( v10 > 3 )
        qfree(v10 & 0xFFFFFFFFFFFFFFFCLL);
      v9 = *(unsigned __int64 **)(a1 + 56);
      v10 = *v9;
      goto LABEL_17;
    }
LABEL_21:
    cleanup_argloc();
    cleanup_argloc();
    *(_QWORD *)v12 |= 2uLL;
    goto LABEL_14;
  }
  *v9 = *v9 & 3 | (unsigned __int64)v9 & 0xFFFFFFFFFFFFFFFCLL;
  v11 = *(_QWORD *)(a1 + 56);
  a3 = (__m128)_mm_unpacklo_epi64((__m128i)v11, (__m128i)v11);
  *(__m128 *)(v11 + 8) = a3;
  **(_QWORD **)(a1 + 56) &= ~1uLL;
  **(_QWORD **)(a1 + 56) |= 2uLL;
LABEL_19:
  *(_QWORD *)(a1 + 72) = 0;
  v16 = *(_QWORD **)(a1 + 88);
  *(_DWORD *)(a1 + 80) = 1;
  sub_2D8320(v16, (__int64)v3, *(double *)a3.m128_u64);
  *(_QWORD *)(a1 + 24) = v3;
  return sub_2BBE40(a2, *(_QWORD *)(a1 + 8), v3, nullptr);
}

