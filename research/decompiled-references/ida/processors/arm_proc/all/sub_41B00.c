unsigned __int64 __fastcall sub_41B00(__int64 a1, __int64 a2, _DWORD *a3, const char *a4)
{
  size_t v4; // r14
  int *v5; // r14
  char *v6; // r15
  const char *v7; // r12
  int *v8; // r13
  int *v9; // rbp
  const char *v10; // rsi
  const char *v11; // rdi
  int v12; // eax
  int *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  const char *v16; // rdi
  const char *v17; // rsi
  void *v18; // rbp
  void *v19; // r13
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // r14
  __int64 v23; // r14
  unsigned __int64 v24; // r12
  _BYTE *v25; // rax
  _BYTE *v26; // rsi
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  size_t v30; // rax
  size_t v31; // r12
  size_t v32; // rbp
  size_t v33; // rbp
  unsigned __int64 v34; // rbp
  _BYTE *v35; // rax
  _BYTE *v36; // rsi
  int v37; // edx
  int v38; // ecx
  int v39; // eax
  const void *v41; // r14
  void *v42; // rdi
  size_t v43; // r14
  __int64 v44; // rax
  __int64 v45; // rax
  const void *v46; // r15
  void *v47; // rdi
  __int64 v48; // rax
  void *v52; // [rsp+18h] [rbp-88h]
  __int64 v53; // [rsp+20h] [rbp-80h]
  char *s2; // [rsp+28h] [rbp-78h] BYREF
  size_t n[2]; // [rsp+30h] [rbp-70h]
  void *v56; // [rsp+40h] [rbp-60h]
  __int128 v57; // [rsp+48h] [rbp-58h]
  unsigned __int64 v58; // [rsp+60h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  *(_OWORD *)n = 0;
  s2 = nullptr;
  if ( a4 )
  {
    v4 = strlen(a4);
    n[0] = v4 + 1;
    s2 = (char *)qvector_reserve();
    memmove(s2, a4, v4);
    s2[v4] = 0;
    v5 = (int *)qword_AA550;
    v6 = s2;
    if ( !qword_AA550 )
    {
      if ( s2 )
      {
        n[0] = 0;
        qfree();
        s2 = nullptr;
      }
      *(_OWORD *)n = 0;
      goto LABEL_74;
    }
  }
  else
  {
    v5 = (int *)qword_AA550;
    v6 = nullptr;
    if ( !qword_AA550 )
      goto LABEL_25;
  }
  v7 = &s1;
  v8 = &dword_AA548;
  if ( n[0] )
    v7 = v6;
  while ( 1 )
  {
    v14 = *((_QWORD *)v5 + 5);
    if ( !n[0] )
      break;
    if ( v14 )
      goto LABEL_15;
    v9 = v5;
    v10 = v6;
    v11 = &s1;
LABEL_8:
    v12 = strcmp(v11, v10);
    v13 = *((int **)v5 + 2);
    v5 = *((int **)v5 + 3);
    if ( v12 >= 0 )
    {
      v8 = v9;
      v5 = v13;
    }
    if ( !v5 )
      goto LABEL_17;
  }
  if ( v14 )
  {
LABEL_15:
    v11 = *((const char **)v5 + 4);
    v9 = v5;
    v10 = v7;
    goto LABEL_8;
  }
  while ( 1 )
  {
    v15 = *((_QWORD *)v5 + 2);
    if ( !v15 )
      break;
    v8 = v5;
    v5 = *((int **)v5 + 2);
    if ( *(_QWORD *)(v15 + 40) )
      goto LABEL_15;
  }
  v8 = v5;
LABEL_17:
  if ( v8 == &dword_AA548 )
    goto LABEL_22;
  if ( !*((_QWORD *)v8 + 5) )
  {
    v16 = v6;
    v17 = &s1;
    if ( n[0] )
      goto LABEL_21;
LABEL_58:
    if ( v6 )
    {
      n[0] = 0;
      qfree();
    }
    if ( (int *)a2 != v8 + 14 )
    {
      v34 = *((_QWORD *)v8 + 8);
      if ( v34 > 1 )
      {
        v41 = *((const void **)v8 + 7);
        v42 = *(void **)a2;
        if ( *(_QWORD *)(a2 + 16) < v34 )
        {
          v45 = qvector_reserve();
          *(_QWORD *)a2 = v45;
          v42 = (void *)v45;
        }
        *(_QWORD *)(a2 + 8) = v34;
        memmove(v42, v41, v34 - 1);
        *(_BYTE *)(*(_QWORD *)a2 + v34 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    v35 = *((_BYTE **)v8 + 7);
    v36 = &v35[*((_QWORD *)v8 + 8)];
    if ( v35 == v36 )
    {
      v39 = 1;
    }
    else
    {
      v37 = 0;
      do
      {
        v38 = *v35++ == 10;
        v37 += v38;
      }
      while ( v36 != v35 );
      v39 = v37 + 1;
    }
    *a3 += v39;
    return v58 - __readfsqword(0x28u);
  }
  v16 = &s1;
  v17 = *((const char **)v8 + 4);
  if ( n[0] )
    v16 = v6;
LABEL_21:
  if ( strcmp(v16, v17) >= 0 )
    goto LABEL_58;
LABEL_22:
  if ( v6 )
  {
    n[0] = 0;
    qfree();
  }
  s2 = nullptr;
  *(_OWORD *)n = 0;
  if ( !a4 )
  {
LABEL_25:
    v18 = nullptr;
    v19 = nullptr;
    v52 = nullptr;
    v20 = qword_AA520;
    v21 = 32 * xmmword_AA528;
    v53 = qword_AA520 + 32 * xmmword_AA528;
    goto LABEL_26;
  }
LABEL_74:
  v43 = strlen(a4);
  n[0] = v43 + 1;
  s2 = (char *)qvector_reserve();
  memmove(s2, a4, v43);
  s2[v43] = 0;
  if ( !n[0] )
    goto LABEL_25;
  v18 = (void *)qalloc_or_throw();
  memcpy(v18, s2, n[0]);
  v20 = qword_AA520;
  v21 = 32 * xmmword_AA528;
  v53 = qword_AA520 + 32 * xmmword_AA528;
  v52 = (void *)qalloc_or_throw();
  memcpy(v52, v18, n[0]);
  v19 = (void *)qalloc_or_throw();
  memcpy(v19, v52, n[0]);
LABEL_26:
  v22 = v21 >> 7;
  if ( v22 <= 0 )
  {
    v23 = v20;
LABEL_80:
    v44 = v53 - v23;
    if ( v53 - v23 != 64 )
    {
      if ( v44 != 96 )
      {
        if ( v44 != 32 )
          goto LABEL_83;
        goto LABEL_92;
      }
      if ( !(unsigned int)qregexec() )
      {
LABEL_98:
        v20 = v23;
        goto LABEL_33;
      }
      v23 += 32;
    }
    if ( (unsigned int)qregexec() )
    {
      v23 += 32;
LABEL_92:
      v20 = v23;
      if ( !(unsigned int)qregexec() )
        goto LABEL_33;
LABEL_83:
      v20 = v53;
      goto LABEL_33;
    }
    goto LABEL_98;
  }
  v23 = v20 + (v22 << 7);
  while ( (unsigned int)qregexec() )
  {
    if ( !(unsigned int)qregexec() )
    {
      v20 += 32;
      break;
    }
    if ( !(unsigned int)qregexec() )
    {
      v20 += 64;
      break;
    }
    if ( !(unsigned int)qregexec() )
    {
      v20 += 96;
      break;
    }
    v20 += 128;
    if ( v20 == v23 )
      goto LABEL_80;
  }
LABEL_33:
  if ( v19 )
    qfree();
  if ( v52 )
    qfree();
  if ( v18 )
    qfree();
  if ( s2 )
  {
    n[0] = 0;
    qfree();
  }
  if ( v20 != qword_AA520 + 32LL * (_QWORD)xmmword_AA528 )
  {
    if ( a2 != v20 + 8 )
    {
      v24 = *(_QWORD *)(v20 + 16);
      if ( v24 > 1 )
      {
        v46 = *(const void **)(v20 + 8);
        v47 = *(void **)a2;
        if ( *(_QWORD *)(a2 + 16) < v24 )
        {
          v48 = qvector_reserve();
          *(_QWORD *)a2 = v48;
          v47 = (void *)v48;
        }
        *(_QWORD *)(a2 + 8) = v24;
        memmove(v47, v46, v24 - 1);
        *(_BYTE *)(*(_QWORD *)a2 + v24 - 1) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    v25 = *(_BYTE **)(v20 + 8);
    v26 = &v25[*(_QWORD *)(v20 + 16)];
    if ( v25 == v26 )
    {
      v29 = 1;
    }
    else
    {
      v27 = 0;
      do
      {
        v28 = *v25++ == 10;
        v27 += v28;
      }
      while ( v26 != v25 );
      v29 = v27 + 1;
    }
    s2 = nullptr;
    *(_OWORD *)n = 0;
    *a3 += v29;
    if ( a4 )
    {
      v30 = strlen(a4);
      v31 = v30 + 1;
      v32 = v30;
      s2 = (char *)qvector_reserve();
      n[0] = v31;
      memmove(s2, a4, v32);
      s2[v32] = 0;
    }
    v56 = nullptr;
    v57 = 0;
    v33 = *(_QWORD *)(v20 + 16);
    if ( v33 )
    {
      v56 = (void *)qalloc_or_throw();
      *((_QWORD *)&v57 + 1) = v33;
      memcpy(v56, *(const void **)(v20 + 8), v33);
      *(_QWORD *)&v57 = v33;
    }
    sub_41530(&qword_AA540, (__int64)&s2);
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree();
    }
    if ( s2 )
    {
      n[0] = 0;
      qfree();
    }
  }
  return v58 - __readfsqword(0x28u);
}

