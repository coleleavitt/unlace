_QWORD *__fastcall sub_539D0(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v4; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  __m128i v10; // xmm0
  __int64 v11; // r14
  __m128i v12; // xmm1
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16; // rax
  __m128i v17; // xmm1
  __m128i v18; // xmm0
  __int64 v19; // rax
  __m128i v20; // xmm0
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // rax
  _BOOL8 v24; // rdi
  __int64 v25; // r13
  __int64 i; // r12
  __int64 v27; // rbp
  __int64 v28; // rdx
  __int64 v29; // r15
  __int64 j; // rbx
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // rdi
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // [rsp+0h] [rbp-48h]
  unsigned __int64 v38; // [rsp+0h] [rbp-48h]
  _QWORD *v39; // [rsp+0h] [rbp-48h]
  unsigned __int64 v40; // [rsp+0h] [rbp-48h]
  unsigned __int64 v41; // [rsp+8h] [rbp-40h]

  v4 = a2;
  v6 = operator new(0xB8u);
  v9 = *(_QWORD *)a3;
  v10 = _mm_loadu_si128((const __m128i *)(a3 + 32));
  v11 = v6;
  v12 = _mm_loadu_si128((const __m128i *)(a3 + 56));
  v13 = *(_QWORD *)(a3 + 48);
  *(_QWORD *)(a3 + 48) = 0;
  *(_QWORD *)(v6 + 32) = v9;
  LOBYTE(v6) = *(_BYTE *)(a3 + 8);
  *(__m128i *)(v11 + 64) = v10;
  v14 = *(_QWORD *)(a3 + 72);
  *(_BYTE *)(v11 + 40) = v6;
  v15 = *(_QWORD *)(a3 + 16);
  *(_OWORD *)(a3 + 32) = 0;
  *(_QWORD *)(v11 + 48) = v15;
  v16 = *(_QWORD *)(a3 + 24);
  *(_OWORD *)(a3 + 56) = 0;
  *(_QWORD *)(v11 + 56) = v16;
  LOBYTE(v16) = *(_BYTE *)(a3 + 96);
  *(__m128i *)(v11 + 88) = v12;
  v17 = _mm_loadu_si128((const __m128i *)(a3 + 80));
  *(_OWORD *)(a3 + 80) = 0;
  v18 = _mm_loadu_si128((const __m128i *)(a3 + 104));
  *(_BYTE *)(v11 + 128) = v16;
  v19 = *(_QWORD *)(a3 + 136);
  *(__m128i *)(v11 + 136) = v18;
  v20 = _mm_loadu_si128((const __m128i *)(a3 + 120));
  *(_QWORD *)(a3 + 24) = 0;
  *(_QWORD *)(a3 + 72) = 0;
  *(_QWORD *)(v11 + 80) = v13;
  *(_QWORD *)(v11 + 104) = v14;
  *(_QWORD *)(v11 + 168) = v19;
  *(__m128i *)(v11 + 112) = v17;
  *(__m128i *)(v11 + 152) = v20;
  *(_DWORD *)(v11 + 176) = *(_DWORD *)(a3 + 144);
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v7 = a1[4];
      v4 = nullptr;
      if ( *(_QWORD *)(v7 + 32) < v9 )
        goto LABEL_6;
    }
LABEL_5:
    v38 = v9;
    v23 = sub_51900((__int64)a1, v9, v7, v9, v8);
    v9 = v38;
    v4 = v23;
    goto LABEL_6;
  }
  v21 = a2[4];
  if ( v9 < v21 )
  {
    v7 = (unsigned __int64)v4;
    if ( (_QWORD *)a1[3] == v4 )
      goto LABEL_6;
    v37 = v9;
    v22 = std::_Rb_tree_decrement(v4, v21, v4, v9, v8);
    v9 = v37;
    v7 = v22;
    if ( *(_QWORD *)(v22 + 32) >= v37 )
      goto LABEL_5;
    if ( *(_QWORD *)(v22 + 24) )
      v7 = (unsigned __int64)v4;
    else
      v4 = nullptr;
LABEL_6:
    if ( v7 )
    {
      if ( a1 + 1 == (_QWORD *)v7 || v4 )
      {
        v24 = 1;
LABEL_10:
        std::_Rb_tree_insert_and_rebalance(v24, v11, v7, a1 + 1);
        ++a1[5];
        return (_QWORD *)v11;
      }
      goto LABEL_41;
    }
    goto LABEL_12;
  }
  v40 = v4[4];
  if ( v21 >= v9 )
    goto LABEL_12;
  if ( (_QWORD *)a1[4] != v4 )
  {
    v41 = v9;
    v35 = std::_Rb_tree_increment(v4);
    v9 = v41;
    v7 = v35;
    if ( v41 < *(_QWORD *)(v35 + 32) )
    {
      v36 = v40;
      if ( !v4[3] )
      {
        v7 = (unsigned __int64)v4;
        if ( v4 )
          goto LABEL_42;
        goto LABEL_12;
      }
      v4 = (_QWORD *)v35;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v7 = (unsigned __int64)v4;
  if ( v4 )
  {
LABEL_41:
    v36 = *(_QWORD *)(v7 + 32);
LABEL_42:
    v24 = v9 < v36;
    goto LABEL_10;
  }
LABEL_12:
  v39 = v4;
  if ( v11 )
  {
    if ( v14 )
    {
      *(_QWORD *)(v11 + 112) = 0;
      qfree(v14);
      v13 = *(_QWORD *)(v11 + 80);
    }
    if ( v13 )
    {
      v25 = *(_QWORD *)(v11 + 88);
      if ( v25 )
      {
        for ( i = 0; i != v25; ++i )
        {
          v27 = v13 + 40 * i;
          v28 = *(_QWORD *)(v27 + 16);
          if ( v28 )
          {
            v29 = *(_QWORD *)(v27 + 24);
            if ( v29 )
            {
              for ( j = 0; j != v29; ++j )
              {
                v31 = v28 + 72 * j;
                v32 = *(_QWORD *)(v31 + 32);
                if ( v32 )
                {
                  *(_QWORD *)(v31 + 40) = 0;
                  qfree(v32);
                  v28 = *(_QWORD *)(v27 + 16);
                }
              }
            }
            *(_QWORD *)(v27 + 24) = 0;
            qfree(v28);
          }
          v13 = *(_QWORD *)(v11 + 80);
        }
      }
      *(_QWORD *)(v11 + 88) = 0;
      qfree(v13);
    }
    v33 = *(_QWORD *)(v11 + 56);
    if ( v33 )
    {
      *(_QWORD *)(v11 + 64) = 0;
      qfree(v33);
    }
    operator delete((void *)v11, 0xB8u);
  }
  return v39;
}
