__int64 __fastcall sub_38CAC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  size_t v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rbp
  int v16; // ebp
  int v17; // ebx
  __int64 v18; // r8
  __int64 *v19; // rdx
  __int64 *v20; // r15
  const char *v21; // rcx
  __int64 v22; // rax
  size_t v23; // rax
  void *v24; // rcx
  __int64 v25; // rcx
  __int128 v26; // kr10_16
  const char *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // r9
  char *v30; // rax
  __int64 v31; // rcx
  __int128 v32; // kr00_16
  void *v34; // rax
  const void *v35; // rsi
  char *v36; // r9
  __int64 v37; // r11
  size_t v38; // r9
  char *v39; // r10
  size_t v40; // r15
  void *v41; // rdi
  __int64 v42; // rdx
  size_t v43; // rcx
  void *v44; // r10
  size_t v45; // r15
  __int64 v46; // [rsp+0h] [rbp-10F8h]
  __int64 v47; // [rsp+8h] [rbp-10F0h]
  int v48; // [rsp+Ch] [rbp-10ECh]
  __int64 v49; // [rsp+10h] [rbp-10E8h]
  const char *v50; // [rsp+10h] [rbp-10E8h]
  __int64 v51; // [rsp+10h] [rbp-10E8h]
  const char *v52; // [rsp+10h] [rbp-10E8h]
  __int64 v53; // [rsp+10h] [rbp-10E8h]
  size_t v54; // [rsp+10h] [rbp-10E8h]
  __int64 v55; // [rsp+10h] [rbp-10E8h]
  __int64 v56; // [rsp+18h] [rbp-10E0h]
  void **src; // [rsp+20h] [rbp-10D8h]
  void *srcb; // [rsp+20h] [rbp-10D8h]
  char *srca; // [rsp+20h] [rbp-10D8h]
  __int64 v60; // [rsp+28h] [rbp-10D0h]
  void (__fastcall *v61)(__int64); // [rsp+38h] [rbp-10C0h] BYREF
  void (__fastcall *v62)(__int64, __int64 *, __int64, _QWORD); // [rsp+40h] [rbp-10B8h] BYREF
  void (__fastcall *v63)(__int64); // [rsp+48h] [rbp-10B0h] BYREF
  __int64 v64; // [rsp+50h] [rbp-10A8h] BYREF
  int v65; // [rsp+58h] [rbp-10A0h]
  __int64 v66; // [rsp+60h] [rbp-1098h] BYREF
  int v67; // [rsp+68h] [rbp-1090h]
  __int64 v68; // [rsp+70h] [rbp-1088h] BYREF
  __int128 v69; // [rsp+78h] [rbp-1080h]
  void *v70; // [rsp+90h] [rbp-1068h] BYREF
  __int128 v71; // [rsp+98h] [rbp-1060h]
  char v72[4104]; // [rsp+B0h] [rbp-1048h] BYREF
  unsigned __int64 v73; // [rsp+10B8h] [rbp-40h]

  v73 = __readfsqword(0x28u);
  v61 = nullptr;
  v62 = nullptr;
  v63 = nullptr;
  ((void (__fastcall *)(__int64, void (__fastcall **)(__int64), void (__fastcall **)(__int64), void (__fastcall **)(__int64, __int64 *, __int64, _QWORD), __int64, __int64))callui)(
    47,
    &v61,
    &v63,
    &v62,
    a5,
    a6);
  if ( !v62 )
    return 0;
  v8 = a1[3];
  v68 = 0;
  v69 = 0;
  v9 = *(_QWORD *)(v8 + 416);
  if ( v9 )
  {
    v34 = (void *)qalloc_or_throw(*(_QWORD *)(v8 + 416), (__int64)&v61, v6, v7);
    v35 = *(const void **)(v8 + 408);
    *((_QWORD *)&v69 + 1) = v9;
    v68 = (__int64)v34;
    memcpy(v34, v35, v9);
    *(_QWORD *)&v69 = v9;
    if ( v9 != 1 )
      tag_remove();
  }
  qstrncpy();
  sanitize_file_name();
  set_file_ext();
  if ( !sub_388580(1u, (__int64)v72, (__int64)"Please specify the html file name") )
  {
LABEL_32:
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree(v68);
    }
    return 0;
  }
  v12 = fopenWT();
  if ( !v12 )
  {
    sub_2B4E70((__int64)"AUTOHIDE NONE\nCould not create output file");
    goto LABEL_32;
  }
  if ( v61 )
    v61(v12);
  v13 = a1[4];
  v14 = a1[1];
  v64 = 0;
  v65 = 0;
  v15 = *(_QWORD *)(v13 + 136);
  v66 = 0;
  v67 = 0;
  if ( (unsigned __int8)callui(8, v14, &v64, &v66, v10, v11, v46, v47, v49, v56) )
  {
    v48 = *(_DWORD *)(v64 + 12);
    v16 = *(_DWORD *)(v66 + 12);
  }
  else
  {
    v16 = v15 - 1;
    v48 = 0;
  }
  v17 = v48;
  if ( v48 <= v16 )
  {
    while ( 1 )
    {
      v18 = 32LL * v17;
      v19 = (__int64 *)(v18 + *(_QWORD *)(v13 + 128));
      v20 = v19;
      if ( v16 == v17 )
      {
        v21 = s1;
        if ( v19[1] )
          v21 = (const char *)*v19;
        src = (void **)(v18 + *(_QWORD *)(v13 + 128));
        v50 = v21;
        v22 = tag_advance();
        if ( v22 )
          break;
      }
      if ( v48 == v17 )
        goto LABEL_23;
LABEL_12:
      v62(v12, v20, 0xFFFFFFFFLL, *(unsigned int *)(*(_QWORD *)(v13 + 128) + 32LL * v17++ + 28));
      if ( v16 < v17 )
        goto LABEL_44;
    }
    v23 = v22 - (_QWORD)v50;
    v24 = src[1];
    if ( !v24 )
      goto LABEL_18;
    v43 = (size_t)v24 - 1;
    v44 = *src;
    v70 = nullptr;
    v71 = 0;
    if ( v43 <= v23 )
      v23 = v43;
    v45 = v23;
    if ( v23 )
    {
      srcb = v44;
      v54 = v23 + 1;
      v70 = (void *)qvector_reserve((__int64)&v70, 0, v23 + 1, 1);
      *(_QWORD *)&v71 = v54;
      memmove(v70, srcb, v45);
      *((_BYTE *)v70 + v45) = 0;
      v25 = (__int64)v70;
      v26 = v71;
    }
    else
    {
LABEL_18:
      v25 = 0;
      v26 = 0u;
    }
    v70 = nullptr;
    v71 = 0;
    if ( v68 )
    {
      v51 = v25;
      *(_QWORD *)&v69 = 0;
      qfree(v68);
      v68 = v51;
      v69 = v26;
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree((__int64)v70);
      }
    }
    else
    {
      v68 = v25;
      v69 = v26;
    }
    v20 = &v68;
    if ( v48 != v17 )
      goto LABEL_12;
