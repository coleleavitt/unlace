unsigned __int64 __fastcall sub_139A0(__int64 a1)
{
  const char *v1; // rbp
  char *v3; // rax
  size_t v4; // r12
  unsigned __int64 v5; // r15
  const char *v6; // rbp
  char *v7; // rax
  unsigned __int64 v8; // rax
  size_t v9; // r14
  _QWORD *v10; // rbx
  const char *v11; // r15
  const char *v12; // rax
  _QWORD *v13; // r14
  _QWORD *v14; // rbp
  const char *v15; // rsi
  const char *v16; // rdi
  int v17; // eax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  const char *v21; // rdi
  const char *v22; // rsi
  char *v24; // rax
  unsigned __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  __int128 v27; // xmm0
  size_t v28; // rbx
  size_t v29; // rbp
  char *v30; // r12
  const char *v31; // r15
  size_t v32; // rbx
  size_t v33; // r12
  unsigned __int64 v34; // r15
  size_t v35; // r12
  char *v36; // rsi
  void *v37; // rdi
  __int64 v38; // rax
  size_t v39; // rdx
  size_t v40; // r14
  size_t v41; // r15
  size_t v42; // rax
  void *v43; // rdi
  __int64 v44; // rbx
  size_t v45; // rax
  char *s2; // [rsp+8h] [rbp-100h]
  __int64 v47; // [rsp+10h] [rbp-F8h]
  _QWORD *v48; // [rsp+18h] [rbp-F0h]
  size_t n; // [rsp+20h] [rbp-E8h]
  unsigned __int64 v50; // [rsp+28h] [rbp-E0h]
  __int64 v51; // [rsp+30h] [rbp-D8h]
  size_t v52; // [rsp+38h] [rbp-D0h]
  void *src; // [rsp+50h] [rbp-B8h]
  char *v54; // [rsp+70h] [rbp-98h]
  __int128 v55; // [rsp+78h] [rbp-90h]
  void *v56; // [rsp+90h] [rbp-78h]
  size_t v57; // [rsp+98h] [rbp-70h]
  char *v58; // [rsp+B0h] [rbp-58h]
  __int128 v59; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v60; // [rsp+C8h] [rbp-40h]

  v60 = __readfsqword(0x28u);
  v47 = *(_QWORD *)(a1 + 8);
  if ( !v47 )
    return v60 - __readfsqword(0x28u);
  v1 = *(const char **)a1;
  v3 = strstr(*(const char **)a1, "$(");
  if ( !v3 )
    return v60 - __readfsqword(0x28u);
  n = v3 - v1;
  if ( v3 - v1 == -1 )
    return v60 - __readfsqword(0x28u);
  do
  {
    v4 = n + 2;
    v5 = v47 - 1;
    if ( v47 - 1 < n + 2 )
      return v60 - __readfsqword(0x28u);
    v6 = *(const char **)a1;
    v7 = strchr((const char *)(*(_QWORD *)a1 + v4), 41);
    if ( !v7 )
      return v60 - __readfsqword(0x28u);
    v8 = v7 - v6;
    v50 = v8;
    if ( v8 == -1 )
      return v60 - __readfsqword(0x28u);
    v9 = v5 - v4;
    if ( v5 >= v8 )
    {
      if ( v4 > v8 )
        v4 = v8;
      v9 = v8 - v4;
    }
    v51 = 0;
    v52 = 0;
    if ( v9 )
    {
      v37 = nullptr;
      if ( v9 != -1 )
      {
        v51 = qvector_reserve();
        v37 = (void *)v51;
      }
      v52 = v9 + 1;
      memmove(v37, &v6[v4], v9);
      *(_BYTE *)(v51 + v9) = 0;
      v10 = *(_QWORD **)(a1 + 72);
      v11 = (const char *)v51;
      v47 = *(_QWORD *)(a1 + 8);
      v48 = (_QWORD *)(a1 + 64);
      if ( !v10 )
        goto LABEL_32;
    }
    else
    {
      v10 = *(_QWORD **)(a1 + 72);
      v11 = nullptr;
      v48 = (_QWORD *)(a1 + 64);
      if ( !v10 )
        goto LABEL_37;
    }
    v12 = s;
    v13 = v48;
    if ( v52 )
      v12 = v11;
    s2 = (char *)v12;
    while ( 1 )
    {
      v19 = v10[5];
      if ( !v52 )
        break;
      v14 = v10;
      v15 = v11;
      v16 = s;
      if ( v19 )
        goto LABEL_17;
LABEL_18:
      v17 = strcmp(v16, v15);
      v18 = (_QWORD *)v10[2];
      v10 = (_QWORD *)v10[3];
      if ( v17 >= 0 )
      {
        v13 = v14;
        v10 = v18;
      }
      if ( !v10 )
        goto LABEL_27;
    }
    if ( v19 )
    {
LABEL_25:
      v14 = v10;
LABEL_17:
      v16 = (const char *)v10[4];
      v15 = s2;
      goto LABEL_18;
    }
    while ( 1 )
    {
      v20 = v10[2];
      if ( !v20 )
        break;
      v13 = v10;
      v10 = (_QWORD *)v10[2];
      if ( *(_QWORD *)(v20 + 40) )
        goto LABEL_25;
    }
    v13 = v10;
LABEL_27:
    if ( v13 == v48 )
      goto LABEL_32;
    if ( !v13[5] )
    {
      v21 = v11;
      v22 = s;
      if ( v52 )
        goto LABEL_31;
LABEL_44:
      v25 = v50 + 1;
      if ( !v47 )
      {
        v56 = nullptr;
        v57 = 0;
LABEL_46:
        src = nullptr;
        goto LABEL_47;
      }
      v31 = *(const char **)a1;
      v56 = nullptr;
      v57 = 0;
      v32 = v47 - 1;
      if ( v25 > v47 - 1 )
        v25 = v47 - 1;
      v33 = v47 - 1 - v25;
      if ( v33 )
      {
        v43 = nullptr;
        if ( v33 != -1 )
        {
          v56 = (void *)qvector_reserve();
          v43 = v56;
        }
        v57 = v47 - v25;
        memmove(v43, &v31[v25], v33);
        *((_BYTE *)v56 + v33) = 0;
        v44 = *(_QWORD *)(a1 + 8);
        if ( !v44 )
          goto LABEL_46;
        v31 = *(const char **)a1;
        v32 = v44 - 1;
      }
      src = nullptr;
      if ( n <= v32 )
        v32 = n;
      if ( v32 )
      {
        src = (void *)qvector_reserve();
        memmove(src, v31, v32);
        v27 = 0;
        *((_BYTE *)src + v32) = 0;
        v28 = v32 + 1;
        v54 = nullptr;
        if ( v28 )
        {
          v54 = (char *)qalloc_or_throw();
          *((_QWORD *)&v55 + 1) = v28;
          memcpy(v54, src, v28);
          v38 = v13[8];
          if ( !v38 )
            goto LABEL_81;
          v45 = v38 - 1;
          v35 = v45;
          if ( !v45 )
          {
LABEL_49:
            v59 = 0;
            if ( !v28 )
            {
              v29 = v57;
              if ( v57 )
              {
LABEL_51:
                v28 = v29 - 1;
                if ( v29 == 1 )
                {
                  v29 = 0;
                  v30 = nullptr;
LABEL_53:
                  if ( *(_QWORD *)a1 )
                  {
                    *(_QWORD *)(a1 + 8) = 0;
                    qfree();
                  }
                  *(_QWORD *)a1 = v30;
                  *(_QWORD *)(a1 + 8) = v28;
                  *(_QWORD *)(a1 + 16) = v29;
                  if ( v54 )
                    qfree();
                  if ( src )
                    qfree();
                  if ( v56 )
                    qfree();
                  v11 = (const char *)v51;
                  v47 = *(_QWORD *)(a1 + 8);
                  goto LABEL_32;
                }
                v41 = v29 - 1;
                v40 = 0;
                goto LABEL_90;
              }
LABEL_74:
              v28 = 0;
              v30 = nullptr;
              goto LABEL_53;
            }
LABEL_81:
            v58 = (char *)qalloc_or_throw();
            *((_QWORD *)&v59 + 1) = v28;
            memcpy(v58, v54, v28);
            v29 = v28;
            v30 = v58;
            if ( !v57 )
              goto LABEL_53;
            v39 = v57 - 1;
            if ( v57 == 1 )
              goto LABEL_53;
            v40 = v28 - 1;
            v41 = v39 + v28 - 1;
            v42 = v39 + v28;
            if ( v28 >= v39 + v28 )
              goto LABEL_84;
            v29 = v39 + v28;
            v28 = v57 - 1;
LABEL_90:
            v58 = (char *)qvector_reserve();
            v30 = v58;
            v39 = v28;
            v42 = v29;
LABEL_84:
            *(_QWORD *)&v59 = v42;
            v30[v41] = 0;
            memcpy(&v58[v40], v56, v39);
            v30 = v58;
            v29 = *((_QWORD *)&v59 + 1);
            v28 = v59;
            goto LABEL_53;
          }
          --v28;
          v34 = v45 + v28;
          v26 = v45 + v28 + 1;
LABEL_93:
          v36 = v54;
          if ( *((_QWORD *)&v55 + 1) >= v26 )
            goto LABEL_94;
          goto LABEL_72;
        }
        v26 = v13[8];
        if ( v26 )
        {
          v34 = v26 - 1;
          if ( v26 != 1 )
          {
            v35 = v26 - 1;
LABEL_72:
            v54 = (char *)qvector_reserve();
            v36 = v54;
LABEL_94:
            v36[v34] = 0;
            memcpy(&v54[v28], (const void *)v13[7], v35);
            v28 = v26;
            goto LABEL_49;
          }
        }
LABEL_73:
        v29 = v57;
        *((_QWORD *)&v59 + 1) = *((_QWORD *)&v27 + 1);
        if ( v57 )
          goto LABEL_51;
        goto LABEL_74;
      }
LABEL_47:
      v26 = v13[8];
      v27 = 0;
      v54 = nullptr;
      v55 = 0;
      if ( v26 )
      {
        v28 = v26 - 1;
        if ( v26 == 1 )
          goto LABEL_49;
        v35 = v26 - 1;
        v34 = v26 - 1;
        v28 = 0;
        goto LABEL_93;
      }
      goto LABEL_73;
    }
    v21 = s;
    v22 = (const char *)v13[4];
    if ( v52 )
      v21 = v11;
LABEL_31:
    if ( strcmp(v21, v22) >= 0 )
      goto LABEL_44;
LABEL_32:
    if ( !v47 )
    {
LABEL_33:
      if ( v11 )
        qfree();
      return v60 - __readfsqword(0x28u);
    }
    v6 = *(const char **)a1;
LABEL_37:
    v24 = strstr(v6, "$(");
    if ( !v24 )
      goto LABEL_33;
    n = v24 - v6;
    if ( v11 )
      qfree();
    if ( n == -1 )
      break;
    v47 = *(_QWORD *)(a1 + 8);
  }
  while ( v47 );
  return v60 - __readfsqword(0x28u);
}

