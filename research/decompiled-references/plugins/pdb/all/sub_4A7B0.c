__int64 __fastcall sub_4A7B0(__int64 a1, int a2, __int64 a3, int *a4, double a5, double a6, double a7)
{
  _QWORD *v9; // r12
  int v11; // ebp
  const char *v12; // r15
  int v13; // eax
  const char *v14; // rsi
  size_t v16; // r13
  const char *v17; // r14
  const char *v18; // rax
  const char *v19; // rsi
  const char *v20; // rdi
  int v21; // eax
  const char *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rsi
  const char *v25; // rsi
  const char *v26; // rdi
  __int64 v27; // r14
  __m128i v28; // xmm0
  __int64 v29; // rcx
  __int64 v30; // r8
  const char *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rdi
  const char *v34; // rsi
  const char *v35; // rax
  unsigned int v36; // eax
  const char *v37; // [rsp+0h] [rbp-58h]
  __int64 v38; // [rsp+0h] [rbp-58h]
  const char *v39; // [rsp+8h] [rbp-50h]
  char *s2; // [rsp+10h] [rbp-48h]
  const char *v41; // [rsp+18h] [rbp-40h]

  if ( a2 == 5 )
    return 1;
  v9 = (_QWORD *)(a1 + 160);
  v11 = *a4;
  v12 = (const char *)sub_47300(a1 + 160, a3);
  if ( v12 != (const char *)(a1 + 168) )
  {
    v13 = *((_DWORD *)v12 + 14);
    if ( !v13 )
    {
      if ( !v11 )
      {
        v14 = src;
        if ( *(_QWORD *)(a3 + 8) )
          v14 = *(const char **)a3;
        v13 = sub_33710(a1, (__int64)v14);
        *((_DWORD *)v12 + 14) = v13;
        if ( v13 )
          goto LABEL_8;
        if ( under_debugger )
          BUG();
        interr(490);
        return 1;
      }
      *((_DWORD *)v12 + 14) = v11;
      v13 = v11;
    }
LABEL_8:
    *a4 = v13;
    return 0;
  }
  s2 = nullptr;
  v16 = *(_QWORD *)(a3 + 8);
  if ( v16 )
  {
    s2 = (char *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
    memcpy(s2, *(const void **)a3, v16);
  }
  v17 = *(const char **)(a1 + 176);
  if ( !v17 )
  {
    v39 = v12;
    goto LABEL_36;
  }
  v18 = src;
  if ( v16 )
    v18 = s2;
  v39 = v12;
  v41 = v18;
  while ( 1 )
  {
    v23 = *((_QWORD *)v17 + 5);
    if ( !v16 )
      break;
    if ( v23 )
      goto LABEL_25;
    v37 = v17;
    v19 = s2;
    v20 = src;
LABEL_18:
    v21 = strcmp(v20, v19);
    v22 = *((const char **)v17 + 2);
    v17 = *((const char **)v17 + 3);
    if ( v21 >= 0 )
    {
      v17 = v22;
      v39 = v37;
    }
    if ( !v17 )
      goto LABEL_27;
  }
  if ( v23 )
  {
LABEL_25:
    v20 = *((const char **)v17 + 4);
    v19 = v41;
    v37 = v17;
    goto LABEL_18;
  }
  while ( 1 )
  {
    v24 = *((_QWORD *)v17 + 2);
    if ( !v24 )
      break;
    v39 = v17;
    v17 = *((const char **)v17 + 2);
    if ( *(_QWORD *)(v24 + 40) )
      goto LABEL_25;
  }
  v39 = v17;
LABEL_27:
  if ( v12 == v39 )
    goto LABEL_36;
  if ( *((_QWORD *)v39 + 5) )
  {
    v25 = *((const char **)v39 + 4);
    v26 = src;
    if ( v16 )
      goto LABEL_30;
LABEL_31:
    if ( strcmp(v26, v25) >= 0 )
      goto LABEL_32;
LABEL_36:
    v27 = operator new(0x40u);
    *(_DWORD *)(v27 + 56) = v11;
    v28 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
    *(_QWORD *)(v27 + 32) = s2;
    *(__m128i *)(v27 + 40) = v28;
    v31 = sub_4A5F0(v9, v39, v27 + 32, v29, v30, *(double *)v28.m128i_i64, a6, a7);
    if ( v32 )
    {
      if ( v31 || v12 == (const char *)v32 )
      {
        v33 = 1;
      }
      else
      {
        v34 = src;
        if ( *(_QWORD *)(v32 + 40) )
          v34 = *(const char **)(v32 + 32);
        v35 = src;
        if ( v16 )
          v35 = s2;
        v38 = v32;
        v36 = strcmp(v35, v34);
        v32 = v38;
        v33 = v36 >> 31;
      }
      std::_Rb_tree_insert_and_rebalance(v33, v27, v32, v12, *(double *)v28.m128i_i64, a6, a7);
      ++*(_QWORD *)(a1 + 200);
    }
    else if ( v27 )
    {
      if ( s2 )
      {
        *(_QWORD *)(v27 + 40) = 0;
        qfree(s2);
      }
      operator delete((void *)v27, 0x40u);
    }
  }
  else
  {
    v25 = src;
    if ( v16 )
    {
LABEL_30:
      v26 = s2;
      goto LABEL_31;
    }
LABEL_32:
    if ( s2 )
      qfree(s2);
  }
  return 1;
}
