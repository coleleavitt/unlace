_QWORD *__fastcall sub_1ACF0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r14
  __int64 v5; // r15
  void *v6; // r13
  __int64 v7; // rbp
  int v8; // ebx
  size_t v9; // r12
  void *v10; // rax
  const char *v11; // rax
  const char *v12; // rdi
  int v13; // r12d
  size_t v14; // rbx
  const char *v15; // rdx
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // rbp
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  const char *v22; // rbp
  __int64 v23; // r12
  int v24; // r15d
  size_t v25; // r13
  int v26; // r13d
  size_t v27; // r13
  int v28; // r13d
  size_t v29; // r15
  int v30; // r15d
  size_t v31; // r15
  void *v32; // r13
  void *v33; // r15
  void *v34; // r15
  void *v35; // r13
  __int64 v36; // rax
  size_t v37; // rbx
  void *v38; // rbx
  void *v39; // rdi
  size_t v40; // rbx
  size_t v42; // rbx
  void *v43; // rbp
  int v44; // ebx
  size_t v45; // rbx
  int v46; // ebx
  void *v47; // rax
  void *v48; // rbp
  int v49; // ebx
  void *v50; // rbp
  void *v51; // rax
  char *s2; // [rsp+0h] [rbp-78h]
  char *s2a; // [rsp+0h] [rbp-78h]
  unsigned __int64 n; // [rsp+8h] [rbp-70h]
  void *na; // [rsp+8h] [rbp-70h]
  void *v56; // [rsp+10h] [rbp-68h]
  void *v57; // [rsp+18h] [rbp-60h]
  size_t v58; // [rsp+18h] [rbp-60h]
  int v59; // [rsp+24h] [rbp-54h]
  void *v62; // [rsp+38h] [rbp-40h]
  __int64 v63; // [rsp+38h] [rbp-40h]

  v4 = a2;
  s2 = *(char **)(a3 + 8);
  if ( !s2 )
  {
    v5 = a2[220];
    v6 = nullptr;
    v57 = nullptr;
    v62 = nullptr;
    v7 = v5 + 24LL * a2[221];
    if ( v7 == v5 )
      goto LABEL_84;
    goto LABEL_3;
  }
  v57 = (void *)qalloc_or_throw(s2);
  memcpy(v57, *(const void **)a3, (size_t)s2);
  v5 = a2[220];
  v7 = v5 + 24LL * a2[221];
  v62 = (void *)qalloc_or_throw(s2);
  memcpy(v62, v57, (size_t)s2);
  v38 = (void *)qalloc_or_throw(s2);
  memcpy(v38, v62, (size_t)s2);
  a2 = v38;
  v6 = (void *)qalloc_or_throw(s2);
  memcpy(v6, v38, (size_t)s2);
  if ( v38 )
    qfree(v38, v38, a3, a4);
  if ( v7 == v5 )
  {
    if ( v6 )
    {
      qfree(v6, v38, a3, a4);
      v39 = v62;
      if ( v62 )
        goto LABEL_82;
    }
    else if ( v62 )
    {
      v39 = v62;
LABEL_82:
      qfree(v39, v38, a3, a4);
      if ( !v57 )
        goto LABEL_84;
      goto LABEL_83;
    }
    if ( !v57 )
      goto LABEL_84;
LABEL_83:
    qfree(v57, v38, a3, a4);
    goto LABEL_84;
  }
LABEL_3:
  v8 = 0;
  n = (unsigned __int64)(s2 - 1);
  while ( 1 )
  {
    v9 = *(_QWORD *)(v5 + 8);
    if ( !v9 )
    {
      if ( (unsigned __int64)s2 > 1 )
      {
        while ( v6 )
        {
LABEL_17:
          v5 += 24;
          if ( v5 == v7 )
            goto LABEL_18;
LABEL_15:
          v9 = *(_QWORD *)(v5 + 8);
          if ( v9 )
            goto LABEL_7;
        }
      }
      goto LABEL_5;
    }
LABEL_7:
    v10 = (void *)qalloc_or_throw(v9);
    a2 = *(_QWORD **)v5;
    v11 = (const char *)memcpy(v10, *(const void **)v5, v9);
    v12 = v11;
    if ( !s2 || !v6 || s2 == (_BYTE *)&dword_0 + 1 )
    {
      if ( v11 )
        qfree(v11, a2, a3, a4);
      goto LABEL_5;
    }
    if ( v9 - 1 < n )
      break;
    a2 = v6;
    v13 = strncmp(v11, (const char *)v6, n);
    if ( v12 )
      qfree(v12, v6, a3, a4);
    if ( v13 )
    {
      v5 += 24;
      if ( v7 != v5 )
        goto LABEL_15;
      goto LABEL_18;
    }
LABEL_5:
    v5 += 24;
    ++v8;
    if ( v5 == v7 )
      goto LABEL_18;
  }
  if ( !v11 )
    goto LABEL_17;
  qfree(v11, a2, a3, a4);
  v5 += 24;
  if ( v5 != v7 )
    goto LABEL_15;
