int __fastcall sub_58DE0(unsigned __int64 *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // r13
  unsigned __int64 bkt; // rax
  unsigned __int64 v7; // rbx
  void *v8; // rax
  void *v9; // rcx
  unsigned __int64 v10; // rax
  size_t v11; // rcx
  __int64 v12; // r14
  _QWORD *v13; // r15
  const char *v14; // rsi
  const char *v15; // rdi
  char *v16; // r15
  unsigned __int64 *v17; // rsi
  _QWORD *v18; // rax
  const char *v19; // r15
  char *v20; // rsi
  unsigned __int64 v21; // rbx
  char *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 **v25; // rdx
  __int64 *v26; // rcx
  __int64 *v27; // r9
  const char *v28; // rsi
  __int64 *v29; // rdx
  const char *v30; // rdi
  __int64 *v31; // r9
  char *v32; // rsi
  unsigned __int64 v33; // rax
  char *v34; // rdi
  __int64 v35; // rdx
  unsigned __int64 v36; // r14
  size_t v37; // r15
  unsigned __int64 v38; // rdx
  unsigned __int64 v39; // rsi
  unsigned __int64 v40; // rdx
  __int64 v41; // rcx
  size_t v42; // r8
  _QWORD *v43; // r9
  unsigned __int64 v44; // r10
  unsigned __int64 v45; // rax
  _QWORD *v46; // rcx
  char *v47; // rsi
  char *i; // rdi
  __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  char *v51; // rax
  unsigned __int64 v52; // rax
  char *v53; // rcx
  __int64 v54; // r8
  unsigned __int64 v55; // rax
  char *j; // r8
  __int64 v57; // rdx
  void *v58; // rax
  size_t n; // [rsp+0h] [rbp-78h]
  size_t na; // [rsp+0h] [rbp-78h]
  __int64 nb; // [rsp+0h] [rbp-78h]
  size_t nc; // [rsp+0h] [rbp-78h]
  __int64 *v64; // [rsp+8h] [rbp-70h]
  unsigned __int64 v65; // [rsp+8h] [rbp-70h]
  __int64 *v67; // [rsp+18h] [rbp-60h]
  unsigned __int64 v68; // [rsp+20h] [rbp-58h]
  __int64 *v69; // [rsp+28h] [rbp-50h]
  std::__detail::_Prime_rehash_policy *v70; // [rsp+30h] [rbp-48h]
  char *v71; // [rsp+38h] [rbp-40h]

  v4 = a2;
  *a1 = (unsigned __int64)(a1 + 6);
  a1[1] = 1;
  a1[2] = 0;
  a1[3] = 0;
  *((_DWORD *)a1 + 8) = 1065353216;
  a1[5] = 0;
  a1[6] = 0;
  v71 = (char *)(a1 + 6);
  v70 = (std::__detail::_Prime_rehash_policy *)(a1 + 4);
  bkt = std::__detail::_Prime_rehash_policy::_M_next_bkt((std::__detail::_Prime_rehash_policy *)(a1 + 4), a4);
  v7 = bkt;
  if ( a1[1] < bkt )
  {
    if ( bkt == 1 )
    {
      a1[6] = 0;
      v9 = a1 + 6;
    }
    else
    {
      if ( bkt >> 60 )
      {
        if ( bkt >> 61 )
          ((void (__noreturn *)(void))sub_B371)();
        std::__throw_bad_alloc();
      }
      v8 = (void *)operator new(8 * bkt);
      v9 = memset(v8, 0, 8 * v7);
    }
    *a1 = (unsigned __int64)v9;
    a1[1] = v7;
  }
  LODWORD(v10) = a3;
  if ( a2 == a3 )
    return v10;
  do
  {
    v11 = a1[3];
    v12 = *(_QWORD *)(v4 + 8);
    if ( v11 )
    {
      v19 = *(const char **)v4;
      v20 = (char *)(*(_QWORD *)v4 + v12);
      if ( v20 != *(char **)v4 )
        goto LABEL_23;
      v24 = a1[1];
      v21 = 0xCBF29CE484222325LL;
      na = 0xCBF29CE484222325LL % v24;
LABEL_26:
      v10 = *a1;
      v25 = *(__int64 ***)(*a1 + 8 * na);
      if ( !v25 )
        goto LABEL_39;
      v26 = *v25;
      if ( (*v25)[2] )
      {
        v27 = *(__int64 **)(*a1 + 8 * na);
        while ( 1 )
        {
          v28 = (const char *)v26[1];
          v30 = s1;
          if ( v12 )
            goto LABEL_29;
          v29 = v27;
          v31 = v26;
LABEL_30:
          v64 = v29;
          v69 = v31;
          v67 = v26;
          v68 = v24;
          LODWORD(v10) = strcmp(v30, v28);
          v25 = (__int64 **)v64;
          if ( !(_DWORD)v10 )
            goto LABEL_37;
          v26 = (__int64 *)*v67;
          if ( !*v67 )
            goto LABEL_39;
          v32 = (char *)v26[1];
          v33 = 0xCBF29CE484222325LL;
          v24 = v68;
          v27 = v69;
          v34 = &v32[v26[2]];
          if ( v32 == v34 )
            break;
          do
          {
            v35 = *v32++;
            v33 = 0x100000001B3LL * (v35 ^ v33);
          }
          while ( v34 != v32 );
          if ( na != v33 % v68 )
            goto LABEL_39;
        }
        v10 = 0xCBF29CE484222325LL / v68;
        if ( na != 0xCBF29CE484222325LL % v68 )
          goto LABEL_39;
        v25 = (__int64 **)v69;
      }
      v27 = (__int64 *)v25;
      v28 = s1;
      if ( v12 )
      {
LABEL_29:
        v29 = v27;
        v30 = v19;
        v31 = v26;
        goto LABEL_30;
      }
LABEL_37:
      if ( !v25 || !*v25 )
        goto LABEL_39;
      goto LABEL_20;
    }
    v13 = (_QWORD *)a1[2];
    if ( !v13 )
      goto LABEL_63;
    n = a1[3];
    do
    {
      if ( v13[2] )
      {
        v14 = (const char *)v13[1];
        v15 = s1;
        if ( !v12 )
          goto LABEL_11;
      }
      else
      {
        if ( !v12 )
          goto LABEL_20;
        v14 = s1;
      }
      v15 = *(const char **)v4;
LABEL_11:
      LODWORD(v10) = strcmp(v15, v14);
      if ( !(_DWORD)v10 )
        goto LABEL_20;
      v13 = (_QWORD *)*v13;
    }
    while ( v13 );
    v11 = n;
LABEL_63:
    v19 = *(const char **)v4;
    v20 = (char *)(*(_QWORD *)v4 + v12);
    if ( *(char **)v4 == v20 )
    {
      v21 = 0xCBF29CE484222325LL;
      na = 0xCBF29CE484222325LL % a1[1];
      goto LABEL_39;
    }
LABEL_23:
    v21 = 0xCBF29CE484222325LL;
    v22 = (char *)v19;
    do
    {
      v23 = *v22++;
      v21 = 0x100000001B3LL * (v23 ^ v21);
    }
    while ( v20 != v22 );
    v24 = a1[1];
    na = v21 % v24;
    if ( v11 )
      goto LABEL_26;
LABEL_39:
    v36 = operator new(0x28u);
    *(_OWORD *)v36 = 0;
    *(_OWORD *)(v36 + 16) = 0;
    v37 = *(_QWORD *)(v4 + 8);
    if ( v37 )
    {
      v58 = (void *)qalloc_or_throw(*(_QWORD *)(v4 + 8));
      *(_QWORD *)(v36 + 8) = v58;
      *(_QWORD *)(v36 + 24) = v37;
      memcpy(v58, *(const void **)v4, v37);
      *(_QWORD *)(v36 + 16) = v37;
    }
    v38 = a1[3];
    v39 = a1[1];
    *(_DWORD *)(v36 + 32) = *(_DWORD *)(v4 + 24);
    if ( !(unsigned __int8)std::__detail::_Prime_rehash_policy::_M_need_rehash(v70, v39, v38, 1u) )
    {
      v16 = (char *)*a1;
      v17 = (unsigned __int64 *)(*a1 + 8 * na);
      v18 = (_QWORD *)*v17;
      if ( !*v17 )
        goto LABEL_54;
LABEL_18:
      *(_QWORD *)v36 = *v18;
      v10 = *v17;
      *(_QWORD *)*v17 = v36;
      goto LABEL_19;
    }
    v42 = v40;
    if ( v40 == 1 )
    {
      a1[6] = 0;
      v16 = v71;
    }
    else
    {
      if ( v40 > 0xFFFFFFFFFFFFFFFLL )
      {
        if ( v40 >> 61 )
          sub_B371(v70, v39, v40, v41, v40 >> 61);
        std::__throw_bad_alloc();
      }
      v65 = v40;
      nb = 8 * v40;
      v16 = (char *)operator new(8 * v40);
      memset(v16, 0, nb);
      v42 = v65;
    }
    v43 = (_QWORD *)a1[2];
    v44 = 0;
    a1[2] = 0;
    while ( v43 )
    {
      while ( 1 )
      {
        v45 = 0xCBF29CE484222325LL;
        v46 = v43;
        v43 = (_QWORD *)*v43;
        v47 = (char *)v46[1];
        for ( i = &v47[v46[2]]; i != v47; v45 = 0x100000001B3LL * (v49 ^ v45) )
          v49 = *v47++;
        v50 = v45 % v42;
        v51 = &v16[8 * (v45 % v42)];
        if ( !*(_QWORD *)v51 )
          break;
        *v46 = **(_QWORD **)v51;
        **(_QWORD **)v51 = v46;
        if ( !v43 )
          goto LABEL_51;
      }
      *v46 = a1[2];
      a1[2] = (unsigned __int64)v46;
      *(_QWORD *)v51 = a1 + 2;
      if ( *v46 )
        *(_QWORD *)&v16[8 * v44] = v46;
      v44 = v50;
    }
LABEL_51:
    if ( v71 != (char *)*a1 )
    {
      nc = v42;
      operator delete((void *)*a1, 8 * a1[1]);
      v42 = nc;
    }
    a1[1] = v42;
    *a1 = (unsigned __int64)v16;
    v17 = (unsigned __int64 *)&v16[8 * (v21 % v42)];
    v18 = (_QWORD *)*v17;
    if ( *v17 )
      goto LABEL_18;
LABEL_54:
    v52 = a1[2];
    a1[2] = v36;
    *(_QWORD *)v36 = v52;
    if ( v52 )
    {
      v53 = *(char **)(v52 + 8);
      v54 = *(_QWORD *)(v52 + 16);
      v55 = 0xCBF29CE484222325LL;
      for ( j = &v53[v54]; j != v53; v55 = 0x100000001B3LL * (v57 ^ v55) )
        v57 = *v53++;
      *(_QWORD *)&v16[8 * (v55 % a1[1])] = v36;
    }
    LODWORD(v10) = (_DWORD)a1 + 16;
    *v17 = (unsigned __int64)(a1 + 2);
LABEL_19:
    ++a1[3];
LABEL_20:
    v4 += 32;
  }
  while ( a3 != v4 );
  return v10;
}
