unsigned __int64 __fastcall sub_14240(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char v6; // al
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r13
  const char *v12; // rdx
  const char *v13; // rax
  __int64 v14; // rax
  int v15; // r14d
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rdi
  __int64 v19; // rax
  const char *v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  char *v23; // rax
  char *v24; // r8
  unsigned __int64 v25; // rax
  char *v26; // rdx
  char *v27; // r9
  __int64 v28; // rax
  char *v29; // rcx
  const char *v30; // rdx
  const char *v31; // rax
  __int64 v32; // rax
  const char *srca; // [rsp+8h] [rbp-188h]
  char *src; // [rsp+8h] [rbp-188h]
  char *srcc; // [rsp+8h] [rbp-188h]
  char *srcb; // [rsp+8h] [rbp-188h]
  __int128 v37; // [rsp+10h] [rbp-180h]
  char *v38; // [rsp+10h] [rbp-180h]
  size_t v39; // [rsp+18h] [rbp-178h]
  char *v40; // [rsp+18h] [rbp-178h]
  const char *v42; // [rsp+30h] [rbp-160h] BYREF
  __int128 v43; // [rsp+38h] [rbp-158h]
  char *s; // [rsp+50h] [rbp-140h] BYREF
  __int128 v45; // [rsp+58h] [rbp-138h]
  const char *v46; // [rsp+70h] [rbp-120h] BYREF
  __int128 v47; // [rsp+78h] [rbp-118h]
  _BYTE v48[16]; // [rsp+90h] [rbp-100h] BYREF
  int v49; // [rsp+A0h] [rbp-F0h]
  int v50; // [rsp+A8h] [rbp-E8h]
  __int64 v51; // [rsp+B0h] [rbp-E0h]
  __int128 v52; // [rsp+B8h] [rbp-D8h]
  int v53; // [rsp+D0h] [rbp-C0h]
  _BYTE v54[44]; // [rsp+D4h] [rbp-BCh] BYREF
  const char *v55; // [rsp+100h] [rbp-90h]
  __int64 v56; // [rsp+108h] [rbp-88h]
  _BYTE v57[48]; // [rsp+110h] [rbp-80h] BYREF
  const char *v58; // [rsp+140h] [rbp-50h]
  __int64 v59; // [rsp+148h] [rbp-48h]
  unsigned __int64 v60; // [rsp+158h] [rbp-38h]

  v60 = __readfsqword(0x28u);
  if ( a4 == -1 )
    return v60 - __readfsqword(0x28u);
  v51 = 0;
  v52 = 0;
  v6 = sub_A390(a1, (__int64)v48, a4);
  v10 = v51;
  if ( !v6 )
  {
    if ( v51 )
      qfree(v51);
    return v60 - __readfsqword(0x28u);
  }
  v42 = nullptr;
  v43 = 0;
  sub_13640((__int64 *)v57, a1, (__int64)v48, v7, v8, v9);
  v12 = byte_190C8;
  if ( *(_QWORD *)&v57[8] )
    v12 = *(const char **)v57;
  sub_13580((__int64 *)&v42, (__int64)"Load %s", v12);
  if ( *(_QWORD *)v57 )
  {
    *(_QWORD *)&v57[8] = 0;
    qfree(*(_QWORD *)v57);
  }
  v53 = 64;
  v55 = "Load only this section into the database";
  v56 = 0x1FFFFFFFFLL;
  v13 = byte_190C8;
  memset(v54, 0, sizeof(v54));
  if ( (_QWORD)v43 )
    v13 = v42;
  *(_QWORD *)&v54[12] = v13;
  v14 = qalloc_or_throw(48);
  *(_QWORD *)(v14 + 32) = a4;
  v15 = v50;
  *(_QWORD *)v14 = off_1E978;
  *(_QWORD *)(v14 + 16) = a1;
  *(_DWORD *)(v14 + 8) = 1;
  *(_DWORD *)(v14 + 24) = 2;
  *(_DWORD *)(v14 + 40) = v15;
  *(_QWORD *)&v54[20] = v14;
  callui(133, 0, a3);
  if ( v49 )
  {
    if ( v49 == 1 && v15 >= 0 && v15 < *(_DWORD *)(*(_QWORD *)(a1 + 112) + 632LL) )
    {
      *(_DWORD *)v57 = 64;
      memset(&v57[20], 0, 28);
      *(_OWORD *)&v57[4] = 0;
      *(_QWORD *)&v57[16] = "Load dyld_branch_island";
      v58 = "Load this branch island into the database";
      v59 = 0x1FFFFFFFFLL;
      v16 = qalloc_or_throw(48);
      *(_QWORD *)(v16 + 32) = a4;
      *(_QWORD *)v16 = off_1E978;
      *(_DWORD *)(v16 + 8) = 1;
      *(_QWORD *)(v16 + 16) = a1;
      *(_DWORD *)(v16 + 24) = 4;
      *(_DWORD *)(v16 + 40) = v15;
      *(_QWORD *)&v57[24] = v16;
      callui(133, 0, a3);
    }
    goto LABEL_17;
  }
  if ( v15 >= 0 )
  {
    v17 = *(_QWORD *)(a1 + 112);
    if ( v15 < *(_DWORD *)(v17 + 560) )
    {
      v18 = byte_190C8;
      v19 = *(_QWORD *)(v17 + 600) + 24LL * v15;
      if ( *(_QWORD *)(v19 + 8) )
        v18 = *(const char **)v19;
      v20 = (const char *)qbasename(v18, 0, 3LL * v15);
      s = nullptr;
      v45 = 0;
      if ( v20 )
      {
        srca = v20;
        v39 = strlen(v20);
        s = (char *)qvector_reserve(&s, 0, v39 + 1, 1, v21, v22);
        *(_QWORD *)&v45 = v39 + 1;
        memmove(s, srca, v39);
        s[v39] = 0;
        src = (char *)v45;
        if ( (_QWORD)v45 )
        {
          v40 = s;
          v23 = strrchr(s, 46);
          v24 = v40;
          if ( !v23 || (v25 = v23 - v40, v25 == -1) )
          {
            v46 = nullptr;
            v47 = 0;
            goto LABEL_38;
          }
          memset(v57, 0, 24);
          v26 = v40;
          v27 = src - 1;
          if ( (unsigned __int64)(src - 1) > v25 )
            v27 = (char *)v25;
          v28 = 0;
          v29 = nullptr;
          if ( v27 )
          {
            srcb = v27;
            v38 = v27 + 1;
            *(_QWORD *)v57 = qvector_reserve(v57, 0, v27 + 1, 1, v40, v27);
            *(_QWORD *)&v57[8] = v38;
            memmove(*(void **)v57, v40, (size_t)srcb);
            srcb[*(_QWORD *)v57] = 0;
            v27 = *(char **)&v57[8];
            v29 = *(char **)v57;
            v28 = *(_QWORD *)&v57[16];
            v26 = s;
          }
          memset(v57, 0, 24);
          if ( v26 )
          {
            srcc = v29;
            *(_QWORD *)&v37 = v27;
            *((_QWORD *)&v37 + 1) = v28;
            *(_QWORD *)&v45 = 0;
            qfree(v26);
            v27 = (char *)v37;
            s = srcc;
            v45 = v37;
            if ( *(_QWORD *)v57 )
            {
              *(_QWORD *)&v57[8] = 0;
              qfree(*(_QWORD *)v57);
              v27 = (char *)v45;
            }
          }
          else
          {
            s = v29;
            *(_QWORD *)&v45 = v27;
            *((_QWORD *)&v45 + 1) = v28;
          }
          v46 = nullptr;
          v47 = 0;
          if ( v27 )
          {
            v24 = s;
LABEL_38:
            v30 = v24;
LABEL_39:
            sub_13580((__int64 *)&v46, (__int64)"Load %s", v30);
            *(_DWORD *)v57 = 64;
            v58 = "Load this module into the database";
            v59 = 0x1FFFFFFFFLL;
            v31 = byte_190C8;
            memset(&v57[4], 0, 44);
            if ( (_QWORD)v47 )
              v31 = v46;
            *(_QWORD *)&v57[16] = v31;
            v32 = qalloc_or_throw(48);
            *(_QWORD *)(v32 + 32) = a4;
            *(_QWORD *)v32 = off_1E978;
            *(_DWORD *)(v32 + 8) = 1;
            *(_QWORD *)(v32 + 16) = a1;
            *(_DWORD *)(v32 + 24) = 1;
            *(_DWORD *)(v32 + 40) = v15;
            *(_QWORD *)&v57[24] = v32;
            callui(133, 0, a3);
            if ( v46 )
            {
              *(_QWORD *)&v47 = 0;
              qfree(v46);
            }
            if ( s )
            {
              *(_QWORD *)&v45 = 0;
              qfree(s);
            }
            goto LABEL_17;
          }
        }
        else
        {
          v46 = nullptr;
          v47 = 0;
        }
      }
      else
      {
        v46 = nullptr;
        v47 = 0;
      }
      v30 = byte_190C8;
      goto LABEL_39;
    }
  }
LABEL_17:
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42);
  }
  if ( v10 )
    qfree(v10);
  return v60 - __readfsqword(0x28u);
}

