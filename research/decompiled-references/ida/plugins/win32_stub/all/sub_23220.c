__int64 __fastcall sub_23220(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r11
  _QWORD *v10; // r13
  __int64 v11; // rdi
  _QWORD *v12; // r15
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 v15; // r10
  _QWORD *v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r11
  int v21; // r9d
  __int64 v22; // r15
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // r14
  unsigned __int8 v26; // bl
  unsigned __int8 v27; // bp
  unsigned __int8 v28; // al
  _QWORD *v29; // rbx
  __int64 v30; // rax
  __int64 v31; // rsi
  int *v32; // rcx
  int *v33; // rdi
  __int64 v34; // r14
  const void **v35; // r9
  unsigned __int8 *v36; // r13
  const void **v37; // r12
  size_t v38; // rbx
  const void *v39; // rbp
  _BYTE *i; // rax
  size_t v41; // rbx
  size_t v42; // rbp
  _BYTE *v43; // rdx
  _QWORD *v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // rax
  _BYTE *v47; // r15
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rbx
  __int64 v51; // rbx
  unsigned __int64 v52; // rdx
  __int64 v53; // r13
  int *v54; // r9
  __int64 v55; // r11
  unsigned __int64 v56; // rax
  int *v57; // rcx
  __int64 v58; // r14
  int *v59; // rdi
  __int64 v60; // r13
  __int64 v61; // r10
  __int64 *v62; // r8
  unsigned __int64 v63; // rbp
  unsigned __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // r9
  int v68; // r8d
  __int64 v69; // r15
  __int64 v70; // rcx
  unsigned __int8 v71; // bl
  unsigned __int8 v72; // r12
  unsigned __int8 v73; // al
  __int64 v74; // rbx
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  __int64 v77; // rax
  int ca[2]; // [rsp+8h] [rbp-E0h]
  int c; // [rsp+8h] [rbp-E0h]
  int cb[2]; // [rsp+8h] [rbp-E0h]
  int cc[2]; // [rsp+8h] [rbp-E0h]
  __int64 v82; // [rsp+10h] [rbp-D8h]
  _BYTE *v83; // [rsp+10h] [rbp-D8h]
  __int64 v84; // [rsp+10h] [rbp-D8h]
  int *v85; // [rsp+10h] [rbp-D8h]
  __int64 v86; // [rsp+18h] [rbp-D0h]
  __int64 v87; // [rsp+18h] [rbp-D0h]
  int v88; // [rsp+20h] [rbp-C8h]
  int v89; // [rsp+20h] [rbp-C8h]
  _QWORD *s; // [rsp+28h] [rbp-C0h]
  int *sa; // [rsp+28h] [rbp-C0h]
  __int64 v92; // [rsp+30h] [rbp-B8h]
  __int64 v93; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v94; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v95; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v96; // [rsp+38h] [rbp-B0h]
  _QWORD *v97; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v98; // [rsp+48h] [rbp-A0h]
  __int64 v99; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v100; // [rsp+50h] [rbp-98h]
  __int64 v101; // [rsp+58h] [rbp-90h]
  __int64 v102; // [rsp+58h] [rbp-90h]
  unsigned __int64 v103; // [rsp+60h] [rbp-88h]
  unsigned __int64 v104; // [rsp+60h] [rbp-88h]
  __int64 v105; // [rsp+68h] [rbp-80h]
  __int64 v106; // [rsp+70h] [rbp-78h]
  unsigned __int64 v107; // [rsp+78h] [rbp-70h]
  __int64 v108; // [rsp+80h] [rbp-68h]
  unsigned __int64 v109; // [rsp+88h] [rbp-60h]

  v4 = a2 & 0xFFFFFFFFFFFFF000LL;
  v5 = a1;
  v100 = a2 - v4;
  *(_QWORD *)(a1 + 4144) = v4;
  v106 = a1 + 48;
LABEL_2:
  v7 = 1000;
  while ( 1 )
  {
    if ( v4 >= a3 )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v5 + 32) & 2) == 0 )
    {
      v51 = callui(86);
      qsem_free();
      if ( v51 )
        return 4294967289LL;
      v4 = *(_QWORD *)(v5 + 4144);
    }
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v5 + 16) + 288LL))(
           *(_QWORD *)(v5 + 16),
           v4,
           v106,
           4096,
           *(_QWORD *)(v5 + 40));
    v9 = *(_QWORD *)(v5 + 4144);
    if ( v8 != 4096 )
    {
      *(_QWORD *)(v5 + 4176) = v9;
      return 4294967289LL;
    }
    v10 = *(_QWORD **)(v5 + 4152);
    v11 = a3 - v9;
    if ( a3 - v9 > 0x1000 )
      v11 = 4096;
    v97 = (_QWORD *)(v5 + 4152);
    *(_QWORD *)(v5 + 4240) = v11;
    if ( (_QWORD *)(v5 + 4152) != v10 )
    {
      v101 = v7;
      v12 = v10;
      v13 = v11;
      v103 = a3;
      while ( 1 )
      {
        v14 = v13;
        v15 = v12[4];
        v16 = (_QWORD *)(**(_QWORD **)(v5 + 24) + 80LL * v12[3]);
        v17 = v16[1] - v15;
        if ( v17 <= v13 )
          v14 = v16[1] - v15;
        v18 = v15 + *v16;
        v19 = 0;
        if ( v16[4] )
          v19 = v15 + v16[3];
        if ( v14 )
          break;
LABEL_51:
        if ( v13 >= v17 )
        {
          **(_QWORD **)(v5 + 8) = v12[2];
          return 1;
        }
        if ( v13 == 4096 )
        {
          v12[4] = v15 + 4096;
          v12 = (_QWORD *)*v12;
          if ( v97 == v12 )
          {
LABEL_27:
            v7 = v101;
            a3 = v103;
            v9 = *(_QWORD *)(v5 + 4144);
            goto LABEL_28;
          }
        }
        else
        {
LABEL_26:
          v29 = (_QWORD *)*v12;
          *(_QWORD *)v12[1] = *v12;
          v30 = v12[1];
          v12 = v29;
          v29[1] = v30;
          qfree();
          --*(_QWORD *)(v5 + 4168);
          if ( v97 == v29 )
            goto LABEL_27;
        }
        v13 = *(_QWORD *)(v5 + 4240);
      }
      s = v12;
      v20 = v5;
      v21 = *(_DWORD *)(v5 + 32) & 1;
      v22 = v19;
      v98 = v13;
      v23 = 0;
      v88 = *(_DWORD *)(v5 + 32) & 0x20;
      v24 = 0;
      v25 = v18;
      v92 = v15;
      v94 = v17;
      while ( 1 )
      {
        v26 = *(_BYTE *)(v25 + v23);
        v27 = *(_BYTE *)(v20 + v23 + 48);
        if ( !v21 )
        {
          v86 = v20;
          *(_QWORD *)ca = v23;
          v27 = toupper(v27);
          v28 = toupper(v26);
          v20 = v86;
          v21 = 0;
          v23 = *(_QWORD *)ca;
          v26 = v28;
        }
        if ( !v22 )
          goto LABEL_18;
        if ( v88 )
          break;
        if ( v22 != 255 )
        {
          if ( *(_BYTE *)(v22 + v24) )
          {
LABEL_18:
            if ( v27 != v26 )
              goto LABEL_25;
          }
LABEL_19:
          v24 = (int)++v23;
          if ( (int)v23 >= v14 )
            goto LABEL_50;
          continue;
        }
        if ( v26 != 0xFF )
          goto LABEL_18;
        v24 = (int)++v23;
        if ( (int)v23 >= v14 )
        {
LABEL_50:
          v12 = s;
          v15 = v92;
          v5 = v20;
          v17 = v94;
          v13 = v98;
          goto LABEL_51;
        }
      }
      if ( (*(_BYTE *)(v22 + v24) & (unsigned __int8)(v27 ^ v26)) != 0 )
      {
LABEL_25:
        v12 = s;
        v5 = v20;
        goto LABEL_26;
      }
      goto LABEL_19;
    }
