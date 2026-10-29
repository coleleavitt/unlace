__int64 __fastcall sub_387840(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  size_t v7; // rbp
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rsi
  __int64 v13; // rbp
  int v14; // ebp
  int v15; // ebx
  __int64 v16; // r8
  const char **v17; // rdx
  const char **v18; // r15
  const char *v19; // rcx
  __int64 v20; // rax
  size_t v21; // rax
  void *v22; // rcx
  void *v23; // rcx
  __int128 v24; // kr10_16
  const char *v25; // rdx
  __int64 v26; // rax
  const char *v27; // r9
  const char *v28; // rax
  void *v29; // rcx
  __int128 v30; // kr00_16
  void *v32; // rax
  const void *v33; // rsi
  const char *v34; // r9
  const char *v35; // r11
  size_t v36; // r9
  char *v37; // r10
  size_t v38; // r15
  void *v39; // rdi
  size_t v40; // rdx
  size_t v41; // rcx
  void *v42; // r10
  size_t v43; // r15
  __int64 v44; // [rsp+0h] [rbp-10F8h]
  __int64 v45; // [rsp+8h] [rbp-10F0h]
  int v46; // [rsp+Ch] [rbp-10ECh]
  __int64 v47; // [rsp+10h] [rbp-10E8h]
  const char *v48; // [rsp+10h] [rbp-10E8h]
  void *v49; // [rsp+10h] [rbp-10E8h]
  const char *v50; // [rsp+10h] [rbp-10E8h]
  void *v51; // [rsp+10h] [rbp-10E8h]
  size_t v52; // [rsp+10h] [rbp-10E8h]
  size_t v53; // [rsp+10h] [rbp-10E8h]
  __int64 v54; // [rsp+18h] [rbp-10E0h]
  void **src; // [rsp+20h] [rbp-10D8h]
  void *srcb; // [rsp+20h] [rbp-10D8h]
  char *srca; // [rsp+20h] [rbp-10D8h]
  const char *v58; // [rsp+28h] [rbp-10D0h]
  void (__fastcall *v59)(__int64); // [rsp+38h] [rbp-10C0h] BYREF
  void (__fastcall *v60)(__int64, const char **, __int64, _QWORD); // [rsp+40h] [rbp-10B8h] BYREF
  void (__fastcall *v61)(__int64); // [rsp+48h] [rbp-10B0h] BYREF
  __int64 v62; // [rsp+50h] [rbp-10A8h] BYREF
  int v63; // [rsp+58h] [rbp-10A0h]
  __int64 v64; // [rsp+60h] [rbp-1098h] BYREF
  int v65; // [rsp+68h] [rbp-1090h]
  void *v66; // [rsp+70h] [rbp-1088h] BYREF
  __int128 v67; // [rsp+78h] [rbp-1080h]
  void *v68; // [rsp+90h] [rbp-1068h]
  __int128 v69; // [rsp+98h] [rbp-1060h]
  char v70[4104]; // [rsp+B0h] [rbp-1048h] BYREF
  unsigned __int64 v71; // [rsp+10B8h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  v59 = nullptr;
  v60 = nullptr;
  v61 = nullptr;
  ((void (__fastcall *)(__int64, void (__fastcall **)(__int64), void (__fastcall **)(__int64), void (__fastcall **)(__int64, const char **, __int64, _QWORD), __int64, __int64))callui)(
    47,
    &v59,
    &v61,
    &v60,
    a5,
    a6);
  if ( !v60 )
    return 0;
  v6 = a1[3];
  v66 = nullptr;
  v67 = 0;
  v7 = *(_QWORD *)(v6 + 416);
  if ( v7 )
  {
    v32 = (void *)qalloc_or_throw();
    v33 = *(const void **)(v6 + 408);
    *((_QWORD *)&v67 + 1) = v7;
    v66 = v32;
    memcpy(v32, v33, v7);
    *(_QWORD *)&v67 = v7;
    if ( v7 != 1 )
      tag_remove();
  }
  qstrncpy();
  sanitize_file_name();
  set_file_ext();
  if ( !sub_383300(1u, (__int64)v70, (__int64)"Please specify the html file name") )
  {
LABEL_32:
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      qfree();
    }
    return 0;
  }
  v10 = fopenWT();
  if ( !v10 )
  {
    sub_2B0270((__int64)"AUTOHIDE NONE\nCould not create output file");
    goto LABEL_32;
  }
  if ( v59 )
    v59(v10);
  v11 = a1[4];
  v12 = a1[1];
  v62 = 0;
  v63 = 0;
  v13 = *(_QWORD *)(v11 + 136);
  v64 = 0;
  v65 = 0;
  if ( (unsigned __int8)callui(8, v12, &v62, &v64, v8, v9, v44, v45, v47, v54) )
  {
    v46 = *(_DWORD *)(v62 + 12);
    v14 = *(_DWORD *)(v64 + 12);
  }
  else
  {
    v14 = v13 - 1;
    v46 = 0;
  }
  v15 = v46;
  if ( v46 <= v14 )
  {
    while ( 1 )
    {
      v16 = 32LL * v15;
      v17 = (const char **)(v16 + *(_QWORD *)(v11 + 128));
      v18 = v17;
      if ( v14 == v15 )
      {
        v19 = s1;
        if ( v17[1] )
          v19 = *v17;
        src = (void **)(v16 + *(_QWORD *)(v11 + 128));
        v48 = v19;
        v20 = tag_advance();
        if ( v20 )
          break;
      }
      if ( v46 == v15 )
        goto LABEL_23;
LABEL_12:
      v60(v10, v18, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v11 + 128) + 32LL * v15++ + 28));
      if ( v14 < v15 )
        goto LABEL_44;
    }
    v21 = v20 - (_QWORD)v48;
    v22 = src[1];
    if ( !v22 )
      goto LABEL_18;
    v41 = (size_t)v22 - 1;
    v42 = *src;
    v68 = nullptr;
    v69 = 0;
    if ( v41 <= v21 )
      v21 = v41;
    v43 = v21;
    if ( v21 )
    {
      srcb = v42;
      v52 = v21 + 1;
      v68 = (void *)qvector_reserve();
      *(_QWORD *)&v69 = v52;
      memmove(v68, srcb, v43);
      *((_BYTE *)v68 + v43) = 0;
      v23 = v68;
      v24 = v69;
    }
    else
    {
LABEL_18:
      v23 = nullptr;
      v24 = 0u;
    }
    v68 = nullptr;
    v69 = 0;
    if ( v66 )
    {
      v49 = v23;
      *(_QWORD *)&v67 = 0;
      qfree();
      v66 = v49;
      v67 = v24;
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
    }
    else
    {
      v66 = v23;
      v67 = v24;
    }
    v18 = (const char **)&v66;
    if ( v46 != v15 )
      goto LABEL_12;
