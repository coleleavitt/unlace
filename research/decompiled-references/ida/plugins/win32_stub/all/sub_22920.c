__int64 __fastcall sub_22920(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // rax
  __int64 *v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r11
  __int64 v10; // r9
  __int64 *v11; // r14
  __int64 v12; // r10
  unsigned __int64 v13; // rdi
  int v14; // ebx
  _QWORD *v15; // r8
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rbp
  unsigned __int64 v20; // rsi
  int v21; // r8d
  __int64 v22; // r14
  __int64 v23; // r10
  __int64 v24; // r9
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r13
  unsigned __int8 v27; // bp
  unsigned __int8 v28; // bl
  unsigned __int8 v29; // al
  __int64 *v30; // rbx
  __int64 v31; // rax
  __int64 v32; // r9
  const void *v33; // rbp
  int *v34; // rcx
  __int64 v35; // r15
  int *v36; // rsi
  _QWORD *v37; // rax
  size_t v38; // rbx
  unsigned __int8 v39; // r13
  _BYTE *i; // rax
  char *v41; // r12
  size_t v42; // r14
  size_t v43; // r13
  __int64 v44; // r12
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v49; // rbp
  bool v50; // zf
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rbp
  unsigned __int64 v53; // rax
  int *v54; // r11
  __int64 v55; // r13
  __int64 v56; // rdi
  int *v57; // r9
  __int64 v58; // r12
  __int64 v59; // r10
  int v60; // r13d
  _QWORD *v61; // r8
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rax
  unsigned __int64 v64; // r15
  unsigned __int64 v65; // rbx
  unsigned __int64 v66; // rsi
  int v67; // r8d
  __int64 v68; // r14
  __int64 v69; // r9
  unsigned __int64 v70; // r12
  unsigned __int64 v71; // r11
  __int64 v72; // r15
  unsigned __int8 v73; // bl
  unsigned __int8 v74; // bp
  unsigned __int8 v75; // al
  unsigned __int64 v76; // rbx
  unsigned __int64 v77; // rbx
  _QWORD *v78; // rax
  _QWORD *v79; // rdx
  unsigned __int64 v80; // rax
  int ca[2]; // [rsp+8h] [rbp-E0h]
  int cb[2]; // [rsp+8h] [rbp-E0h]
  int c; // [rsp+8h] [rbp-E0h]
  int cc[2]; // [rsp+8h] [rbp-E0h]
  int cd[2]; // [rsp+8h] [rbp-E0h]
  __int64 v86; // [rsp+10h] [rbp-D8h]
  _QWORD *v87; // [rsp+10h] [rbp-D8h]
  __int64 v88; // [rsp+10h] [rbp-D8h]
  int *v89; // [rsp+10h] [rbp-D8h]
  char *v90; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v91; // [rsp+18h] [rbp-D0h]
  int v92; // [rsp+20h] [rbp-C8h]
  int *v93; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v94; // [rsp+28h] [rbp-C0h]
  __int64 *v95; // [rsp+28h] [rbp-C0h]
  __int64 v96; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v97; // [rsp+38h] [rbp-B0h]
  __int64 v98; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v99; // [rsp+40h] [rbp-A8h]
  int *v100; // [rsp+40h] [rbp-A8h]
  __int64 v101; // [rsp+48h] [rbp-A0h]
  __int64 v102; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v103; // [rsp+50h] [rbp-98h]
  unsigned __int64 v104; // [rsp+50h] [rbp-98h]
  __int64 *v105; // [rsp+58h] [rbp-90h]
  unsigned __int64 v106; // [rsp+60h] [rbp-88h]
  int *v107; // [rsp+60h] [rbp-88h]
  unsigned __int64 v108; // [rsp+68h] [rbp-80h]
  unsigned __int64 v109; // [rsp+70h] [rbp-78h]
  __int64 v110; // [rsp+70h] [rbp-78h]
  unsigned __int64 v111; // [rsp+78h] [rbp-70h]
  __int64 v112; // [rsp+80h] [rbp-68h]
  unsigned __int64 v113; // [rsp+88h] [rbp-60h]

  v3 = a1;
  v96 = a1 + 48;
  v5 = (a3 - 1) & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v5;
  v97 = a3 - v5;
LABEL_2:
  v112 = 1000;
  while ( 1 )
  {
    if ( a2 >= v5 + 4096 )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v3 + 32) & 2) == 0 )
    {
      v49 = callui(86);
      qsem_free();
      if ( v49 )
        return 4294967289LL;
      v5 = *(_QWORD *)(v3 + 4144);
    }
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v3 + 16) + 288LL))(
           *(_QWORD *)(v3 + 16),
           v5,
           v96,
           4096,
           *(_QWORD *)(v3 + 40));
    v94 = *(_QWORD *)(v3 + 4144);
    if ( v6 != 4096 )
    {
      *(_QWORD *)(v3 + 4176) = *(_QWORD *)(v3 + 4144);
      return 4294967289LL;
    }
    v7 = *(__int64 **)(v3 + 4152);
    v8 = 0;
    if ( v94 < a2 )
      v8 = a2 - v94;
    *(_QWORD *)(v3 + 4240) = v8;
    v9 = v8;
    v105 = (__int64 *)(v3 + 4152);
    if ( v7 != (__int64 *)(v3 + 4152) )
    {
      v109 = a2;
      v10 = v3;
      v11 = v7;
      while ( 1 )
      {
        v12 = v11[4];
        v13 = 4096 - v9;
        v14 = *(_DWORD *)(v10 + 32);
        v15 = (_QWORD *)(**(_QWORD **)(v10 + 24) + 80 * v11[3]);
        v16 = 4096 - v9;
        v17 = v15[1] - v12;
        if ( v17 <= 4096 - v9 )
          v16 = v15[1] - v12;
        v18 = 0;
        v19 = v15[1] - v12 - v16;
        v20 = v19 + *v15;
        if ( v15[4] )
          v18 = v15[3] + v19;
        if ( v16 )
          break;
LABEL_46:
        if ( v13 >= v17 )
        {
          **(_QWORD **)(v10 + 8) = v11[2];
          return 1;
        }
        if ( v9 )
        {
LABEL_26:
          v30 = (__int64 *)*v11;
          *(_QWORD *)cb = v10;
          *(_QWORD *)v11[1] = *v11;
          v31 = v11[1];
          v11 = v30;
          v30[1] = v31;
          qfree();
          v10 = *(_QWORD *)cb;
          --*(_QWORD *)(*(_QWORD *)cb + 4168LL);
          v9 = *(_QWORD *)(*(_QWORD *)cb + 4240LL);
          if ( v105 == v30 )
            goto LABEL_27;
        }
        else
        {
          v11[4] = v12 + 4096;
          v11 = (__int64 *)*v11;
          v9 = *(_QWORD *)(v10 + 4240);
          if ( v105 == v11 )
          {
LABEL_27:
            a2 = v109;
            v3 = v10;
            v94 = *(_QWORD *)(v10 + 4144);
            goto LABEL_28;
          }
        }
      }
      v95 = v11;
      v21 = *(_DWORD *)(v10 + 32) & 1;
      v22 = v96 + 4096 - v16;
      v101 = v12;
      v23 = 0;
      v98 = v10;
      v24 = 0;
      v25 = v18;
      v26 = v16;
      v103 = v17;
      v106 = 4096 - v9;
      v108 = v9;
      v92 = v14 & 0x20;
      while ( 1 )
      {
        v27 = *(_BYTE *)(v20 + v24);
        v28 = *(_BYTE *)(v22 + v24);
        if ( !v21 )
        {
          v86 = v24;
          *(_QWORD *)ca = v23;
          v28 = toupper(v28);
          v29 = toupper(v27);
          v21 = 0;
          v24 = v86;
          v23 = *(_QWORD *)ca;
          v27 = v29;
        }
        if ( !v25 )
          goto LABEL_18;
        if ( v92 )
          break;
        if ( v25 != 255 )
        {
          if ( *(_BYTE *)(v25 + v23) )
          {
LABEL_18:
            if ( v28 != v27 )
              goto LABEL_25;
          }
LABEL_19:
          v23 = (int)++v24;
          if ( (int)v24 >= v26 )
            goto LABEL_45;
          continue;
        }
        if ( v27 != 0xFF )
          goto LABEL_18;
        v23 = (int)++v24;
        if ( (int)v24 >= v26 )
        {
LABEL_45:
          v11 = v95;
          v12 = v101;
          v17 = v103;
          v13 = v106;
          v9 = v108;
          v10 = v98;
          goto LABEL_46;
        }
      }
      if ( (*(_BYTE *)(v25 + v23) & (unsigned __int8)(v28 ^ v27)) != 0 )
      {
LABEL_25:
        v11 = v95;
        v10 = v98;
        goto LABEL_26;
      }
      goto LABEL_19;
    }