LABEL_28:
    v31 = *(_QWORD *)(v5 + 4192);
    v32 = *(int **)(v5 + 4184);
    v33 = v32;
    if ( 4 * v31 )
    {
      v93 = v7;
      v82 = v9;
      v95 = a3;
      v34 = v5;
      do
      {
        v35 = (const void **)(**(_QWORD **)(v34 + 24) + 80LL * *v33);
        v36 = (unsigned __int8 *)v35[1];
        v37 = v35;
        if ( *(_QWORD *)(v34 + 4240) != v100 )
        {
          v38 = *(_QWORD *)(v34 + 4240) - v100;
          c = *(unsigned __int8 *)*v35;
          v39 = (const void *)(v100 + v106);
          for ( i = memchr((const void *)(v100 + v106), c, v38); ; i = memchr(v39, c, v38) )
          {
            v47 = i;
            if ( !i )
              break;
            v41 = v38 - (i - (_BYTE *)v39);
            v42 = v41;
            if ( (unsigned __int64)v36 <= v41 )
              v42 = (size_t)v36;
            if ( !memcmp(i, *v37, v42) )
            {
              v43 = &v47[v82 - v106];
              v83 = v43;
              if ( v41 >= (unsigned __int64)v36 )
              {
                **(_QWORD **)(v34 + 8) = v43;
                return 1;
              }
              v87 = *v33;
              v44 = (_QWORD *)qalloc_or_throw();
              v44[4] = v42;
              v44[2] = v83;
              *v44 = v97;
              v44[3] = v87;
              v45 = *(_QWORD **)(v34 + 4160);
              v44[1] = v45;
              *v45 = v44;
              *(_QWORD *)(v34 + 4160) = v44;
              v46 = *(_QWORD *)(v34 + 4144);
              ++*(_QWORD *)(v34 + 4168);
              v82 = v46;
            }
            v39 = v47 + 1;
            v38 = v41 - 1;
            if ( !v38 )
              break;
          }
          v32 = *(int **)(v34 + 4184);
          v31 = *(_QWORD *)(v34 + 4192);
        }
        ++v33;
      }
      while ( v33 != &v32[v31] );
      v5 = v34;
      v7 = v93;
      v9 = v82;
      a3 = v95;
    }
    if ( *(_QWORD *)(v5 + 4216) )
    {
      v52 = *(_QWORD *)(v5 + 4240);
      if ( v100 < v52 )
        break;
    }