LABEL_18:
  v59 = v8;
  if ( v6 )
    qfree(v6, a2, a3, a4);
  if ( v62 )
    qfree(v62, a2, a3, a4);
  if ( v57 )
    qfree(v57, a2, a3, a4);
  if ( v8 > 0 )
  {
    *(_OWORD *)(a1 + 1) = 0;
    *a1 = 0;
    v14 = *(_QWORD *)(a3 + 8);
    if ( v14 )
    {
      v47 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
      a1[2] = v14;
      *a1 = v47;
      memcpy(v47, *(const void **)a3, v14);
      a1[1] = v14;
      v14 = *(_QWORD *)(a3 + 8);
    }
    while ( 1 )
    {
      ++v59;
      v15 = s1;
      if ( v14 )
        v15 = *(const char **)a3;
      v16 = "%s (%d)";
      sub_1AC30(a1, (__int64)"%s (%d)", v15, v59);
      v58 = a1[1];
      if ( v58 )
      {
        na = (void *)qalloc_or_throw(v58);
        memcpy(na, (const void *)*a1, v58);
        v18 = v4[220];
        v19 = 24LL * v4[221];
        v63 = v18 + v19;
        v56 = (void *)qalloc_or_throw(v58);
        memcpy(v56, na, v58);
        v16 = (const char *)v56;
        s2a = (char *)qalloc_or_throw(v58);
        memcpy(s2a, v56, v58);
      }
      else
      {
        v18 = v4[220];
        na = nullptr;
        v56 = nullptr;
        s2a = nullptr;
        v19 = 24LL * v4[221];
        v63 = v18 + v19;
      }
      v20 = 0xAAAAAAAAAAAAAAABLL;
      v21 = (__int64)(0xAAAAAAAAAAAAAAABLL * (v19 >> 3)) >> 2;
      if ( v21 > 0 )
      {
        v22 = s1;
        if ( v58 )
          v22 = s2a;
        v23 = v18 + 96 * v21;
        while ( 1 )
        {
          v31 = *(_QWORD *)(v18 + 8);
          if ( !v31 )
            break;
          v32 = (void *)qalloc_or_throw(*(_QWORD *)(v18 + 8));
          memcpy(v32, *(const void **)v18, v31);
          v16 = v22;
          v24 = strcmp((const char *)v32, v22);
          if ( !v32 )
            goto LABEL_36;
          qfree(v32, v22, v17, v20);
          if ( !v24 )
            goto LABEL_50;
LABEL_37:
          v25 = *(_QWORD *)(v18 + 32);
          if ( !v25 )
          {
            v26 = -*(unsigned __int8 *)v22;
LABEL_39:
            if ( !v26 )
              goto LABEL_60;
            goto LABEL_40;
          }
          v33 = (void *)qalloc_or_throw(*(_QWORD *)(v18 + 32));
          memcpy(v33, *(const void **)(v18 + 24), v25);
          v16 = v22;
          v26 = strcmp((const char *)v33, v22);
          if ( !v33 )
            goto LABEL_39;
          qfree(v33, v22, v17, v20);
          if ( !v26 )
          {
LABEL_60:
            v18 += 24;
            goto LABEL_50;
          }
LABEL_40:
          v27 = *(_QWORD *)(v18 + 56);
          if ( !v27 )
          {
            v28 = -*(unsigned __int8 *)v22;
LABEL_42:
            if ( !v28 )
              goto LABEL_63;
            goto LABEL_43;
          }
          v34 = (void *)qalloc_or_throw(*(_QWORD *)(v18 + 56));
          memcpy(v34, *(const void **)(v18 + 48), v27);
          v16 = v22;
          v28 = strcmp((const char *)v34, v22);
          if ( !v34 )
            goto LABEL_42;
          qfree(v34, v22, v17, v20);
          if ( !v28 )
          {
LABEL_63:
            v18 += 48;
            goto LABEL_50;
          }
LABEL_43:
          v29 = *(_QWORD *)(v18 + 80);
          if ( !v29 )
          {
            v30 = -*(unsigned __int8 *)v22;
LABEL_45:
            if ( !v30 )
              goto LABEL_66;
            goto LABEL_46;
          }
          v35 = (void *)qalloc_or_throw(*(_QWORD *)(v18 + 80));
          memcpy(v35, *(const void **)(v18 + 72), v29);
          v16 = v22;
          v30 = strcmp((const char *)v35, v22);
          if ( !v35 )
            goto LABEL_45;
          qfree(v35, v22, v17, v20);
          if ( !v30 )
          {
LABEL_66:
            v18 += 72;
            goto LABEL_50;
          }
LABEL_46:
          v18 += 96;
          if ( v23 == v18 )
            goto LABEL_71;
        }
        v24 = -*(unsigned __int8 *)v22;
LABEL_36:
        if ( !v24 )
          goto LABEL_50;
        goto LABEL_37;
      }
      v23 = v18;
LABEL_71:
      v36 = v63 - v23;
      if ( v63 - v23 != 48 )
      {
        if ( v36 != 72 )
        {
          if ( v36 != 24 )
            goto LABEL_103;
          v37 = *(_QWORD *)(v23 + 8);
          if ( !v37 )
            goto LABEL_75;
          goto LABEL_113;
        }
        v42 = *(_QWORD *)(v23 + 8);
        if ( !v42 )
        {
          if ( !v58 || !*s2a )
            goto LABEL_117;
          v45 = *(_QWORD *)(v23 + 32);
          v23 += 24;
          if ( !v45 )
            goto LABEL_99;
          goto LABEL_107;
        }
        v43 = (void *)qalloc_or_throw(*(_QWORD *)(v23 + 8));
        memcpy(v43, *(const void **)v23, v42);
        v16 = s1;
        if ( v58 )
          v16 = s2a;
        v44 = strcmp((const char *)v43, v16);
        if ( v43 )
          qfree(v43, v16, v17, v20);
        if ( !v44 )
          goto LABEL_117;
        v23 += 24;
      }
      v45 = *(_QWORD *)(v23 + 8);
      if ( !v45 )
      {
        v18 = v23;
        if ( !v58 )
          goto LABEL_50;
LABEL_99:
        if ( !*s2a )
          goto LABEL_117;
        v37 = *(_QWORD *)(v23 + 32);
        v23 += 24;
        if ( !v37 )
          goto LABEL_101;
        goto LABEL_113;
      }
LABEL_107:
      v48 = (void *)qalloc_or_throw(v45);
      memcpy(v48, *(const void **)v23, v45);
      v16 = s1;
      if ( v58 )
        v16 = s2a;
      v49 = strcmp((const char *)v48, v16);
      if ( v48 )
        qfree(v48, v16, v17, v20);
      if ( !v49 )
        goto LABEL_117;
      v37 = *(_QWORD *)(v23 + 32);
      v23 += 24;
      if ( !v37 )
      {
LABEL_75:
        v18 = v23;
        if ( !v58 )
          goto LABEL_50;
LABEL_101:
        v46 = -(unsigned __int8)*s2a;
        goto LABEL_102;
      }
LABEL_113:
      v50 = (void *)qalloc_or_throw(v37);
      memcpy(v50, *(const void **)v23, v37);
      v16 = s1;
      if ( v58 )
        v16 = s2a;
      v46 = strcmp((const char *)v50, v16);
      if ( v50 )
        qfree(v50, v16, v17, v20);
LABEL_102:
      if ( v46 )
      {
LABEL_103:
        v18 = v63;
        goto LABEL_50;
      }
LABEL_117:
      v18 = v23;
LABEL_50:
      if ( s2a )
        qfree(s2a, v16, v17, v20);
      if ( v56 )
        qfree(v56, v16, v17, v20);
      if ( na )
        qfree(na, v16, v17, v20);
      if ( v18 == v4[220] + 24LL * v4[221] )
        return a1;
      v14 = *(_QWORD *)(a3 + 8);
    }
  }
LABEL_84:
  *(_OWORD *)(a1 + 1) = 0;
  *a1 = 0;
  v40 = *(_QWORD *)(a3 + 8);
  if ( v40 )
  {
    v51 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
    *a1 = v51;
    a1[2] = v40;
    memcpy(v51, *(const void **)a3, v40);
    a1[1] = v40;
  }
  return a1;
}
