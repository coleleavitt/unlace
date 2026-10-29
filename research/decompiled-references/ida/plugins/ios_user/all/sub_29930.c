__int64 __fastcall sub_29930(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r12
  __int64 v8; // rbp
  int v9; // eax
  __int64 v10; // r12
  int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // r12
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __m128i v23; // xmm2
  __int64 v24; // rcx
  __int64 v25; // rdx
  __m128i v26; // xmm1
  bool v27; // zf
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rdx

  v1 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 112) = 0;
  *(_OWORD *)(a1 + 120) = 0;
  *(_OWORD *)(a1 + 136) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  if ( v1 == -1 )
    return 0;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v1,
         a1 + 112,
         4,
         0) != 4 )
    return 0;
  if ( !*(_DWORD *)(a1 + 112) )
    return 0;
  if ( (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
         *(_QWORD *)(a1 + 8),
         v1 + 4,
         a1 + 116,
         4,
         0) != 4 )
    return 0;
  v3 = *(int *)(a1 + 20);
  v4 = v1 + 8;
  if ( v3 != (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
               *(_QWORD *)(a1 + 8),
               v4,
               a1 + 120,
               v3,
               0) )
    return 0;
  v5 = *(int *)(a1 + 20);
  v6 = v5 + v4;
  if ( v5 != (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
               *(_QWORD *)(a1 + 8),
               v6,
               a1 + 128,
               v5,
               0) )
    return 0;
  if ( *(_DWORD *)(a1 + 112) <= 1u )
    return 0;
  v7 = *(int *)(a1 + 20);
  v8 = v6 + 2 * v7;
  if ( v7 != (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
               *(_QWORD *)(a1 + 8),
               v8,
               a1 + 136,
               v7,
               0) )
    return 0;
  if ( *(_DWORD *)(a1 + 112) <= 8u )
    return 0;
  v9 = *(_DWORD *)(a1 + 20);
  v10 = v8 + 9 * v9;
  if ( v9 != (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
               *(_QWORD *)(a1 + 8),
               v10,
               a1 + 144,
               v9,
               0) )
    return 0;
  if ( *(_DWORD *)(a1 + 112) > 0xEu )
  {
    v11 = *(_DWORD *)(a1 + 20);
    v12 = v10 + 6 * v11;
    if ( v11 != (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
                  *(_QWORD *)(a1 + 8),
                  v12,
                  a1 + 152,
                  v11,
                  0) )
      return 0;
    v13 = *(int *)(a1 + 20);
    if ( v13 != (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64, _QWORD))(**(_QWORD **)(a1 + 8) + 288LL))(
                  *(_QWORD *)(a1 + 8),
                  v12 + (int)v13 + 16,
                  a1 + 160,
                  v13,
                  0) )
      return 0;
  }
  if ( !*(_BYTE *)(a1 + 24) )
  {
    v24 = *(_QWORD *)(a1 + 144);
    v25 = *(_QWORD *)(a1 + 96);
    if ( v25 == v24 )
    {
      if ( *(_DWORD *)(a1 + 16) != 13 )
        return 1;
    }
    else
    {
      v26 = _mm_loadu_si128((const __m128i *)(a1 + 120));
      *(_QWORD *)(a1 + 144) = v25;
      *(_QWORD *)(a1 + 136) += v25 - v24;
      v27 = *(_DWORD *)(a1 + 16) == 13;
      *(__m128i *)(a1 + 120) = _mm_add_epi64(
                                 _mm_unpacklo_epi64(
                                   (__m128i)(unsigned __int64)(v25 - v24),
                                   (__m128i)(unsigned __int64)(v25 - v24)),
                                 v26);
      if ( !v27 )
        return 1;
    }
    v28 = *(_QWORD *)(a1 + 128);
    if ( (v28 & 1) != 0 )
      *(_QWORD *)(a1 + 128) = v28 ^ 1;
    return 1;
  }
  v14 = *(_DWORD *)(a1 + 16);
  if ( !v14 )
  {
    v29 = *(_QWORD *)(a1 + 120);
    if ( v29 <= 0xFFFFFFFFFFFFLL )
    {
      v35 = *(_QWORD *)(a1 + 128);
      if ( v35 <= 0xFFFFFFFFFFFFLL )
      {
        v33 = *(_QWORD *)(a1 + 136) & 0xFFFFFFFFFFFFLL;
        if ( *(_QWORD *)(a1 + 136) > 0xFFFFFFFFFFFFuLL )
        {
LABEL_41:
          v34 = *(_QWORD *)(a1 + 144);
          *(_QWORD *)(a1 + 136) = v33;
          if ( v34 <= 0xFFFFFFFFFFFFLL )
          {
LABEL_43:
            v19 = 0xFFFF000000000000LL;
            goto LABEL_27;
          }
LABEL_42:
          *(_QWORD *)(a1 + 144) = v34 & 0xFFFFFFFFFFFFLL;
          goto LABEL_43;
        }
        goto LABEL_47;
      }
      v31 = v35 & 0xFFFFFFFFFFFFLL;
    }
    else
    {
      v30 = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(a1 + 120) = v29 & 0xFFFFFFFFFFFFLL;
      v31 = v30 & 0xFFFFFFFFFFFFLL;
      if ( v30 <= 0xFFFFFFFFFFFFLL )
      {
        v32 = *(_QWORD *)(a1 + 136);
        if ( v32 > 0xFFFFFFFFFFFFLL )
        {
LABEL_40:
          v33 = v32 & 0xFFFFFFFFFFFFLL;
          goto LABEL_41;
        }
LABEL_47:
        v34 = *(_QWORD *)(a1 + 144);
        if ( v34 <= 0xFFFFFFFFFFFFLL )
          goto LABEL_43;
        goto LABEL_42;
      }
    }
    *(_QWORD *)(a1 + 128) = v31;
    v32 = *(_QWORD *)(a1 + 136);
    if ( v32 > 0xFFFFFFFFFFFFLL )
      goto LABEL_40;
    goto LABEL_47;
  }
  if ( v14 != 13 )
    goto LABEL_31;
  v15 = *(_QWORD *)(a1 + 120);
  if ( v15 > 0xFFFFFFFFFLL )
    *(_QWORD *)(a1 + 120) = v15 & 0xFFFFFFFFFLL;
  v16 = *(_QWORD *)(a1 + 128);
  if ( v16 > 0xFFFFFFFFFLL )
    *(_QWORD *)(a1 + 128) = v16 & 0xFFFFFFFFFLL;
  v17 = *(_QWORD *)(a1 + 136);
  if ( v17 > 0xFFFFFFFFFLL )
    *(_QWORD *)(a1 + 136) = v17 & 0xFFFFFFFFFLL;
  v18 = *(_QWORD *)(a1 + 144);
  if ( v18 > 0xFFFFFFFFFLL )
    *(_QWORD *)(a1 + 144) = v18 & 0xFFFFFFFFFLL;
  v19 = 0xFFFFFFF000000000LL;
LABEL_27:
  v20 = *(_QWORD *)(a1 + 160);
  if ( (v19 & v20) == 0 )
  {
LABEL_31:
    v22 = *(_QWORD *)(a1 + 96);
    v21 = *(_QWORD *)(a1 + 144);
    if ( v21 == v22 )
      return 1;
    goto LABEL_29;
  }
  v21 = *(_QWORD *)(a1 + 144);
  v22 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 160) = v20 & ~v19;
  if ( v22 != v21 )
  {
LABEL_29:
    v23 = _mm_loadu_si128((const __m128i *)(a1 + 120));
    *(_QWORD *)(a1 + 144) = v22;
    *(_QWORD *)(a1 + 136) += v22 - v21;
    *(__m128i *)(a1 + 120) = _mm_add_epi64(
                               _mm_unpacklo_epi64(
                                 (__m128i)(unsigned __int64)(v22 - v21),
                                 (__m128i)(unsigned __int64)(v22 - v21)),
                               v23);
  }
  return 1;
}

