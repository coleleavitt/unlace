unsigned __int64 __fastcall sub_13600(
        __int64 a1,
        _QWORD *a2,
        size_t *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        __int64 a7)
{
  unsigned __int64 *v11; // rax
  __int64 v12; // rdx
  size_t v14; // r13
  bool v15; // zf
  const char *v16; // rdx
  size_t v17; // r15
  size_t v18; // r8
  size_t v19; // r13
  void *v20; // rax
  const void *v21; // rsi
  unsigned __int64 v22; // r13
  size_t v23; // r8
  __int64 v24; // r15
  size_t v25; // r9
  char *v26; // rsi
  const char *v27; // r13
  unsigned __int64 v28; // r13
  size_t v29; // r9
  unsigned __int64 v30; // r15
  size_t v31; // r13
  unsigned __int64 v32; // r13
  size_t v33; // r8
  __int64 v34; // r15
  size_t v35; // r9
  _BYTE *v36; // rsi
  char *v37; // rsi
  size_t v38; // rdx
  void *v39; // rax
  const void *v40; // rsi
  __int64 v41; // r15
  size_t v42; // r10
  _BYTE *v43; // rsi
  __int64 v44; // r15
  void *v45; // r9
  _BYTE *v46; // rsi
  void *v47; // rax
  const void *v48; // rsi
  void *v49; // [rsp+0h] [rbp-118h]
  size_t *v50; // [rsp+8h] [rbp-110h]
  void *v51; // [rsp+8h] [rbp-110h]
  const void **v52; // [rsp+8h] [rbp-110h]
  size_t *v53; // [rsp+8h] [rbp-110h]
  void *v54; // [rsp+8h] [rbp-110h]
  void *v55; // [rsp+8h] [rbp-110h]
  void *v56; // [rsp+8h] [rbp-110h]
  size_t nb; // [rsp+10h] [rbp-108h]
  size_t nc; // [rsp+10h] [rbp-108h]
  size_t n; // [rsp+10h] [rbp-108h]
  size_t na; // [rsp+10h] [rbp-108h]
  size_t *v61; // [rsp+18h] [rbp-100h]
  size_t v62; // [rsp+18h] [rbp-100h]
  void *v63; // [rsp+20h] [rbp-F8h] BYREF
  size_t v64; // [rsp+28h] [rbp-F0h]
  size_t v65; // [rsp+30h] [rbp-E8h]
  void *v66; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v67; // [rsp+48h] [rbp-D0h]
  void *v68; // [rsp+60h] [rbp-B8h]
  __int128 v69; // [rsp+68h] [rbp-B0h]
  void *src; // [rsp+80h] [rbp-98h]
  __int128 v71; // [rsp+88h] [rbp-90h]
  char *v72; // [rsp+A0h] [rbp-78h] BYREF
  __int128 v73; // [rsp+A8h] [rbp-70h]
  void *v74; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v75; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v76; // [rsp+D8h] [rbp-40h]

  v76 = __readfsqword(0x28u);
  v11 = *(unsigned __int64 **)a7;
  v12 = *(_QWORD *)a7 + 16LL * *(_QWORD *)(a7 + 8);
  if ( *(_QWORD *)a7 == v12 )
  {
LABEL_6:
    v14 = a2[2];
    v49 = nullptr;
    v65 = 0;
    if ( v14 )
    {
      v53 = a3;
      v39 = (void *)qalloc_or_throw();
      v40 = (const void *)a2[1];
      v65 = v14;
      v49 = v39;
      memcpy(v39, v40, v14);
      a3 = v53;
    }
    v15 = a2[11] == 0;
    v66 = nullptr;
    v67 = 0;
    if ( v15 )
    {
      v30 = a2[5];
      if ( v30 >= 2 )
      {
        v61 = a3;
        v51 = (void *)a2[4];
        v66 = (void *)qvector_reserve();
        *(_QWORD *)&v67 = v30;
        memmove(v66, v51, v30 - 1);
        a3 = v61;
        *((char *)v66 + v30 - 1) = 0;
      }
    }
    else
    {
      v50 = a3;
      v74 = nullptr;
      v75 = 0;
      sub_7490((__int64 *)&v74);
      v16 = s1;
      if ( (_QWORD)v75 )
        v16 = (const char *)v74;
      v64 = v14;
      v63 = v49;
      sub_EC30((__int64)&v63, "%s", v16);
      v14 = v64;
      v49 = v63;
      sub_7490((__int64 *)&v66);
      a3 = v50;
      if ( v74 )
      {
        *(_QWORD *)&v75 = 0;
        qfree();
        a3 = v50;
      }
    }
    v17 = a3[1];
    v68 = nullptr;
    v69 = 0;
    if ( v17 )
    {
      v52 = (const void **)a3;
      v68 = (void *)qalloc_or_throw();
      *((_QWORD *)&v69 + 1) = v17;
      memcpy(v68, *v52, v17);
      *(_QWORD *)&v69 = v17;
      if ( (unsigned __int64)v52[1] > 1 )
      {
        v37 = (char *)v68;
        v38 = v17 + 1;
        if ( *((_QWORD *)&v69 + 1) < v17 + 1 )
        {
          v68 = (void *)qvector_reserve();
          v38 = v17 + 1;
          v37 = (char *)v68;
        }
        *(_QWORD *)&v69 = v38;
        v37[v17 - 1] = 95;
        *((_BYTE *)v68 + v17) = 0;
      }
    }
    if ( v14 )
    {
      v18 = v14 - 1;
      if ( v14 != 1 )
      {
        v44 = v69;
        v45 = (void *)(v14 - 1);
        if ( (_QWORD)v69 )
        {
          v44 = v69 - 1;
          v45 = (void *)(v18 + v69 - 1);
          v14 += v69 - 1;
        }
        v46 = v68;
        if ( *((_QWORD *)&v69 + 1) < v14 )
        {
          nc = v18;
          v54 = v45;
          v68 = (void *)qvector_reserve();
          v18 = nc;
          v46 = v68;
          v45 = v54;
        }
        *(_QWORD *)&v69 = v14;
        *((_BYTE *)v45 + (_QWORD)v46) = 0;
        memcpy((char *)v68 + v44, v49, v18);
      }
    }
    v19 = *(_QWORD *)(a6 + 80);
    if ( v19 <= 1 )
    {
      v75 = 0;
      v74 = nullptr;
      v74 = (void *)qvector_reserve();
      *(_QWORD *)&v75 = 2;
      *(_BYTE *)v74 = 95;
      *((_BYTE *)v74 + 1) = 0;
      v31 = *(_QWORD *)(a6 + 8);
      src = nullptr;
      v71 = 0;
      if ( v31 )
      {
        v47 = (void *)qalloc_or_throw();
        v48 = *(const void **)a6;
        src = v47;
        *((_QWORD *)&v71 + 1) = v31;
        memcpy(v47, v48, v31);
        *(_QWORD *)&v71 = v31;
      }
      v32 = v75;
      if ( (_QWORD)v75 )
      {
        v33 = v75 - 1;
        if ( (_QWORD)v75 != 1 )
        {
          v34 = v71;
          v35 = v75 - 1;
          if ( (_QWORD)v71 )
          {
            v34 = v71 - 1;
            v35 = v33 + v71 - 1;
            v32 = v75 + v71 - 1;
          }
          v36 = src;
          if ( *((_QWORD *)&v71 + 1) < v32 )
          {
            na = v35;
            v56 = (void *)(v75 - 1);
            src = (void *)qvector_reserve();
            v35 = na;
            v36 = src;
            v33 = (size_t)v56;
          }
          *(_QWORD *)&v71 = v32;
          v36[v35] = 0;
          memcpy((char *)src + v34, v74, v33);
        }
      }
      if ( v74 )
      {
        *(_QWORD *)&v75 = 0;
        qfree();
      }
      v19 = v71;
      v72 = nullptr;
      v73 = 0;
      if ( !(_QWORD)v71 )
        goto LABEL_19;
    }
    else
    {
      src = nullptr;
      v71 = 0;
      v20 = (void *)qalloc_or_throw();
      v21 = *(const void **)(a6 + 72);
      src = v20;
      *((_QWORD *)&v71 + 1) = v19;
      memcpy(v20, v21, v19);
      *(_QWORD *)&v71 = v19;
      v72 = nullptr;
      v73 = 0;
    }
    v72 = (char *)qalloc_or_throw();
    *((_QWORD *)&v73 + 1) = v19;
    memcpy(v72, src, v19);
    *(_QWORD *)&v73 = v19;
LABEL_19:
    v22 = v69;
    if ( (_QWORD)v69 )
    {
      v23 = v69 - 1;
      if ( (_QWORD)v69 != 1 )
      {
        v24 = v73;
        v25 = v69 - 1;
        if ( (_QWORD)v73 )
        {
          v24 = v73 - 1;
          v25 = v23 + v73 - 1;
          v22 = v69 + v73 - 1;
        }
        v26 = v72;
        if ( *((_QWORD *)&v73 + 1) < v22 )
        {
          n = v69 - 1;
          v55 = (void *)v25;
          v72 = (char *)qvector_reserve();
          v23 = n;
          v26 = v72;
          v25 = (size_t)v55;
        }
        *(_QWORD *)&v73 = v22;
        v26[v25] = 0;
        memcpy(&v72[v24], v68, v23);
      }
    }
    v15 = a2[14] == 0;
    v74 = nullptr;
    v75 = 0;
    if ( !v15 )
    {
      v27 = (const char *)a2[13];
      if ( !strcmp(v27, "read-only") )
      {
        v74 = (void *)qvector_reserve();
        *(_QWORD *)&v75 = 5;
        strcpy((char *)v74, "RO: ");
      }
      else if ( !strcmp(v27, "read-write") )
      {
        v74 = (void *)qvector_reserve();
        *(_QWORD *)&v75 = 5;
        strcpy((char *)v74, "RW: ");
      }
    }
    v28 = v67;
    if ( (_QWORD)v67 )
    {
      v29 = v67 - 1;
      if ( (_QWORD)v67 != 1 )
      {
        v41 = v75;
        v42 = v67 - 1;
        if ( (_QWORD)v75 )
        {
          v41 = v75 - 1;
          v42 = v29 + v75 - 1;
          v28 = v67 + v75 - 1;
        }
        v43 = v74;
        if ( *((_QWORD *)&v75 + 1) < v28 )
        {
          v62 = v67 - 1;
          nb = v42;
          v74 = (void *)qvector_reserve();
          v29 = v62;
          v43 = v74;
          v42 = nb;
        }
        *(_QWORD *)&v75 = v28;
        v43[v42] = 0;
        memcpy((char *)v74 + v41, v66, v29);
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, _QWORD *, char **, void **, unsigned __int64))(**(_QWORD **)(a1 + 72) + 32LL))(
           *(_QWORD *)(a1 + 72),
           a6 + 24,
           a2,
           &v72,
           &v74,
           a5) )
    {
      ++*(_DWORD *)(a1 + 8);
    }
    else
    {
      ++*(_DWORD *)(a1 + 12);
    }
    if ( v74 )
    {
      *(_QWORD *)&v75 = 0;
      qfree();
    }
    if ( v72 )
    {
      *(_QWORD *)&v73 = 0;
      qfree();
    }
    if ( src )
    {
      *(_QWORD *)&v71 = 0;
      qfree();
    }
    if ( v68 )
    {
      *(_QWORD *)&v69 = 0;
      qfree();
    }
    if ( v66 )
    {
      *(_QWORD *)&v67 = 0;
      qfree();
    }
    if ( v49 )
      qfree();
    return v76 - __readfsqword(0x28u);
  }
  while ( a5 < *v11 || a5 >= v11[1] )
  {
    v11 += 2;
    if ( (unsigned __int64 *)v12 == v11 )
      goto LABEL_6;
  }
  return v76 - __readfsqword(0x28u);
}

