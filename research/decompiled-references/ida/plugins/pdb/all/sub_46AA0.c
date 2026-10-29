__int64 __fastcall sub_46AA0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v6; // ebp
  __int64 v7; // rax
  unsigned __int8 v8; // bl
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 v11; // rbp
  _QWORD *v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rsi
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 tinfo_size; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // rbp
  __int64 v23; // r8
  int v24; // ebx
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // esi
  unsigned __int64 v29; // rdx
  __m128i v30; // xmm0
  __int64 v31; // rdx
  __m128i *v32; // r13
  __m128i v33; // xmm0
  unsigned __int64 v34; // rsi
  unsigned __int64 v35; // xmm0_8
  _QWORD *v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rdi
  unsigned __int64 v39; // rbp
  unsigned int v40; // [rsp+8h] [rbp-90h]
  __int64 v42; // [rsp+20h] [rbp-78h] BYREF
  __int128 v43; // [rsp+28h] [rbp-70h]
  __int128 v44; // [rsp+38h] [rbp-60h]
  __int64 v45; // [rsp+48h] [rbp-50h]
  int v46; // [rsp+50h] [rbp-48h]
  unsigned __int64 v47; // [rsp+58h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  if ( a4 == 2 )
  {
    *(_BYTE *)(a3 + 36) = 1;
    sub_32EA0(a1, (__int64 *)a3);
    v40 = sub_45960(a1, (_QWORD *)a3, *(__m128i **)a3, (__m128i *)(*(_QWORD *)a3 + 144LL * *(_QWORD *)(a3 + 8)));
  }
  else
  {
    *(_BYTE *)(a3 + 36) = 0;
    v40 = sub_463C0(a1, (__m128i **)a3);
  }
  if ( v40 != 1 )
    return v40;
  v6 = 0;
  v7 = 0;
  if ( !*(_QWORD *)(a3 + 8) )
    goto LABEL_5;
  do
  {
    while ( 1 )
    {
      v19 = *(_QWORD *)a3 + 144 * v7;
      if ( (*(_BYTE *)(v19 + 64) & 0xF) == 0xE )
        goto LABEL_25;
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v19 + 64), (*(_DWORD *)(v19 + 132) & 0x20) == 0 ? 1 : 3);
      if ( tinfo_size == -1 )
        break;
      v16 = *(_QWORD *)(v19 + 8);
      if ( 8 * tinfo_size != v16 )
      {
        v17 = v16 >> 3;
        if ( tinfo_size )
          goto LABEL_31;
        if ( (*(_BYTE *)(v19 + 132) & 0x20) != 0 || (get_tinfo_property(*(_QWORD *)(v19 + 64), 2) & 0xF) == 0xB )
          *(_QWORD *)(v19 + 8) = 0;
      }
LABEL_25:
      ++v6;
      v18 = *(_QWORD *)(a3 + 8);
      v7 = v6;
      if ( v6 >= v18 )
        goto LABEL_33;
    }
    if ( (*(_BYTE *)(v19 + 132) & 0x20) == 0 || *(_QWORD *)(v19 + 8) )
      goto LABEL_25;
    LODWORD(v17) = 0;
LABEL_31:
    if ( !(unsigned __int8)sub_25800(v19, v17) )
      return 0;
    *(_DWORD *)(v19 + 132) &= ~0x20u;
    ++v6;
    v18 = *(_QWORD *)(a3 + 8);
    v7 = v6;
  }
  while ( v6 < v18 );
