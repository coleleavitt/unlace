__int64 __fastcall sub_3A820(__int64 a1, int a2, __int16 a3, const char *a4, const char *a5)
{
  const char *v5; // rbx
  __int64 v6; // rax
  size_t v7; // rax
  __int64 v8; // r12
  size_t v9; // rbp
  _QWORD *v10; // r15
  _QWORD *v11; // rbx
  char *v12; // r13
  char *v13; // r14
  _QWORD *v14; // r12
  char *v15; // rsi
  const char *v16; // rdi
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  void *v21; // rdi
  size_t v22; // rax
  size_t v23; // rbp
  const char *v25; // rsi
  char *v26; // rdi
  __int64 v27; // rax
  char *v28; // r12
  __m128i v29; // xmm1
  _QWORD *v30; // rsi
  _QWORD *v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rbp
  unsigned __int64 v34; // xmm1_8
  void *v35; // rdi
  size_t v36; // r12
  const char *v37; // rsi
  __int64 v38; // rax
  _QWORD *v39; // [rsp+0h] [rbp-B8h]
  __int64 v43; // [rsp+18h] [rbp-A0h]
  __m128i v44; // [rsp+20h] [rbp-98h] BYREF
  char *s2; // [rsp+30h] [rbp-88h]
  __m128i v46; // [rsp+38h] [rbp-80h] BYREF
  char v47; // [rsp+50h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+78h] [rbp-40h]

  v48 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  v5 = a4;
  if ( !*a4 )
  {
    v5 = &v47;
    qsnprintf();
  }
  v6 = *(_QWORD *)(a1 + 8);
  v46 = 0;
  v43 = v6;
  v7 = strlen(v5);
  v8 = v7 + 1;
  v9 = v7;
  s2 = (char *)qvector_reserve();
  v46.m128i_i64[0] = v8;
  memmove(s2, v5, v9);
  s2[v9] = 0;
  v10 = *(_QWORD **)(v43 + 676);
  v39 = (_QWORD *)(v43 + 668);
  v11 = (_QWORD *)(v43 + 668);
  if ( !v10 )
    goto LABEL_34;
  v12 = s2;
  v13 = (char *)s1;
  v11 = (_QWORD *)(v43 + 668);
  if ( v46.m128i_i64[0] )
    v13 = s2;
  while ( 1 )
  {
    v19 = v10[5];
    if ( !v46.m128i_i64[0] )
      break;
    if ( v19 )
      goto LABEL_17;
    v14 = v10;
    v15 = s2;
    v16 = s1;
LABEL_10:
    v17 = strcmp(v16, v15);
    v18 = (_QWORD *)v10[2];
    v10 = (_QWORD *)v10[3];
    if ( v17 >= 0 )
    {
      v11 = v14;
      v10 = v18;
    }
    if ( !v10 )
      goto LABEL_29;
  }
  if ( v19 )
  {
LABEL_17:
    v16 = (const char *)v10[4];
    v14 = v10;
    v15 = v13;
    goto LABEL_10;
  }
  while ( 1 )
  {
    v20 = v10[2];
    if ( !v20 )
      break;
    v11 = v10;
    v10 = (_QWORD *)v10[2];
    if ( *(_QWORD *)(v20 + 40) )
      goto LABEL_17;
  }
  v11 = v10;
LABEL_29:
  if ( v39 == v11 )
    goto LABEL_34;
  if ( !v11[5] )
  {
    v25 = s1;
    if ( v46.m128i_i64[0] )
    {
      v26 = s2;
      goto LABEL_33;
    }
    goto LABEL_22;
  }
  v25 = (const char *)v11[4];
  v26 = (char *)s1;
  if ( v46.m128i_i64[0] )
    v26 = s2;
LABEL_33:
  if ( strcmp(v26, v25) < 0 )
  {
LABEL_34:
    v27 = operator new(0x58u);
    v28 = s2;
    v29 = _mm_loadu_si128(&v46);
    *(_WORD *)(v27 + 84) = 0;
    v30 = v11;
    *(_QWORD *)(v27 + 32) = v28;
    v11 = (_QWORD *)v27;
    *(_QWORD *)(v27 + 56) = 0;
    *(_DWORD *)(v27 + 80) = 0;
    *(__m128i *)(v27 + 40) = v29;
    *(_OWORD *)(v27 + 64) = 0;
    s2 = nullptr;
    v44 = v29;
    v46 = 0;
    v31 = sub_3A660((_QWORD *)(v43 + 660), v30, v27 + 32);
    v33 = v31;
    if ( v32 )
    {
      if ( !v31 )
      {
        v34 = _mm_load_si128(&v44).m128i_u64[0];
        if ( v39 != (_QWORD *)v32 )
        {
          v37 = s1;
          if ( *(_QWORD *)(v32 + 40) )
            v37 = *(const char **)(v32 + 32);
          v44.m128i_i64[0] = v32;
          if ( !v34 )
            v28 = (char *)s1;
          strcmp(v28, v37);
        }
      }
      std::_Rb_tree_insert_and_rebalance();
      v12 = s2;
      ++*(_QWORD *)(v43 + 700);
      goto LABEL_22;
    }
    if ( v11 )
    {
      if ( v28 )
      {
        v11[5] = 0;
        qfree();
      }
      v21 = v11;
      v11 = v33;
      operator delete(v21, 0x58u);
      v12 = s2;
      goto LABEL_22;
    }
    v11 = v31;
  }
  else
  {
LABEL_22:
    if ( v12 )
    {
      v46.m128i_i64[0] = 0;
      qfree();
    }
  }
  *((_DWORD *)v11 + 20) = a2;
  *((_WORD *)v11 + 42) = a3;
  if ( a5 )
  {
    v22 = strlen(a5);
    v23 = v22;
    if ( v22 )
    {
      v35 = (void *)v11[7];
      v36 = v22 + 1;
      if ( v11[9] < v22 + 1 )
      {
        v38 = qvector_reserve();
        v11[7] = v38;
        v35 = (void *)v38;
      }
      v11[8] = v36;
      memmove(v35, a5, v23);
      *(_BYTE *)(v11[7] + v23) = 0;
    }
    else
    {
      v11[8] = 0;
    }
  }
  return 0;
}

