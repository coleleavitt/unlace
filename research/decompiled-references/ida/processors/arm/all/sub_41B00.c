unsigned __int64 __fastcall sub_41B00(__int64 a1, __int64 *a2, _DWORD *a3, const char *a4)
{
  size_t v4; // rax
  size_t v5; // r15
  size_t v6; // r14
  char *v7; // rax
  int *v8; // r14
  char *v9; // r15
  size_t v10; // rbx
  const char *v11; // r12
  int *v12; // r13
  int *v13; // rbp
  const char *v14; // rsi
  const char *v15; // rdi
  int v16; // eax
  int *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  const char *v20; // rdi
  const char *v21; // rsi
  void *v22; // rbp
  void *v23; // r13
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // r14
  __int64 v27; // r14
  unsigned __int64 v28; // r12
  _BYTE *v29; // rax
  _BYTE *v30; // rsi
  int v31; // edx
  int v32; // ecx
  int v33; // eax
  size_t v34; // rax
  size_t v35; // r12
  size_t v36; // rbp
  size_t v37; // rbp
  unsigned __int64 v38; // rbp
  _BYTE *v39; // rax
  _BYTE *v40; // rsi
  int v41; // edx
  int v42; // ecx
  int v43; // eax
  const void *v45; // r14
  void *v46; // rdi
  size_t v47; // rax
  size_t v48; // r15
  size_t v49; // r14
  char *v50; // rax
  size_t v51; // r15
  __int64 v52; // rax
  __int64 v53; // rax
  const void *v54; // r15
  void *v55; // rdi
  __int64 v56; // rax
  void *v60; // [rsp+18h] [rbp-88h]
  __int64 v61; // [rsp+20h] [rbp-80h]
  char *s2; // [rsp+28h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+30h] [rbp-70h]
  void *v64; // [rsp+40h] [rbp-60h]
  __int128 v65; // [rsp+48h] [rbp-58h]
  unsigned __int64 v66; // [rsp+60h] [rbp-40h]

  v66 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  s2 = 0;
  if ( a4 )
  {
    v4 = strlen(a4);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (char *)qvector_reserve((__int64)&s2, 0, v4 + 1, 1);
    n[0] = v5;
    s2 = v7;
    memmove(v7, a4, v6);
    s2[v6] = 0;
    v8 = (int *)qword_AA550;
    v9 = s2;
    if ( !qword_AA550 )
    {
      if ( s2 )
      {
        n[0] = 0;
        qfree((__int64)s2);
        s2 = 0;
      }
      *(_OWORD *)n = 0;
      goto LABEL_74;
    }
  }
  else
  {
    v8 = (int *)qword_AA550;
    v9 = 0;
    if ( !qword_AA550 )
      goto LABEL_25;
  }
  v10 = n[0];
  v11 = &s1;
  v12 = &dword_AA548;
  if ( n[0] )
    v11 = v9;
  while ( 1 )
  {
    v18 = *((_QWORD *)v8 + 5);
    if ( !v10 )
      break;
    if ( v18 )
      goto LABEL_15;
    v13 = v8;
    v14 = v9;
    v15 = &s1;
LABEL_8:
    v16 = strcmp(v15, v14);
    v17 = (int *)*((_QWORD *)v8 + 2);
    v8 = (int *)*((_QWORD *)v8 + 3);
    if ( v16 >= 0 )
    {
      v12 = v13;
      v8 = v17;
    }
    if ( !v8 )
      goto LABEL_17;
  }
  if ( v18 )
  {
LABEL_15:
    v15 = (const char *)*((_QWORD *)v8 + 4);
    v13 = v8;
    v14 = v11;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v19 = *((_QWORD *)v8 + 2);
    if ( !v19 )
      break;
    v12 = v8;
    v8 = (int *)*((_QWORD *)v8 + 2);
    if ( *(_QWORD *)(v19 + 40) )
      goto LABEL_15;
  }
  v12 = v8;
LABEL_17:
  if ( v12 == &dword_AA548 )
    goto LABEL_22;
  if ( !*((_QWORD *)v12 + 5) )
  {
    v20 = v9;
    v21 = &s1;
    if ( v10 )
      goto LABEL_21;
LABEL_58:
    if ( v9 )
    {
      n[0] = 0;
      qfree((__int64)v9);
    }
    if ( a2 != (__int64 *)(v12 + 14) )
    {
      v38 = *((_QWORD *)v12 + 8);
      if ( v38 > 1 )
      {
        v45 = (const void *)*((_QWORD *)v12 + 7);
        v46 = (void *)*a2;
        if ( a2[2] < v38 )
        {
          v53 = qvector_reserve((__int64)a2, *a2, *((_QWORD *)v12 + 8), 1);
          *a2 = v53;
          v46 = (void *)v53;
        }
        a2[1] = v38;
        memmove(v46, v45, v38 - 1);
        *(_BYTE *)(*a2 + v38 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    v39 = (_BYTE *)*((_QWORD *)v12 + 7);
    v40 = &v39[*((_QWORD *)v12 + 8)];
    if ( v39 == v40 )
    {
      v43 = 1;
    }
    else
    {
      v41 = 0;
      do
      {
        v42 = *v39++ == 10;
        v41 += v42;
      }
      while ( v40 != v39 );
      v43 = v41 + 1;
    }
    *a3 += v43;
    return v66 - __readfsqword(0x28u);
  }
  v20 = &s1;
  v21 = (const char *)*((_QWORD *)v12 + 4);
  if ( v10 )
    v20 = v9;
LABEL_21:
  if ( strcmp(v20, v21) >= 0 )
    goto LABEL_58;
LABEL_22:
  if ( v9 )
  {
    n[0] = 0;
    qfree((__int64)v9);
  }
  s2 = 0;
  *(_OWORD *)n = 0;
  if ( !a4 )
  {
LABEL_25:
    v22 = 0;
    v23 = 0;
    v60 = 0;
    v24 = qword_AA520;
    v25 = 32 * xmmword_AA528;
    v61 = qword_AA520 + 32 * xmmword_AA528;
    goto LABEL_26;
  }
LABEL_74:
  v47 = strlen(a4);
  v48 = v47 + 1;
  v49 = v47;
  v50 = (char *)qvector_reserve((__int64)&s2, 0, v47 + 1, 1);
  n[0] = v48;
  s2 = v50;
  memmove(v50, a4, v49);
  s2[v49] = 0;
  v51 = n[0];
  if ( !n[0] )
    goto LABEL_25;
  v22 = (void *)qalloc_or_throw();
  memcpy(v22, s2, v51);
  v24 = qword_AA520;
  v25 = 32 * xmmword_AA528;
  v61 = qword_AA520 + 32 * xmmword_AA528;
  v60 = (void *)qalloc_or_throw();
  memcpy(v60, v22, v51);
  v23 = (void *)qalloc_or_throw();
  memcpy(v23, v60, v51);
LABEL_26:
  v26 = v25 >> 7;
  if ( v26 <= 0 )
  {
    v27 = v24;
LABEL_80:
    v52 = v61 - v27;
    if ( v61 - v27 != 64 )
    {
      if ( v52 != 96 )
      {
        if ( v52 != 32 )
          goto LABEL_83;
        goto LABEL_92;
      }
      if ( !(unsigned int)qregexec() )
      {
LABEL_98:
        v24 = v27;
        goto LABEL_33;
      }
      v27 += 32;
    }
    if ( (unsigned int)qregexec() )
    {
      v27 += 32;
LABEL_92:
      v24 = v27;
      if ( !(unsigned int)qregexec() )
        goto LABEL_33;
LABEL_83:
      v24 = v61;
      goto LABEL_33;
    }
    goto LABEL_98;
  }
  v27 = v24 + (v26 << 7);
  while ( (unsigned int)qregexec() )
  {
    if ( !(unsigned int)qregexec() )
    {
      v24 += 32;
      break;
    }
    if ( !(unsigned int)qregexec() )
    {
      v24 += 64;
      break;
    }
    if ( !(unsigned int)qregexec() )
    {
      v24 += 96;
      break;
    }
    v24 += 128;
    if ( v24 == v27 )
      goto LABEL_80;
  }
LABEL_33:
  if ( v23 )
    qfree((__int64)v23);
  if ( v60 )
    qfree((__int64)v60);
  if ( v22 )
    qfree((__int64)v22);
  if ( s2 )
  {
    n[0] = 0;
    qfree((__int64)s2);
  }
  if ( v24 != qword_AA520 + 32LL * (_QWORD)xmmword_AA528 )
  {
    if ( a2 != (__int64 *)(v24 + 8) )
    {
      v28 = *(_QWORD *)(v24 + 16);
      if ( v28 > 1 )
      {
        v54 = *(const void **)(v24 + 8);
        v55 = (void *)*a2;
        if ( a2[2] < v28 )
        {
          v56 = qvector_reserve((__int64)a2, *a2, *(_QWORD *)(v24 + 16), 1);
          *a2 = v56;
          v55 = (void *)v56;
        }
        a2[1] = v28;
        memmove(v55, v54, v28 - 1);
        *(_BYTE *)(*a2 + v28 - 1) = 0;
      }
      else
      {
        a2[1] = 0;
      }
    }
    v29 = *(_BYTE **)(v24 + 8);
    v30 = &v29[*(_QWORD *)(v24 + 16)];
    if ( v29 == v30 )
    {
      v33 = 1;
    }
    else
    {
      v31 = 0;
      do
      {
        v32 = *v29++ == 10;
        v31 += v32;
      }
      while ( v30 != v29 );
      v33 = v31 + 1;
    }
    s2 = 0;
    *(_OWORD *)n = 0;
    *a3 += v33;
    if ( a4 )
    {
      v34 = strlen(a4);
      v35 = v34 + 1;
      v36 = v34;
      s2 = (char *)qvector_reserve((__int64)&s2, 0, v34 + 1, 1);
      n[0] = v35;
      memmove(s2, a4, v36);
      s2[v36] = 0;
    }
    v64 = 0;
    v65 = 0;
    v37 = *(_QWORD *)(v24 + 16);
    if ( v37 )
    {
      v64 = (void *)qalloc_or_throw();
      *((_QWORD *)&v65 + 1) = v37;
      memcpy(v64, *(const void **)(v24 + 8), v37);
      *(_QWORD *)&v65 = v37;
    }
    sub_41530(&qword_AA540, (__int64)&s2);
    if ( v64 )
    {
      *(_QWORD *)&v65 = 0;
      qfree((__int64)v64);
    }
    if ( s2 )
    {
      n[0] = 0;
      qfree((__int64)s2);
    }
  }
  return v66 - __readfsqword(0x28u);
}
