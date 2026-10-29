_QWORD *__fastcall sub_16970(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  _QWORD *v4; // r15
  __int64 v5; // r13
  const char *v6; // rsi
  _QWORD *v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 v16; // rax
  const char *v17; // r13
  _QWORD *v18; // rbp
  __m128i v19; // xmm1
  _QWORD *v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // xmm1_8
  const char *v23; // rsi
  _QWORD *v24; // [rsp+0h] [rbp-58h]
  __m128i v26[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  v24 = a1 + 1;
  if ( !v4 )
  {
    v3 = a1 + 1;
    goto LABEL_21;
  }
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = v4[5];
    if ( !v5 )
      break;
    v6 = *(const char **)a2;
    v7 = v4;
    v8 = s;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = (_QWORD *)v4[2];
    v4 = (_QWORD *)v4[3];
    if ( v9 >= 0 )
    {
      v3 = v7;
      v4 = v10;
    }
    if ( !v4 )
      goto LABEL_14;
  }
  if ( v11 )
  {
LABEL_12:
    v6 = s;
LABEL_4:
    v8 = (const char *)v4[4];
    v7 = v4;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = v4[2];
    if ( !v12 )
      break;
    v3 = v4;
    v4 = (_QWORD *)v4[2];
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v3 = v4;
LABEL_14:
  if ( v24 == v3 )
    goto LABEL_21;
  if ( v3[5] )
  {
    v13 = (const char *)v3[4];
    v14 = s;
    if ( v5 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v14, v13) >= 0 )
      return v3 + 7;
LABEL_21:
    v16 = operator new(0x50u);
    v17 = *(const char **)a2;
    *(_OWORD *)(v16 + 64) = 0;
    v18 = (_QWORD *)v16;
    v19 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)(v16 + 32) = v17;
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(v16 + 56) = 0;
    *(__m128i *)(v16 + 40) = v19;
    *(_OWORD *)(a2 + 8) = 0;
    v26[0] = v19;
    v20 = sub_167B0(a1, v3, v16 + 32);
    v3 = v20;
    if ( v21 )
    {
      if ( !v20 )
      {
        v22 = _mm_load_si128(v26).m128i_u64[0];
        if ( v24 != (_QWORD *)v21 )
        {
          v23 = s;
          if ( *(_QWORD *)(v21 + 40) )
            v23 = *(const char **)(v21 + 32);
          v26[0].m128i_i64[0] = v21;
          if ( !v22 )
            v17 = s;
          strcmp(v17, v23);
        }
      }
      v3 = v18;
      std::_Rb_tree_insert_and_rebalance();
      ++a1[5];
    }
    else if ( v18 )
    {
      if ( v17 )
      {
        v18[5] = 0;
        qfree();
      }
      operator delete(v18, 0x50u);
    }
    return v3 + 7;
  }
  v13 = s;
  if ( v5 )
  {
LABEL_17:
    v14 = *(const char **)a2;
    goto LABEL_18;
  }
  return v3 + 7;
}

