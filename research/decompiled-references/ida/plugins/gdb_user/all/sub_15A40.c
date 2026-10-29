_QWORD *__fastcall sub_15A40(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rbx
  unsigned __int64 v17; // rsi
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // [rsp+0h] [rbp-48h]
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]

  v4 = operator new(0x90u);
  v5 = _mm_loadu_si128((const __m128i *)a3);
  v6 = _mm_loadu_si128((const __m128i *)(a3 + 56));
  v7 = v4;
  v8 = *(_QWORD *)(a3 + 48);
  v9 = *(_QWORD *)(a3 + 80);
  *(_QWORD *)(a3 + 48) = 0;
  *(__m128i *)(v4 + 32) = v5;
  v10 = *(_QWORD *)(a3 + 16);
  v11 = v5.m128i_i64[0];
  v12 = _mm_loadu_si128((const __m128i *)(a3 + 32));
  *(__m128i *)(v7 + 88) = v6;
  v13 = _mm_loadu_si128((const __m128i *)(a3 + 88));
  *(_QWORD *)(v7 + 48) = v10;
  v14 = *(_QWORD *)(a3 + 24);
  *(__m128i *)(v7 + 64) = v12;
  *(_QWORD *)(v7 + 56) = v14;
  v15 = *(_QWORD *)(a3 + 72);
  *(_QWORD *)(a3 + 24) = 0;
  *(_QWORD *)(v7 + 104) = v15;
  LODWORD(v15) = *(_DWORD *)(a3 + 104);
  *(_QWORD *)(a3 + 80) = 0;
  *(_OWORD *)(a3 + 32) = 0;
  *(_OWORD *)(a3 + 56) = 0;
  *(_OWORD *)(a3 + 88) = 0;
  v16 = a2;
  *(_QWORD *)(v7 + 80) = v8;
  *(_QWORD *)(v7 + 112) = v9;
  *(_DWORD *)(v7 + 136) = v15;
  *(__m128i *)(v7 + 120) = v13;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v18 = (_QWORD *)a1[4];
      v16 = nullptr;
      if ( v18[4] < v11 )
        goto LABEL_6;
    }
LABEL_5:
    v16 = sub_12A40((__int64)a1, v11);
    goto LABEL_6;
  }
  v17 = a2[4];
  if ( v11 >= v17 )
  {
    if ( v17 >= v11 )
      goto LABEL_9;
    if ( (_QWORD *)a1[4] == v16 )
    {
      if ( v16 )
        goto LABEL_7;
      goto LABEL_9;
    }
    v23 = v11;
    v21 = std::_Rb_tree_increment();
    v11 = v23;
    v18 = (_QWORD *)v21;
    if ( v23 < *(_QWORD *)(v21 + 32) )
    {
      if ( !v16[3] )
      {
        if ( v16 )
          goto LABEL_7;
        goto LABEL_9;
      }
      v16 = (_QWORD *)v21;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v18 = v16;
  if ( (_QWORD *)a1[3] == v16 )
    goto LABEL_6;
  v22 = v11;
  v19 = std::_Rb_tree_decrement();
  v11 = v22;
  v18 = (_QWORD *)v19;
  if ( *(_QWORD *)(v19 + 32) >= v22 )
    goto LABEL_5;
  if ( *(_QWORD *)(v19 + 24) )
    v18 = v16;
  else
    v16 = nullptr;
LABEL_6:
  if ( v18 )
  {
LABEL_7:
    v16 = (_QWORD *)v7;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v16;
  }
LABEL_9:
  if ( v7 )
  {
    if ( v9 )
    {
      *(_QWORD *)(v7 + 120) = 0;
      qfree();
      v8 = *(_QWORD *)(v7 + 80);
    }
    if ( v8 )
    {
      *(_QWORD *)(v7 + 88) = 0;
      qfree();
    }
    if ( *(_QWORD *)(v7 + 56) )
    {
      *(_QWORD *)(v7 + 64) = 0;
      qfree();
    }
    operator delete((void *)v7, 0x90u);
  }
  return v16;
}

