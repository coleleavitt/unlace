__int64 __fastcall sub_34960(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v5; // rdx
  unsigned __int64 v6; // rsi
  char v7; // al
  _BYTE *v8; // rdx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rdi
  const char *v11; // r13
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // r14
  void *v14; // rax
  __int64 v15; // rdi
  _BYTE *v16; // rax
  unsigned int v17; // ecx
  char *v18; // r15
  unsigned int v19; // eax
  unsigned __int8 *v20; // rax
  char v21; // r8
  unsigned __int8 v22; // cl
  const char *v23; // rdi
  _BYTE *v24; // rax
  char v25; // cl
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  char *v31; // rbp
  size_t v32; // rax
  size_t v33; // r13
  size_t v34; // rbx
  _BYTE *v35; // rax
  unsigned __int64 v36; // rbx
  int v37; // ecx
  int v38; // r8d
  int v39; // r9d
  __int64 *v40; // r14
  __int64 v41; // r13
  __int64 v42; // rbx
  unsigned __int8 v43; // al
  const char *v44; // rdx
  const char *v45; // rsi
  __int64 v46; // rax
  int v47; // r8d
  int v48; // r9d
  bool v49; // zf
  const char *v50; // rdx
  __int64 *v51; // rbx
  __int64 v52; // rbp
  __int64 v53; // rdi
  __int64 v54; // rbx
  __int64 v55; // rax
  const void *v56; // r13
  char v57[4]; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v58; // [rsp+4h] [rbp-A4h] BYREF
  char *s; // [rsp+8h] [rbp-A0h] BYREF
  void *v60; // [rsp+10h] [rbp-98h] BYREF
  __int128 v61; // [rsp+18h] [rbp-90h]
  void *dest; // [rsp+30h] [rbp-78h] BYREF
  __int128 v63; // [rsp+38h] [rbp-70h]
  __int64 v64; // [rsp+50h] [rbp-58h] BYREF
  __int128 v65; // [rsp+58h] [rbp-50h]
  unsigned __int64 v66; // [rsp+68h] [rbp-40h]

  v2 = *(unsigned int *)(a2 + 44);
  v66 = __readfsqword(0x28u);
  v61 = 0;
  v60 = 0;
  if ( !(_DWORD)v2 )
  {
    *(_QWORD *)(a1 + 48) = -1;
    return 1;
  }
  v5 = *(unsigned int *)(a2 + 40);
  v6 = (unsigned __int64)&v60;
  v7 = sub_31220(*(_QWORD *)(a1 + 8), &v60, v5, v2, "exported symbol info size", 0);
  v9 = (unsigned __int64)v60;
  v10 = (unsigned __int64)v60;
  if ( !v7 )
    goto LABEL_18;
  v11 = s1;
  v12 = (unsigned __int64)v60 + v61;
  if ( *(_QWORD *)(a1 + 24) )
    v11 = *(const char **)(a1 + 16);
  dest = v60;
  v13 = (unsigned __int64)(v61 + 7) >> 3;
  v65 = 0;
  v64 = 0;
  if ( !v13 )
  {
    v58 = 0;
    if ( v60 )
    {
      v14 = v60;
      v15 = 0;
      goto LABEL_10;
    }
    goto LABEL_17;
  }
  v6 = 0;
  v64 = qvector_reserve(&v64, 0, v13, 1);
  v15 = v64;
  v26 = v65;
  if ( (unsigned __int64)v65 < v13 )
  {
    do
    {
      *(_BYTE *)(v15 + v26++) = 0;
      v15 = v64;
    }
    while ( v13 != v26 );
  }
  v14 = dest;
  *(_QWORD *)&v65 = v13;
  v58 = 0;
  if ( !dest )
  {
LABEL_56:
    if ( v15 )
      goto LABEL_16;
    goto LABEL_57;
  }
  while ( 1 )
  {
LABEL_10:
    if ( (unsigned __int64)v14 >= v12
      || (unsigned __int64)v14 < v9
      || (v16 = (_BYTE *)(v15 + ((unsigned __int64)v58 >> 3)),
          v17 = v58 & 7,
          v6 = (unsigned __int8)*v16,
          v8 = (_BYTE *)v6,
          _bittest((const int *)&v6, v17)) )
    {
      v18 = 0;
      goto LABEL_60;
    }
    v6 = (unsigned int)(1 << v17);
    v8 = (_BYTE *)((unsigned int)v6 | (unsigned int)v8);
    *v16 = (_BYTE)v8;
    v18 = (char *)dest;
    if ( (unsigned __int64)dest >= v12 )
    {
      LODWORD(s) = 0;
      if ( *v11 )
        goto LABEL_15;
LABEL_26:
      if ( (unsigned __int64)v18 < v9 || (unsigned __int64)v18 >= v12 )
        goto LABEL_15;
      goto LABEL_28;
    }
    v19 = *(unsigned __int8 *)dest;
    v8 = (char *)dest + 1;
    dest = (char *)dest + 1;
    LODWORD(s) = v19;
    if ( v19 <= 0x7F )
    {
      ++v18;
    }
    else
    {
      v6 = 32;
      dest = v18;
      if ( !(unsigned __int8)unpack_xleb128(&s, 32, 0, &dest, v12) )
        goto LABEL_15;
      v18 = (char *)dest;
    }
    if ( !*v11 )
    {
      if ( !(_DWORD)s )
        goto LABEL_26;
      v15 = v64;
LABEL_60:
      if ( v15 )
      {
        *(_QWORD *)&v65 = 0;
        qfree(v15, (const char *)v6, v8);
      }
      if ( !v18 )
      {
LABEL_57:
        v9 = (unsigned __int64)v60;
        goto LABEL_17;
      }
      v6 = 32;
      s = v18;
      if ( !(unsigned __int8)unpack_xleb128(v57, 32, 0, &s, v12) )
        goto LABEL_67;
      if ( (v57[0] & 8) == 0 )
      {
        v6 = 64;
        if ( !(unsigned __int8)unpack_xleb128(a1 + 48, 64, 0, &s, v12) )
          goto LABEL_67;
        v54 = *(_QWORD *)(a1 + 8);
        if ( !*(_BYTE *)(v54 + 440) )
          sub_28840(*(_QWORD *)(a1 + 8));
        v55 = *(_QWORD *)(v54 + 448);
        if ( v55 == -1 )
          v55 = 0;
        *(_QWORD *)(a1 + 48) += v55;
LABEL_96:
        v10 = (unsigned __int64)v60;
        goto LABEL_19;
      }
      if ( !*(_QWORD *)(a1 + 40) )
      {
        if ( *(_BYTE *)(a1 + 56) )
        {
          v6 = (unsigned __int64)s1;
          if ( *(_QWORD *)(a1 + 24) )
            v6 = *(_QWORD *)(a1 + 16);
          sub_112F0(
            (unsigned int)"symbol '%s' is reexported but cannot follow without the dyld cache!\n",
            v6,
            v27,
            v28,
            v29,
            v30);
        }
        goto LABEL_67;
      }
      v6 = 32;
      if ( !(unsigned __int8)unpack_xleb128(&v58, 32, 0, &s, v12) )
      {
LABEL_67:
        v10 = (unsigned __int64)v60;
        goto LABEL_18;
      }
      v31 = s;
      dest = 0;
      v63 = 0;
      if ( !s )
        goto LABEL_107;
      v32 = strlen(s);
      v33 = v32 + 1;
      v34 = v32;
      dest = (void *)qvector_reserve(&dest, 0, v32 + 1, 1);
      *(_QWORD *)&v63 = v33;
      memmove(dest, v31, v34);
      *((_BYTE *)dest + v34) = 0;
      v35 = dest;
      if ( !(_QWORD)v63 )
LABEL_107:
        v35 = &unk_66C09;
      if ( !*v35 )
      {
        v36 = *(_QWORD *)(a1 + 24);
        if ( v36 > 1 )
        {
          v56 = *(const void **)(a1 + 16);
          if ( *((_QWORD *)&v63 + 1) < v36 )
            dest = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(a1 + 24), 1);
          *(_QWORD *)&v63 = v36;
          memmove(dest, v56, v36 - 1);
          *((char *)dest + v36 - 1) = 0;
        }
        else
        {
          *(_QWORD *)&v63 = 0;
        }
      }
      v6 = *(_QWORD *)(a1 + 8);
      sub_2B040(&v64, v6, 0);
      v40 = (__int64 *)v64;
      v41 = v65;
      if ( v58 && (unsigned __int64)v65 >= v58 )
      {
        v42 = v64 + 24LL * (v58 - 1);
        v43 = *(_BYTE *)(a1 + 56);
        if ( v43 )
        {
          v44 = s1;
          if ( *(_QWORD *)(v42 + 8) )
            v44 = *(const char **)v42;
          v45 = s1;
          if ( (_QWORD)v63 )
            LODWORD(v45) = (_DWORD)dest;
          sub_112F0(
            (unsigned int)"symbol '%s': looking up in reexported dylib '%s'\n",
            (_DWORD)v45,
            (_DWORD)v44,
            v37,
            v38,
            v39);
          v43 = *(_BYTE *)(a1 + 56);
        }
        v6 = *(_QWORD *)v42;
        v46 = sub_33F10(*(_QWORD **)(a1 + 40), *(const char **)v42, (const char *)dest, v43);
        v49 = *(_BYTE *)(a1 + 56) == 0;
        *(_QWORD *)(a1 + 48) = v46;
        if ( v49 )
        {
          if ( !v40 )
          {
LABEL_94:
            if ( dest )
            {
              *(_QWORD *)&v63 = 0;
              qfree(dest, (const char *)v6);
            }
            goto LABEL_96;
          }
LABEL_89:
          v51 = v40;
          v52 = 0;
          do
          {
            v53 = *v51;
            if ( *v51 )
            {
              v51[1] = 0;
              qfree(v53, (const char *)v6);
            }
            ++v52;
            v51 += 3;
          }
          while ( v52 != v41 );
LABEL_93:
          qfree(v40, (const char *)v6);
          goto LABEL_94;
        }
        v50 = s1;
        if ( *(_QWORD *)(v42 + 8) )
          v50 = *(const char **)v42;
        v6 = (unsigned __int64)s1;
        if ( (_QWORD)v63 )
          v6 = (unsigned __int64)dest;
        sub_112F0((unsigned int)"symbol '%s' found in dylib '%s', address: 0x%08llX\n", v6, (_DWORD)v50, v46, v47, v48);
      }
      if ( !v40 )
        goto LABEL_94;
      if ( !v41 )
        goto LABEL_93;
      goto LABEL_89;
    }
    if ( (unsigned __int64)v18 >= v12 )
      goto LABEL_15;
    if ( (unsigned __int64)v18 < v9 )
      goto LABEL_15;
    v18 += (unsigned int)s;
    if ( (unsigned __int64)v18 >= v12 || (unsigned __int64)v18 < v9 )
      goto LABEL_15;
LABEL_28:
    v20 = (unsigned __int8 *)(v18 + 1);
    v21 = *v18;
    v58 = 0;
    dest = v18 + 1;
    LOBYTE(v8) = (unsigned __int64)(v18 + 1) < v9 || (unsigned __int64)(v18 + 1) >= v12;
    if ( (_BYTE)v8 )
      goto LABEL_15;
    if ( !v21 )
    {
LABEL_44:
      v14 = (void *)v9;
      goto LABEL_45;
    }
LABEL_30:
    v22 = *v20;
    if ( *v20 )
      break;
LABEL_112:
    v6 = 32;
    dest = v20 + 1;
    if ( !(unsigned __int8)unpack_xleb128(&v58, 32, 0, &dest, v12) )
    {
      v15 = v64;
      goto LABEL_56;
    }
    v14 = (void *)(v9 + v58);
LABEL_45:
    dest = v14;
    v15 = v64;
    if ( !v14 )
      goto LABEL_56;
  }
  v23 = v11;
  v6 = 0;
  while ( 1 )
  {
    if ( !(_BYTE)v6 )
      LOBYTE(v6) = *v23++ != v22;
    dest = v20 + 1;
    if ( (unsigned __int8 *)v12 == v20 + 1 )
      break;
    v22 = v20[1];
    if ( !v22 )
    {
      if ( !(_BYTE)v6 )
      {
        ++v20;
        v11 = v23;
        goto LABEL_112;
      }
      v8 = v20 + 2;
      dest = v8;
      v24 = v20 + 2;
      if ( (unsigned __int64)v8 < v12 )
      {
        while ( 1 )
        {
          v25 = *v8;
          v24 = v8++;
          if ( v25 >= 0 )
            break;
          dest = v8;
          if ( (_BYTE *)v12 == v8 )
          {
            v24 = (_BYTE *)v12;
            break;
          }
        }
      }
      v20 = v24 + 1;
      dest = v20;
      if ( --v21 && (unsigned __int64)v20 < v12 )
        goto LABEL_30;
      goto LABEL_44;
    }
    ++v20;
  }
LABEL_15:
  v15 = v64;
  if ( !v64 )
    goto LABEL_57;
LABEL_16:
  *(_QWORD *)&v65 = 0;
  qfree(v15, (const char *)v6);
  v9 = (unsigned __int64)v60;
LABEL_17:
  v10 = v9;
LABEL_18:
  *(_QWORD *)(a1 + 48) = -1;
LABEL_19:
  if ( v10 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v10, (const char *)v6);
  }
  return 1;
}
