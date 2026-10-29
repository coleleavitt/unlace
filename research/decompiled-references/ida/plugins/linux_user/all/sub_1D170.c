__int64 *__fastcall sub_1D170(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __m128i *v4; // rax
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  __m128i *v7; // rbp
  __m128i v8; // xmm2
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __m128 v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __m128i v17; // xmm0
  __int64 v18; // r14
  __int64 v19; // r15
  __m128i v20; // xmm1
  __int32 v21; // eax
  _QWORD *v22; // rbx
  unsigned __int64 v23; // rsi
  _QWORD *v24; // rdx
  __int64 v25; // rax
  __int64 *v26; // r12
  __int64 v27; // rbx
  _QWORD *v28; // r13
  __int64 v29; // rdi
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+0h] [rbp-48h]
  unsigned __int64 v33; // [rsp+8h] [rbp-40h]

  v4 = (__m128i *)operator new(0xD0u);
  v5 = _mm_loadu_si128((const __m128i *)a3);
  v6 = _mm_loadu_si128((const __m128i *)(a3 + 32));
  v7 = v4;
  v8 = _mm_loadu_si128((const __m128i *)(a3 + 56));
  v4[2] = v5;
  v9 = *(_QWORD *)(a3 + 16);
  v7[4] = v6;
  v7[3].m128i_i64[0] = v9;
  v10 = *(_QWORD *)(a3 + 24);
  *(_OWORD *)(a3 + 32) = 0;
  v7[3].m128i_i64[1] = v10;
  v11 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 24) = 0;
  v7[5].m128i_i64[0] = v11;
  v12 = *(_QWORD *)(a3 + 88);
  *(_QWORD *)(a3 + 48) = 0;
  *(__m128i *)((char *)v7 + 88) = v8;
  *(_OWORD *)(a3 + 56) = 0;
  if ( v12 )
  {
    v13 = _mm_loadh_ps((const double *)(a3 + 96));
    v7[7].m128i_i32[0] = *(_DWORD *)(a3 + 80);
    v14 = *(_QWORD *)(a3 + 104);
    *(__m128 *)((char *)v7 + 120) = v13;
    v7[8].m128i_i64[1] = v14;
    *(_QWORD *)(v12 + 8) = v7 + 7;
    v15 = *(_QWORD *)(a3 + 112);
    *(_QWORD *)(a3 + 88) = 0;
    v16 = v7[2].m128i_u64[0];
    v7[9].m128i_i64[0] = v15;
    *(_QWORD *)(a3 + 96) = a3 + 80;
    *(_QWORD *)(a3 + 104) = a3 + 80;
    *(_QWORD *)(a3 + 112) = 0;
  }
  else
  {
    v16 = v5.m128i_i64[0];
    v7[7].m128i_i32[0] = 0;
    v7[7].m128i_i64[1] = 0;
    v7[8].m128i_i64[0] = (__int64)v7[7].m128i_i64;
    v7[8].m128i_i64[1] = (__int64)v7[7].m128i_i64;
    v7[9].m128i_i64[0] = 0;
  }
  v17 = _mm_loadu_si128((const __m128i *)(a3 + 128));
  v18 = *(_QWORD *)(a3 + 120);
  *(_QWORD *)(a3 + 120) = 0;
  v19 = *(_QWORD *)(a3 + 144);
  v20 = _mm_loadu_si128((const __m128i *)(a3 + 152));
  *(_QWORD *)(a3 + 144) = 0;
  v21 = *(_DWORD *)(a3 + 168);
  v7[10] = v17;
  *(_OWORD *)(a3 + 128) = 0;
  *(_OWORD *)(a3 + 152) = 0;
  v22 = a2;
  v7[9].m128i_i64[1] = v18;
  v7[11].m128i_i64[0] = v19;
  v7[12].m128i_i32[2] = v21;
  *(__m128i *)((char *)v7 + 184) = v20;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v24 = (_QWORD *)a1[4];
      v22 = nullptr;
      if ( v24[4] < v16 )
        goto LABEL_8;
    }
LABEL_7:
    v22 = sub_10600((__int64)a1, v16);
    goto LABEL_8;
  }
  v23 = a2[4];
  if ( v16 >= v23 )
  {
    if ( v23 >= v16 )
      goto LABEL_11;
    if ( (_QWORD *)a1[4] == v22 )
    {
      if ( v22 )
        goto LABEL_9;
      goto LABEL_11;
    }
    v33 = v16;
    v31 = std::_Rb_tree_increment();
    v16 = v33;
    v24 = (_QWORD *)v31;
    if ( v33 < *(_QWORD *)(v31 + 32) )
    {
      if ( !v22[3] )
      {
        if ( v22 )
          goto LABEL_9;
        goto LABEL_11;
      }
      v22 = (_QWORD *)v31;
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  v24 = v22;
  if ( (_QWORD *)a1[3] == v22 )
    goto LABEL_8;
  v32 = v16;
  v25 = std::_Rb_tree_decrement();
  v16 = v32;
  v24 = (_QWORD *)v25;
  if ( *(_QWORD *)(v25 + 32) >= v32 )
    goto LABEL_7;
  if ( *(_QWORD *)(v25 + 24) )
    v24 = v22;
  else
    v22 = nullptr;
LABEL_8:
  if ( v24 )
  {
LABEL_9:
    v26 = (__int64 *)v7;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v26;
  }
LABEL_11:
  v26 = v22;
  if ( v7 )
  {
    if ( v19 )
    {
      v7[11].m128i_i64[1] = 0;
      qfree();
      v18 = v7[9].m128i_i64[1];
    }
    if ( v18 )
    {
      v7[10].m128i_i64[0] = 0;
      qfree();
    }
    v27 = v7[7].m128i_i64[1];
    while ( v27 )
    {
      v28 = (_QWORD *)v27;
      sub_122F0(*(_QWORD **)(v27 + 24));
      v29 = *(_QWORD *)(v27 + 40);
      v27 = *(_QWORD *)(v27 + 16);
      if ( v29 )
      {
        v28[6] = 0;
        qfree();
      }
      operator delete(v28, 0x40u);
    }
    if ( v7[5].m128i_i64[0] )
    {
      v7[5].m128i_i64[1] = 0;
      qfree();
    }
    if ( v7[3].m128i_i64[1] )
    {
      v7[4].m128i_i64[0] = 0;
      qfree();
    }
    operator delete(v7, 0xD0u);
  }
  return v26;
}

