__int64 *__fastcall sub_24BE0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 *v3; // rax
  __int64 *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r13
  _QWORD *v9; // r15
  __int64 v10; // rbp
  __int64 *v11; // rbp
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 *v16; // rax
  __int64 v17; // r15
  __int64 v18; // r14
  __int64 v19; // r12
  size_t v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rbx
  __m128i *v24; // rbx
  __int64 v25; // r13
  size_t v26; // r15
  size_t v27; // r15
  __int32 v28; // eax
  __m128i v29; // xmm0
  __m128i v30; // xmm0
  size_t v31; // r15
  void *v32; // rax
  __int64 v34; // rax
  __int64 v35; // rdi
  _QWORD *v36; // r14
  __int64 v37; // r15
  __int64 v38; // r13
  __int64 i; // rbp
  _QWORD *v40; // rbx
  void *v41; // rax
  void *v42; // rax
  __int64 *v43; // [rsp+10h] [rbp-78h]
  __m128i v44; // [rsp+20h] [rbp-68h] BYREF
  __int64 v45; // [rsp+30h] [rbp-58h]
  __int64 v46; // [rsp+38h] [rbp-50h]
  unsigned __int64 v47; // [rsp+48h] [rbp-40h]

  v3 = (__int64 *)a1[49];
  v47 = __readfsqword(0x28u);
  v44.m128i_i64[0] = a2;
  v5 = a1 + 48;
  v46 = 0;
  if ( v3 )
  {
    do
    {
      while ( 1 )
      {
        v6 = v3[2];
        v7 = v3[3];
        if ( v3[4] < a2 )
          break;
        v5 = v3;
        v3 = (__int64 *)v3[2];
        if ( !v6 )
          goto LABEL_6;
      }
      v3 = (__int64 *)v3[3];
    }
    while ( v7 );
LABEL_6:
    if ( a1 + 48 != v5 && a2 >= v5[4] )
      return v5 + 5;
  }
  v44.m128i_i64[1] = 0;
  v45 = 0;
  v43 = sub_24990(a1 + 47, v5, &v44);
  v8 = v45;
  if ( v44.m128i_i64[1] )
  {
    v9 = (_QWORD *)v44.m128i_i64[1];
    v10 = 0;
    if ( v45 )
    {
      do
      {
        if ( v9[8] )
        {
          v9[9] = 0;
          qfree();
        }
        if ( v9[5] )
        {
          v9[6] = 0;
          qfree();
        }
        if ( v9[2] )
        {
          v9[3] = 0;
          qfree();
        }
        ++v10;
        v9 += 14;
      }
      while ( v8 != v10 );
    }
    qfree();
  }
  v11 = v43 + 5;
  if ( !(unsigned __int8)sub_4C7E0(a1[2], 0, v43 + 5, a2) || !(unsigned __int8)sub_4D580(a1[2], &v44, a2) )
    goto LABEL_36;
  if ( !v44.m128i_i64[0] )
    return v11;
  v16 = (__int64 *)sub_24BE0((_DWORD)a1, v44.m128i_i32[0], v12, v13, v14, v15);
  if ( v16 )
  {
    v17 = 112 * v16[1];
    v18 = 0x6DB6DB6DB6DB6DB7LL * (v17 >> 4);
    if ( v18 )
    {
      v19 = *v16;
      v20 = 0;
      v21 = v43[6];
      v22 = v43[5];
      v23 = 112 * v21;
      if ( v43[7] < (unsigned __int64)(v18 + v21) )
      {
        v22 = qvector_reserve();
        v43[5] = v22;
        v20 = 112 * v43[6] - v23;
      }
      v24 = (__m128i *)(v22 + v23);
      v25 = v19 + v17;
      memmove(&v24[(unsigned __int64)v17 / 0x10], v24, v20);
      if ( v19 != v19 + v17 )
      {
        do
        {
          v30 = _mm_loadu_si128((const __m128i *)v19);
          v24[1].m128i_i64[0] = 0;
          *(__m128i *)((char *)&v24[1] + 8) = 0;
          *v24 = v30;
          v31 = *(_QWORD *)(v19 + 24);
          if ( v31 )
          {
            v32 = (void *)qalloc_or_throw();
            v24[2].m128i_i64[0] = v31;
            v24[1].m128i_i64[0] = (__int64)v32;
            memcpy(v32, *(const void **)(v19 + 16), v31);
            v24[1].m128i_i64[1] = v31;
          }
          v24[2].m128i_i64[1] = 0;
          v24[3] = 0;
          v26 = *(_QWORD *)(v19 + 48);
          if ( v26 )
          {
            v42 = (void *)qalloc_or_throw();
            v24[2].m128i_i64[1] = (__int64)v42;
            v24[3].m128i_i64[1] = v26;
            memcpy(v42, *(const void **)(v19 + 40), v26);
            v24[3].m128i_i64[0] = v26;
          }
          v24[4].m128i_i64[0] = 0;
          *(__m128i *)((char *)&v24[4] + 8) = 0;
          v27 = *(_QWORD *)(v19 + 72);
          if ( v27 )
          {
            v41 = (void *)qalloc_or_throw();
            v24[4].m128i_i64[0] = (__int64)v41;
            v24[5].m128i_i64[0] = v27;
            memcpy(v41, *(const void **)(v19 + 64), v27);
            v24[4].m128i_i64[1] = v27;
          }
          v28 = *(_DWORD *)(v19 + 88);
          v29 = _mm_loadu_si128((const __m128i *)(v19 + 96));
          v19 += 112;
          v24 += 7;
          v24[-2].m128i_i32[2] = v28;
          v24[-1] = v29;
        }
        while ( v25 != v19 );
      }
      v43[6] += v18;
    }
  }
  else
  {
LABEL_36:
    v34 = std::_Rb_tree_rebalance_for_erase();
    v35 = *(_QWORD *)(v34 + 40);
    v36 = (_QWORD *)v34;
    if ( v35 )
    {
      v37 = *(_QWORD *)(v34 + 48);
      if ( v37 )
      {
        v38 = 0;
        for ( i = 0; i != v37; ++i )
        {
          v40 = (_QWORD *)(v35 + v38);
          if ( *(_QWORD *)(v35 + v38 + 64) )
          {
            v40[9] = 0;
            qfree();
          }
          if ( v40[5] )
          {
            v40[6] = 0;
            qfree();
          }
          if ( v40[2] )
          {
            v40[3] = 0;
            qfree();
          }
          v35 = v36[5];
          v38 += 112;
        }
      }
      v36[6] = 0;
      qfree();
    }
    v11 = nullptr;
    operator delete(v36, 0x40u);
    --a1[52];
  }
  return v11;
}

