unsigned __int64 __fastcall sub_39C10(__int64 a1, __int64 a2)
{
  const char *v2; // r12
  __int64 v3; // rsi
  __int64 v4; // rax
  void *v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r13
  size_t v9; // rax
  __int64 v10; // rbx
  size_t v11; // r13
  size_t v12; // r14
  _BYTE *v13; // rsi
  const char *v14; // rdx
  __int64 v16; // rbx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // r13
  _BYTE *v22; // rsi
  char *v23; // r14
  __int64 v24; // rax
  unsigned __int8 *v25; // r15
  unsigned __int8 *v26; // rbx
  int v27; // ecx
  size_t v28; // rax
  __int64 v29; // rbx
  size_t v30; // rbp
  size_t v31; // r8
  _BYTE *v32; // rsi
  size_t v33; // rdx
  size_t v34; // rdx
  unsigned __int64 v35; // rbp
  __int64 v36; // rbx
  _BYTE *v37; // rsi
  unsigned __int64 v38; // rbp
  __int64 v39; // rbx
  _BYTE *v40; // rsi
  const char *v41; // rbx
  __int64 v42; // rbp
  size_t v43; // rax
  size_t v44; // r13
  size_t v45; // r8
  _BYTE *v46; // rsi
  size_t v47; // rdx
  __int64 v48; // rbx
  unsigned __int64 v49; // rbp
  _BYTE *v50; // rsi
  __int64 v51; // [rsp+10h] [rbp-4A8h]
  __int64 v53; // [rsp+28h] [rbp-490h]
  __int64 v54; // [rsp+38h] [rbp-480h]
  size_t v55; // [rsp+40h] [rbp-478h]
  size_t v56; // [rsp+40h] [rbp-478h]
  size_t v57; // [rsp+48h] [rbp-470h]
  size_t v58; // [rsp+48h] [rbp-470h]
  void *ptr; // [rsp+50h] [rbp-468h] BYREF
  __int128 v60; // [rsp+58h] [rbp-460h]
  char v61[1024]; // [rsp+70h] [rbp-448h] BYREF
  _BYTE v62[8]; // [rsp+470h] [rbp-48h] BYREF
  unsigned __int64 v63; // [rsp+478h] [rbp-40h]

  v2 = "<unknown>";
  v3 = *(unsigned __int8 *)(a2 + 8);
  v63 = __readfsqword(0x28u);
  v4 = sub_168AC0(a1 + 192, v3);
  if ( v4 )
    v2 = *(const char **)(v4 + 8);
  ptr = nullptr;
  v60 = 0;
  v5 = (void *)sub_1987B0(&ptr, 0, 200, 1);
  v6 = v60;
  ptr = v5;
  if ( (_QWORD)v60 )
  {
    v7 = v60 + 12;
    v8 = v60 + 13;
    v6 = v60 - 1;
    if ( *((_QWORD *)&v60 + 1) >= (unsigned __int64)(v60 + 13) )
      goto LABEL_5;
  }
  else
  {
    v8 = 14;
    v7 = 13;
    if ( *((_QWORD *)&v60 + 1) >= 0xEu )
      goto LABEL_5;
  }
  v5 = (void *)sub_1987B0(&ptr, v5, v8, 1);
  ptr = v5;
LABEL_5:
  *(_QWORD *)&v60 = v8;
  *((_BYTE *)v5 + v7) = 0;
  qmemcpy((char *)ptr + v6, "Got request: ", 13);
  if ( v2 )
  {
    v9 = strlen(v2);
    v10 = v60;
    v11 = v9;
    v12 = v9;
    if ( (_QWORD)v60 )
    {
      v10 = v60 - 1;
      v12 = v9 + v60 - 1;
    }
    v13 = ptr;
    if ( *((_QWORD *)&v60 + 1) < v12 + 1 )
    {
      ptr = (void *)sub_1987B0(&ptr, ptr, v12 + 1, 1);
      v13 = ptr;
    }
    *(_QWORD *)&v60 = v12 + 1;
    v13[v12] = 0;
    memmove((char *)ptr + v10, v2, v11);
  }
  sub_2AAE0((__int64 *)&ptr);
  if ( *(_BYTE *)(a2 + 8) == 16 )
  {
    v16 = *(_QWORD *)(a2 + 112);
    v54 = v16;
    sub_2AAE0((__int64 *)&ptr);
    if ( v16 )
    {
      v53 = 0;
      v51 = 0;
      do
      {
        v19 = v60;
        v20 = 2;
        v21 = *(_QWORD *)(a2 + 104) + v53;
        if ( (_QWORD)v60 )
        {
          v20 = v60 + 1;
          v19 = v60 - 1;
        }
        v22 = ptr;
        if ( *((_QWORD *)&v60 + 1) < v20 )
        {
          ptr = (void *)sub_1987B0(&ptr, ptr, v20, 1);
          v22 = ptr;
        }
        *(_QWORD *)&v60 = v20;
        v23 = v61;
        v22[v19] = 32;
        *((_BYTE *)ptr + v19 + 1) = 0;
        v24 = *(_QWORD *)(v21 + 72);
        v25 = *(unsigned __int8 **)(v21 + 64);
        v26 = &v25[v24];
        if ( v24 )
        {
          do
          {
            v27 = *v25++;
            v23 += (int)sub_19D9D0((_DWORD)v23, v62 - v23, (unsigned int)"%02X", v27, v17, v18);
          }
          while ( v26 != v25 );
        }
        v28 = strlen(v61);
        v29 = v60;
        v30 = v28;
        v31 = v28;
        if ( (_QWORD)v60 )
        {
          v29 = v60 - 1;
          v31 = v28 + v60 - 1;
        }
        v32 = ptr;
        v33 = v31 + 1;
        if ( *((_QWORD *)&v60 + 1) < v31 + 1 )
        {
          v57 = v31;
          v55 = v31 + 1;
          ptr = (void *)sub_1987B0(&ptr, ptr, v33, 1);
          v31 = v57;
          v32 = ptr;
          v33 = v55;
        }
        *(_QWORD *)&v60 = v33;
        v34 = v30;
        v35 = 2;
        v32[v31] = 0;
        memmove((char *)ptr + v29, v61, v34);
        v36 = v60;
        if ( (_QWORD)v60 )
        {
          v35 = v60 + 1;
          v36 = v60 - 1;
        }
        v37 = ptr;
        if ( *((_QWORD *)&v60 + 1) < v35 )
        {
          ptr = (void *)sub_1987B0(&ptr, ptr, v35, 1);
          v37 = ptr;
        }
        *(_QWORD *)&v60 = v35;
        v38 = 2;
        v37[v36] = 32;
        *((_BYTE *)ptr + v36 + 1) = 0;
        v39 = v60;
        if ( (_QWORD)v60 )
        {
          v38 = v60 + 1;
          v39 = v60 - 1;
        }
        v40 = ptr;
        if ( *((_QWORD *)&v60 + 1) < v38 )
        {
          ptr = (void *)sub_1987B0(&ptr, ptr, v38, 1);
          v40 = ptr;
        }
        *(_QWORD *)&v60 = v38;
        v40[v39] = 40;
        *((_BYTE *)ptr + v39 + 1) = 0;
        v41 = s1;
        if ( *(_QWORD *)(v21 + 8) )
          v41 = *(const char **)v21;
        if ( v41 )
        {
          v42 = v60;
          v43 = strlen(v41);
          v44 = v43;
          v45 = v43;
          if ( v42 )
          {
            --v42;
            v45 = v43 + v42;
          }
          v46 = ptr;
          v47 = v45 + 1;
          if ( *((_QWORD *)&v60 + 1) < v45 + 1 )
          {
            v58 = v45;
            v56 = v45 + 1;
            ptr = (void *)sub_1987B0(&ptr, ptr, v47, 1);
            v45 = v58;
            v46 = ptr;
            v47 = v56;
          }
          *(_QWORD *)&v60 = v47;
          v46[v45] = 0;
          memmove((char *)ptr + v42, v41, v44);
        }
        v48 = v60;
        v49 = 2;
        if ( (_QWORD)v60 )
        {
          v49 = v60 + 1;
          v48 = v60 - 1;
        }
        v50 = ptr;
        if ( *((_QWORD *)&v60 + 1) < v49 )
        {
          ptr = (void *)sub_1987B0(&ptr, ptr, v49, 1);
          v50 = ptr;
        }
        *(_QWORD *)&v60 = v49;
        v50[v48] = 41;
        ++v51;
        *((_BYTE *)ptr + v48 + 1) = 0;
        v53 += 88;
      }
      while ( v54 != v51 );
    }
  }
  v14 = s1;
  if ( (_QWORD)v60 )
    v14 = (const char *)ptr;
  sub_2F0E0(a1, (__int64)"%s\n", v14);
  if ( ptr )
  {
    *(_QWORD *)&v60 = 0;
    j__free(ptr);
  }
  return v63 - __readfsqword(0x28u);
}
