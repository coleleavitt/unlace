unsigned __int64 __fastcall sub_1A0A50(__int64 a1, int a2, void *a3, unsigned int a4)
{
  size_t v7; // rax
  size_t v8; // r13
  size_t v9; // r15
  char *v10; // rcx
  const char *v11; // r14
  __int64 v12; // r13
  const char *v13; // rbp
  const char *v14; // rdx
  const char *v15; // rbx
  const char *v16; // r12
  const char *v17; // rdi
  const char *v18; // r15
  const char *v19; // rsi
  int v20; // eax
  const char *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  const char *v24; // rdi
  const char *v25; // rax
  int v26; // eax
  _DWORD *v27; // r15
  char *v28; // r15
  char *v29; // r12
  const char *v30; // r13
  __int64 v31; // r14
  const char *v32; // rbp
  const char *v33; // rcx
  const char *v34; // r15
  const char *v35; // r12
  const char *v36; // rsi
  const char *v37; // rdi
  int v38; // eax
  const char *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rcx
  void *v42; // rdx
  const char *v43; // rdi
  const char *v44; // rax
  const char *v45; // rdi
  int v46; // eax
  const char *v47; // rax
  const char *v48; // r15
  const char *v50; // [rsp+0h] [rbp-A8h]
  void *v51; // [rsp+0h] [rbp-A8h]
  char *s1a; // [rsp+10h] [rbp-98h]
  char *s1; // [rsp+10h] [rbp-98h]
  char *v55; // [rsp+20h] [rbp-88h]
  char *v56; // [rsp+20h] [rbp-88h]
  const char *v57; // [rsp+28h] [rbp-80h]
  const char *v58; // [rsp+28h] [rbp-80h]
  void *src; // [rsp+30h] [rbp-78h]
  _DWORD n[3]; // [rsp+3Ch] [rbp-6Ch] BYREF
  void **p_ptr; // [rsp+48h] [rbp-60h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h] BYREF
  __int128 v63; // [rsp+58h] [rbp-50h]
  unsigned __int64 v64; // [rsp+68h] [rbp-40h]

  v64 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 5128) )
    return v64 - __readfsqword(0x28u);
  ptr = nullptr;
  v63 = 0;
  v7 = strlen((const char *)(a1 + 5128));
  v8 = v7 + 1;
  v9 = v7;
  ptr = sub_1987B0((__int64)&ptr, nullptr, v7 + 1, 1u);
  *(_QWORD *)&v63 = v8;
  memmove(ptr, (const void *)(a1 + 5128), v9);
  *((_BYTE *)ptr + v9) = 0;
  v10 = *(char **)(a1 + 5720);
  v11 = v10 + 8;
  if ( !*((_QWORD *)v10 + 2) )
    goto LABEL_23;
  v12 = v63;
  v13 = (const char *)ptr;
  src = a3;
  v14 = ::s1;
  n[0] = a4;
  v15 = *((const char **)v10 + 2);
  if ( (_QWORD)v63 )
    v14 = (const char *)ptr;
  v55 = *(char **)(a1 + 5720);
  v57 = v10 + 8;
  v16 = v14;
  while ( 1 )
  {
    v22 = *((_QWORD *)v15 + 5);
    if ( !v12 )
      break;
    if ( v22 )
      goto LABEL_16;
    v17 = ::s1;
    v18 = v15;
    v19 = v13;
LABEL_9:
    v20 = strcmp(v17, v19);
    v21 = *((const char **)v15 + 2);
    v15 = *((const char **)v15 + 3);
    if ( v20 >= 0 )
    {
      v11 = v18;
      v15 = v21;
    }
    if ( !v15 )
    {
      v10 = v55;
      v24 = v57;
      a3 = src;
      a4 = n[0];
      goto LABEL_18;
    }
  }
  if ( v22 )
  {
LABEL_16:
    v17 = *((const char **)v15 + 4);
    v18 = v15;
    v19 = v16;
    goto LABEL_9;
  }
  while ( 1 )
  {
    v23 = *((_QWORD *)v15 + 2);
    if ( !v23 )
      break;
    v11 = v15;
    v15 = *((const char **)v15 + 2);
    if ( *(_QWORD *)(v23 + 40) )
      goto LABEL_16;
  }
  v48 = v15;
  v10 = v55;
  v24 = v57;
  a3 = src;
  a4 = n[0];
  v11 = v48;
