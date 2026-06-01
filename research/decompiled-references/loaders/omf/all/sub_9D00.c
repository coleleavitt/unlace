unsigned __int64 __fastcall sub_9D00(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v8; // r15
  __int64 v9; // r13
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  int v12; // esi
  int v13; // eax
  int v14; // edx
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 selector; // rax
  char v18; // al
  char v19; // dl
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // r15
  __int64 v24; // r12
  __int64 v25; // r13
  __int64 v26; // rax
  unsigned __int8 v27; // al
  unsigned __int64 v28; // rax
  char *v29; // r13
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  char *v32; // rsi
  int *v33; // rdx
  __int64 v34; // r12
  int *v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rbp
  __int64 v40; // r13
  __int64 v41; // r12
  unsigned __int8 v42; // al
  __int64 v43; // rax
  const char *v44; // rdx
  const char *v45; // r9
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  const char *v49; // rcx
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  const char *v52; // rcx
  __int64 v53; // rax
  int *v54; // rdx
  int *v55; // rsi
  __int64 v56; // rcx
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v61; // [rsp+8h] [rbp-160h]
  const char *v62; // [rsp+10h] [rbp-158h]
  unsigned __int64 v63; // [rsp+18h] [rbp-150h]
  int v64; // [rsp+28h] [rbp-140h]
  bool v65; // [rsp+2Fh] [rbp-139h]
  unsigned __int64 v66; // [rsp+30h] [rbp-138h] BYREF
  unsigned __int64 *v67; // [rsp+38h] [rbp-130h] BYREF
  __int128 v68; // [rsp+40h] [rbp-128h] BYREF
  __int128 v69; // [rsp+50h] [rbp-118h]
  __int64 v70; // [rsp+60h] [rbp-108h]
  __int64 v71; // [rsp+68h] [rbp-100h]
  __int64 v72; // [rsp+70h] [rbp-F8h]
  __int128 v73; // [rsp+78h] [rbp-F0h]
  __int128 v74; // [rsp+88h] [rbp-E0h]
  __int128 v75; // [rsp+98h] [rbp-D0h]
  __int128 v76; // [rsp+A8h] [rbp-C0h]
  __int128 v77; // [rsp+B8h] [rbp-B0h]
  __int128 v78; // [rsp+C8h] [rbp-A0h]
  __int128 v79; // [rsp+D8h] [rbp-90h]
  __int128 v80; // [rsp+E8h] [rbp-80h]
  unsigned __int64 v81; // [rsp+F8h] [rbp-70h]
  _BYTE v82[40]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v83; // [rsp+128h] [rbp-40h]

  v4 = a1;
  v5 = a2;
  v83 = __readfsqword(0x28u);
  if ( a1 )
    v4 = (unsigned __int16)netnode_altval(qword_144A8, a1, 65);
  if ( netnode_altval(a3, v4, 65) )
    return v83 - __readfsqword(0x28u);
  v67 = (_QWORD *)(&dword_0 + 1);
  netnode_supset(a3, v4, &v67, 8, 65);
  v64 = v4;
  v63 = (getinf(20, a4) + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( (unsigned __int64)xmmword_14508 <= 1 )
    goto LABEL_89;
  v8 = 59;
  v9 = 0;
  v10 = 1;
  do
  {
    v11 = v8 + qword_14500;
    if ( (unsigned __int8)(*(_BYTE *)(v8 + qword_14500 + 56) - 1) > 0x5Eu
      && v4 == netnode_altval(qword_144A8, *(_QWORD *)(v11 + 48), 65)
      && sub_5380(v10) == -1 )
    {
      v12 = *(_DWORD *)(v11 + 32);
      v13 = -(*(_DWORD *)(v11 + 36) + 1);
      if ( *(_DWORD *)(v11 + 36) + 1 > 0 )
        v13 = *(_DWORD *)(v11 + 36) + 1;
      v14 = -v12;
      if ( v12 > 0 )
        v14 = *(_DWORD *)(v11 + 32);
      v15 = v14 + v13;
      if ( v15 < *(_DWORD *)(v11 + 28) * *(_DWORD *)(v11 + 24) )
        v15 = *(_DWORD *)(v11 + 28) * *(_DWORD *)(v11 + 24);
      v9 = v15 + (unsigned int)v9;
    }
    ++v10;
    v8 += 59;
  }
  while ( v10 < (unsigned __int64)xmmword_14508 );
  v5 = a2;
  if ( (_DWORD)v9 )
  {
    qsnprintf(v82, 32, "extn%02d", v4);
    v68 = 0;
    v69 = 0;
    v73 = -1;
    v74 = -1;
    v75 = -1;
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    v70 = 0;
    v71 = 0;
    v72 = 0;
    v81 = 0xFFFFFFFF00000000LL;
    v16 = getinf(20, NAN);
    *(_QWORD *)&v68 = find_free_chunk(v16, v9, 15);
    *((_QWORD *)&v68 + 1) = v68 + v9;
    selector = allocate_selector(v63 >> 4);
    LOBYTE(v81) = 1;
    LOWORD(v71) = 513;
    v72 = selector;
    v18 = getinf(3, NAN);
    v19 = 0;
    v20 = v18 & 6;
    if ( v20 )
      v19 = (v20 != 2) + 1;
    BYTE3(v71) = v19;
    if ( !(unsigned __int8)add_segm_ex(&v68, v82, 0, dword_14370 | 0x21u) )
      sub_5230(0);
    v21 = v68;
  }
  else
  {
LABEL_89:
    v21 = -1;
  }
  v67 = (unsigned __int64 *)v21;
  netnode_supset(v5, v4, &v67, 8, 65);
  if ( (unsigned __int64)xmmword_14578 > 1 )
  {
    v61 = v4;
    v22 = 38;
    v23 = 1;
    v65 = v4 == 0;
    while ( v61 != netnode_altval(qword_144A8, v23, 65) )
    {
LABEL_25:
      ++v23;
      v22 += 38;
      if ( v23 >= (unsigned __int64)xmmword_14578 )
      {
        v4 = v61;
        goto LABEL_75;
      }
    }
    v70 = 0;
    v24 = v22 + qword_14570;
    v81 = 0xFFFFFFFF00000000LL;
    v71 = 0;
    v72 = 0;
    v68 = 0;
    v69 = 0;
    v73 = -1;
    v74 = -1;
    v75 = -1;
    v76 = -1;
    v77 = -1;
    v78 = -1;
    v79 = -1;
    v80 = -1;
    if ( *(_BYTE *)(v22 + qword_14570 + 37) != 2 )
    {
      if ( !*(_DWORD *)(v24 + 32) )
      {
        LOBYTE(v81) = 7;
        *(_DWORD *)(v24 + 32) = 1;
      }
      if ( (*(_BYTE *)(v24 + 36) & 1) != 0 )
        BYTE3(v71) = 1;
      v25 = *(unsigned int *)(v24 + 32);
      v26 = getinf(20, 0.0);
      *(_QWORD *)&v68 = find_free_chunk(v26, v25, 15);
      *((_QWORD *)&v68 + 1) = *(unsigned int *)(v24 + 32) + (_QWORD)v68;
      if ( (unsigned __int8)getinf_flag(3, 2) == 1 || !v65 )
      {
        v72 = allocate_selector(v63 >> 4);
        LOBYTE(v71) = *(_BYTE *)(v24 + 36) >> 5;
        BYTE1(v71) = (*(_BYTE *)(v24 + 36) >> 2) & 7;
      }
      else
      {
        v72 = allocate_selector((unsigned __int64)v68 >> 4);
        LOBYTE(v71) = *(_BYTE *)(v24 + 36) >> 5;
        v27 = *(_BYTE *)(v24 + 36);
        WORD2(v71) |= 1u;
        BYTE1(v71) = (v27 >> 2) & 7;
      }
      v28 = *(_QWORD *)v24;
      v29 = "";
      if ( *(_QWORD *)v24 )
      {
        if ( v28 < (unsigned __int64)xmmword_14598 )
        {
          v30 = qword_14590 + 32 * v28;
          v29 = (char *)src;
          if ( *(_QWORD *)(v30 + 8) )
          {
            v29 = *(char **)v30;
            if ( **(_BYTE **)v30 )
            {
              if ( !(_BYTE)v81 )
              {
                if ( stristr(v29, "DATA", 0.0) )
                {
                  LOBYTE(v81) = 3;
                }
                else if ( stristr(v29, "BSS", 0.0) )
                {
                  LOBYTE(v81) = 9;
                }
                else if ( stristr(v29, "text", 0.0) )
                {
                  LOBYTE(v81) = 2;
                }
              }
            }
          }
        }
      }
      v31 = *(_QWORD *)(v24 + 8);
      v32 = "";
      if ( v31 )
      {
        if ( v31 < (unsigned __int64)xmmword_14598 )
        {
          v59 = qword_14590 + 32 * v31;
          v32 = (char *)src;
          if ( *(_QWORD *)(v59 + 8) )
            v32 = *(char **)v59;
        }
      }
      add_segm_ex(
        &v68,
        v29,
        v32,
        dword_14370 | (32 * ((int)((*((_QWORD *)&v68 + 1) - (_QWORD)v68) / (unsigned __int64)qword_145A8) > 5)) | 1u);
      if ( (_BYTE)v71 )
      {
        if ( (_BYTE)v81 != 7 )
          goto LABEL_46;
LABEL_86:
        create_data(v68, 0, 1, -1);
      }
      else
      {
        v67 = (unsigned __int64 *)(*(_QWORD *)(v24 + 24) + 1LL);
        v58 = ea2node(v68);
        netnode_supset(v58, 10, &v67, 8, 65);
        if ( (_BYTE)v81 == 7 )
          goto LABEL_86;
      }
LABEL_46:
      v33 = (int *)qword_14550;
      v34 = v68;
      v66 = v23;
      if ( qword_14550 )
      {
        v35 = &dword_14548;
        do
        {
          while ( 1 )
          {
            v36 = *((_QWORD *)v33 + 2);
            v37 = *((_QWORD *)v33 + 3);
            if ( *((_QWORD *)v33 + 4) < v23 )
              break;
            v35 = v33;
            v33 = *((int **)v33 + 2);
            if ( !v36 )
              goto LABEL_51;
          }
          v33 = *((int **)v33 + 3);
        }
        while ( v37 );
LABEL_51:
        if ( v35 == &dword_14548 || v23 < *((_QWORD *)v35 + 4) )
        {
LABEL_53:
          v67 = &v66;
          v35 = (int *)sub_47C0(&qword_14540, v35, &v67);
        }
        *((_QWORD *)v35 + 5) = v34;
        v38 = qword_14570;
        if ( v23 != 1 )
        {
          v39 = 38;
          v40 = 1;
          do
          {
            while ( 1 )
            {
              v41 = v38 + v39;
              if ( !*(_BYTE *)(v38 + v39 + 37) )
              {
                v42 = *(_BYTE *)(v41 + 36) >> 5;
                if ( v42 )
                  break;
              }
              ++v40;
              v39 += 38;
              if ( v40 == v23 )
                goto LABEL_72;
            }
            v62 = (const char *)strarray(&unk_13940, 7, v42);
            v43 = strarray(&unk_138E0, 6, (*(_BYTE *)(v41 + 36) >> 2) & 7);
            v44 = "";
            v45 = (const char *)v43;
            v46 = *(_QWORD *)(v41 + 8);
            if ( v46 )
            {
              v44 = "";
              if ( v46 < (unsigned __int64)xmmword_14598 )
              {
                v47 = qword_14590 + 32 * v46;
                v44 = src;
                if ( *(_QWORD *)(v47 + 8) )
                  v44 = *(const char **)v47;
              }
            }
            v48 = *(_QWORD *)v41;
            v49 = "";
            if ( *(_QWORD *)v41 )
            {
              v49 = "";
              if ( v48 < (unsigned __int64)xmmword_14598 )
              {
                v50 = qword_14590 + 32 * v48;
                v49 = src;
                if ( *(_QWORD *)(v50 + 8) )
                  v49 = *(const char **)v50;
              }
            }
            sub_4E30(
              v68,
              1u,
              (__int64)"%s segment %s %s '%s' use%d",
              v49,
              v62,
              v45,
              v44,
              (*(_BYTE *)(v41 + 36) & 1) == 0 ? 16 : 32);
            v51 = *(_QWORD *)v41;
            v52 = "";
            if ( *(_QWORD *)v41 )
            {
              v52 = "";
              if ( v51 < (unsigned __int64)xmmword_14598 )
              {
                v53 = qword_14590 + 32 * v51;
                v52 = src;
                if ( *(_QWORD *)(v53 + 8) )
                  v52 = *(const char **)v53;
              }
            }
            ++v40;
            v39 += 38;
            sub_4E30(v68, 1u, (__int64)"%-s ends", v52);
            *(_BYTE *)(v41 + 37) = 1;
            v38 = qword_14570;
          }
          while ( v40 != v23 );
        }
LABEL_72:
        *(_BYTE *)(v38 + v22 + 37) = 1;
        goto LABEL_25;
      }
      v35 = &dword_14548;
      goto LABEL_53;
    }
    v54 = (int *)qword_14550;
    v66 = v23;
    if ( qword_14550 )
    {
      v55 = &dword_14548;
      do
      {
        while ( 1 )
        {
          v56 = *((_QWORD *)v54 + 2);
          v57 = *((_QWORD *)v54 + 3);
          if ( *((_QWORD *)v54 + 4) < v23 )
            break;
          v55 = v54;
          v54 = *((int **)v54 + 2);
          if ( !v56 )
            goto LABEL_81;
        }
        v54 = *((int **)v54 + 3);
      }
      while ( v57 );
LABEL_81:
      if ( v55 != &dword_14548 && v23 >= *((_QWORD *)v55 + 4) )
        goto LABEL_84;
    }
    else
    {
      v55 = &dword_14548;
    }
    v67 = &v66;
    v55 = (int *)sub_47C0(&qword_14540, v55, &v67);
LABEL_84:
    *((_QWORD *)v55 + 5) = -2;
    goto LABEL_25;
  }
LABEL_75:
  sub_95A0(v4, v63);
  return sub_9040(v64, v63);
}
