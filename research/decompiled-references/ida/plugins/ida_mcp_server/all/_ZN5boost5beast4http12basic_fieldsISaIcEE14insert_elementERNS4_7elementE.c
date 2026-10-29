__int64 *__fastcall boost::beast::http::basic_fields<std::allocator<char>>::insert_element(__m128i *a1, __int64 a2)
{
  __m128i *v2; // r12
  __int64 v3; // rbp
  char *v4; // rsi
  __m128i *v5; // rbx
  __int64 v6; // r11
  int v7; // r14d
  unsigned __int64 v8; // rax
  __m128i *v9; // r10
  __int64 v10; // r15
  __int64 v12; // r13
  int v13; // r9d
  unsigned __int64 v14; // rdx
  bool v15; // cf
  char *v16; // rbp
  __int8 *v17; // rdi
  char *v18; // r9
  char *v19; // r11
  char v20; // di
  int v21; // edx
  __m128i *v22; // r15
  __m128i *v23; // r14
  _QWORD *v24; // r13
  __int64 v25; // rsi
  __m128i *v26; // rax
  __int64 *result; // rax
  __int64 *v28; // rdx
  _QWORD *v29; // rdx
  _QWORD *v30; // rdx
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  unsigned __int64 v33; // [rsp+18h] [rbp-40h]

  v2 = a1;
  v3 = a2;
  v4 = (char *)(a2 + 56);
  v5 = a1;
  v6 = a1->m128i_i64[0];
  v7 = *(unsigned __int16 *)(v3 + 48);
  v8 = v7 - 2;
  if ( !a1->m128i_i64[0] )
    goto LABEL_19;
  v9 = (__m128i *)a1->m128i_i64[0];
  v10 = a1->m128i_i64[0];
  v12 = v3;
  do
  {
    v13 = v9[2].m128i_u16[0];
    v14 = v13 - 2;
    if ( v8 < v14 )
      goto LABEL_16;
    if ( v14 < v8 )
    {
LABEL_36:
      v9 = (__m128i *)v9[1].m128i_i64[0];
    }
    else
    {
      v15 = (unsigned __int16)v13 < (unsigned __int16)v7;
      v16 = &v4[v14];
      v17 = &v9[2].m128i_i8[8];
      v18 = v4;
      if ( !v15 )
        v16 = &v4[v8];
      v19 = &v9[2].m128i_i8[8];
      if ( v4 != v16 )
      {
        v33 = v14;
        while ( 1 )
        {
          v20 = *v19;
          v21 = *v18;
          if ( (unsigned int)(v21 - 65) < 0x1A )
            LOBYTE(v21) = v21 + 32;
          if ( (unsigned int)(v20 - 65) < 0x1A )
            v20 += 32;
          if ( v20 > (char)v21 )
            break;
          if ( v20 < (char)v21 )
            goto LABEL_36;
          ++v18;
          ++v19;
          if ( v18 == v16 )
          {
            v17 = &v9[2].m128i_i8[8];
            v14 = v33;
            goto LABEL_38;
          }
        }
LABEL_16:
        v5 = v9;
        v9 = (__m128i *)v9->m128i_i64[1];
        continue;
      }
LABEL_38:
      if ( v19 != &v17[v14] )
        goto LABEL_16;
      v9 = (__m128i *)v9[1].m128i_i64[0];
    }
  }
  while ( v9 );
  v6 = v10;
  v2 = a1;
  v3 = v12;
LABEL_19:
  if ( (__m128i *)v2->m128i_i64[1] == v5 )
    goto LABEL_48;
  v22 = (__m128i *)v5->m128i_i64[1];
  v23 = (__m128i *)v5[1].m128i_i64[0];
  if ( v5->m128i_i64[0] )
  {
    if ( v22 )
    {
      if ( !v23
        || (v24 = (_QWORD *)v5[1].m128i_i64[0], v23 != v22)
        && (__m128i *)v22->m128i_i64[0] == v5
        && (__m128i *)v23->m128i_i64[0] == v5 )
      {
        v29 = (_QWORD *)v22[1].m128i_i64[0];
        if ( v29 )
        {
          do
          {
            v24 = v29;
            v29 = (_QWORD *)v29[2];
          }
          while ( v29 );
        }
        else
        {
          v24 = (_QWORD *)v5->m128i_i64[1];
        }
      }
    }
    else
    {
      v24 = (_QWORD *)v5->m128i_i64[0];
      if ( *(__m128i **)(v5->m128i_i64[0] + 8) == v5 )
      {
        do
        {
          v30 = v24;
          v24 = (_QWORD *)*v24;
        }
        while ( v30 == (_QWORD *)v24[1] );
      }
    }
  }
  else
  {
    if ( !v23 )
      BUG();
    v24 = (_QWORD *)v5[1].m128i_i64[0];
  }
  v31 = v6;
  v32 = v5->m128i_i64[0];
  if ( !(unsigned __int8)boost::beast::iequals() )
  {
LABEL_48:
    boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before(
      v2,
      v5,
      (__m128i **)(v3 + 16),
      nullptr);
    boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_insertion();
    result = (__int64 *)v2[2].m128i_i64[1];
    *(__m128i *)v3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v2[2], (__m128i)(unsigned __int64)result);
    v2[2].m128i_i64[1] = v3;
    *result = v3;
    return result;
  }
  v25 = v3 + 16;
  if ( !v32 )
    goto LABEL_42;
  if ( !v22 )
  {
LABEL_44:
    if ( v2 != v5 )
    {
      v5->m128i_i64[1] = v25;
      if ( (__m128i *)v2->m128i_i64[1] == v5 )
        v2->m128i_i64[1] = v25;
      goto LABEL_47;
    }
LABEL_55:
    v2[1].m128i_i64[0] = v25;
    *v2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v25, (__m128i)(unsigned __int64)v25);
    goto LABEL_47;
  }
  if ( v23 && (v23 == v22 || (__m128i *)v22->m128i_i64[0] != v5 || (__m128i *)v23->m128i_i64[0] != v5) )
  {
    if ( !v31 )
      goto LABEL_44;
  }
  else
  {
    v26 = (__m128i *)v22[1].m128i_i64[0];
    if ( v26 )
    {
      do
      {
        v23 = v26;
        v26 = (__m128i *)v26[1].m128i_i64[0];
      }
      while ( v26 );
    }
    else
    {
      v23 = v22;
    }
LABEL_42:
    if ( !v31 || !v22 )
      goto LABEL_44;
  }
  if ( v2 == v23 )
  {
    v5 = v2;
    goto LABEL_55;
  }
  v23[1].m128i_i64[0] = v25;
  if ( (__m128i *)v2[1].m128i_i64[0] == v23 )
    v2[1].m128i_i64[0] = v25;
  v5 = v23;
LABEL_47:
  *(_QWORD *)(v3 + 16) = v5;
  *(_QWORD *)(v3 + 32) = 0;
  *(_QWORD *)(v3 + 24) = 0;
  boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_insertion();
  result = (__int64 *)*(v24 - 2);
  v28 = (__int64 *)result[1];
  *(__m128i *)v3 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)result, (__m128i)(unsigned __int64)v28);
  result[1] = v3;
  *v28 = v3;
  return result;
}

