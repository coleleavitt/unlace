void __fastcall sub_4E160(_QWORD *a1, __int64 a2)
{
  void *v2; // r13
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rbp
  _QWORD *v9; // r11
  __int64 v10; // rax
  void *v11; // r12
  int v12; // r10d
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r15
  _QWORD *v19; // r11
  int v20; // r10d
  __int64 v21; // rcx
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  unsigned __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rax
  size_t v29; // r12
  size_t v30; // rbp
  __int64 v31; // rax
  __m128i n; // [rsp+8h] [rbp-100h] BYREF
  __m128i v33; // [rsp+18h] [rbp-F0h] BYREF
  _QWORD *v34; // [rsp+28h] [rbp-E0h]
  int v35; // [rsp+34h] [rbp-D4h]
  _QWORD *v36; // [rsp+38h] [rbp-D0h]
  __int64 v37; // [rsp+40h] [rbp-C8h]
  _QWORD *v38; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v39; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v40; // [rsp+58h] [rbp-B0h]
  __int64 v41; // [rsp+60h] [rbp-A8h]
  _QWORD *v42; // [rsp+98h] [rbp-70h]
  int v43; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v44; // [rsp+C8h] [rbp-40h]

  v2 = nullptr;
  v44 = __readfsqword(0x28u);
  sub_4DED0((__int64)a1, a2);
  v5 = *(_QWORD *)a2;
  v33.m128i_i64[1] = *(_QWORD *)(a2 + 8);
  v41 = v33.m128i_i64[1];
  v6 = *(_QWORD *)(a2 + 24);
  v39 = v5;
  v40 = v5;
  v33.m128i_i64[0] = v6;
  if ( v6 )
  {
    v30 = v6;
    v2 = (void *)qalloc_or_throw();
    memcpy(v2, *(const void **)(a2 + 16), v30);
  }
  v7 = *(_QWORD *)(a2 + 48);
  v8 = nullptr;
  n.m128i_i64[1] = v7;
  if ( v7 )
  {
    v29 = v7;
    v8 = (void *)qalloc_or_throw();
    memcpy(v8, *(const void **)(a2 + 40), v29);
  }
  v9 = *(_QWORD **)(a2 + 64);
  v10 = *(_QWORD *)(a2 + 80);
  v11 = nullptr;
  v42 = v9;
  n.m128i_i64[0] = v10;
  if ( v10 )
  {
    v34 = v9;
    v11 = (void *)qalloc_or_throw();
    memcpy(v11, *(const void **)(a2 + 72), n.m128i_u64[0]);
    v9 = v34;
  }
  v12 = *(_DWORD *)(a2 + 96);
  v13 = (_QWORD *)a1[177];
  v14 = a1 + 176;
  v15 = (__int64)(a1 + 176);
  v43 = *(_DWORD *)(a2 + 96);
  if ( !v13 )
    goto LABEL_21;
  do
  {
    while ( 1 )
    {
      v16 = v13[2];
      v17 = v13[3];
      if ( v13[4] >= v5 )
        break;
      v13 = (_QWORD *)v13[3];
      if ( !v17 )
        goto LABEL_12;
    }
    v15 = (__int64)v13;
    v13 = (_QWORD *)v13[2];
  }
  while ( v16 );
LABEL_12:
  if ( v14 == (_QWORD *)v15 || v5 < *(_QWORD *)(v15 + 32) )
  {
LABEL_21:
    v37 = v15;
    v36 = v9;
    v35 = v12;
    v34 = a1 + 176;
    v38 = a1 + 175;
    v18 = operator new(0x90u);
    v19 = v36;
    v20 = v35;
    v21 = (__int64)(a1 + 176);
    *(__m128i *)(v18 + 32) = _mm_unpacklo_epi64((__m128i)v5, (__m128i)v5);
    v22 = _mm_loadl_epi64(&v33);
    v23 = v33.m128i_i64[1];
    *(_QWORD *)(v18 + 56) = v2;
    *(_QWORD *)(v18 + 48) = v23;
    *(__m128i *)(v18 + 64) = _mm_unpacklo_epi64(v22, v22);
    v24 = _mm_loadl_epi64((const __m128i *)&n.m128i_u64[1]);
    *(_QWORD *)(v18 + 80) = v8;
    *(_QWORD *)(v18 + 104) = v19;
    *(__m128i *)(v18 + 88) = _mm_unpacklo_epi64(v24, v24);
    v25 = _mm_loadl_epi64(&n);
    *(_QWORD *)(v18 + 112) = v11;
    *(_DWORD *)(v18 + 136) = v20;
    *(__m128i *)(v18 + 120) = _mm_unpacklo_epi64(v25, v25);
    if ( a1 + 176 == (_QWORD *)v15 )
    {
      if ( a1[180] )
      {
        v27 = a1[179];
        if ( *(_QWORD *)(v27 + 32) < v5 )
          goto LABEL_27;
      }
    }
    else
    {
      v26 = *(_QWORD *)(v15 + 32);
      if ( v5 >= v26 )
      {
        if ( v26 >= v5 )
          goto LABEL_30;
        if ( a1[179] != v15 )
        {
          n.m128i_i64[0] = (__int64)(a1 + 176);
          n.m128i_i64[1] = v15;
          v31 = std::_Rb_tree_increment();
          v21 = n.m128i_i64[0];
          v27 = v31;
          if ( v5 >= *(_QWORD *)(v31 + 32) )
            goto LABEL_40;
          v15 = n.m128i_i64[1];
          if ( *(_QWORD *)(n.m128i_i64[1] + 24) )
            goto LABEL_27;
        }
        if ( v15 )
          goto LABEL_28;
        goto LABEL_30;
      }
      v27 = v15;
      if ( a1[178] == v15 )
        goto LABEL_27;
      n.m128i_i64[0] = (__int64)(a1 + 176);
      n.m128i_i64[1] = v15;
      v28 = std::_Rb_tree_decrement();
      v21 = n.m128i_i64[0];
      v27 = v28;
      if ( *(_QWORD *)(v28 + 32) < v5 )
      {
        if ( *(_QWORD *)(v28 + 24) )
          v27 = n.m128i_i64[1];
LABEL_27:
        if ( v27 )
        {
LABEL_28:
          std::_Rb_tree_insert_and_rebalance();
          ++a1[180];
          return;
        }
LABEL_30:
        if ( v18 )
        {
          if ( v11 )
          {
            *(_QWORD *)(v18 + 120) = 0;
            qfree();
            v8 = *(void **)(v18 + 80);
          }
          if ( v8 )
          {
            *(_QWORD *)(v18 + 88) = 0;
            qfree();
          }
          if ( *(_QWORD *)(v18 + 56) )
          {
            *(_QWORD *)(v18 + 64) = 0;
            qfree();
          }
          operator delete((void *)v18, 0x90u);
        }
        return;
      }
    }
LABEL_40:
    n.m128i_i64[0] = v21;
    sub_3D880((__int64)(a1 + 175), v5);
    goto LABEL_27;
  }
  if ( v11 )
    qfree();
  if ( v8 )
    qfree();
  if ( v2 )
    qfree();
}