LABEL_23:
    v27 = s1;
    if ( v20[1] )
      v27 = (const char *)*v20;
    v52 = v27;
    v28 = tag_advance();
    v29 = v20[1];
    v30 = (char *)(v28 - (_QWORD)v52);
    if ( !v29 )
      goto LABEL_26;
    v36 = (char *)(v29 - 1);
    v37 = *v20;
    v70 = nullptr;
    v71 = 0;
    if ( v30 > v36 )
      v30 = v36;
    v38 = v36 - v30;
    v39 = v30;
    v40 = v38;
    if ( v38 )
    {
      v41 = nullptr;
      v42 = v38 + 1;
      if ( v38 != -1 )
      {
        v60 = v37;
        srca = v30;
        v55 = v38 + 1;
        v70 = (void *)qvector_reserve((__int64)&v70, 0, v42, 1);
        v37 = v60;
        v41 = v70;
        v39 = srca;
        v42 = v55;
      }
      *(_QWORD *)&v71 = v42;
      memmove(v41, &v39[v37], v40);
      *((_BYTE *)v70 + v40) = 0;
      v31 = (__int64)v70;
      v32 = v71;
    }
    else
    {
LABEL_26:
      v31 = 0;
      v32 = 0u;
    }
    v70 = nullptr;
    v71 = 0;
    if ( v68 )
    {
      v53 = v31;
      *(_QWORD *)&v69 = 0;
      qfree(v68);
      v68 = v53;
      v69 = v32;
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree((__int64)v70);
      }
    }
    else
    {
      v68 = v31;
      v69 = v32;
    }
    v20 = &v68;
    goto LABEL_12;
  }
LABEL_44:
  if ( v63 )
    v63(v12);
  qfclose();
  if ( v68 )
  {
    *(_QWORD *)&v69 = 0;
    qfree(v68);
  }
  return 1;
}

