__int64 __fastcall sub_93FC0(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // r12
  __int16 v5; // cx
  const char *v6; // r13
  unsigned __int64 v7; // r12
  size_t v8; // r14
  __int64 v9; // r13
  __int64 v10; // r15
  _BYTE *v11; // rsi
  void *v12; // r12
  const char *v13; // rsi
  void *v14; // rax
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r13
  unsigned __int64 v18; // r13
  __int64 v19; // rdi
  __int64 v20; // rbx
  void *v21; // rsi
  const char *v23; // rax
  const char *v24; // rbx
  size_t v25; // rax
  size_t v26; // r13
  unsigned __int64 v27; // r13
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r13
  const void *v30; // r8
  void *v31; // rdi
  const void *v32; // r8
  void *v33; // rdi
  const void *v34; // r8
  void *v35; // rdi
  void *v36; // rdi
  size_t v37; // r15
  const void *v38; // rbx
  void *v39; // rdi
  __int64 v40; // rax
  const void *v41; // r8
  void *v42; // rdi
  const void *v43; // r8
  void *v44; // rdi
  void *v45; // [rsp+8h] [rbp-130h]
  void *v46; // [rsp+8h] [rbp-130h]
  void *v47; // [rsp+8h] [rbp-130h]
  void *v48; // [rsp+8h] [rbp-130h]
  void *v49; // [rsp+8h] [rbp-130h]
  void *v50; // [rsp+8h] [rbp-130h]
  void *v51; // [rsp+10h] [rbp-128h] BYREF
  __int128 v52; // [rsp+18h] [rbp-120h]
  void *src; // [rsp+30h] [rbp-108h] BYREF
  _BYTE v54[24]; // [rsp+38h] [rbp-100h] BYREF
  __int64 v55; // [rsp+50h] [rbp-E8h]
  void *v56; // [rsp+58h] [rbp-E0h] BYREF
  __int128 v57; // [rsp+60h] [rbp-D8h]
  void *v58; // [rsp+70h] [rbp-C8h] BYREF
  __int128 v59; // [rsp+78h] [rbp-C0h]
  void *dest; // [rsp+88h] [rbp-B0h] BYREF
  __int128 v61; // [rsp+90h] [rbp-A8h]
  __int64 v62; // [rsp+A0h] [rbp-98h]
  void *v63; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v64; // [rsp+B0h] [rbp-88h]
  void *v65; // [rsp+C0h] [rbp-78h] BYREF
  __int128 v66; // [rsp+C8h] [rbp-70h]
  __int64 v67; // [rsp+D8h] [rbp-60h]
  __int64 v68; // [rsp+E0h] [rbp-58h]
  __int64 v69; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v70; // [rsp+F8h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  if ( (*(_DWORD *)&word_2439A4 & 0x100000) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 <= 1 )
    {
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"vault: trying to connect to %s\n", s1);
    }
    else
    {
      v5 = *(_WORD *)(a1 + 64);
      v51 = nullptr;
      src = nullptr;
      v6 = *(const char **)(a1 + 40);
      v52 = 0;
      *(_OWORD *)v54 = 0;
      if ( v5 )
      {
        if ( *v6 != 91 )
          strchr(v6, 58);
        sub_299F0((char **)&src);
      }
      else
      {
        src = (void *)sub_1987B0(&src, 0, v4, 1);
        *(_QWORD *)v54 = v4;
        memmove(src, v6, v4 - 1);
        *((char *)src + v4 - 1) = 0;
      }
      v7 = *(_QWORD *)v54;
      if ( *(_QWORD *)v54 )
      {
        v8 = *(_QWORD *)v54 - 1LL;
        if ( *(_QWORD *)v54 != 1 )
        {
          v9 = v52;
          v10 = *(_QWORD *)v54 - 1LL;
          if ( (_QWORD)v52 )
          {
            v9 = v52 - 1;
            v10 = v8 + v52 - 1;
            v7 = *(_QWORD *)v54 + v52 - 1;
          }
          v11 = v51;
          if ( *((_QWORD *)&v52 + 1) < v7 )
          {
            v51 = (void *)sub_1987B0(&v51, v51, v7, 1);
            v11 = v51;
          }
          *(_QWORD *)&v52 = v7;
          v11[v10] = 0;
          memcpy((char *)v51 + v9, src, v8);
        }
      }
      if ( src )
      {
        *(_QWORD *)v54 = 0;
        j__free(src);
      }
      v12 = v51;
      v13 = s1;
      if ( (_QWORD)v52 )
        v13 = (const char *)v51;
      sub_4BAA0((__int64 (__fastcall ***)(_QWORD))"vault: trying to connect to %s\n", v13);
      if ( v12 )
        j__free(v12);
    }
  }
  v14 = (void *)sub_1671B0((*(_DWORD *)(a1 + 200) & 1) == 0);
  v15 = *(_QWORD *)(a1 + 48);
  src = &qword_C0;
  v51 = v14;
  memset(v54, 0, sizeof(v54));
  v55 = 0;
  v56 = nullptr;
  v58 = nullptr;
  dest = nullptr;
  v62 = 0;
  v63 = nullptr;
  v65 = nullptr;
  v67 = 0;
  v68 = 0;
  v69 = 0xFFFFFFFFLL;
  v57 = 0;
  v59 = 0;
  v61 = 0;
  v64 = 0;
  v66 = 0;
  if ( v15 >= 2 )
  {
    v45 = *(void **)(a1 + 40);
    *(_QWORD *)v54 = sub_1987B0(v54, 0, v15, 1);
    *(_QWORD *)&v54[8] = v15;
    memmove(*(void **)v54, v45, v15 - 1);
    *(_BYTE *)(*(_QWORD *)v54 + v15 - 1) = 0;
  }
  v16 = *(_QWORD *)(a1 + 80);
  LOWORD(v55) = *(_WORD *)(a1 + 64);
  if ( v16 > 1 )
  {
    v32 = *(const void **)(a1 + 72);
    v33 = v56;
    if ( *((_QWORD *)&v57 + 1) < v16 )
    {
      v47 = *(void **)(a1 + 72);
      v56 = (void *)sub_1987B0(&v56, v56, v16, 1);
      v32 = v47;
      v33 = v56;
    }
    *(_QWORD *)&v57 = v16;
    memmove(v33, v32, v16 - 1);
    *((char *)v56 + v16 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v57 = 0;
  }
  v17 = *(_QWORD *)(a1 + 104);
  if ( v17 > 1 )
  {
    v34 = *(const void **)(a1 + 96);
    v35 = v58;
    if ( *((_QWORD *)&v59 + 1) < v17 )
    {
      v46 = *(void **)(a1 + 96);
      v58 = (void *)sub_1987B0(&v58, v58, *(_QWORD *)(a1 + 104), 1);
      v34 = v46;
      v35 = v58;
    }
    *(_QWORD *)&v59 = v17;
    memmove(v35, v34, v17 - 1);
    *((char *)v58 + v17 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v59 = 0;
  }
  if ( (*(_BYTE *)(a1 + 201) & 4) == 0 )
    goto LABEL_27;
  v27 = *(_QWORD *)(a1 + 128);
  if ( v27 > 1 )
  {
    v30 = *(const void **)(a1 + 120);
    v31 = dest;
    if ( *((_QWORD *)&v61 + 1) < v27 )
    {
      v48 = *(void **)(a1 + 120);
      dest = (void *)sub_1987B0(&dest, dest, *(_QWORD *)(a1 + 128), 1);
      v30 = v48;
      v31 = dest;
    }
    *(_QWORD *)&v61 = v27;
    memmove(v31, v30, v27 - 1);
    *((char *)dest + v27 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v61 = 0;
  }
  v28 = *(_QWORD *)(a1 + 160);
  LOWORD(v62) = *(_WORD *)(a1 + 144);
  if ( v28 > 1 )
  {
    v43 = *(const void **)(a1 + 152);
    v44 = v63;
    if ( *((_QWORD *)&v64 + 1) < v28 )
    {
      v50 = *(void **)(a1 + 152);
      v63 = (void *)sub_1987B0(&v63, v63, v28, 1);
      v43 = v50;
      v44 = v63;
    }
    *(_QWORD *)&v64 = v28;
    memmove(v44, v43, v28 - 1);
    *((char *)v63 + v28 - 1) = 0;
  }
  else
  {
    *(_QWORD *)&v64 = 0;
  }
  v29 = *(_QWORD *)(a1 + 184);
  if ( v29 > 1 )
  {
    v41 = *(const void **)(a1 + 176);
    v42 = v65;
    if ( *((_QWORD *)&v66 + 1) < v29 )
    {
      v49 = *(void **)(a1 + 176);
      v65 = (void *)sub_1987B0(&v65, v65, *(_QWORD *)(a1 + 184), 1);
      v41 = v49;
      v42 = v65;
    }
    *(_QWORD *)&v66 = v29;
    memmove(v42, v41, v29 - 1);
    *((char *)v65 + v29 - 1) = 0;
LABEL_27:
    if ( (unsigned __int64)v61 <= 1 )
      goto LABEL_30;
    v18 = *(_QWORD *)(a1 + 184);
    v19 = a1 + 32;
    if ( v18 <= 1 )
      goto LABEL_29;
    v38 = *(const void **)(a1 + 176);
    v39 = v65;
    if ( *((_QWORD *)&v66 + 1) < v18 )
    {
      v65 = (void *)sub_1987B0(&v65, v65, v18, 1);
      v39 = v65;
    }
    *(_QWORD *)&v66 = v18;
    memmove(v39, v38, v18 - 1);
    *((char *)v65 + v18 - 1) = 0;
    goto LABEL_30;
  }
  v19 = a1 + 32;
  *(_QWORD *)&v66 = 0;
  if ( (unsigned __int64)v61 > 1 )
LABEL_29:
    sub_16CAE0(v19, &v65, 0);
LABEL_30:
  if ( (unsigned __int8)sub_167220(v51, &src) )
  {
    v20 = operator new(0x168u);
    v21 = v51;
    *(_QWORD *)(v20 + 8) = 0;
    *(_QWORD *)(v20 + 16) = 0;
    *(_QWORD *)v20 = &unk_23D908;
    *(_QWORD *)(v20 + 24) = 0;
    *(_DWORD *)(v20 + 32) = 0;
    sub_91610(v20 + 40, (__int64)v21, v20);
    *(_QWORD *)v20 = &off_23D618;
    *(_QWORD *)(v20 + 40) = &off_23D818;
  }
  else
  {
    v23 = (const char *)sub_167200(v51);
    v24 = v23;
    if ( v23 && (v25 = strlen(v23), (v26 = v25) != 0) )
    {
      v36 = (void *)*a2;
      v37 = v25 + 1;
      if ( a2[2] < v25 + 1 )
      {
        v40 = sub_1987B0(a2, *a2, v25 + 1, 1);
        *a2 = v40;
        v36 = (void *)v40;
      }
      a2[1] = v37;
      memmove(v36, v24, v26);
      *(_BYTE *)(*a2 + v26) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    sub_1672A0(&v51, 0xFFFFFFFFLL);
    v20 = 0;
  }
  if ( v65 )
  {
    *(_QWORD *)&v66 = 0;
    j__free(v65);
  }
  if ( v63 )
  {
    *(_QWORD *)&v64 = 0;
    j__free(v63);
  }
  if ( dest )
  {
    *(_QWORD *)&v61 = 0;
    j__free(dest);
  }
  if ( v58 )
  {
    *(_QWORD *)&v59 = 0;
    j__free(v58);
  }
  if ( v56 )
  {
    *(_QWORD *)&v57 = 0;
    j__free(v56);
  }
  if ( *(_QWORD *)v54 )
  {
    *(_QWORD *)&v54[8] = 0;
    j__free(*(void **)v54);
  }
  return v20;
}
