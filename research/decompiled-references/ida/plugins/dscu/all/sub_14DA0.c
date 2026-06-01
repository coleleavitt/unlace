unsigned __int64 __fastcall sub_14DA0(__int64 *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // r12
  size_t v12; // rax
  __int64 v13; // r8
  size_t v14; // r9
  void *v15; // rdx
  void *v16; // rdi
  char *v17; // r10
  const char *v18; // rdi
  __int64 v19; // rax
  char *v20; // rdi
  __int64 v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  char *v26; // rdi
  const char *errdesc; // rdx
  char *v28; // rsi
  char *v29; // rsi
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rsi
  __int64 v34; // r12
  __int64 v35; // r14
  __int64 v36; // rax
  const char *v37; // rax
  void *v38; // rdx
  size_t v39; // r9
  __int64 v40; // r8
  size_t v41; // r11
  __int64 v42; // rsi
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-C8h]
  size_t v46; // [rsp+10h] [rbp-C0h]
  size_t v47; // [rsp+10h] [rbp-C0h]
  char *v48; // [rsp+18h] [rbp-B8h]
  size_t v49; // [rsp+18h] [rbp-B8h]
  char *src; // [rsp+20h] [rbp-B0h]
  _BYTE *srcb; // [rsp+20h] [rbp-B0h]
  void *srca; // [rsp+20h] [rbp-B0h]
  void *srcc; // [rsp+20h] [rbp-B0h]
  __int64 v55; // [rsp+30h] [rbp-A0h]
  __int64 v56; // [rsp+38h] [rbp-98h]
  __int64 v57; // [rsp+38h] [rbp-98h]
  __int64 v58; // [rsp+40h] [rbp-90h] BYREF
  __int128 v59; // [rsp+48h] [rbp-88h]
  __int64 v60; // [rsp+60h] [rbp-70h] BYREF
  __int128 v61; // [rsp+68h] [rbp-68h]
  char *s; // [rsp+80h] [rbp-50h] BYREF
  __int128 v63; // [rsp+88h] [rbp-48h]
  unsigned __int64 v64; // [rsp+98h] [rbp-38h]

  v64 = __readfsqword(0x28u);
  v6 = a1[85];
  v59 = 0;
  v58 = 0;
  if ( !v6 )
    goto LABEL_2;
  v9 = v6;
  v58 = qvector_reserve(&v58, 0, v6, 1, a5, a6);
  memset((void *)(v58 + v59), 0, v9 - v59);
  v10 = a1[85];
  *(_QWORD *)&v59 = v9;
  v55 = v10;
  if ( !v10 )
    goto LABEL_2;
  v56 = 0;
  v11 = 0;
  do
  {
    v21 = operator new(0x360u);
    v22 = *a1;
    v23 = a1[95];
    v24 = a1[87];
    *(_QWORD *)(v21 + 8) = 0;
    *(_QWORD *)v21 = v22;
    *(_QWORD *)(v21 + 696) = v24;
    *(_QWORD *)(v21 + 760) = v23;
    *(_QWORD *)(v21 + 528) = 0;
    *(_QWORD *)(v21 + 552) = 0;
    *(_QWORD *)(v21 + 576) = 0;
    *(_QWORD *)(v21 + 600) = 0;
    *(_QWORD *)(v21 + 624) = 0;
    *(_QWORD *)(v21 + 648) = 0;
    *(_QWORD *)(v21 + 672) = 0;
    *(_QWORD *)(v21 + 704) = 0;
    *(_QWORD *)(v21 + 728) = 0;
    *(_QWORD *)(v21 + 752) = 0;
    *(_QWORD *)(v21 + 768) = 0;
    *(_QWORD *)(v21 + 808) = 0;
    *(_QWORD *)(v21 + 816) = 0;
    *(_OWORD *)(v21 + 536) = 0;
    *(_OWORD *)(v21 + 560) = 0;
    *(_OWORD *)(v21 + 584) = 0;
    *(_OWORD *)(v21 + 608) = 0;
    *(_OWORD *)(v21 + 632) = 0;
    *(_OWORD *)(v21 + 656) = 0;
    *(_OWORD *)(v21 + 680) = 0;
    *(_OWORD *)(v21 + 712) = 0;
    *(_OWORD *)(v21 + 736) = 0;
    *(_OWORD *)(v21 + 776) = 0;
    *(_OWORD *)(v21 + 792) = 0;
    *(_OWORD *)(v21 + 824) = 0;
    *(_OWORD *)(v21 + 840) = 0;
    v25 = a1[84];
    *(_BYTE *)(v21 + 860) = 0;
    s = nullptr;
    *(_DWORD *)(v21 + 856) = v56 + 1;
    v63 = 0;
    sub_13580((__int64 *)&s, (__int64)"%s%s", a2, (const char *)(v11 + v25 + 24));
    if ( (_QWORD)v63 && s && (src = s, v12 = strlen(s), (v14 = v12) != 0) )
    {
      v15 = (void *)(v12 + 1);
      v16 = *(void **)(v21 + 832);
      v17 = src;
      if ( *(_QWORD *)(v21 + 848) < v12 + 1 )
      {
        v46 = v12;
        v48 = src;
        srca = (void *)(v12 + 1);
        v43 = qvector_reserve(v21 + 832, v16, v15, 1, v13, v12);
        *(_QWORD *)(v21 + 832) = v43;
        v14 = v46;
        v16 = (void *)v43;
        v17 = v48;
        v15 = srca;
      }
      *(_QWORD *)(v21 + 840) = v15;
      srcb = (_BYTE *)v14;
      memmove(v16, v17, v14);
      srcb[*(_QWORD *)(v21 + 832)] = 0;
      if ( *(_QWORD *)(v21 + 840) )
      {
        v18 = *(const char **)(v21 + 832);
        goto LABEL_13;
      }
    }
    else
    {
      *(_QWORD *)(v21 + 840) = 0;
    }
    v18 = byte_190C8;
LABEL_13:
    v19 = open_linput(v18, 0);
    *(_QWORD *)(v21 + 8) = v19;
    if ( !v19 )
    {
      v26 = (char *)byte_190C8;
      if ( (_QWORD)v63 )
        v26 = s;
      errdesc = (const char *)get_errdesc(v26, 0xFFFFFFFFLL);
      v28 = (char *)byte_190C8;
      if ( (_QWORD)v63 )
        v28 = s;
      sub_7F80((__int64)"failed to open %s: %s\n", v28, errdesc);
LABEL_17:
      if ( v21 )
      {
        sub_8270(v21);
        operator delete((void *)v21, 0x360u);
      }
      v20 = s;
      if ( s )
        goto LABEL_20;
      goto LABEL_21;
    }
    *(_BYTE *)(v21 + 774) = 1;
    if ( !(unsigned __int8)sub_15540(v21, 17, 0) )
    {
      v29 = (char *)byte_190C8;
      if ( (_QWORD)v63 )
        v29 = s;
      sub_7F80((__int64)"failed to parse dyld subcache header for %s\n", v29);
      goto LABEL_17;
    }
    if ( *(_OWORD *)(v11 + a1[84]) - *(_OWORD *)(v21 + 104) != 0 )
    {
      sub_78B0((__int64)"%s does not match the subcache uuid from the umbrella cache, please verify that all files are fr"
                        "om the same source");
      goto LABEL_17;
    }
    sub_9B20(v21, a1 + 72);
    *(_BYTE *)(v58 + v56) = 1;
    v32 = a1[99];
    v33 = a1[98];
    if ( a1[100] < (unsigned __int64)(v32 + 1) )
    {
      v44 = qvector_reserve(a1 + 98, v33, v32 + 1, 8, v30, v31);
      a1[98] = v44;
      v33 = v44;
      v32 = a1[99];
    }
    *(_QWORD *)(v33 + 8 * v32) = v21;
    v20 = s;
    ++a1[99];
    if ( v20 )
    {
LABEL_20:
      *(_QWORD *)&v63 = 0;
      qfree(v20);
    }
LABEL_21:
    ++v56;
    v11 += 56;
  }
  while ( v55 != v56 );
  v34 = 0;
  v35 = 0;
  v60 = 0;
  v57 = 0;
  v61 = 0;
  do
  {
    if ( !*(_BYTE *)(v58 + v35) )
    {
      v36 = a1[84];
      s = nullptr;
      v63 = 0;
      v37 = (const char *)(v34 + v36);
      ++v57;
      sub_13580(
        (__int64 *)&s,
        (__int64)"expected name: %s%s uuid: %02X%02X%02X%02X-%02X%02X-%02X%02X-%02X%02X-%02X%02X%02X%02X%02X%02X\n",
        a2,
        v37 + 24,
        *(unsigned __int8 *)v37,
        *((unsigned __int8 *)v37 + 1),
        *((unsigned __int8 *)v37 + 2),
        *((unsigned __int8 *)v37 + 3),
        *((unsigned __int8 *)v37 + 4),
        *((unsigned __int8 *)v37 + 5),
        *((unsigned __int8 *)v37 + 6),
        *((unsigned __int8 *)v37 + 7),
        *((unsigned __int8 *)v37 + 8),
        *((unsigned __int8 *)v37 + 9),
        *((unsigned __int8 *)v37 + 10),
        *((unsigned __int8 *)v37 + 11),
        *((unsigned __int8 *)v37 + 12),
        *((unsigned __int8 *)v37 + 13),
        *((unsigned __int8 *)v37 + 14),
        *((unsigned __int8 *)v37 + 15));
      v38 = (void *)v63;
      if ( (_QWORD)v63 )
      {
        v39 = v63 - 1;
        if ( (_QWORD)v63 != 1 )
        {
          v40 = v61;
          v41 = v63 - 1;
          if ( (_QWORD)v61 )
          {
            v40 = v61 - 1;
            v41 = v39 + v61 - 1;
            v38 = (void *)(v63 + v61 - 1);
          }
          v42 = v60;
          if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)v38 )
          {
            v45 = v40;
            v47 = v63 - 1;
            v49 = v41;
            srcc = v38;
            v60 = qvector_reserve(&v60, v60, v38, 1, v40, v39);
            v40 = v45;
            v42 = v60;
            v39 = v47;
            v41 = v49;
            v38 = srcc;
          }
          *(_QWORD *)&v61 = v38;
          *(_BYTE *)(v42 + v41) = 0;
          memcpy((void *)(v40 + v60), s, v39);
        }
      }
      if ( s )
      {
        *(_QWORD *)&v63 = 0;
        qfree(s);
      }
    }
    ++v35;
    v34 += 56;
  }
  while ( v55 != v35 );
  if ( v57 )
    sub_78B0((__int64)"%zu missing subcaches:\n%s");
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
LABEL_2:
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    qfree(v58);
  }
  return v64 - __readfsqword(0x28u);
}