LABEL_44:
    v100 = 0;
    v4 = v9 + 4096;
    *(_QWORD *)(v5 + 4144) = v9 + 4096;
    if ( !--v7 )
    {
      v48 = qtime64();
      v49 = HIDWORD(v48);
      if ( (unsigned int)(HIDWORD(v48) - *(_DWORD *)(v5 + 4232)) > 4 )
      {
        sub_13580(*(_QWORD *)(v5 + 16), (__int64)"");
        *(_DWORD *)(v5 + 4232) = v49;
      }
      v4 = *(_QWORD *)(v5 + 4144);
      goto LABEL_2;
    }
  }
  v108 = v7;
  v53 = v5;
  v109 = a3;
  v105 = v9;
  v54 = *(int **)(v5 + 4208);
  v55 = *(_QWORD *)(v5 + 4216);
  v56 = v100;
LABEL_62:
  v57 = v54;
  v96 = v52 - v56;
  if ( !(4 * v55) )
    goto LABEL_81;
  v107 = v56;
  v58 = v53;
  v59 = v54;
  v60 = v106 + v56;
  while ( 2 )
  {
    while ( 2 )
    {
      v61 = *v57;
      v62 = (__int64 *)(**(_QWORD **)(v58 + 24) + 80 * v61);
      v63 = v96;
      v64 = v62[1];
      v65 = *v62;
      if ( v96 > v64 )
        v63 = v62[1];
      v66 = 0;
      if ( v62[4] )
        v66 = v62[3];
      if ( v63 )
      {
        sa = v57;
        v67 = 0;
        v68 = *(_DWORD *)(v58 + 32) & 1;
        v69 = v66;
        v70 = 0;
        v89 = *(_DWORD *)(v58 + 32) & 0x20;
        v102 = v61;
        v104 = v64;
        v99 = v55;
        while ( 1 )
        {
          v71 = *(_BYTE *)(v65 + v70);
          v72 = *(_BYTE *)(v60 + v70);
          if ( !v68 )
          {
            v84 = v70;
            *(_QWORD *)cb = v67;
            v72 = toupper(v72);
            v73 = toupper(v71);
            v68 = 0;
            v70 = v84;
            v67 = *(_QWORD *)cb;
            v71 = v73;
          }
          if ( !v69 )
          {
LABEL_72:
            if ( v72 != v71 )
              goto LABEL_79;
            goto LABEL_73;
          }
          if ( v89 )
            break;
          if ( v69 == 255 )
          {
            if ( v71 != 0xFF )
              goto LABEL_72;
            v67 = (int)++v70;
            if ( (int)v70 >= v63 )
            {
LABEL_85:
              v61 = v102;
              v64 = v104;
              v57 = sa;
              goto LABEL_86;
            }
          }
          else
          {
            if ( *(_BYTE *)(v69 + v67) )
              goto LABEL_72;
LABEL_73:
            v67 = (int)++v70;
            if ( (int)v70 >= v63 )
              goto LABEL_85;
          }
        }
        if ( (*(_BYTE *)(v69 + v67) & (unsigned __int8)(v72 ^ v71)) != 0 )
        {
LABEL_79:
          v55 = v99;
          v57 = sa + 1;
          if ( sa + 1 != &v59[v99] )
            continue;
LABEL_80:
          v56 = v107;
          v52 = *(_QWORD *)(v58 + 4240);
          v53 = v58;
          v54 = v59;
LABEL_81:
          if ( ++v56 >= v52 )
          {
            v7 = v108;
            v9 = v105;
            v5 = v53;
            a3 = v109;
            goto LABEL_44;
          }
          goto LABEL_62;
        }
        goto LABEL_73;
      }
      break;
    }
LABEL_86:
    v74 = v107 + v105;
    if ( v96 < v64 )
    {
      v85 = v57;
      *(_QWORD *)cc = v61;
      v75 = (_QWORD *)qalloc_or_throw();
      v75[2] = v74;
      v75[3] = *(_QWORD *)cc;
      v75[4] = v63;
      v57 = v85 + 1;
      *v75 = v97;
      v76 = *(_QWORD **)(v58 + 4160);
      v75[1] = v76;
      *v76 = v75;
      v55 = *(_QWORD *)(v58 + 4216);
      *(_QWORD *)(v58 + 4160) = v75;
      v59 = *(int **)(v58 + 4208);
      v77 = *(_QWORD *)(v58 + 4144);
      ++*(_QWORD *)(v58 + 4168);
      v105 = v77;
      if ( v85 + 1 == &v59[v55] )
        goto LABEL_80;
      continue;
    }
    break;
  }
  **(_QWORD **)(v58 + 8) = v74;
  return 1;
}

