const char *__fastcall sub_172CA0(_QWORD *a1, __int64 a2)
{
  const char *v3; // rbx
  const char *v4; // r15
  __int64 v5; // r13
  const char *v6; // rsi
  const char *v7; // rbp
  const char *v8; // rdi
  int v9; // eax
  const char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 v16; // rax
  const char *v17; // r13
  char *v18; // rbp
  __m128i v19; // xmm0
  __int64 v20; // r12
  __int64 v21; // rcx
  __int64 v22; // r8
  const char *v23; // rax
  __int64 v24; // rdx
  unsigned __int64 v25; // xmm0_8
  const char *v26; // rsi
  unsigned int v27; // eax
  __int64 v28; // rdi
  void *v29; // rdi
  const char *v30; // [rsp+0h] [rbp-58h]
  __m128i v32[4]; // [rsp+10h] [rbp-48h] BYREF

  v3 = (const char *)(a1 + 1);
  v4 = (const char *)a1[2];
  v30 = (const char *)(a1 + 1);
  if ( !v4 )
  {
    v3 = (const char *)(a1 + 1);
    goto LABEL_21;
  }
  v5 = *(_QWORD *)(a2 + 8);
  while ( 1 )
  {
    v11 = *((_QWORD *)v4 + 5);
    if ( !v5 )
      break;
    v6 = *(const char **)a2;
    v7 = v4;
    v8 = s1;
    if ( v11 )
      goto LABEL_4;
LABEL_5:
    v9 = strcmp(v8, v6);
    v10 = *((const char **)v4 + 2);
    v4 = *((const char **)v4 + 3);
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
    v6 = s1;
LABEL_4:
    v8 = *((const char **)v4 + 4);
    v7 = v4;
    goto LABEL_5;
  }
  while ( 1 )
  {
    v12 = *((_QWORD *)v4 + 2);
    if ( !v12 )
      break;
    v3 = v4;
    v4 = *((const char **)v4 + 2);
    if ( *(_QWORD *)(v12 + 40) )
      goto LABEL_12;
  }
  v3 = v4;
LABEL_14:
  if ( v30 == v3 )
    goto LABEL_21;
  if ( *((_QWORD *)v3 + 5) )
  {
    v13 = *((const char **)v3 + 4);
    v14 = s1;
    if ( v5 )
      goto LABEL_17;
LABEL_18:
    if ( strcmp(v14, v13) >= 0 )
      return v3 + 56;
LABEL_21:
    v16 = operator new(0x58u);
    v17 = *(const char **)a2;
    *(_BYTE *)(v16 + 56) = 2;
    v18 = (char *)v16;
    v19 = _mm_loadu_si128((const __m128i *)(a2 + 8));
    *(_QWORD *)a2 = 0;
    *(_QWORD *)(v16 + 32) = v17;
    *(_QWORD *)(v16 + 80) = 0;
    *(_OWORD *)(a2 + 8) = 0;
    v20 = v16 + 56;
    *(__m128i *)(v16 + 40) = v19;
    *(_OWORD *)(v16 + 64) = 0;
    v32[0] = v19;
    v23 = sub_172AE0(a1, v3, v16 + 32, v21, v22);
    v3 = v23;
    if ( v24 )
    {
      if ( v30 == (const char *)v24 || (v25 = _mm_load_si128(v32).m128i_u64[0], v23) )
      {
        v28 = 1;
      }
      else
      {
        v26 = s1;
        if ( *(_QWORD *)(v24 + 40) )
          v26 = *(const char **)(v24 + 32);
        v32[0].m128i_i64[0] = v24;
        if ( !v25 )
          v17 = s1;
        v27 = strcmp(v17, v26);
        v24 = v32[0].m128i_i64[0];
        v28 = v27 >> 31;
      }
      v3 = v18;
      std::_Rb_tree_insert_and_rebalance(v28, v18, v24, v30);
      ++a1[5];
    }
    else if ( v18 )
    {
      sub_176520(v20);
      v29 = *((void **)v18 + 4);
      if ( v29 )
      {
        *((_QWORD *)v18 + 5) = 0;
        j__free(v29);
      }
      operator delete(v18, 0x58u);
    }
    return v3 + 56;
  }
  v13 = s1;
  if ( v5 )
  {
LABEL_17:
    v14 = *(const char **)a2;
    goto LABEL_18;
  }
  return v3 + 56;
}