LABEL_28:
    v32 = *(_QWORD *)(v3 + 4192);
    v33 = (const void *)(v96 + v9);
    if ( 4 * v32 )
    {
      v99 = a2;
      v34 = *(int **)(v3 + 4184);
      v35 = v3;
      v36 = v34;
      while ( 1 )
      {
        v37 = (_QWORD *)(**(_QWORD **)(v35 + 24) + 80LL * *v34);
        v38 = v37[1];
        v39 = *(_BYTE *)(*v37 + v38 - 1);
        if ( v97 != v9 )
        {
          v87 = (_QWORD *)(**(_QWORD **)(v35 + 24) + 80LL * *v34);
          c = v39;
          v93 = v34;
          for ( i = memrchr(v33, v39, v97 - v9); i; i = memrchr(v33, c, v42 - 1) )
          {
            v41 = i + 1;
            v42 = i + 1 - (_BYTE *)v33;
            v43 = v42;
            if ( v38 <= v42 )
              v43 = v38;
            if ( !memcmp(&i[1 - v43], (const void *)(*v87 + v38 - v43), v43) )
            {
              v90 = &v41[v94 - v38 - v96];
              if ( v42 >= v38 )
              {
                **(_QWORD **)(v35 + 8) = v90;
                return 1;
              }
              v44 = *v93;
              v45 = (_QWORD *)qalloc_or_throw();
              v45[3] = v44;
              v45[2] = v90;
              v45[4] = v43;
              *v45 = v105;
              v46 = *(_QWORD **)(v35 + 4160);
              v45[1] = v46;
              *v46 = v45;
              *(_QWORD *)(v35 + 4160) = v45;
              v47 = *(_QWORD *)(v35 + 4144);
              ++*(_QWORD *)(v35 + 4168);
              v94 = v47;
            }
            if ( v42 == 1 )
              break;
          }
          v34 = v93;
          v36 = *(int **)(v35 + 4184);
          v32 = *(_QWORD *)(v35 + 4192);
        }
        if ( ++v34 == &v36[v32] )
          break;
        v9 = *(_QWORD *)(v35 + 4240);
      }
      a2 = v99;
      v3 = v35;
    }
    if ( *(_QWORD *)(v3 + 4216) )
    {
      v53 = *(_QWORD *)(v3 + 4240);
      if ( v53 < v97 )
        break;
    }
