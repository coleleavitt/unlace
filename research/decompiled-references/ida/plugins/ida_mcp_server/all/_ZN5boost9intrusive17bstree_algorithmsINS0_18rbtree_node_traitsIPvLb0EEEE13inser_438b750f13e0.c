void __fastcall boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before(
        __m128i *a1,
        __m128i *a2,
        __m128i **a3,
        _QWORD *a4)
{
  __m128i *v5; // rcx
  __m128i *v8; // rdx
  __m128i **v9; // rdi
  char v10; // bl
  __m128i *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r10
  __m128i *v14; // rax

  v5 = (__m128i *)a1->m128i_i64[1];
  if ( a2 == v5 || (v5 = (__m128i *)a2[1].m128i_i64[0], !a2->m128i_i64[0]) )
  {
    if ( a1->m128i_i64[0] && a2->m128i_i64[1] )
      goto LABEL_8;
LABEL_19:
    if ( a4 )
    {
      if ( a1 != a2 )
      {
        v9 = (__m128i **)a2->m128i_i64[0];
        v10 = 1;
        v11 = *(__m128i **)a2->m128i_i64[0];
        if ( a2 == v11 )
        {
          *a4 = 1;
          goto LABEL_15;
        }
        goto LABEL_11;
      }
      goto LABEL_28;
    }
    if ( a1 != a2 )
    {
      a2->m128i_i64[1] = (__int64)a3;
      if ( (__m128i *)a1->m128i_i64[1] != a2 )
        goto LABEL_16;
      goto LABEL_32;
    }
LABEL_29:
    a1[1].m128i_i64[0] = (__int64)a3;
    *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a3, (__m128i)(unsigned __int64)a3);
    goto LABEL_16;
  }
  v8 = (__m128i *)a2->m128i_i64[1];
  if ( !v8 )
    goto LABEL_19;
  if ( !v5 || v8 != v5 && a2 == (__m128i *)v8->m128i_i64[0] && a2 == (__m128i *)v5->m128i_i64[0] )
  {
    v14 = (__m128i *)v8[1].m128i_i64[0];
    if ( v14 )
    {
      do
      {
        v5 = v14;
        v14 = (__m128i *)v14[1].m128i_i64[0];
      }
      while ( v14 );
    }
    else
    {
      v5 = (__m128i *)a2->m128i_i64[1];
    }
  }
  if ( !a1->m128i_i64[0] )
    goto LABEL_19;
LABEL_8:
  if ( !a4 )
  {
    if ( a1 != v5 )
    {
LABEL_24:
      a2 = v5;
      goto LABEL_25;
    }
    a2 = a1;
    goto LABEL_29;
  }
  if ( a1 == v5 )
  {
    a2 = a1;
LABEL_28:
    *a4 = 0;
    goto LABEL_29;
  }
  v9 = (__m128i **)v5->m128i_i64[0];
  a2 = v5;
  v10 = 0;
  v11 = *(__m128i **)v5->m128i_i64[0];
  if ( v5 == v11 )
  {
    *a4 = 1;
    goto LABEL_24;
  }
LABEL_11:
  v12 = 0;
  while ( 1 )
  {
    v13 = v12++;
    if ( (__m128i **)v11->m128i_i64[0] == v9 )
      break;
    v9 = (__m128i **)v11;
    v11 = (__m128i *)v11->m128i_i64[0];
  }
  *a4 = v13 + 2;
  if ( v10 )
  {
LABEL_15:
    a2->m128i_i64[1] = (__int64)a3;
    if ( (__m128i *)a1->m128i_i64[1] != a2 )
      goto LABEL_16;
LABEL_32:
    a1->m128i_i64[1] = (__int64)a3;
    goto LABEL_16;
  }
LABEL_25:
  a2[1].m128i_i64[0] = (__int64)a3;
  if ( (__m128i *)a1[1].m128i_i64[0] == a2 )
    a1[1].m128i_i64[0] = (__int64)a3;
LABEL_16:
  *a3 = a2;
  a3[2] = nullptr;
  a3[1] = nullptr;
}

