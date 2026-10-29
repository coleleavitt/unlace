__int64 __fastcall sub_25F9E0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void (__fastcall ***a4)(_QWORD, _QWORD, void *, __int64),
        __int64 *a5,
        __int64 a6,
        double a7,
        __int64 a8,
        char *s)
{
  __int64 v11; // rbp
  unsigned __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned int v17; // r13d
  char *v18; // r14
  __int64 v19; // r9
  size_t v20; // r10
  size_t v21; // r11
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rcx
  void (__fastcall *v25)(_QWORD, _QWORD, void *, __int64); // r9
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // r14
  __int64 v28; // rax
  char *v29; // rbp
  char *v30; // rax
  char v31; // dl
  char *v32; // rax
  char v33; // dl
  char *v34; // rax
  char v35; // dl
  __int64 v36; // rbp
  size_t v37; // rax
  size_t v38; // r9
  __int64 v39; // rsi
  void *v40; // rdi
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+8h] [rbp-4C0h]
  size_t v47; // [rsp+8h] [rbp-4C0h]
  __int64 v48; // [rsp+8h] [rbp-4C0h]
  unsigned __int64 v49; // [rsp+8h] [rbp-4C0h]
  size_t v50; // [rsp+10h] [rbp-4B8h]
  __int64 v51; // [rsp+18h] [rbp-4B0h]
  size_t v52; // [rsp+20h] [rbp-4A8h]
  char src[1023]; // [rsp+80h] [rbp-448h] BYREF
  char v56; // [rsp+47Fh] [rbp-49h] BYREF
  char v57; // [rsp+480h] [rbp-48h] BYREF
  unsigned __int64 v58; // [rsp+488h] [rbp-40h]

  v11 = a5[1];
  v58 = __readfsqword(0x28u);
  if ( !v11 )
  {
    v15 = *a5;
    v14 = 1;
    v13 = 2;
    if ( (unsigned __int64)a5[2] >= 2 )
      goto LABEL_3;
LABEL_46:
    v49 = v13;
    v45 = qvector_reserve((__int64)a5, v15, v13, 1);
    v13 = v49;
    *a5 = v45;
    v15 = v45;
    goto LABEL_3;
  }
  v13 = v11 + 1;
  v14 = v11;
  v15 = *a5;
  --v11;
  if ( a5[2] < v13 )
    goto LABEL_46;
LABEL_3:
  a5[1] = v13;
  *(_BYTE *)(v15 + v11) = 32;
  v16 = 0;
  *(_BYTE *)(*a5 + v14) = 0;
  v17 = 0;
  while ( 1 )
  {
    sub_32AA00(a5, 12);
    v18 = strchr(s, 10);
    if ( !v18 )
      v18 = &s[strlen(s)];
    v19 = a5[1];
    v20 = v18 - s;
    v21 = v18 - s;
    if ( v19 )
    {
      --v19;
      v21 = v20 + v19;
    }
    v22 = *a5;
    v23 = v21 + 1;
    if ( a5[2] < v21 + 1 )
    {
      v52 = v21;
      v51 = v19;
      v46 = v21 + 1;
      v28 = qvector_reserve((__int64)a5, v22, v23, 1);
      v21 = v52;
      v19 = v51;
      v20 = v18 - s;
      v23 = v46;
      *a5 = v28;
      v22 = v28;
    }
    a5[1] = v23;
    ++v17;
    *(_BYTE *)(v22 + v21) = 0;
    memmove((void *)(v19 + *a5), s, v20);
    sub_32AAE0(a5, 12);
    v24 = *a5;
    v25 = **a4;
    if ( !*v18 )
      break;
    s = v18 + 1;
    v25(a4, a3, &unk_41903F, v24);
    if ( v16 )
    {
      v26 = a5[1];
      v27 = v16 + 1;
      if ( v26 < v16 + 1 )
      {
        v39 = *a5;
        if ( a5[2] < v27 )
        {
          v42 = qvector_reserve((__int64)a5, v39, v16 + 1, 1);
          v26 = a5[1];
          *a5 = v42;
          v39 = v42;
        }
        memset((void *)(v39 + v26), 0, v27 - v26);
        a5[1] = v27;
      }
      else if ( v27 != v26 )
      {
        a5[1] = v27;
      }
      *(_BYTE *)(*a5 + v16) = 0;
    }
    else
    {
      src[0] = 0;
      v29 = (char *)add_spaces();
      if ( a1 )
      {
        tag_addr();
        if ( v29 >= &v57 )
        {
          if ( !under_debugger )
            sub_383060(0x208u, 0.0);
LABEL_53:
          BUG();
        }
        v30 = nullptr;
        if ( v29 == &v56 )
        {
LABEL_43:
          v56 = 0;
          v29 = &v56;
        }
        else
        {
          while ( 1 )
          {
            v31 = *v30++;
            *v29 = v31;
            if ( !v31 )
              break;
            if ( ++v29 == &v56 )
              goto LABEL_43;
          }
        }
        a7 = 0.0;
        tag_addr();
        if ( v29 >= &v57 )
        {
          if ( !under_debugger )
            sub_383060(0x208u, 0.0);
          goto LABEL_53;
        }
        v32 = nullptr;
        if ( v29 == &v56 )
        {
LABEL_42:
          v56 = 0;
          v29 = &v56;
        }
        else
        {
          while ( 1 )
          {
            v33 = *v32++;
            *v29 = v33;
            if ( !v33 )
              break;
            if ( ++v29 == &v56 )
              goto LABEL_42;
          }
        }
      }
      if ( v29 >= &v57 )
      {
        if ( !under_debugger )
          sub_383060(0x208u, a7);
        goto LABEL_53;
      }
      v34 = (char *)&unk_42C496;
      if ( v29 == &v56 )
      {
LABEL_38:
        v56 = 0;
      }
      else
      {
        while ( 1 )
        {
          v35 = *v34++;
          *v29 = v35;
          if ( !v35 )
            break;
          if ( ++v29 == &v56 )
            goto LABEL_38;
        }
      }
      v36 = add_spaces();
      v37 = strlen(src);
      v38 = v37;
      if ( v37 )
      {
        v40 = (void *)*a5;
        v41 = v37 + 1;
        if ( a5[2] < v37 + 1 )
        {
          v48 = v37 + 1;
          v50 = v37;
          v44 = qvector_reserve((__int64)a5, *a5, v41, 1);
          v38 = v50;
          v41 = v48;
          *a5 = v44;
          v40 = (void *)v44;
        }
        a5[1] = v41;
        v47 = v38;
        memmove(v40, src, v38);
        *(_BYTE *)(*a5 + v47) = 0;
      }
      else
      {
        a5[1] = 0;
      }
      v16 = v36 - (_QWORD)src;
    }
  }
  v25(a4, a3, &unk_41903F, v24);
  return v17;
}