LABEL_56:
    v97 = 4096;
    v5 = v94 - 4096;
    v50 = v112-- == 1;
    *(_QWORD *)(v3 + 4144) = v94 - 4096;
    if ( v50 )
    {
      v51 = qtime64();
      v52 = HIDWORD(v51);
      if ( (unsigned int)(HIDWORD(v51) - *(_DWORD *)(v3 + 4232)) > 4 )
      {
        sub_13580(*(_QWORD *)(v3 + 16), (__int64)"");
        *(_DWORD *)(v3 + 4232) = v52;
      }
      v5 = *(_QWORD *)(v3 + 4144);
      goto LABEL_2;
    }
  }
  v113 = a2;
  v54 = *(int **)(v3 + 4208);
  v55 = v3;
  v56 = *(_QWORD *)(v3 + 4216);
LABEL_63:
  v57 = v54;
  v104 = v97 - v53;
  if ( !(4 * v56) )
    goto LABEL_82;
  v58 = v55;
  while ( 2 )
  {
    while ( 2 )
    {
      v59 = *v57;
      v60 = *(_DWORD *)(v58 + 32);
      v61 = (_QWORD *)(**(_QWORD **)(v58 + 24) + 80 * v59);
      v62 = v104;
      v63 = v61[1];
      if ( v104 > v63 )
        v62 = v61[1];
      v64 = 0;
      v65 = v61[1] - v62;
      v66 = v65 + *v61;
      if ( v61[4] )
        v64 = v61[3] + v65;
      if ( v62 )
      {
        v100 = v57;
        v102 = v58;
        v67 = *(_DWORD *)(v58 + 32) & 1;
        v68 = 0;
        v69 = 0;
        v107 = v54;
        v70 = v62;
        v71 = v64;
        v72 = v96 + v97 - v62;
        v110 = v59;
        v111 = v63;
        while ( 1 )
        {
          v73 = *(_BYTE *)(v66 + v69);
          v74 = *(_BYTE *)(v72 + v69);
          if ( !v67 )
          {
            v88 = v69;
            *(_QWORD *)cc = v71;
            v74 = toupper(v74);
            v75 = toupper(v73);
            v67 = 0;
            v69 = v88;
            v71 = *(_QWORD *)cc;
            v73 = v75;
          }
          if ( !v71 )
          {
LABEL_73:
            if ( v74 != v73 )
              goto LABEL_80;
            goto LABEL_74;
          }
          if ( (v60 & 0x20) != 0 )
            break;
          if ( v71 == 255 )
          {
            if ( v73 != 0xFF )
              goto LABEL_73;
            v68 = (int)++v69;
            if ( (int)v69 >= v70 )
            {
LABEL_86:
              v62 = v70;
              v57 = v100;
              v59 = v110;
              v63 = v111;
              v58 = v102;
              goto LABEL_87;
            }
          }
          else
          {
            if ( *(_BYTE *)(v71 + v68) )
              goto LABEL_73;
LABEL_74:
            v68 = (int)++v69;
            if ( (int)v69 >= v70 )
              goto LABEL_86;
          }
        }
        if ( (*(_BYTE *)(v71 + v68) & (unsigned __int8)(v74 ^ v73)) != 0 )
        {
LABEL_80:
          v54 = v107;
          v58 = v102;
          v57 = v100 + 1;
          if ( v100 + 1 != &v107[v56] )
            continue;
LABEL_81:
          v53 = *(_QWORD *)(v58 + 4240);
          v55 = v58;
LABEL_82:
          if ( v53 >= --v97 )
          {
            a2 = v113;
            v3 = v55;
            goto LABEL_56;
          }
          goto LABEL_63;
        }
        goto LABEL_74;
      }
      break;
    }
LABEL_87:
    v76 = v97 + v94;
    if ( v104 < v63 )
    {
      v91 = v62;
      v77 = v76 - v63;
      v89 = v57;
      *(_QWORD *)cd = v59;
      v78 = (_QWORD *)qalloc_or_throw();
      v78[2] = v77;
      v78[3] = *(_QWORD *)cd;
      v78[4] = v91;
      v57 = v89 + 1;
      *v78 = v105;
      v79 = *(_QWORD **)(v58 + 4160);
      v78[1] = v79;
      *v79 = v78;
      v56 = *(_QWORD *)(v58 + 4216);
      *(_QWORD *)(v58 + 4160) = v78;
      v54 = *(int **)(v58 + 4208);
      v80 = *(_QWORD *)(v58 + 4144);
      ++*(_QWORD *)(v58 + 4168);
      v94 = v80;
      if ( v89 + 1 == &v54[v56] )
        goto LABEL_81;
      continue;
    }
    break;
  }
  **(_QWORD **)(v58 + 8) = v76 - v62;
  return 1;
}

