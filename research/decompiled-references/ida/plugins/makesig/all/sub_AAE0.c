__int64 __fastcall sub_AAE0(const char **a1, __int64 *a2, char **a3, const char *a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  bool v7; // zf
  unsigned __int64 v8; // rax
  size_t *v9; // rcx
  const char *v10; // rbp
  size_t v11; // r12
  char *v12; // r14
  char v13; // r15
  const char *v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // eax
  char *v20; // r12
  size_t *v21; // rax
  const char *v22; // r15
  const char *v23; // r13
  size_t v24; // r14
  size_t v25; // r11
  __int64 v26; // rsi
  const char *v27; // rdx
  size_t v28; // rdx
  const char *v29; // r13
  size_t v30; // r14
  const char *v31; // rsi
  __int64 v32; // rax
  const char *v33; // rdi
  unsigned int v34; // ebx
  __int64 v36; // rax
  const char *v37; // r12
  size_t v38; // rax
  size_t v39; // r13
  size_t v40; // r15
  __int64 v41; // rsi
  const char *v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // r14
  unsigned __int64 v45; // [rsp+0h] [rbp-98h]
  size_t *v46; // [rsp+8h] [rbp-90h]
  unsigned int v47; // [rsp+14h] [rbp-84h]
  const char *v51; // [rsp+30h] [rbp-68h]
  size_t v52; // [rsp+38h] [rbp-60h]
  size_t *v53; // [rsp+40h] [rbp-58h] BYREF
  __int128 v54; // [rsp+48h] [rbp-50h]
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v55 = __readfsqword(0x28u);
  v5 = *a2;
  v54 = 0;
  v53 = nullptr;
  v6 = *(_QWORD *)(v5 + 24);
  v7 = v6 == -1;
  v8 = v6 + 1;
  v45 = v8;
  if ( v7 )
  {
    v9 = nullptr;
  }
  else
  {
    v44 = v8;
    v53 = (size_t *)qvector_reserve(&v53, 0, v8, 16);
    memset(&v53[2 * v54], 0, 16 * (v44 - v54));
    *(_QWORD *)&v54 = v44;
    v9 = v53;
    v5 = *a2;
  }
  v47 = 0;
  v10 = a4;
  while ( !(unsigned int)qregexec(v5 + 16, v10, v45, v9, 0) )
  {
    v11 = *v53;
    v46 = v53;
    if ( (__int64)*v53 > 0 )
    {
      v29 = a1[1];
      v30 = *v53;
      if ( v29 )
      {
        --v29;
        v30 = (size_t)&v29[v11];
      }
      v31 = *a1;
      if ( (unsigned __int64)a1[2] < v30 + 1 )
      {
        v32 = qvector_reserve(a1, v31, v30 + 1, 1);
        *a1 = (const char *)v32;
        v31 = (const char *)v32;
      }
      a1[1] = (const char *)(v30 + 1);
      v31[v30] = 0;
      memmove((void *)&(*a1)[(_QWORD)v29], v10, v11);
    }
    v12 = *a3;
    while ( 1 )
    {
      v13 = *v12;
      if ( !*v12 )
        break;
      while ( v13 == 92 )
      {
        v18 = v12[1];
        if ( v18 > 0x7F )
          break;
        v19 = 0;
        v20 = v12;
        do
        {
          if ( v18 - 48 > 9 )
            break;
          ++v20;
          v19 = v18 + 10 * v19 - 48;
          v18 = v20[1];
        }
        while ( v18 <= 0x7F );
        if ( v12 == v20 || v19 >= v45 )
          break;
        v21 = &v53[2 * v19];
        v22 = a1[1];
        v23 = &v10[*v21];
        v24 = v21[1] - *v21;
        v25 = v24;
        if ( v22 )
        {
          --v22;
          v25 = (size_t)&v22[v21[1] - *v21];
        }
        v26 = (__int64)*a1;
        v27 = (const char *)(v25 + 1);
        if ( (unsigned __int64)a1[2] < v25 + 1 )
        {
          v52 = v25;
          v51 = (const char *)(v25 + 1);
          v36 = qvector_reserve(a1, v26, v27, 1);
          v25 = v52;
          v27 = v51;
          *a1 = (const char *)v36;
          v26 = v36;
        }
        a1[1] = v27;
        v28 = v24;
        v12 = v20 + 1;
        *(_BYTE *)(v26 + v25) = 0;
        memmove((void *)&(*a1)[(_QWORD)v22], v23, v28);
        v13 = v20[1];
        if ( !v13 )
          goto LABEL_25;
      }
      v14 = a1[1];
      ++v12;
      v15 = 2;
      if ( v14 )
        v15 = (unsigned __int64)(v14-- + 1);
      v16 = (__int64)*a1;
      if ( (unsigned __int64)a1[2] < v15 )
      {
        v17 = qvector_reserve(a1, v16, v15, 1);
        *a1 = (const char *)v17;
        v16 = v17;
      }
      a1[1] = (const char *)v15;
      v14[v16] = v13;
      v14[(_QWORD)*a1 + 1] = 0;
    }
LABEL_25:
    ++v47;
    v9 = v53;
    v10 += v46[1];
    v5 = *a2;
  }
  if ( *v10 && v10 )
  {
    v37 = a1[1];
    v38 = strlen(v10);
    v39 = v38;
    v40 = v38;
    if ( v37 )
    {
      --v37;
      v40 = (size_t)&v37[v38];
    }
    v41 = (__int64)*a1;
    v42 = (const char *)(v40 + 1);
    if ( (unsigned __int64)a1[2] < v40 + 1 )
    {
      v43 = qvector_reserve(a1, v41, v42, 1);
      *a1 = (const char *)v43;
      v42 = (const char *)(v40 + 1);
      v41 = v43;
    }
    a1[1] = v42;
    *(_BYTE *)(v41 + v40) = 0;
    memmove((void *)&(*a1)[(_QWORD)v37], v10, v39);
  }
  v33 = s1;
  if ( a1[1] )
    v33 = *a1;
  v34 = strcmp(v33, a4);
  if ( v34 )
    v34 = v47;
  if ( v53 )
  {
    *(_QWORD *)&v54 = 0;
    qfree(v53);
  }
  return v34;
}

