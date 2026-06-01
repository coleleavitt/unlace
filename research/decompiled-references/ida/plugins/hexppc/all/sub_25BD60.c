__int64 __fastcall sub_25BD60(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void (__fastcall ***a4)(_QWORD, _QWORD, void *, __int64),
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        char *s)
{
  __int64 v10; // rbp
  unsigned __int64 v12; // rdx
  __int64 v13; // r13
  _BYTE *v14; // rsi
  __int64 v15; // rbp
  unsigned int v16; // r13d
  char *v17; // r14
  __int64 v18; // r9
  size_t v19; // r10
  signed __int64 v20; // r11
  __int64 v21; // rsi
  signed __int64 v22; // rdx
  __int64 v23; // rcx
  void (__fastcall *v24)(_QWORD, _QWORD, void *, __int64); // r9
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  char *v27; // rbp
  char *v28; // rax
  char v29; // dl
  char *v30; // rax
  char v31; // dl
  char *v32; // rax
  char v33; // dl
  __int64 v34; // rbp
  size_t v35; // rax
  size_t v36; // r9
  __int64 v37; // rsi
  void *v38; // rdi
  size_t v39; // rdx
  __int64 v40; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  signed __int64 v44; // [rsp+8h] [rbp-4C0h]
  size_t v45; // [rsp+8h] [rbp-4C0h]
  size_t v46; // [rsp+8h] [rbp-4C0h]
  unsigned __int64 v47; // [rsp+8h] [rbp-4C0h]
  size_t v48; // [rsp+10h] [rbp-4B8h]
  __int64 v49; // [rsp+18h] [rbp-4B0h]
  signed __int64 v50; // [rsp+20h] [rbp-4A8h]
  char src[1023]; // [rsp+80h] [rbp-448h] BYREF
  char v54; // [rsp+47Fh] [rbp-49h] BYREF
  char v55; // [rsp+480h] [rbp-48h] BYREF
  unsigned __int64 v56; // [rsp+488h] [rbp-40h]

  v10 = a5[1];
  v56 = __readfsqword(0x28u);
  if ( !v10 )
  {
    v14 = (_BYTE *)*a5;
    v13 = 1;
    v12 = 2;
    if ( (unsigned __int64)a5[2] >= 2 )
      goto LABEL_3;
LABEL_46:
    v47 = v12;
    v43 = qvector_reserve();
    v12 = v47;
    *a5 = v43;
    v14 = (_BYTE *)v43;
    goto LABEL_3;
  }
  v12 = v10 + 1;
  v13 = v10;
  v14 = (_BYTE *)*a5;
  --v10;
  if ( a5[2] < v12 )
    goto LABEL_46;
LABEL_3:
  a5[1] = v12;
  v14[v10] = 32;
  v15 = 0;
  *(_BYTE *)(*a5 + v13) = 0;
  v16 = 0;
  while ( 1 )
  {
    sub_3266D0(a5, 12, v12, a4);
    v17 = strchr(s, 10);
    if ( !v17 )
      v17 = &s[strlen(s)];
    v18 = a5[1];
    v19 = v17 - s;
    v20 = v17 - s;
    if ( v18 )
    {
      --v18;
      v20 = v19 + v18;
    }
    v21 = *a5;
    v22 = v20 + 1;
    if ( a5[2] < (unsigned __int64)(v20 + 1) )
    {
      v50 = v20;
      v49 = v18;
      v44 = v20 + 1;
      v26 = qvector_reserve();
      v20 = v50;
      v18 = v49;
      v19 = v17 - s;
      v22 = v44;
      *a5 = v26;
      v21 = v26;
    }
    a5[1] = v22;
    ++v16;
    *(_BYTE *)(v21 + v20) = 0;
    memmove((void *)(v18 + *a5), s, v19);
    sub_3267B0(a5, 12);
    v23 = *a5;
    v24 = **a4;
    if ( !*v17 )
      break;
    s = v17 + 1;
    v24(a4, a3, &unk_40605A, v23);
    if ( v15 )
    {
      v12 = a5[1];
      v25 = v15 + 1;
      if ( v12 < v15 + 1 )
      {
        v37 = *a5;
        if ( a5[2] < v25 )
        {
          v40 = qvector_reserve();
          v12 = a5[1];
          *a5 = v40;
          v37 = v40;
        }
        memset((void *)(v37 + v12), 0, v25 - v12);
        a5[1] = v25;
      }
      else if ( v25 != v12 )
      {
        a5[1] = v25;
      }
      *(_BYTE *)(*a5 + v15) = 0;
    }
    else
    {
      src[0] = 0;
      v27 = (char *)add_spaces();
      if ( a1 )
      {
        tag_addr();
        if ( v27 >= &v55 )
        {
          if ( !under_debugger )
            sub_37EEE0(520);
LABEL_53:
          BUG();
        }
        v28 = nullptr;
        if ( v27 == &v54 )
        {
LABEL_43:
          v54 = 0;
          v27 = &v54;
        }
        else
        {
          while ( 1 )
          {
            v29 = *v28++;
            *v27 = v29;
            if ( !v29 )
              break;
            if ( ++v27 == &v54 )
              goto LABEL_43;
          }
        }
        tag_addr();
        if ( v27 >= &v55 )
        {
          if ( !under_debugger )
            sub_37EEE0(520);
          goto LABEL_53;
        }
        v30 = nullptr;
        if ( v27 == &v54 )
        {
LABEL_42:
          v54 = 0;
          v27 = &v54;
        }
        else
        {
          while ( 1 )
          {
            v31 = *v30++;
            *v27 = v31;
            if ( !v31 )
              break;
            if ( ++v27 == &v54 )
              goto LABEL_42;
          }
        }
      }
      if ( v27 >= &v55 )
      {
        if ( !under_debugger )
          sub_37EEE0(520);
        goto LABEL_53;
      }
      v32 = (char *)&unk_419856;
      if ( v27 == &v54 )
      {
LABEL_38:
        v54 = 0;
      }
      else
      {
        while ( 1 )
        {
          v33 = *v32++;
          *v27 = v33;
          if ( !v33 )
            break;
          if ( ++v27 == &v54 )
            goto LABEL_38;
        }
      }
      v34 = add_spaces();
      v35 = strlen(src);
      v36 = v35;
      if ( v35 )
      {
        v38 = (void *)*a5;
        v39 = v35 + 1;
        if ( a5[2] < v35 + 1 )
        {
          v46 = v35 + 1;
          v48 = v35;
          v42 = qvector_reserve();
          v36 = v48;
          v39 = v46;
          *a5 = v42;
          v38 = (void *)v42;
        }
        a5[1] = v39;
        v45 = v36;
        memmove(v38, src, v36);
        *(_BYTE *)(*a5 + v45) = 0;
      }
      else
      {
        a5[1] = 0;
      }
      v15 = v34 - (_QWORD)src;
    }
  }
  v24(a4, a3, &unk_40605A, v23);
  return v16;
}