LABEL_33:
  v21 = *(_QWORD *)(a3 + 24);
  if ( !v21 && v18 )
  {
    v23 = *(_QWORD *)a3;
    v39 = (unsigned __int64)(*(_QWORD *)(*(_QWORD *)a3 + 144 * v18 - 144)
                           + *(_QWORD *)(*(_QWORD *)a3 + 144 * v18 - 144 + 8)
                           + 7LL) >> 3;
    *(_QWORD *)(a3 + 24) = v39;
    v22 = 8 * v39;
LABEL_37:
    v24 = 0;
    v25 = 0;
    v26 = 0;
    while ( 1 )
    {
      v31 = 144 * v26;
      v32 = (__m128i *)(v23 + 144 * v26);
      v33 = _mm_loadu_si128(v32);
      v34 = v33.m128i_i64[0];
      v35 = _mm_add_epi64(v33, _mm_srli_si128(v33, 8)).m128i_u64[0];
      v27 = v35;
      if ( v34 >= v25 )
        break;
      if ( v22 < v35 )
        goto LABEL_39;
LABEL_40:
      if ( v25 < v34 )
        v25 = v34;
      v28 = (v27 - v25 + 7) >> 3;
      if ( v28 > 0 )
      {
        if ( !(unsigned __int8)sub_25800((__int64)v32, v28) )
          return 0;
        if ( v32[1].m128i_i64[1] <= 1uLL )
          sub_37FD0(v32[1].m128i_i64, (__int64)"_bytes_%llx", v25 >> 3);
        v32[8].m128i_i32[1] &= 0xFFFFFF5F;
        v32->m128i_i64[0] = v25;
LABEL_47:
        v29 = *(_QWORD *)(a3 + 8);
        ++v24;
        if ( a4 != 2 )
        {
          v30 = _mm_loadu_si128(v32);
          v25 = _mm_add_epi64(v30, _mm_srli_si128(v30, 8)).m128i_u64[0];
        }
        goto LABEL_49;
      }
      v36 = (_QWORD *)(*(_QWORD *)a3 + v31);
      clear_tinfo_t(v36 + 8);
      v37 = v36[5];
      if ( v37 )
      {
        v36[6] = 0;
        qfree(v37);
      }
      v38 = v36[2];
      if ( v38 )
      {
        v36[3] = 0;
        qfree(v38);
      }
      memmove(v36, v36 + 18, *(_QWORD *)a3 + 144LL * *(_QWORD *)(a3 + 8) - (_QWORD)v36 - 144);
      v29 = *(_QWORD *)(a3 + 8) - 1LL;
      *(_QWORD *)(a3 + 8) = v29;
LABEL_49:
      v26 = v24;
      if ( v24 >= v29 )
        goto LABEL_5;
      v23 = *(_QWORD *)a3;
    }
    if ( v22 >= v35 )
      goto LABEL_47;
LABEL_39:
    v32->m128i_i64[1] = v22 - v34;
    v27 = v22;
    goto LABEL_40;
  }
  v22 = 8 * v21;
  if ( v18 )
  {
    v23 = *(_QWORD *)a3;
    goto LABEL_37;
  }
LABEL_5:
  v8 = 13;
  if ( *(_BYTE *)(a3 + 36) )
    v8 = 29;
  v42 = 0;
  v46 = 1;
  v45 = 0;
  v43 = 0;
  v44 = 0;
  sub_32120(a3, &v42);
  if ( (v45 & 0x10000000000LL) != 0 )
    udt_type_data_t__deduplicate_members(&v42);
  if ( (unsigned __int8)create_tinfo(a2, v8, 13, &v42) )
  {
    if ( !set_tinfo_property(a2, 2, 12) )
    {
      if ( (debug & 0x400000) != 0 )
        sub_29350();
      sub_29830();
    }
  }
  else
  {
    v40 = 0;
  }
  v9 = v42;
  if ( v42 )
  {
    v10 = v43;
    if ( (_QWORD)v43 )
    {
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v9 + 144 * v11);
        clear_tinfo_t(v12 + 8);
        v13 = v12[5];
        if ( v13 )
        {
          v12[6] = 0;
          qfree(v13);
        }
        v14 = v12[2];
        if ( v14 )
        {
          v12[3] = 0;
          qfree(v14);
        }
        ++v11;
        v9 = v42;
      }
      while ( v10 != v11 );
    }
    *(_QWORD *)&v43 = 0;
    qfree(v9);
  }
  return v40;
}

