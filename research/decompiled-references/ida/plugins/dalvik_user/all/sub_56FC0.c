__int64 __fastcall sub_56FC0(_QWORD *a1, int *a2, __int64 a3, int a4)
{
  __int64 v5; // rbx
  _QWORD *v6; // r13
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rdi
  _QWORD *v9; // r14
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r15
  _WORD *v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  size_t v19; // r9
  void *v20; // r15
  size_t v21; // r12
  __m128i v22; // xmm0
  _QWORD *v24; // r12
  _QWORD *v25; // r14
  unsigned __int64 v26; // rax
  _QWORD *v27; // rsi
  bool v28; // al
  _QWORD *i; // rax
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v32; // rax
  _QWORD *v33; // r15
  const void *v34; // r15
  void *v35; // rax
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-68h] BYREF
  __int64 v38; // [rsp+10h] [rbp-58h]
  _QWORD *v39; // [rsp+18h] [rbp-50h]
  int *v40; // [rsp+20h] [rbp-48h]
  int v41; // [rsp+2Ch] [rbp-3Ch]

  v40 = a2;
  v41 = a4;
  if ( a4 > 0 )
  {
    v5 = a3 + 8;
    v6 = a1 + 49;
    v38 = a3 + 432LL * v41 + 8;
    while ( 1 )
    {
      v7 = *(_QWORD *)(v5 - 8);
      v8 = (_QWORD *)a1[50];
      if ( *(_QWORD *)(v5 + 8) > 1u )
        break;
      v24 = v6;
      if ( v8 )
      {
        v25 = (_QWORD *)a1[50];
        while ( 1 )
        {
          while ( 1 )
          {
            v26 = v25[4];
            if ( v26 >= v7 )
              break;
            v25 = (_QWORD *)v25[3];
            if ( !v25 )
              goto LABEL_40;
          }
          v27 = (_QWORD *)v25[2];
          if ( v7 >= v26 )
            break;
          v24 = v25;
          v25 = (_QWORD *)v25[2];
          if ( !v27 )
          {
LABEL_40:
            v28 = v6 == v24;
            goto LABEL_41;
          }
        }
        for ( i = (_QWORD *)v25[3]; i; i = (_QWORD *)i[2] )
        {
          while ( 1 )
          {
            v30 = i[3];
            if ( v7 < i[4] )
              break;
            i = (_QWORD *)i[3];
            if ( !v30 )
              goto LABEL_55;
          }
          v24 = i;
        }
LABEL_55:
        while ( v27 )
        {
          while ( 1 )
          {
            v31 = v27[3];
            if ( v27[4] >= v7 )
              break;
            v27 = (_QWORD *)v27[3];
            if ( !v31 )
              goto LABEL_58;
          }
          v25 = v27;
          v27 = (_QWORD *)v27[2];
        }
LABEL_58:
        if ( (_QWORD *)a1[51] != v25 || v6 != v24 )
        {
          while ( v25 != v24 )
          {
            v25 = (_QWORD *)std::_Rb_tree_increment();
            v32 = std::_Rb_tree_rebalance_for_erase();
            v33 = (_QWORD *)v32;
            if ( *(_QWORD *)(v32 + 80) )
            {
              *(_QWORD *)(v32 + 88) = 0;
              qfree();
            }
            if ( v33[6] )
            {
              v33[7] = 0;
              qfree();
            }
            operator delete(v33, 0x1D8u);
            --a1[53];
          }
          goto LABEL_30;
        }
      }
      else
      {
        v28 = 1;
LABEL_41:
        if ( (_QWORD *)a1[51] != v24 || !v28 )
          goto LABEL_30;
      }
      sub_56750(v8);
      a1[51] = v6;
      a1[50] = 0;
      a1[52] = v6;
      a1[53] = 0;
LABEL_30:
      v5 += 432;
      if ( v38 == v5 )
        goto LABEL_31;
    }
    v9 = v6;
    if ( v8 )
    {
      do
      {
        while ( 1 )
        {
          v10 = v8[2];
          v11 = v8[3];
          if ( v8[4] >= v7 )
            break;
          v8 = (_QWORD *)v8[3];
          if ( !v11 )
            goto LABEL_9;
        }
        v9 = v8;
        v8 = (_QWORD *)v8[2];
      }
      while ( v10 );
LABEL_9:
      if ( v6 != v9 && v7 >= v9[4] )
      {
LABEL_21:
        v9[5] = v7;
        if ( v9 + 6 != (_QWORD *)v5 )
        {
          v18 = *(_QWORD *)(v5 + 8);
          if ( v18 && (v19 = v18 - 1, v18 != 1) )
          {
            v34 = *(const void **)v5;
            v35 = (void *)v9[6];
            if ( v9[8] < v18 )
            {
              v37.m128i_i64[0] = v18 - 1;
              v35 = (void *)qvector_reserve();
              v19 = v37.m128i_i64[0];
              v9[6] = v35;
            }
            v9[7] = v18;
            memmove(v35, v34, v19);
            *(_BYTE *)(v9[6] + v18 - 1) = 0;
          }
          else
          {
            v9[7] = 0;
          }
        }
        v20 = nullptr;
        *((_DWORD *)v9 + 18) = *(_DWORD *)(v5 + 24);
        v21 = *(_QWORD *)(v5 + 40);
        v22 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
        if ( v21 )
        {
          v37 = v22;
          v20 = (void *)qalloc_or_throw();
          memcpy(v20, *(const void **)(v5 + 32), v21);
          v22 = _mm_load_si128(&v37);
        }
        if ( v9[10] )
        {
          v9[11] = 0;
          v37 = v22;
          qfree();
          v22 = _mm_load_si128(&v37);
        }
        v9[10] = v20;
        *(__m128i *)(v9 + 11) = v22;
        qmemcpy(v9 + 13, (const void *)(v5 + 56), 0x169u);
        *((_DWORD *)v9 + 117) = *(_DWORD *)(v5 + 420);
        goto LABEL_30;
      }
    }
    v37.m128i_i64[0] = *(_QWORD *)(v5 - 8);
    v39 = a1 + 48;
    v12 = operator new(0x1D8u);
    *(_QWORD *)(v12 + 32) = v37.m128i_i64[0];
    memset((void *)(v12 + 40), 0, 0x1B0u);
    *(_OWORD *)(v12 + 104) = -1;
    v13 = (_WORD *)(v12 + 144);
    *(_QWORD *)(v12 + 120) = -1;
    do
    {
      *v13 = 0;
      v13 += 20;
      *(v13 - 19) = 0;
      *(v13 - 18) = 0;
      *((_DWORD *)v13 - 2) = 0;
      *(v13 - 17) = 0;
      *((_OWORD *)v13 - 2) = 0;
      *((_QWORD *)v13 - 2) = 0;
    }
    while ( (_WORD *)(v12 + 464) != v13 );
    v14 = *(_QWORD *)(v12 + 32);
    if ( v6 == v9 )
    {
      if ( a1[53] )
      {
        v16 = (_QWORD *)a1[52];
        v9 = nullptr;
        if ( v16[4] < v14 )
          goto LABEL_18;
      }
    }
    else
    {
      v15 = v9[4];
      if ( v14 < v15 )
      {
        v16 = v9;
        if ( (_QWORD *)a1[51] == v9 )
          goto LABEL_18;
        v17 = std::_Rb_tree_decrement();
        v16 = (_QWORD *)v17;
        if ( *(_QWORD *)(v17 + 32) >= v14 )
          goto LABEL_17;
        if ( *(_QWORD *)(v17 + 24) )
          v16 = v9;
        else
          v9 = nullptr;
LABEL_18:
        if ( v16 )
        {
LABEL_19:
          v9 = (_QWORD *)v12;
          std::_Rb_tree_insert_and_rebalance();
          ++a1[53];
LABEL_20:
          v7 = *(_QWORD *)(v5 - 8);
          goto LABEL_21;
        }
LABEL_45:
        if ( v12 )
        {
          if ( *(_QWORD *)(v12 + 80) )
          {
            *(_QWORD *)(v12 + 88) = 0;
            qfree();
          }
          if ( *(_QWORD *)(v12 + 48) )
          {
            *(_QWORD *)(v12 + 56) = 0;
            qfree();
          }
          operator delete((void *)v12, 0x1D8u);
        }
        goto LABEL_20;
      }
      v37.m128i_i64[0] = v9[4];
      if ( v15 >= v14 )
        goto LABEL_45;
      if ( (_QWORD *)a1[52] == v9 )
      {
        if ( v9 )
          goto LABEL_19;
        goto LABEL_45;
      }
      v36 = std::_Rb_tree_increment();
      v16 = (_QWORD *)v36;
      if ( v14 < *(_QWORD *)(v36 + 32) )
      {
        if ( !v9[3] )
        {
          if ( v9 )
            goto LABEL_19;
          goto LABEL_45;
        }
        v9 = (_QWORD *)v36;
        goto LABEL_18;
      }
    }
LABEL_17:
    v9 = sub_56300((__int64)v39, v14);
    goto LABEL_18;
  }
LABEL_31:
  if ( v40 )
    *v40 = v41;
  return 1;
}

