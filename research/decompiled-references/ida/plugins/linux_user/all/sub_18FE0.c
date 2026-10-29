unsigned __int64 __fastcall sub_18FE0(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // r12
  __int64 v5; // rcx
  __int64 v6; // rbp
  int v7; // r8d
  int v8; // r9d
  __int64 elf_debug_file_directory; // rsi
  char *v10; // rax
  const char *v11; // r8
  const char *v12; // rcx
  const char *v13; // rdi
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rbp
  __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r14
  size_t v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r12
  char *v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // r15
  __int64 v29; // rdx
  __int64 v30; // r14
  size_t v31; // rax
  __int64 v32; // rsi
  __int64 v33; // rbp
  char *v34; // rbp
  __int64 v35; // rax
  int v36; // r12d
  __int64 v37; // rbp
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // rbx
  _QWORD *v41; // rax
  __int64 v43; // rax
  _QWORD *v44; // r12
  _QWORD *v45; // r14
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rcx
  int v50; // r8d
  int v51; // r9d
  size_t n; // [rsp+0h] [rbp-5B8h]
  void *v53; // [rsp+10h] [rbp-5A8h]
  _BYTE *src; // [rsp+30h] [rbp-588h]
  _QWORD v55[2]; // [rsp+50h] [rbp-568h] BYREF
  void *v56; // [rsp+60h] [rbp-558h]
  __int128 v57; // [rsp+68h] [rbp-550h]
  void *v58; // [rsp+78h] [rbp-540h]
  __int64 v59; // [rsp+80h] [rbp-538h]
  __int64 v60; // [rsp+88h] [rbp-530h]
  int v61; // [rsp+98h] [rbp-520h] BYREF
  void *v62; // [rsp+A0h] [rbp-518h]
  int *v63; // [rsp+A8h] [rbp-510h]
  int *v64; // [rsp+B0h] [rbp-508h]
  __int64 v65; // [rsp+B8h] [rbp-500h]
  __int64 v66; // [rsp+C0h] [rbp-4F8h]
  __int128 v67; // [rsp+C8h] [rbp-4F0h]
  __int64 v68; // [rsp+D8h] [rbp-4E0h]
  __int128 v69; // [rsp+E0h] [rbp-4D8h]
  int v70; // [rsp+F0h] [rbp-4C8h]
  __int64 (__fastcall **v71)(); // [rsp+100h] [rbp-4B8h] BYREF
  char s2[1024]; // [rsp+108h] [rbp-4B0h] BYREF
  __int64 v73; // [rsp+508h] [rbp-B0h]
  __int64 v74; // [rsp+510h] [rbp-A8h]
  __int64 v75; // [rsp+520h] [rbp-98h]
  __int64 v76; // [rsp+528h] [rbp-90h]
  __int64 v77; // [rsp+538h] [rbp-80h]
  __int64 v78; // [rsp+540h] [rbp-78h]
  __int64 v79; // [rsp+550h] [rbp-68h]
  __int64 v80; // [rsp+558h] [rbp-60h]
  unsigned __int64 v81; // [rsp+578h] [rbp-40h]

  v81 = __readfsqword(0x28u);
  v4 = (__int64)(a1 + 127);
  v6 = stristr();
  if ( v6 )
  {
    v4 = (__int64)(a1 + 133);
    a1[183] = *a2;
  }
  sub_16380((__int64)a1, v4, a2, v5, v7, v8);
  elf_debug_file_directory = get_elf_debug_file_directory();
  v10 = (char *)s;
  if ( a2[15] )
    v10 = (char *)a2[14];
  v11 = s;
  if ( a2[18] )
    v11 = (const char *)a2[17];
  v12 = s;
  if ( a2[3] )
    v12 = (const char *)a2[2];
  sub_18A80((__int64)&v71, elf_debug_file_directory, 1, v12, v11, *((_DWORD *)a2 + 40), v10);
  if ( (unsigned int)sub_15A50((_BOOL8 (__fastcall ***)(__int64, int))&v71) )
  {
    v13 = s;
    if ( a2[3] )
      v13 = (const char *)a2[2];
    if ( strcmp(v13, s2) )
    {
      sub_32190((_DWORD)a1, (unsigned int)"load separate debug info '%s'\n", (unsigned int)s2, v14, v15, v16);
      src = (_BYTE *)qvector_reserve();
      *src = 0;
      n = strlen(s2);
      v53 = (void *)qvector_reserve();
      memmove(v53, s2, n);
      *((_BYTE *)v53 + n) = 0;
      v43 = *a2;
      v57 = 0;
      v55[0] = v43;
      v55[1] = 0;
      v56 = nullptr;
      if ( n != -1 )
      {
        v56 = (void *)qalloc_or_throw();
        *((_QWORD *)&v57 + 1) = n + 1;
        memcpy(v56, v53, n + 1);
        *(_QWORD *)&v57 = n + 1;
      }
      v58 = (void *)qalloc_or_throw();
      v60 = 1;
      memcpy(v58, src, 1u);
      v59 = 1;
      v61 = 0;
      v62 = nullptr;
      v63 = &v61;
      v64 = &v61;
      v65 = 0;
      v66 = 0;
      v68 = 0;
      v70 = 0;
      v67 = 0;
      v69 = 0;
      if ( v53 )
        qfree();
      if ( src )
        qfree();
      sub_16380((__int64)a1, v4, v55, v49, v50, v51);
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
      v44 = v62;
      if ( v62 )
      {
        do
        {
          v45 = v44;
          sub_122F0((_QWORD *)v44[3]);
          v46 = v44[5];
          v44 = (_QWORD *)v44[2];
          if ( v46 )
          {
            v45[6] = 0;
            qfree();
          }
          operator delete(v45, 0x40u);
        }
        while ( v44 );
      }
      if ( v58 )
      {
        v59 = 0;
        qfree();
      }
      if ( v56 )
      {
        *(_QWORD *)&v57 = 0;
        qfree();
      }
    }
  }
  if ( v6 )
  {
    v17 = 8LL * a1[134];
    v18 = v17 >> 3;
    if ( v17 >> 3 )
    {
      v19 = a1[128];
      v20 = a1[133];
      v21 = 0;
      v22 = a1[127];
      v23 = 8 * v19;
      if ( a1[129] < (unsigned __int64)(v18 + v19) )
      {
        v47 = qvector_reserve();
        a1[127] = v47;
        v22 = v47;
        v21 = 8LL * a1[128] - v23;
      }
      v24 = (char *)(v22 + v23);
      memmove(&v24[v17], v24, v21);
      v25 = 0;
      if ( v17 )
      {
        do
        {
          *(_QWORD *)&v24[v25] = *(_QWORD *)(v20 + v25);
          v25 += 8;
        }
        while ( v17 != v25 );
      }
      a1[128] += v18;
    }
    v26 = a1[137];
    v27 = 8 * v26;
    v28 = (8 * v26) >> 3;
    if ( v28 )
    {
      v29 = a1[131];
      v30 = a1[136];
      v31 = 0;
      v32 = a1[130];
      v33 = 8 * v29;
      if ( a1[132] < (unsigned __int64)(v28 + v29) )
      {
        v48 = qvector_reserve();
        a1[130] = v48;
        v32 = v48;
        v31 = 8LL * a1[131] - v33;
      }
      v34 = (char *)(v32 + v33);
      memmove(&v34[v27], v34, v31);
      v35 = 0;
      if ( v27 )
      {
        do
        {
          *(_QWORD *)&v34[v35] = *(_QWORD *)(v30 + v35);
          v35 += 8;
        }
        while ( v27 != v35 );
      }
      a1[131] += v28;
      v26 = a1[137];
    }
    if ( v26 )
    {
      v36 = 0;
      v37 = 0;
      do
      {
        ++v36;
        *(_QWORD *)(a1[136] + 8 * v37) = qstrdup();
        v37 = v36;
      }
      while ( (unsigned __int64)v36 < a1[137] );
    }
  }
  v71 = off_44D78;
  if ( v79 )
  {
    v80 = 0;
    qfree();
  }
  if ( v77 )
  {
    v78 = 0;
    qfree();
  }
  if ( v75 )
  {
    v76 = 0;
    qfree();
  }
  v38 = v73;
  if ( v73 )
  {
    v39 = v74;
    if ( v74 )
    {
      v40 = 0;
      do
      {
        v41 = (_QWORD *)(v38 + 24 * v40);
        if ( *v41 )
        {
          v41[1] = 0;
          qfree();
          v38 = v73;
        }
        ++v40;
      }
      while ( v39 != v40 );
    }
    v74 = 0;
    qfree();
  }
  return v81 - __readfsqword(0x28u);
}