LABEL_23:
    v25 = s1;
    if ( v18[1] )
      v25 = *v18;
    v50 = v25;
    v26 = tag_advance();
    v27 = v18[1];
    v28 = (const char *)(v26 - (_QWORD)v50);
    if ( !v27 )
      goto LABEL_26;
    v34 = v27 - 1;
    v35 = *v18;
    v68 = nullptr;
    v69 = 0;
    if ( v28 > v34 )
      v28 = v34;
    v36 = v34 - v28;
    v37 = (char *)v28;
    v38 = v36;
    if ( v36 )
    {
      v39 = nullptr;
      v40 = v36 + 1;
      if ( v36 != -1 )
      {
        v58 = v35;
        srca = (char *)v28;
        v53 = v36 + 1;
        v68 = (void *)qvector_reserve();
        v35 = v58;
        v39 = v68;
        v37 = srca;
        v40 = v53;
      }
      *(_QWORD *)&v69 = v40;
      memmove(v39, &v37[(_QWORD)v35], v38);
      *((_BYTE *)v68 + v38) = 0;
      v29 = v68;
      v30 = v69;
    }
    else
    {
LABEL_26:
      v29 = nullptr;
      v30 = 0u;
    }
    v68 = nullptr;
    v69 = 0;
    if ( v66 )
    {
      v51 = v29;
      *(_QWORD *)&v67 = 0;
      qfree();
      v66 = v51;
      v67 = v30;
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree();
      }
    }
    else
    {
      v66 = v29;
      v67 = v30;
    }
    v18 = (const char **)&v66;
    goto LABEL_12;
  }
LABEL_44:
  if ( v61 )
    v61(v10);
  qfclose();
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    qfree();
  }
  return 1;
}

