__int64 __fastcall sub_C1C10(const char *src, __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // r13
  size_t v4; // rbp
  void *v5; // rax
  void *v6; // r13
  int *v7; // rbp
  size_t v8; // rax
  __int64 v9; // r13
  size_t v10; // rbp
  int *v11; // r15
  int *v12; // rbx
  __int64 v13; // rbp
  char *v14; // r13
  const char *v15; // r14
  int *v16; // r12
  const char *v17; // rsi
  const char *v18; // rdi
  int v19; // eax
  int *v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  const char *v23; // rsi
  const char *v24; // rdi
  __int64 v26; // rax
  char *v27; // r12
  const char *v28; // rsi
  __m128i v29; // xmm0
  __int64 v30; // rcx
  __int64 v31; // r8
  const char *v32; // rax
  __int64 v33; // rdx
  int *v34; // rbp
  unsigned __int64 v35; // xmm0_8
  const char *v36; // rsi
  unsigned int v37; // eax
  __int64 v38; // rdi
  int *v39; // rdi
  __int64 v41; // [rsp+10h] [rbp-70h]
  __m128i v42; // [rsp+18h] [rbp-68h] BYREF
  void *ptr; // [rsp+28h] [rbp-58h] BYREF
  __m128i v44; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v45; // [rsp+40h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  v44 = 0;
  ptr = nullptr;
  if ( !src )
  {
    if ( &dword_241E08 == (int *)sub_C0A00((__int64)&qword_241E00, (__int64)&ptr) )
      goto LABEL_6;
LABEL_46:
    if ( !unk_2439A0 )
      sub_198E10(3226);
    BUG();
  }
  v2 = strlen(src);
  v3 = v2 + 1;
  v4 = v2;
  v5 = (void *)sub_1987B0(&ptr, 0, v2 + 1, 1);
  v44.m128i_i64[0] = v3;
  ptr = v5;
  memmove(v5, src, v4);
  *((_BYTE *)ptr + v4) = 0;
  v6 = ptr;
  v7 = (int *)sub_C0A00((__int64)&qword_241E00, (__int64)&ptr);
  if ( v6 )
  {
    v44.m128i_i64[0] = 0;
    j__free(v6);
  }
  if ( v7 != &dword_241E08 )
    goto LABEL_46;
  ptr = nullptr;
  v44 = 0;
  v8 = strlen(src);
  v9 = v8 + 1;
  v10 = v8;
  ptr = (void *)sub_1987B0(&ptr, 0, v8 + 1, 1);
  v44.m128i_i64[0] = v9;
  memmove(ptr, src, v10);
  *((_BYTE *)ptr + v10) = 0;
LABEL_6:
  v11 = (int *)qword_241E10;
  v12 = &dword_241E08;
  if ( !qword_241E10 )
    goto LABEL_29;
  v13 = v44.m128i_i64[0];
  v14 = (char *)ptr;
  v15 = s1;
  v12 = &dword_241E08;
  if ( v44.m128i_i64[0] )
    v15 = (const char *)ptr;
  while ( 1 )
  {
    v21 = *((_QWORD *)v11 + 5);
    if ( !v13 )
      break;
    if ( v21 )
      goto LABEL_19;
    v16 = v11;
    v17 = v14;
    v18 = s1;
LABEL_12:
    v19 = strcmp(v18, v17);
    v20 = *((int **)v11 + 2);
    v11 = *((int **)v11 + 3);
    if ( v19 >= 0 )
    {
      v12 = v16;
      v11 = v20;
    }
    if ( !v11 )
      goto LABEL_21;
  }
  if ( v21 )
  {
LABEL_19:
    v18 = *((const char **)v11 + 4);
    v16 = v11;
    v17 = v15;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v22 = *((_QWORD *)v11 + 2);
    if ( !v22 )
      break;
    v12 = v11;
    v11 = *((int **)v11 + 2);
    if ( *(_QWORD *)(v22 + 40) )
      goto LABEL_19;
  }
  v12 = v11;
LABEL_21:
  if ( v12 == &dword_241E08 )
    goto LABEL_29;
  if ( *((_QWORD *)v12 + 5) )
  {
    v23 = *((const char **)v12 + 4);
    v24 = s1;
    if ( v13 )
      goto LABEL_24;
LABEL_25:
    if ( strcmp(v24, v23) >= 0 )
      goto LABEL_26;
LABEL_29:
    v26 = operator new(0x40u);
    v27 = (char *)ptr;
    v28 = (const char *)v12;
    v12 = (int *)v26;
    v29 = _mm_loadu_si128(&v44);
    *(_QWORD *)(v26 + 56) = 0;
    *(_QWORD *)(v26 + 32) = v27;
    *(__m128i *)(v26 + 40) = v29;
    ptr = nullptr;
    v42 = v29;
    v44 = 0;
    v32 = sub_C1A50(&qword_241E00, v28, v26 + 32, v30, v31);
    v34 = (int *)v32;
    if ( v33 )
    {
      if ( &dword_241E08 == (int *)v33 || (v35 = _mm_load_si128(&v42).m128i_u64[0], v32) )
      {
        v38 = 1;
      }
      else
      {
        v36 = s1;
        if ( *(_QWORD *)(v33 + 40) )
          v36 = *(const char **)(v33 + 32);
        v41 = v33;
        if ( !v35 )
          v27 = (char *)s1;
        v37 = strcmp(v27, v36);
        v33 = v41;
        v38 = v37 >> 31;
      }
      std::_Rb_tree_insert_and_rebalance(v38, v12, v33, &dword_241E08);
      ++qword_241E28;
      v14 = (char *)ptr;
      goto LABEL_26;
    }
    if ( v12 )
    {
      if ( v27 )
      {
        *((_QWORD *)v12 + 5) = 0;
        j__free(v27);
      }
      v39 = v12;
      v12 = v34;
      operator delete(v39, 0x40u);
      v14 = (char *)ptr;
      goto LABEL_26;
    }
    *((_QWORD *)v32 + 7) = a2;
  }
  else
  {
    v23 = s1;
    if ( v13 )
    {
LABEL_24:
      v24 = v14;
      goto LABEL_25;
    }
LABEL_26:
    *((_QWORD *)v12 + 7) = a2;
    if ( v14 )
    {
      v44.m128i_i64[0] = 0;
      j__free(v14);
    }
  }
  return 1;
}
