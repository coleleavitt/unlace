unsigned __int64 __fastcall sub_1A800(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  char *v4; // r12
  size_t v6; // rax
  size_t v7; // rbp
  size_t v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rbp
  const char *v11; // rax
  void *v12; // r13
  _QWORD *v13; // rbx
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  const char *v20; // rdi
  const char *v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rsi
  __m128i v27; // xmm0
  __int64 v28; // rax
  __m128i v29; // [rsp+0h] [rbp-68h] BYREF
  char *s2; // [rsp+10h] [rbp-58h] BYREF
  __int128 v31; // [rsp+18h] [rbp-50h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 8) != 57 )
    return v32 - __readfsqword(0x28u);
  v3 = *(_QWORD *)(a2 + 24);
  if ( *(_DWORD *)(v3 + 8) != 68 )
    return v32 - __readfsqword(0x28u);
  v4 = *(char **)(v3 + 24);
  s2 = nullptr;
  v31 = 0;
  if ( v4 )
  {
    v6 = strlen(v4);
    v7 = v6 + 1;
    v8 = v6;
    s2 = (char *)qvector_reserve(&s2, 0, v6 + 1, 1);
    *(_QWORD *)&v31 = v7;
    memmove(s2, v4, v8);
    s2[v8] = 0;
    v9 = (_QWORD *)qword_8D4D0;
    v4 = s2;
    if ( !qword_8D4D0 )
      goto LABEL_27;
  }
  else
  {
    v9 = (_QWORD *)qword_8D4D0;
    if ( !qword_8D4D0 )
      return v32 - __readfsqword(0x28u);
  }
  v10 = v31;
  v11 = s1;
  v12 = &unk_8D4C8;
  if ( (_QWORD)v31 )
    v11 = v4;
  v29.m128i_i64[0] = (__int64)v11;
  while ( 1 )
  {
    v18 = v9[5];
    if ( !v10 )
      break;
    if ( v18 )
      goto LABEL_18;
    v13 = v9;
    v14 = v4;
    v15 = s1;
LABEL_11:
    v16 = strcmp(v15, v14);
    v17 = (_QWORD *)v9[2];
    v9 = (_QWORD *)v9[3];
    if ( v16 >= 0 )
    {
      v12 = v13;
      v9 = v17;
    }
    if ( !v9 )
      goto LABEL_22;
  }
  if ( v18 )
  {
LABEL_18:
    v15 = (const char *)v9[4];
    v14 = (const char *)v29.m128i_i64[0];
    v13 = v9;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v19 = v9[2];
    if ( !v19 )
      break;
    v12 = v9;
    v9 = (_QWORD *)v9[2];
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_18;
  }
  v12 = v9;
LABEL_22:
  if ( v12 == &unk_8D4C8 )
    goto LABEL_27;
  if ( *((_QWORD *)v12 + 5) )
  {
    v20 = s1;
    v21 = *((const char **)v12 + 4);
    if ( v10 )
      v20 = v4;
LABEL_26:
    if ( strcmp(v20, v21) < 0 )
    {
LABEL_27:
      if ( v4 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v4);
      }
      return v32 - __readfsqword(0x28u);
    }
  }
  else
  {
    v20 = v4;
    v21 = s1;
    if ( v10 )
      goto LABEL_26;
  }
  if ( v4 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v4);
  }
  v22 = a1[3];
  if ( v22 )
  {
    v23 = *(_QWORD *)(a1[2] + 8 * v22 - 8);
    if ( !v23 || (v24 = *(_DWORD *)(v23 + 8), v24 <= 69) )
      v24 = 0;
    if ( v24 == 71 || v24 == 83 )
    {
      v25 = a1[9];
      v26 = a1[8];
      v27 = _mm_loadu_si128((const __m128i *)(a1[5] + 16LL * a1[6] - 16));
      if ( a1[10] < (unsigned __int64)(v25 + 1) )
      {
        v29 = v27;
        v28 = qvector_reserve(a1 + 8, v26, v25 + 1, 16);
        v25 = a1[9];
        v27 = _mm_load_si128(&v29);
        a1[8] = v28;
        v26 = v28;
      }
      *(__m128i *)(v26 + 16 * v25) = v27;
      ++a1[9];
    }
  }
  return v32 - __readfsqword(0x28u);
}
