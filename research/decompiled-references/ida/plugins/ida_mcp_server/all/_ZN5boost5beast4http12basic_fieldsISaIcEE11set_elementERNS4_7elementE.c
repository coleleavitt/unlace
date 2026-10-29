__int64 *__fastcall boost::beast::http::basic_fields<std::allocator<char>>::set_element(__m128i *a1, __int64 a2)
{
  __m128i *v4; // r9
  _BYTE *v5; // rbp
  __m128i *v6; // r12
  int v7; // r11d
  unsigned __int64 v8; // r10
  int v9; // edx
  unsigned __int64 v10; // rax
  char *v11; // rcx
  char *v12; // rdi
  char *v13; // rax
  char *v14; // r8
  char v15; // dl
  int v16; // eax
  __m128i *v17; // rax
  __m128i *v18; // rsi
  __m128i *v19; // rcx
  __m128i *v20; // rdx
  __m128i *v21; // r14
  __m128i **v22; // r8
  __m128i *v23; // rdx
  __m128i *v24; // rdi
  __m128i *v25; // rcx
  __m128i *v26; // r9
  __int64 v27; // rax
  __int64 *v28; // rdx
  int v29; // edx
  __int64 v30; // rax
  __int64 *result; // rax
  __int32 v32; // esi
  __m128i *v33; // rdx
  __m128i **v34; // rdi
  __m128i *v35; // rsi
  __m128i *v36; // r8
  __int64 v37; // rsi
  __int64 v38; // rdi
  __m128i *v39; // rdx
  __m128i **v40; // rdi
  __m128i *v41; // rsi
  __m128i *v42; // r8
  __int64 v43; // rsi
  __int64 v44; // rdi
  __m128i *v45; // rsi
  __m128i **v46; // rdi
  __m128i *v47; // r8
  __int8 *v48; // rdx
  _BYTE *v49; // rcx
  __m128i *v50; // rcx
  __m128i **i; // rsi
  __int64 v52; // r8
  int v53; // esi
  int v54; // edi
  __int32 v55; // edi
  __m128i *v56; // r9
  __m128i **j; // rax
  __m128i *v58; // rdi
  __m128i **v59; // r8
  __m128i *v60; // r9
  __m128i **v61; // rdi
  __m128i *v62; // rdi
  __m128i **v63; // r8
  __m128i *v64; // r9

  v4 = (__m128i *)a1->m128i_i64[0];
  if ( !a1->m128i_i64[0] )
  {
    v6 = a1;
    goto LABEL_133;
  }
  v5 = (_BYTE *)(a2 + 56);
  v6 = a1;
  v7 = *(unsigned __int16 *)(a2 + 48);
  v8 = v7 - 2;
  do
  {
    v9 = v4[2].m128i_u16[0];
    v10 = v9 - 2;
    if ( v10 < v8 )
      goto LABEL_16;
    if ( v8 >= v10 )
    {
      v11 = &v4[2].m128i_i8[8];
      v12 = (char *)(a2 + 56);
      v13 = &v4[2].m128i_i8[v10 + 8];
      v14 = &v4[2].m128i_i8[v8 + 8];
      if ( (unsigned __int16)v7 >= (unsigned __int16)v9 )
        v14 = v13;
      if ( v11 != v14 )
      {
        while ( 1 )
        {
          v15 = *v12;
          v16 = *v11;
          if ( (unsigned int)(v16 - 65) < 0x1A )
            LOBYTE(v16) = v16 + 32;
          if ( (unsigned int)(v15 - 65) < 0x1A )
            v15 += 32;
          if ( v15 > (char)v16 )
            break;
          if ( v15 < (char)v16 )
            goto LABEL_41;
          ++v11;
          ++v12;
          if ( v11 == v14 )
            goto LABEL_40;
        }
LABEL_16:
        v4 = (__m128i *)v4[1].m128i_i64[0];
        continue;
      }
LABEL_40:
      if ( v12 != (char *)(a2 + 56 + v8) )
        goto LABEL_16;
    }
LABEL_41:
    v6 = v4;
    v4 = (__m128i *)v4->m128i_i64[1];
  }
  while ( v4 );
  if ( a1 != v6 )
  {
    if ( !v6 )
      BUG();
    if ( (unsigned __int8)boost::beast::iequals() )
    {
      v17 = (__m128i *)v6[1].m128i_i64[0];
      if ( !v17 )
        goto LABEL_86;
LABEL_22:
      v18 = (__m128i *)v17->m128i_i64[1];
      v19 = v18;
      if ( v18 )
      {
        v20 = (__m128i *)v17->m128i_i64[1];
        do
        {
          v21 = v20;
          v20 = (__m128i *)v20->m128i_i64[1];
        }
        while ( v20 );
        v22 = (__m128i **)v6->m128i_i64[1];
        if ( !v22 )
        {
          v24 = (__m128i *)v6->m128i_i64[0];
          v56 = *(__m128i **)(v6->m128i_i64[0] + 8);
          v17->m128i_i64[0] = v6->m128i_i64[0];
          if ( a1 == v24 )
          {
            a1->m128i_i64[0] = (__int64)v17;
            v25 = v17;
            v23 = v6;
            if ( v6 == (__m128i *)a1->m128i_i64[1] )
              goto LABEL_117;
            goto LABEL_96;
          }
          v25 = v17;
          v23 = v6;
          if ( v6 != v56 )
            goto LABEL_114;
          goto LABEL_95;
        }
        do
        {
          v23 = v19;
          v19 = (__m128i *)v19->m128i_i64[1];
        }
        while ( v19 );
        v24 = (__m128i *)v6->m128i_i64[0];
        v25 = (__m128i *)v23[1].m128i_i64[0];
        v26 = *(__m128i **)(v6->m128i_i64[0] + 8);
        if ( v6 != v23 )
        {
          *v22 = v23;
          v23->m128i_i64[1] = (__int64)v22;
          if ( v23 != v17 )
          {
            v23[1].m128i_i64[0] = (__int64)v17;
            v17->m128i_i64[0] = (__int64)v23;
            v17 = (__m128i *)v23->m128i_i64[0];
            if ( v25 )
              v25->m128i_i64[0] = (__int64)v17;
            v17->m128i_i64[1] = (__int64)v25;
          }
LABEL_32:
          v23->m128i_i64[0] = (__int64)v24;
          if ( a1 == v24 )
          {
            v55 = v6[1].m128i_i32[2];
            v32 = v23[1].m128i_i32[2];
            a1->m128i_i64[0] = (__int64)v23;
            v23[1].m128i_i32[2] = v55;
            goto LABEL_44;
          }
          if ( v6 != v26 )
          {
            v24[1].m128i_i64[0] = (__int64)v23;
            goto LABEL_43;
          }
          v24->m128i_i64[1] = (__int64)v23;
LABEL_35:
          if ( v6 == v23 )
          {
            if ( !v6[1].m128i_i32[2] )
              goto LABEL_37;
          }
          else
          {
LABEL_43:
            v32 = v23[1].m128i_i32[2];
            v23[1].m128i_i32[2] = v6[1].m128i_i32[2];
LABEL_44:
            if ( !v32 )
              goto LABEL_37;
          }
          if ( a1 == v17 )
            goto LABEL_78;
          if ( v25 )
          {
            v39 = v17;
            v17 = v25;
            goto LABEL_59;
          }
          v33 = (__m128i *)v17->m128i_i64[1];
          if ( !v33 )
            goto LABEL_61;
LABEL_48:
          if ( !v33[1].m128i_i32[2] )
          {
            v34 = (__m128i **)v33[1].m128i_i64[0];
            v35 = (__m128i *)v17->m128i_i64[0];
            v33[1].m128i_i32[2] = 1;
            v17[1].m128i_i32[2] = 0;
            v36 = (__m128i *)v35->m128i_i64[1];
            v17->m128i_i64[1] = (__int64)v34;
            if ( v34 )
              *v34 = v17;
            v33[1].m128i_i64[0] = (__int64)v17;
            v17->m128i_i64[0] = (__int64)v33;
            v33->m128i_i64[0] = (__int64)v35;
            if ( a1 == v35 )
            {
              a1->m128i_i64[0] = (__int64)v33;
            }
            else
            {
              if ( v17 == v36 )
              {
                v35->m128i_i64[1] = (__int64)v33;
                v33 = (__m128i *)v17->m128i_i64[1];
                goto LABEL_54;
              }
              v35[1].m128i_i64[0] = (__int64)v33;
            }
            v33 = (__m128i *)v34;
          }
LABEL_54:
          v37 = v33[1].m128i_i64[0];
          v38 = v33->m128i_i64[1];
          if ( !v37 || *(_DWORD *)(v37 + 24) == 1 )
          {
            if ( !v38 || *(_DWORD *)(v38 + 24) == 1 )
            {
              while ( 1 )
              {
                v33[1].m128i_i32[2] = 0;
                v39 = (__m128i *)v17->m128i_i64[0];
                if ( a1 == (__m128i *)v17->m128i_i64[0] )
                  goto LABEL_79;
LABEL_59:
                if ( v17[1].m128i_i32[2] != 1 )
                  goto LABEL_79;
                v25 = v17;
                v17 = v39;
                v33 = (__m128i *)v39->m128i_i64[1];
                if ( v25 != v33 )
                  goto LABEL_48;
LABEL_61:
                v33 = (__m128i *)v17[1].m128i_i64[0];
                if ( !v33[1].m128i_i32[2] )
                {
                  v40 = (__m128i **)v33->m128i_i64[1];
                  v41 = (__m128i *)v17->m128i_i64[0];
                  v33[1].m128i_i32[2] = 1;
                  v17[1].m128i_i32[2] = 0;
                  v42 = (__m128i *)v41->m128i_i64[1];
                  v17[1].m128i_i64[0] = (__int64)v40;
                  if ( v40 )
                    *v40 = v17;
                  v33->m128i_i64[1] = (__int64)v17;
                  v17->m128i_i64[0] = (__int64)v33;
                  v33->m128i_i64[0] = (__int64)v41;
                  if ( a1 == v41 )
                  {
                    a1->m128i_i64[0] = (__int64)v33;
                  }
                  else
                  {
                    if ( v17 != v42 )
                    {
                      v41[1].m128i_i64[0] = (__int64)v33;
                      v33 = (__m128i *)v17[1].m128i_i64[0];
                      goto LABEL_68;
                    }
                    v41->m128i_i64[1] = (__int64)v33;
                  }
                  v33 = (__m128i *)v40;
                }
LABEL_68:
                v43 = v33->m128i_i64[1];
                v44 = v33[1].m128i_i64[0];
                if ( v43 && *(_DWORD *)(v43 + 24) != 1 )
                {
                  if ( v44 && *(_DWORD *)(v44 + 24) != 1 )
                  {
LABEL_72:
                    v33[1].m128i_i32[2] = v17[1].m128i_i32[2];
                    v17[1].m128i_i32[2] = 1;
                    goto LABEL_73;
                  }
                  v62 = (__m128i *)v33->m128i_i64[0];
                  v63 = *(__m128i ***)(v43 + 16);
                  *(_DWORD *)(v43 + 24) = 1;
                  v33[1].m128i_i32[2] = 0;
                  v64 = (__m128i *)v62->m128i_i64[1];
                  v33->m128i_i64[1] = (__int64)v63;
                  if ( v63 )
                    *v63 = v33;
                  *(_QWORD *)(v43 + 16) = v33;
                  v33->m128i_i64[0] = v43;
                  *(_QWORD *)v43 = v62;
                  if ( a1 == v62 )
                  {
                    a1->m128i_i64[0] = v43;
                  }
                  else if ( v33 == v64 )
                  {
                    v62->m128i_i64[1] = v43;
                  }
                  else
                  {
                    v62[1].m128i_i64[0] = v43;
                  }
                  v33 = (__m128i *)v17[1].m128i_i64[0];
                  v44 = v33[1].m128i_i64[0];
                  v33[1].m128i_i32[2] = v17[1].m128i_i32[2];
                  v17[1].m128i_i32[2] = 1;
                  if ( v44 )
LABEL_73:
                    *(_DWORD *)(v44 + 24) = 1;
                  v45 = (__m128i *)v17->m128i_i64[0];
                  v46 = (__m128i **)v33->m128i_i64[1];
                  v47 = *(__m128i **)(v17->m128i_i64[0] + 8);
                  v17[1].m128i_i64[0] = (__int64)v46;
                  if ( v46 )
                    *v46 = v17;
                  v33->m128i_i64[1] = (__int64)v17;
                  v17->m128i_i64[0] = (__int64)v33;
                  v33->m128i_i64[0] = (__int64)v45;
                  if ( a1 == v45 )
                  {
LABEL_77:
                    a1->m128i_i64[0] = (__int64)v33;
LABEL_78:
                    v17 = v25;
                    if ( v25 )
LABEL_79:
                      v17[1].m128i_i32[2] = 1;
                    goto LABEL_37;
                  }
LABEL_152:
                  if ( v17 == v47 )
                  {
                    v45->m128i_i64[1] = (__int64)v33;
                    v17 = v25;
                    if ( v25 )
                      goto LABEL_79;
                  }
                  else
                  {
                    v45[1].m128i_i64[0] = (__int64)v33;
                    v17 = v25;
                    if ( v25 )
                      goto LABEL_79;
                  }
LABEL_37:
                  v27 = v6[-1].m128i_i64[0];
                  v28 = (__int64 *)v6[-1].m128i_i64[1];
                  *v28 = v27;
                  *(_QWORD *)(v27 + 8) = v28;
                  operator delete(&v6[-1], (v6[2].m128i_u16[0] + v6[2].m128i_u16[1] + 65) & 0x3FFF8);
                  if ( a1 == v21
                    || (v29 = *(unsigned __int16 *)(a2 + 48) - 2, v30 = v29, v21[2].m128i_u16[0] - 2 != v29) )
                  {
LABEL_39:
                    boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before(
                      a1,
                      v21,
                      (__m128i **)(a2 + 16),
                      nullptr);
                    boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_insertion();
                    result = (__int64 *)a1[2].m128i_i64[1];
                    *(__m128i *)a2 = _mm_unpacklo_epi64(
                                       (__m128i)(unsigned __int64)&a1[2],
                                       (__m128i)(unsigned __int64)result);
                    a1[2].m128i_i64[1] = a2;
                    *result = a2;
                    return result;
                  }
                  v48 = &v21[2].m128i_i8[8];
                  v49 = v5;
                  while ( v30 )
                  {
                    if ( *v49 != *v48 )
                    {
                      v52 = 0;
                      while ( 1 )
                      {
                        v53 = (char)v49[v52];
                        if ( (unsigned int)(v53 - 65) < 0x1A )
                          LOBYTE(v53) = v53 + 32;
                        v54 = v48[v52];
                        if ( (unsigned int)(v54 - 65) < 0x1A )
                          LOBYTE(v54) = v54 + 32;
                        if ( (_BYTE)v54 != (_BYTE)v53 )
                          goto LABEL_39;
                        if ( v30 == ++v52 )
                        {
                          v6 = v21;
                          goto LABEL_85;
                        }
                      }
                    }
                    ++v48;
                    ++v49;
                    --v30;
                  }
                  v6 = v21;
LABEL_85:
                  v17 = (__m128i *)v6[1].m128i_i64[0];
                  if ( v17 )
                    goto LABEL_22;
LABEL_86:
                  v24 = (__m128i *)v6->m128i_i64[0];
                  v23 = *(__m128i **)(v6->m128i_i64[0] + 16);
                  if ( v6 != v23 )
                  {
                    v21 = (__m128i *)v6->m128i_i64[0];
                    goto LABEL_91;
                  }
                  v50 = v6;
                  for ( i = (__m128i **)v6->m128i_i64[0]; ; i = (__m128i **)*i )
                  {
                    v21 = *i;
                    if ( (__m128i **)(*i)[1].m128i_i64[0] != i )
                      break;
                    v50 = (__m128i *)i;
                  }
                  if ( v21 == v50 )
                  {
                    v25 = (__m128i *)v6->m128i_i64[1];
                    v21 = (__m128i *)i;
                    if ( v25 )
                    {
LABEL_92:
                      v26 = (__m128i *)v24->m128i_i64[1];
                      v25->m128i_i64[0] = (__int64)v24;
                      if ( a1 != v24 )
                      {
                        v23 = v6;
                        v22 = (__m128i **)v25;
                        goto LABEL_94;
                      }
                      a1->m128i_i64[0] = (__int64)v25;
                      v23 = v6;
                      v22 = (__m128i **)v25;
                      if ( v6 != (__m128i *)a1->m128i_i64[1] )
                        goto LABEL_96;
                    }
                    else
                    {
                      if ( a1 != v24 )
                      {
                        v26 = (__m128i *)v24->m128i_i64[1];
                        v22 = nullptr;
                        goto LABEL_94;
                      }
                      a1->m128i_i64[0] = 0;
                      v22 = nullptr;
                      if ( v6 != (__m128i *)a1->m128i_i64[1] )
                        goto LABEL_96;
                    }
                  }
                  else
                  {
LABEL_91:
                    v25 = (__m128i *)v6->m128i_i64[1];
                    if ( v25 )
                      goto LABEL_92;
                    if ( a1 != v24 )
                    {
                      v26 = (__m128i *)v24->m128i_i64[1];
                      v23 = v6;
                      v22 = nullptr;
LABEL_94:
                      if ( v6 == v26 )
                      {
LABEL_95:
                        v24->m128i_i64[1] = (__int64)v25;
                        if ( v6 != (__m128i *)a1->m128i_i64[1] )
                          goto LABEL_96;
LABEL_115:
                        if ( v17 )
                        {
                          v18 = (__m128i *)v17->m128i_i64[1];
LABEL_117:
                          while ( v18 )
                          {
                            v17 = v18;
                            v18 = (__m128i *)v18->m128i_i64[1];
                          }
LABEL_119:
                          a1->m128i_i64[1] = (__int64)v17;
                        }
                        else
                        {
                          a1->m128i_i64[1] = (__int64)v24;
                        }
                        if ( v6 == (__m128i *)a1[1].m128i_i64[0] )
                        {
LABEL_121:
                          if ( v22 )
                          {
                            for ( j = (__m128i **)v22[2]; j; j = (__m128i **)j[2] )
                              v22 = j;
                            a1[1].m128i_i64[0] = (__int64)v22;
                          }
                          else
                          {
                            a1[1].m128i_i64[0] = (__int64)v24;
                          }
                        }
LABEL_97:
                        v17 = v24;
                        goto LABEL_35;
                      }
LABEL_114:
                      v24[1].m128i_i64[0] = (__int64)v25;
                      if ( v6 == (__m128i *)a1->m128i_i64[1] )
                        goto LABEL_115;
LABEL_96:
                      if ( v6 == (__m128i *)a1[1].m128i_i64[0] )
                        goto LABEL_121;
                      goto LABEL_97;
                    }
                    a1->m128i_i64[0] = 0;
                    v23 = v6;
                    v22 = nullptr;
                    if ( v6 != (__m128i *)a1->m128i_i64[1] )
                      goto LABEL_96;
                  }
                  v17 = a1;
                  goto LABEL_119;
                }
                if ( v44 && *(_DWORD *)(v44 + 24) != 1 )
                  goto LABEL_72;
              }
            }
LABEL_147:
            v33[1].m128i_i32[2] = v17[1].m128i_i32[2];
            v17[1].m128i_i32[2] = 1;
            goto LABEL_148;
          }
          if ( v38 && *(_DWORD *)(v38 + 24) != 1 )
            goto LABEL_147;
          v58 = (__m128i *)v33->m128i_i64[0];
          v59 = *(__m128i ***)(v37 + 8);
          *(_DWORD *)(v37 + 24) = 1;
          v33[1].m128i_i32[2] = 0;
          v60 = (__m128i *)v58->m128i_i64[1];
          v33[1].m128i_i64[0] = (__int64)v59;
          if ( v59 )
            *v59 = v33;
          *(_QWORD *)(v37 + 8) = v33;
          v33->m128i_i64[0] = v37;
          *(_QWORD *)v37 = v58;
          if ( a1 == v58 )
          {
            a1->m128i_i64[0] = v37;
          }
          else if ( v33 == v60 )
          {
            v58->m128i_i64[1] = v37;
          }
          else
          {
            v58[1].m128i_i64[0] = v37;
          }
          v33 = (__m128i *)v17->m128i_i64[1];
          v38 = v33->m128i_i64[1];
          v33[1].m128i_i32[2] = v17[1].m128i_i32[2];
          v17[1].m128i_i32[2] = 1;
          if ( v38 )
LABEL_148:
            *(_DWORD *)(v38 + 24) = 1;
          v45 = (__m128i *)v17->m128i_i64[0];
          v61 = (__m128i **)v33[1].m128i_i64[0];
          v47 = *(__m128i **)(v17->m128i_i64[0] + 8);
          v17->m128i_i64[1] = (__int64)v61;
          if ( v61 )
            *v61 = v17;
          v33[1].m128i_i64[0] = (__int64)v17;
          v17->m128i_i64[0] = (__int64)v33;
          v33->m128i_i64[0] = (__int64)v45;
          if ( a1 == v45 )
            goto LABEL_77;
          goto LABEL_152;
        }
      }
      else
      {
        v22 = (__m128i **)v6->m128i_i64[1];
        if ( !v22 )
        {
          v24 = (__m128i *)v6->m128i_i64[0];
          v26 = *(__m128i **)(v6->m128i_i64[0] + 8);
          v17->m128i_i64[0] = v6->m128i_i64[0];
          if ( a1 == v24 )
          {
            a1->m128i_i64[0] = (__int64)v17;
            v25 = v17;
            v23 = v6;
            v21 = v17;
            if ( v6 == (__m128i *)a1->m128i_i64[1] )
              goto LABEL_117;
            goto LABEL_96;
          }
          v25 = v17;
          v23 = v6;
          v21 = v17;
          goto LABEL_94;
        }
        v24 = (__m128i *)v6->m128i_i64[0];
        v25 = (__m128i *)v17[1].m128i_i64[0];
        v21 = v6;
        v23 = v6;
        v26 = *(__m128i **)(v6->m128i_i64[0] + 8);
        if ( v6 != v17 )
        {
          *v22 = v17;
          v21 = v17;
          v23 = v17;
          v17->m128i_i64[1] = (__int64)v22;
          goto LABEL_32;
        }
      }
      if ( v25 )
      {
        v25->m128i_i64[0] = (__int64)v24;
        if ( a1 == v24 )
        {
          a1->m128i_i64[0] = (__int64)v25;
          if ( v6 == (__m128i *)a1->m128i_i64[1] )
            goto LABEL_117;
          goto LABEL_96;
        }
      }
      else if ( a1 == v24 )
      {
        a1->m128i_i64[0] = 0;
        if ( v6 == (__m128i *)a1->m128i_i64[1] )
          goto LABEL_117;
        goto LABEL_96;
      }
      goto LABEL_94;
    }
  }
LABEL_133:
  boost::intrusive::bstree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::insert_before(
    a1,
    v6,
    (__m128i **)(a2 + 16),
    nullptr);
  boost::intrusive::rbtree_algorithms<boost::intrusive::rbtree_node_traits<void *,false>>::rebalance_after_insertion();
  result = (__int64 *)a1[2].m128i_i64[1];
  *(__m128i *)a2 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&a1[2], (__m128i)(unsigned __int64)result);
  a1[2].m128i_i64[1] = a2;
  *result = a2;
  return result;
}

