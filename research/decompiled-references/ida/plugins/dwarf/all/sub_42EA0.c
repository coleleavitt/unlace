const __m128i *__fastcall sub_42EA0(_QWORD *a1, __int64 a2, const __m128i *a3, const __m128i *a4)
{
  __int64 v5; // rax
  _QWORD *v6; // r15
  _QWORD *v7; // rbp
  const __m128i *v8; // rbx
  __int64 v9; // r14
  _QWORD *v10; // r13
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __m128i *v14; // r14
  __m128i *v15; // r15
  __m128i *v16; // rbp
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // r14
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rdi
  __m128i *v26; // rax
  __m128i v27; // xmm0
  __m128i *v28; // r12
  __m128i *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rax
  __m128i *v33; // rdx
  __int64 v34; // rdi
  unsigned int v35; // eax
  unsigned int v36; // eax
  _QWORD *v38; // [rsp+10h] [rbp-48h]
  __m128i *v39; // [rsp+10h] [rbp-48h]
  _QWORD *v40; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a2 + 224);
  if ( (v5 & 0x7FFFFFFFFFFFFFFFLL) != 0 && v5 != -1 )
    goto LABEL_5;
  do
  {
    if ( under_debugger )
      BUG();
    a1 = (_QWORD *)(&stru_76F8 + 22);
    interr(30478);
LABEL_5:
    v6 = (_QWORD *)a1[2];
    v7 = a1;
    v8 = (const __m128i *)a2;
    v38 = a1 + 1;
    v9 = a2 + 224;
    v10 = a1 + 1;
    if ( v6 )
    {
      do
      {
        while ( 1 )
        {
          v11 = sub_849A0(v6 + 4, v9);
          v12 = v6[2];
          v13 = v6[3];
          if ( v11 < 0 )
            break;
          v10 = v6;
          v6 = (_QWORD *)v6[2];
          if ( !v12 )
            goto LABEL_10;
        }
        v6 = (_QWORD *)v6[3];
      }
      while ( v13 );
LABEL_10:
      if ( v38 != v10 )
      {
        a2 = (__int64)(v10 + 4);
        if ( (int)sub_849A0(v9, v10 + 4) >= 0 )
          continue;
      }
    }
    v17 = operator new(0x60u);
    v18 = _mm_loadu_si128(v8 + 14);
    a2 = (__int64)v10;
    v19 = v17;
    *(_DWORD *)(v17 + 56) = 0;
    v17 += 56;
    *(__m128i *)(v17 - 24) = v18;
    *(_QWORD *)(v17 + 8) = 0;
    *(_QWORD *)(v19 + 72) = v17;
    *(_QWORD *)(v19 + 80) = v17;
    *(_QWORD *)(v19 + 88) = 0;
    v22 = sub_42B70(a1, v10, v19 + 32, v20, v21);
    v10 = (_QWORD *)v22;
    if ( v23 )
    {
      if ( v22 || v38 == v23 )
      {
        v24 = 1;
      }
      else
      {
        v40 = v23;
        v35 = sub_849A0(v19 + 32, v23 + 4);
        v23 = v40;
        v24 = v35 >> 31;
      }
      a2 = v19;
      v10 = (_QWORD *)v19;
      std::_Rb_tree_insert_and_rebalance(v24, v19, v23, v38);
      ++v7[5];
    }
    else if ( v19 )
    {
      sub_29190(*(_QWORD **)(v19 + 64));
      a2 = 96;
      operator delete((void *)v19, 0x60u);
    }
  }
  while ( (a3[14].m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) == 0 || a3[14].m128i_i64[0] == -1 );
  v14 = (__m128i *)v10[8];
  v15 = (__m128i *)(v10 + 7);
  v16 = (__m128i *)(v10 + 7);
  if ( !v14 )
    goto LABEL_28;
  do
  {
    if ( (int)sub_849A0(&v14[2], &a3[14]) >= 0 )
    {
      v16 = v14;
      v14 = (__m128i *)v14[1].m128i_i64[0];
    }
    else
    {
      v14 = (__m128i *)v14[1].m128i_i64[1];
    }
  }
  while ( v14 );
  if ( v16 == v15 || (int)sub_849A0(&a3[14], &v16[2]) < 0 )
  {
LABEL_28:
    v26 = (__m128i *)operator new(0x40u);
    v27 = _mm_loadu_si128(a3 + 14);
    v26[3].m128i_i64[0] = 0;
    v28 = v26 + 2;
    v29 = v26;
    v26[3].m128i_i64[1] = 0;
    v26[2] = v27;
    v32 = sub_42D70(v10 + 6, v16, (__int64)v26[2].m128i_i64, v30, v31);
    v16 = (__m128i *)v32;
    if ( v33 )
    {
      if ( v15 == v33 || v32 )
      {
        v34 = 1;
      }
      else
      {
        v39 = v33;
        v36 = sub_849A0(v28, &v33[2]);
        v33 = v39;
        v34 = v36 >> 31;
      }
      v16 = v29;
      std::_Rb_tree_insert_and_rebalance(v34, v29, v33, v10 + 7);
      ++v10[11];
    }
    else if ( v29 )
    {
      operator delete(v29, 0x40u);
    }
  }
  v16[3] = _mm_loadu_si128(a4);
  return a4;
}

