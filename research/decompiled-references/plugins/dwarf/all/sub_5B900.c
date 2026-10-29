__int64 __fastcall sub_5B900(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  _QWORD *i; // rax
  bool v9; // zf
  const char *v10; // r12
  size_t v11; // rax
  size_t v12; // r13
  size_t v13; // r14
  __int64 v14; // r13
  __int64 *v15; // r15
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r13
  const char *v19; // r14
  size_t v20; // rax
  _QWORD **v21; // r12
  int v22; // eax
  char v23; // r15
  void (__fastcall *v24)(_QWORD *); // rax
  _QWORD *v25; // r14
  __int64 v26; // r13
  void *v27; // rdi
  _QWORD *v28; // r13
  _QWORD *v29; // r14
  __int64 v30; // rdi
  _QWORD *v31; // rdi
  _DWORD *v32; // r14
  int v33; // eax
  void (__fastcall *v34)(_QWORD *); // rcx
  void (__fastcall *v35)(_QWORD *); // rax
  _QWORD *v36; // rax
  _QWORD **v37; // rax
  void *v38; // rdi
  _QWORD *v39; // rdx
  void *v40; // rax
  void *v41; // rdx
  __int64 v42; // rdi
  __int64 v43; // rdi
  const char *v44; // r8
  size_t v45; // rax
  const void *v46; // r8
  size_t v47; // r14
  char *v48; // rsi
  const char *v49; // rdi
  __int64 v50; // rax
  unsigned int v51; // r14d
  unsigned int v52; // eax
  int v53; // ecx
  int v54; // r8d
  int v55; // r9d
  const void *v56; // r13
  size_t v57; // rax
  size_t v58; // r12
  void *v59; // rdi
  void *v60; // rdx
  __int64 v61; // rax
  int v62; // eax
  int v63; // eax
  char *v64; // rdi
  size_t v65; // r14
  int v66; // eax
  void *srcb; // [rsp+8h] [rbp-A0h]
  _QWORD **srcc; // [rsp+8h] [rbp-A0h]
  _QWORD *src; // [rsp+8h] [rbp-A0h]
  _QWORD *srcd; // [rsp+8h] [rbp-A0h]
  const char *srca; // [rsp+8h] [rbp-A0h]
  void *srce; // [rsp+8h] [rbp-A0h]
  void *srcf; // [rsp+8h] [rbp-A0h]
  char n; // [rsp+10h] [rbp-98h]
  size_t na; // [rsp+10h] [rbp-98h]
  size_t nb; // [rsp+10h] [rbp-98h]
  void *v77; // [rsp+18h] [rbp-90h]
  void *v78; // [rsp+18h] [rbp-90h]
  char *s2; // [rsp+30h] [rbp-78h] BYREF
  __int128 v80; // [rsp+38h] [rbp-70h]
  void *dest; // [rsp+50h] [rbp-58h] BYREF
  __int128 v82; // [rsp+58h] [rbp-50h]
  unsigned __int64 v83; // [rsp+68h] [rbp-40h]

  v3 = (_QWORD *)a1[1];
  v83 = __readfsqword(0x28u);
  v5 = (_QWORD *)*v3;
  v6 = *v3 + 8LL * v3[1];
  for ( i = v5; (_QWORD *)v6 != i; ++i )
  {
    if ( *i == a2 )
      break;
  }
  if ( (unsigned __int64)(i - v5) < a1[3] )
    return 0;
  v9 = *(_DWORD *)(a2 + 272) == 2;
  s2 = nullptr;
  v80 = 0;
  if ( !v9 )
    return 0;
  if ( *(_QWORD *)(a2 + 320) > 1u )
  {
    v10 = *(const char **)(a2 + 312);
    if ( strchr(v10, 36) )
    {
      if ( v10 )
      {
        v11 = strlen(v10);
        v12 = v11;
        if ( v11 )
        {
          v13 = v11 + 1;
          s2 = (char *)qvector_reserve(&s2, 0, v11 + 1, 1);
          *(_QWORD *)&v80 = v13;
          memmove(s2, v10, v12);
          s2[v12] = 0;
        }
      }
      goto LABEL_13;
    }
  }
  v21 = *(_QWORD ***)(sub_87DA0(a2 + 8) + 216);
  dest = v21;
  if ( !v21 )
    goto LABEL_28;
  v22 = *((_DWORD *)v21 + 2);
  v9 = *((_DWORD *)v21 + 31) == 7;
  *((_DWORD *)v21 + 2) = v22 + 1;
  if ( !v9 )
  {
    *((_DWORD *)v21 + 2) = v22;
    if ( v22 )
      goto LABEL_28;
    goto LABEL_33;
  }
  v9 = (unsigned __int8)sub_84C30(a2 + 8) == 0;
  v62 = *((_DWORD *)v21 + 2);
  if ( !v9 )
  {
    v63 = v62 - 1;
    *((_DWORD *)v21 + 2) = v63;
    if ( v63 )
      goto LABEL_28;
LABEL_33:
    v23 = 0;
LABEL_34:
    v24 = (void (__fastcall *)(_QWORD *))**v21;
    if ( v24 == sub_15E30 && (v24 = (void (__fastcall *)(_QWORD *))(*v21)[2], v24 == sub_15D70) )
    {
      v25 = v21[16];
      *v21 = &off_C71D8;
      if ( v25 )
      {
        v26 = v25[2];
        while ( v26 )
        {
          sub_546C0(*(_QWORD **)(v26 + 24));
          v27 = (void *)v26;
          v26 = *(_QWORD *)(v26 + 16);
          operator delete(v27, 0x30u);
        }
        operator delete(v25, 0x30u);
      }
      v28 = v21[19];
      while ( v28 )
      {
        v29 = v28;
        sub_54400((_QWORD *)v28[3]);
        v30 = v28[4];
        v28 = (_QWORD *)v28[2];
        if ( v30 )
        {
          v29[5] = 0;
          qfree(v30);
        }
        operator delete(v29, 0x48u);
      }
      v31 = v21[12];
      if ( v31 )
      {
        v21[13] = nullptr;
        qfree(v31);
      }
      operator delete(v21, 0xC0u);
    }
    else
    {
      v24(v21);
    }
    if ( !v23 )
      goto LABEL_28;
    goto LABEL_88;
  }
  v66 = v62 - 1;
  *((_DWORD *)v21 + 2) = v66;
  if ( !v66 )
  {
    v23 = 1;
    goto LABEL_34;
  }
LABEL_88:
  if ( *(_QWORD *)(a2 + 352) <= 1u )
    v56 = *(const void **)(a2 + 312);
  else
    v56 = *(const void **)(a2 + 344);
  if ( v56 && (v57 = strlen((const char *)v56), (v58 = v57) != 0) )
  {
    v64 = s2;
    v65 = v57 + 1;
    if ( *((_QWORD *)&v80 + 1) < v57 + 1 )
    {
      s2 = (char *)qvector_reserve(&s2, s2, v65, 1);
      v64 = s2;
    }
    *(_QWORD *)&v80 = v65;
    memmove(v64, v56, v58);
    s2[v58] = 0;
  }
  else
  {
    *(_QWORD *)&v80 = 0;
  }
LABEL_13:
  v14 = a1[2];
  v15 = *(__int64 **)v14;
  v16 = *(_QWORD *)(v14 + 8);
  v17 = *(_QWORD *)v14 + 8 * v16;
  if ( v17 == *(_QWORD *)v14 )
  {
LABEL_77:
    if ( *(_QWORD *)(v14 + 16) < (unsigned __int64)(v16 + 1) )
    {
      v61 = qvector_reserve(v14, v15, v16 + 1, 8);
      *(_QWORD *)v14 = v61;
      v15 = (__int64 *)v61;
      v16 = *(_QWORD *)(v14 + 8);
    }
    v15[v16] = a2;
    ++*(_QWORD *)(v14 + 8);
    goto LABEL_28;
  }
  while ( 1 )
  {
    v18 = *v15;
    if ( *v15 == a2 )
      goto LABEL_15;
    dest = nullptr;
    v82 = 0;
    if ( *(_DWORD *)(v18 + 272) != 2 )
      goto LABEL_15;
    if ( *(_QWORD *)(v18 + 320) > 1u )
    {
      v19 = *(const char **)(v18 + 312);
      if ( strchr(v19, 36) )
      {
        if ( v19 )
        {
          v20 = strlen(v19);
          if ( v20 )
          {
            na = v20;
            srce = (void *)(v20 + 1);
            dest = (void *)qvector_reserve(&dest, 0, v20 + 1, 1);
            *(_QWORD *)&v82 = srce;
            memmove(dest, v19, na);
            *((_BYTE *)dest + na) = 0;
            v50 = v82;
            goto LABEL_82;
          }
        }
LABEL_22:
        if ( !(_QWORD)v80 )
          goto LABEL_23;
        v48 = s2;
        v49 = ::src;
LABEL_73:
        if ( !strcmp(v49, v48) )
          goto LABEL_23;
        goto LABEL_74;
      }
    }
    v32 = *(_DWORD **)(sub_87DA0(v18 + 8) + 216);
    if ( !v32 )
      goto LABEL_74;
    v33 = v32[2];
    v9 = v32[31] == 7;
    v32[2] = v33 + 1;
    if ( !v9 )
    {
      v32[2] = v33;
      if ( !v33 )
        goto LABEL_52;
      goto LABEL_74;
    }
    if ( !(unsigned __int8)sub_84C30(v18 + 8) )
      break;
    v9 = v32[2]-- == 1;
    if ( v9 )
    {
LABEL_52:
      n = 0;
      goto LABEL_53;
    }
LABEL_74:
    if ( dest )
    {
      *(_QWORD *)&v82 = 0;
      ++v15;
      qfree(dest);
      if ( (__int64 *)v17 == v15 )
        goto LABEL_76;
    }
    else
    {
LABEL_15:
      if ( (__int64 *)v17 == ++v15 )
        goto LABEL_76;
    }
  }
  v9 = v32[2]-- == 1;
  if ( !v9 )
    goto LABEL_67;
  n = 1;
LABEL_53:
  v34 = **(void (__fastcall ***)(_QWORD *))v32;
  if ( v34 == sub_15E30 )
  {
    v35 = *(void (__fastcall **)(_QWORD *))(*(_QWORD *)v32 + 16LL);
    if ( v35 == sub_15D70 )
    {
      *(_QWORD *)v32 = &off_C71D8;
      v36 = *((_QWORD **)v32 + 16);
      v77 = v36;
      if ( v36 )
      {
        v37 = (_QWORD **)v36[2];
        if ( v37 )
        {
          do
          {
            srcb = v37;
            sub_546C0(v37[3]);
            v38 = srcb;
            srcc = *((_QWORD ***)srcb + 2);
            operator delete(v38, 0x30u);
            v37 = srcc;
          }
          while ( srcc );
        }
        operator delete(v77, 0x30u);
      }
      v39 = *((_QWORD **)v32 + 19);
      if ( v39 )
      {
        do
        {
          src = v39;
          sub_54400((_QWORD *)v39[3]);
          v40 = src;
          v41 = (void *)src[2];
          v42 = src[4];
          if ( v42 )
          {
            src[5] = 0;
            v78 = v41;
            qfree(v42);
            v41 = v78;
            v40 = src;
          }
          srcd = v41;
          operator delete(v40, 0x48u);
          v39 = srcd;
        }
        while ( srcd );
      }
      v43 = *((_QWORD *)v32 + 12);
      if ( v43 )
      {
        *((_QWORD *)v32 + 13) = 0;
        qfree(v43);
      }
      operator delete(v32, 0xC0u);
    }
    else
    {
      v35(v32);
    }
  }
  else
  {
    v34(v32);
  }
  if ( !n )
    goto LABEL_74;
LABEL_67:
  if ( *(_QWORD *)(v18 + 352) <= 1u )
    v44 = *(const char **)(v18 + 312);
  else
    v44 = *(const char **)(v18 + 344);
  if ( !v44 || (srca = v44, v45 = strlen(v44), v46 = srca, (v47 = v45) == 0) )
  {
    *(_QWORD *)&v82 = 0;
    goto LABEL_22;
  }
  v59 = dest;
  v60 = (void *)(v45 + 1);
  if ( *((_QWORD *)&v82 + 1) < v45 + 1 )
  {
    nb = (size_t)srca;
    srcf = (void *)(v45 + 1);
    dest = (void *)qvector_reserve(&dest, dest, v60, 1);
    v46 = (const void *)nb;
    v59 = dest;
    v60 = srcf;
  }
  *(_QWORD *)&v82 = v60;
  memmove(v59, v46, v47);
  *((_BYTE *)dest + v47) = 0;
  v50 = v82;
LABEL_82:
  if ( (_QWORD)v80 )
  {
    v48 = s2;
    v49 = ::src;
    if ( v50 )
      v49 = (const char *)dest;
    goto LABEL_73;
  }
  if ( v50 )
  {
    v49 = (const char *)dest;
    v48 = (char *)::src;
    goto LABEL_73;
  }
LABEL_23:
  if ( (debug & 0x400000) != 0 )
  {
    v51 = (unsigned int)sub_575D0((_DWORD *)a2);
    v52 = (unsigned int)sub_575D0((_DWORD *)v18);
    sub_88B80(
      (unsigned int)"Detected duplicate anonymous nodes in graph: %s & %s. Mapping second to first.\n",
      v52,
      v51,
      v53,
      v54,
      v55);
  }
  sub_59E30(a2, 2, *(_DWORD *)(v18 + 276));
  if ( dest )
  {
    *(_QWORD *)&v82 = 0;
    qfree(dest);
  }
  if ( (__int64 *)v17 == v15 )
  {
LABEL_76:
    v14 = a1[2];
    v16 = *(_QWORD *)(v14 + 8);
    v15 = *(__int64 **)v14;
    goto LABEL_77;
  }
LABEL_28:
  if ( s2 )
  {
    *(_QWORD *)&v80 = 0;
    qfree(s2);
  }
  return 0;
}