LABEL_18:
  if ( v24 == v11 )
    goto LABEL_23;
  if ( *((_QWORD *)v11 + 5) )
  {
    v25 = *((const char **)v11 + 4);
    if ( !v12 )
      v13 = ::s1;
LABEL_22:
    s1a = v10;
    v26 = strcmp(v13, v25);
    v10 = s1a;
    if ( v26 < 0 )
    {
LABEL_23:
      *(_QWORD *)&n[1] = &ptr;
      v11 = sub_1A05C0(v10, v11, (__int64 *)&n[1]);
    }
  }
  else
  {
    v25 = ::s1;
    if ( v12 )
      goto LABEL_22;
  }
  v27 = *((_DWORD **)v11 + 7);
  if ( v27 )
  {
    if ( *((unsigned __int8 *)v27 + 4) == a2 && *v27 == a4 && !memcmp((char *)v27 + 5, a3, a4) )
    {
      if ( ptr )
      {
        *(_QWORD *)&v63 = 0;
        j__free(ptr);
      }
      return v64 - __readfsqword(0x28u);
    }
    j__free(v27);
  }
  v28 = (char *)sub_198620(a4 + 5LL);
  if ( !v28 )
    sub_19F130();
  *(_DWORD *)v28 = a4;
  v28[4] = a2;
  memcpy(v28 + 5, a3, a4);
  v29 = *(char **)(a1 + 5720);
  v30 = *((const char **)v29 + 2);
  if ( !v30 )
  {
    v32 = v29 + 8;
    goto LABEL_50;
  }
  v31 = v63;
  v56 = v28;
  v32 = v29 + 8;
  s1 = *(char **)(a1 + 5720);
  v33 = ::s1;
  v58 = v29 + 8;
  if ( (_QWORD)v63 )
    v33 = (const char *)ptr;
  v34 = (const char *)ptr;
  v50 = v33;
  while ( 2 )
  {
    v40 = *((_QWORD *)v30 + 5);
    if ( v31 )
    {
      v35 = v30;
      if ( !v40 )
      {
        v36 = v34;
        v37 = ::s1;
        goto LABEL_35;
      }
LABEL_43:
      v37 = *((const char **)v30 + 4);
      v36 = v50;
LABEL_35:
      v38 = strcmp(v37, v36);
      v39 = *((const char **)v30 + 2);
      v30 = *((const char **)v30 + 3);
      if ( v38 >= 0 )
      {
        v32 = v35;
        v30 = v39;
      }
      if ( !v30 )
      {
        v42 = (void *)v34;
        v29 = s1;
        v43 = v58;
        v28 = v56;
        goto LABEL_45;
      }
      continue;
    }
    break;
  }
  if ( v40 )
  {
LABEL_42:
    v35 = v30;
    goto LABEL_43;
  }
  while ( 1 )
  {
    v41 = *((_QWORD *)v30 + 2);
    if ( !v41 )
      break;
    v32 = v30;
    v30 = *((const char **)v30 + 2);
    if ( *(_QWORD *)(v41 + 40) )
      goto LABEL_42;
  }
  v42 = (void *)v34;
  v29 = s1;
  v43 = v58;
  v32 = v30;
  v28 = v56;
LABEL_45:
  if ( v43 == v32 )
    goto LABEL_50;
  if ( *((_QWORD *)v32 + 5) )
  {
    v44 = *((const char **)v32 + 4);
    v45 = ::s1;
    if ( v31 )
      goto LABEL_48;
LABEL_49:
    v51 = v42;
    v46 = strcmp(v45, v44);
    v42 = v51;
    if ( v46 < 0 )
    {
LABEL_50:
      p_ptr = &ptr;
      v47 = sub_1A05C0(v29, v32, (__int64 *)&p_ptr);
      v42 = ptr;
      v32 = v47;
    }
  }
  else
  {
    v44 = ::s1;
    if ( v31 )
    {
LABEL_48:
      v45 = (const char *)v42;
      goto LABEL_49;
    }
  }
  *((_QWORD *)v32 + 7) = v28;
  *(_BYTE *)(a1 + 5640) = 1;
  if ( v42 )
  {
    *(_QWORD *)&v63 = 0;
    j__free(v42);
  }
  return v64 - __readfsqword(0x28u);
}
