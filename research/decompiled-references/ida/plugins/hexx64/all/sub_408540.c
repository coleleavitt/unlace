unsigned __int64 __fastcall sub_408540(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  double v5; // xmm0_8
  _DWORD *v6; // rsi
  __int64 v7; // r12
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  void *v15; // r15
  unsigned __int64 v16; // r14
  __m128i v17; // xmm0
  __int64 v18; // rdi
  __m128i *v19; // r14
  unsigned __int64 v20; // r15
  _QWORD *v21; // r12
  _QWORD *v22; // r14
  unsigned __int64 v23; // rdx
  _QWORD *v24; // rax
  char v25; // cl
  __m128i v27; // [rsp-E0h] [rbp-E8h] BYREF
  __int8 *v28; // [rsp-D0h] [rbp-D8h]
  _QWORD *v29; // [rsp-C8h] [rbp-D0h]
  __int64 v30[2]; // [rsp-C0h] [rbp-C8h] BYREF
  __int64 v31; // [rsp-B0h] [rbp-B8h] BYREF
  __int128 v32; // [rsp-A8h] [rbp-B0h]
  __int128 v33; // [rsp-90h] [rbp-98h] BYREF
  __m128i si128; // [rsp-80h] [rbp-88h] BYREF
  __int64 v35; // [rsp-70h] [rbp-78h] BYREF
  __int128 v36; // [rsp-68h] [rbp-70h]
  __int64 v37; // [rsp-58h] [rbp-60h]
  __int64 v38; // [rsp-50h] [rbp-58h]
  int v39; // [rsp-48h] [rbp-50h]
  unsigned __int64 v40; // [rsp-38h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v35 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_4247F0);
  v33 = 1u;
  v37 = 0;
  v38 = 0;
  v3 = *(_QWORD *)(a1 + 800);
  v39 = 0;
  v36 = 0;
  v4 = *(_QWORD *)(v3 + 112);
  v28 = &si128.m128i_i8[8];
  *(_QWORD *)&v5 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(v4 + 84)), _mm_cvtsi32_si128(a2)).m128i_u64[0];
  *(double *)((char *)&v33 + 4) = v5;
  copy_tinfo_t();
  v6 = (_DWORD *)v35;
  if ( *((_QWORD *)&v36 + 1) <= 4u )
  {
    v35 = qvector_reserve((__int64)&v35, v35, 5, 1);
    v6 = (_DWORD *)v35;
  }
  *(_QWORD *)&v36 = 5;
  *v6 = 1702521203;
  *(_BYTE *)(v35 + 4) = 0;
  v7 = sub_335B10(
         *(_QWORD *)(a1 + 8),
         *(_QWORD *)(a1 + 40),
         (__int64)"alloca",
         *(_QWORD *)(a1 + 800) + 232LL,
         1,
         (__int64)&v33,
         v5,
         (__m128)0LL,
         0);
  v8 = *(_QWORD **)(v7 + 72);
  v9 = v8[14];
  v29 = v8;
  v10 = v8;
  v8[13] = 0;
  if ( v9 )
  {
    v8[15] = 0;
    qfree(v9);
    v10[14] = 0;
    v10[16] = 0;
  }
  v11 = *(_QWORD *)(a1 + 800);
  v30[0] = 0;
  v30[1] = 0;
  sub_63E80(v30, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 60LL), *(_DWORD *)(*(_QWORD *)(v11 + 112) + 84LL), v5);
  v31 = 0;
  v32 = 0;
  sub_64280(v29 + 12, v30, 0.0);
  sub_316CB0(v29 + 14, (const void **)&v31, v12, v13);
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    qfree(v31);
  }
  qfree(v30[0]);
  sub_648D0(v29 + 17, (const void **)v29 + 12, 0.0);
  v15 = nullptr;
  v16 = v29[15];
  if ( v16 )
  {
    v27.m128i_i64[0] = 16 * v16;
    v15 = (void *)qalloc_or_throw(16 * v16, (__int64)(v29 + 12), 16 * v16, v14);
    memcpy(v15, (const void *)v29[14], 16 * v16);
  }
  v17 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
  v18 = v29[19];
  if ( v18 )
  {
    v29[20] = 0;
    v27 = v17;
    qfree(v18);
    v17 = _mm_load_si128(&v27);
  }
  v19 = (__m128i *)v29;
  v29[19] = v15;
  v19[10] = v17;
  sub_330290((__int64)v19, *(_QWORD *)(a1 + 8), *(double *)v17.m128i_i64);
  v19[17].m128i_i32[3] = 11;
  sub_B5290(*(_QWORD **)(a1 + 16), v7, *(double *)v17.m128i_i64);
  v20 = *(_QWORD *)(a1 + 40);
  v21 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 920LL);
  v22 = v21 + 8;
  v29 = (_QWORD *)v21[9];
  if ( v29 )
  {
    while ( 1 )
    {
      v23 = v29[4];
      v24 = (_QWORD *)v29[2];
      v25 = 1;
      if ( v20 >= v23 )
      {
        v24 = (_QWORD *)v29[3];
        v25 = 0;
      }
      if ( !v24 )
        break;
      v29 = v24;
    }
    if ( v25 )
    {
      if ( v29 == (_QWORD *)v21[10] )
      {
LABEL_22:
        v27.m128i_i8[0] = 1;
        if ( v22 != v29 )
          v27.m128i_i8[0] = v20 < v29[4];
        goto LABEL_24;
      }
      v23 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v23 >= v20 )
      goto LABEL_19;
    goto LABEL_22;
  }
  if ( v22 == (_QWORD *)v21[10] || *(_QWORD *)(std::_Rb_tree_decrement() + 32) < v20 )
  {
    v29 = v21 + 8;
    v27.m128i_i8[0] = 1;
LABEL_24:
    *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(a1 + 40);
    std::_Rb_tree_insert_and_rebalance();
    ++v21[12];
  }
LABEL_19:
  *(_BYTE *)(a1 + 896) = 1;
  cleanup_argloc();
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  clear_tinfo_t();
  sub_11CDA0((__int64)&v33);
  return v40 - __readfsqword(0x28u);
}

