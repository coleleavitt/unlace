_QWORD *__fastcall sub_F940(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r15
  _QWORD *v4; // rax
  unsigned __int64 v5; // rdi
  _QWORD *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // r8
  __m128i si128; // xmm1
  _QWORD *v12; // r13
  __m128i *v13; // rbp
  __m128i *v14; // rbx
  __m128i *v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  _BOOL8 v20; // rdi
  __int64 v22; // rdi
  _QWORD *v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-48h]
  unsigned __int64 v26; // [rsp+0h] [rbp-48h]
  unsigned __int64 v27; // [rsp+0h] [rbp-48h]

  v2 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
  {
    v6 = a1 + 1;
    goto LABEL_8;
  }
  v5 = *a2;
  v6 = v2;
  do
  {
    while ( 1 )
    {
      v7 = v4[2];
      v8 = v4[3];
      if ( v4[4] < v5 )
        break;
      v6 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v7 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v8 );
LABEL_6:
  if ( v2 == v6 || v5 < v6[4] )
  {
LABEL_8:
    v9 = (_QWORD *)operator new(0xB98u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_1F660);
    v12 = v9;
    v13 = (__m128i *)(v9 + 5);
    v9[4] = *a2;
    v14 = (__m128i *)(v9 + 371);
    memset(v9 + 5, 0, 0xB70u);
    v15 = (__m128i *)(v9 + 5);
    do
    {
      v16 = 0;
      v15[1].m128i_i64[0] = 0;
      v15 += 3;
      v15[-3] = si128;
      *(__m128i *)((char *)&v15[-2] + 8) = 0;
      v15[-1].m128i_i16[4] = 0;
    }
    while ( v14 != v15 );
    v17 = v12[4];
    if ( v2 == v6 )
    {
      if ( a1[5] )
      {
        v16 = a1[4];
        v6 = nullptr;
        if ( *(_QWORD *)(v16 + 32) < v17 )
        {
LABEL_16:
          if ( v16 )
          {
            if ( v6 || v2 == (_QWORD *)v16 )
            {
              v20 = 1;
LABEL_20:
              v6 = v12;
              std::_Rb_tree_insert_and_rebalance(v20, v12, v16, v2, 0.0);
              ++a1[5];
              return v6 + 5;
            }
            v18 = *(_QWORD *)(v16 + 32);
LABEL_37:
            v20 = v17 < v18;
            goto LABEL_20;
          }
          goto LABEL_23;
        }
      }
    }
    else
    {
      v18 = v6[4];
      if ( v17 >= v18 )
      {
        if ( v18 < v17 )
        {
          if ( (_QWORD *)a1[4] != v6 )
          {
            v27 = v12[4];
            v24 = std::_Rb_tree_increment(v6, 0.0);
            v17 = v27;
            v16 = v24;
            if ( v27 >= *(_QWORD *)(v24 + 32) )
              goto LABEL_30;
            if ( v6[3] )
            {
              v6 = (_QWORD *)v24;
              goto LABEL_16;
            }
          }
          v16 = (unsigned __int64)v6;
          if ( v6 )
            goto LABEL_37;
        }
LABEL_23:
        if ( v12 )
        {
          while ( v13 != v14 )
          {
            while ( 1 )
            {
              v22 = v14[-2].m128i_i64[0];
              v14 -= 3;
              if ( !v22 )
                break;
              v14[1].m128i_i64[1] = 0;
              qfree(v22);
              if ( v13 == v14 )
                goto LABEL_27;
            }
          }
LABEL_27:
          operator delete(v12, 0xB98u);
        }
        return v6 + 5;
      }
      v16 = (unsigned __int64)v6;
      if ( (_QWORD *)a1[3] == v6 )
        goto LABEL_16;
      v25 = v12[4];
      v19 = std::_Rb_tree_decrement(v6, v18, v6, v17, v10);
      v17 = v25;
      v16 = v19;
      if ( *(_QWORD *)(v19 + 32) < v25 )
      {
        if ( *(_QWORD *)(v19 + 24) )
          v16 = (unsigned __int64)v6;
        else
          v6 = nullptr;
        goto LABEL_16;
      }
    }
LABEL_30:
    v26 = v17;
    v23 = sub_BBC0((__int64)a1, v17, v16, v17, v10);
    v17 = v26;
    v6 = v23;
    goto LABEL_16;
  }
  return v6 + 5;
}
