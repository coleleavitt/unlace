__int64 __fastcall sub_12800(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  __int64 v10; // rbp
  __int64 v11; // rax
  int *v12; // r11
  _QWORD *v13; // r13
  __int64 v14; // rdi
  _QWORD *v15; // r15
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r11
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
  size_t v35; // r13
  const void **v36; // r12
  size_t v37; // rbx
  const void *v38; // rbp
  _BYTE *i; // rax
  size_t v40; // rbx
  size_t v41; // rbp
  _BYTE *v42; // rdx
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  int *v45; // rax
  _BYTE *v46; // r15
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rbx
  __int64 v50; // rbx
  unsigned __int64 v51; // rdx
  __int64 v52; // r13
  __int64 v53; // r11
  unsigned __int64 v54; // rax
  int *v55; // rcx
  __int64 v56; // r14
  __int64 v57; // rdi
  __int64 v58; // r13
  __int64 v59; // r10
  __int64 *v60; // r8
  unsigned __int64 v61; // rbp
  unsigned __int64 v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rdx
  __int64 v65; // r9
  __int64 v66; // r15
  int *v67; // rcx
  unsigned __int8 v68; // bl
  unsigned __int8 v69; // r12
  unsigned __int8 v70; // al
  __int64 v71; // rbx
  _QWORD *v72; // rax
  _QWORD *v73; // rdx
  int *v74; // rax
  __int64 v75; // [rsp+0h] [rbp-E8h]
  int c[2]; // [rsp+8h] [rbp-E0h]
  int *v77; // [rsp+10h] [rbp-D8h]
  _BYTE *v78; // [rsp+10h] [rbp-D8h]
  __int64 v79; // [rsp+18h] [rbp-D0h]
  int v80; // [rsp+20h] [rbp-C8h]
  int v81; // [rsp+20h] [rbp-C8h]
  _QWORD *s; // [rsp+28h] [rbp-C0h]
  int *sa; // [rsp+28h] [rbp-C0h]
  __int64 v84; // [rsp+30h] [rbp-B8h]
  __int64 v85; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v86; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v87; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v88; // [rsp+38h] [rbp-B0h]
  _QWORD *v89; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v90; // [rsp+48h] [rbp-A0h]
  __int64 v91; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v92; // [rsp+50h] [rbp-98h]
  __int64 v93; // [rsp+58h] [rbp-90h]
  __int64 v94; // [rsp+58h] [rbp-90h]
  unsigned __int64 v95; // [rsp+60h] [rbp-88h]
  unsigned __int64 v96; // [rsp+60h] [rbp-88h]
  int *v97; // [rsp+68h] [rbp-80h]
  __int64 v98; // [rsp+70h] [rbp-78h]
  unsigned __int64 v99; // [rsp+78h] [rbp-70h]
  __int64 v100; // [rsp+80h] [rbp-68h]
  unsigned __int64 v101; // [rsp+88h] [rbp-60h]
  _QWORD v102[11]; // [rsp+90h] [rbp-58h] BYREF

  v7 = a2 & 0xFFFFFFFFFFFFF000LL;
  v8 = a1;
  v102[3] = __readfsqword(0x28u);
  v92 = a2 - v7;
  *(_QWORD *)(a1 + 4144) = v7;
  v98 = a1 + 48;
LABEL_2:
  v10 = 1000;
  while ( 1 )
  {
    if ( v7 >= a3 )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v8 + 32) & 2) == 0 )
    {
      v102[1] = 0;
      v102[0] = off_20298;
      v102[2] = 0;
      v50 = callui(86, v102, 0, &callui, a5, a6, v75, *(_QWORD *)c, v77, v79);
      v102[0] = &off_20750;
      qsem_free();
      if ( v50 )
        return 4294967289LL;
      v7 = *(_QWORD *)(v8 + 4144);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v8 + 16) + 288LL))(
            *(_QWORD *)(v8 + 16),
            v7,
            v98,
            4096,
            *(_QWORD *)(v8 + 40));
    v12 = *(int **)(v8 + 4144);
    if ( v11 != 4096 )
    {
      *(_QWORD *)(v8 + 4176) = v12;
      return 4294967289LL;
    }
    v13 = *(_QWORD **)(v8 + 4152);
    v14 = a3 - (_QWORD)v12;
    if ( a3 - (unsigned __int64)v12 > 0x1000 )
      v14 = 4096;
    v89 = (_QWORD *)(v8 + 4152);
    *(_QWORD *)(v8 + 4240) = v14;
    if ( (_QWORD *)(v8 + 4152) != v13 )
    {
      v93 = v10;
      v15 = v13;
      v16 = v14;
      v95 = a3;
      while ( 1 )
      {
        v17 = v16;
        v18 = v15[4];
        a6 = **(_QWORD **)(v8 + 24) + 80LL * v15[3];
        v19 = *(_QWORD *)(a6 + 8) - v18;
        if ( v19 <= v16 )
          v17 = *(_QWORD *)(a6 + 8) - v18;
        a5 = v18 + *(_QWORD *)a6;
        v20 = 0;
        if ( *(_QWORD *)(a6 + 32) )
          v20 = v18 + *(_QWORD *)(a6 + 24);
        if ( v17 )
          break;
LABEL_51:
        if ( v16 >= v19 )
        {
          **(_QWORD **)(v8 + 8) = v15[2];
          return 1;
        }
        if ( v16 == 4096 )
        {
          v15[4] = v18 + 4096;
          v15 = (_QWORD *)*v15;
          if ( v89 == v15 )
          {
LABEL_27:
            v10 = v93;
            a3 = v95;
            v12 = *(int **)(v8 + 4144);
            goto LABEL_28;
          }
        }
        else
        {
LABEL_26:
          v29 = (_QWORD *)*v15;
          *(_QWORD *)v15[1] = *v15;
          v30 = v15[1];
          v15 = v29;
          v29[1] = v30;
          qfree();
          --*(_QWORD *)(v8 + 4168);
          if ( v89 == v29 )
            goto LABEL_27;
        }
        v16 = *(_QWORD *)(v8 + 4240);
      }
      s = v15;
      v21 = v8;
      a6 = *(_DWORD *)(v8 + 32) & 1;
      v22 = v20;
      v90 = v16;
      v23 = 0;
      v80 = *(_DWORD *)(v8 + 32) & 0x20;
      v24 = 0;
      v25 = a5;
      v84 = v18;
      v86 = v19;
      while ( 1 )
      {
        v26 = *(_BYTE *)(v25 + v23);
        v27 = *(_BYTE *)(v21 + v23 + 48);
        if ( !(_DWORD)a6 )
        {
          v79 = v21;
          LODWORD(v77) = 0;
          *(_QWORD *)c = v23;
          v27 = toupper(v27);
          v28 = toupper(v26);
          v21 = v79;
          a6 = 0;
          v23 = *(_QWORD *)c;
          v26 = v28;
        }
        if ( !v22 )
          goto LABEL_18;
        if ( v80 )
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
          if ( (int)v23 >= v17 )
            goto LABEL_50;
          continue;
        }
        if ( v26 != 0xFF )
          goto LABEL_18;
        v24 = (int)++v23;
        if ( (int)v23 >= v17 )
        {
LABEL_50:
          v15 = s;
          v18 = v84;
          v8 = v21;
          v19 = v86;
          v16 = v90;
          goto LABEL_51;
        }
      }
      if ( (*(_BYTE *)(v22 + v24) & (unsigned __int8)(v27 ^ v26)) != 0 )
      {
LABEL_25:
        v15 = s;
        v8 = v21;
        goto LABEL_26;
      }
      goto LABEL_19;
    }
LABEL_28:
    v31 = *(_QWORD *)(v8 + 4192);
    v32 = *(int **)(v8 + 4184);
    v33 = v32;
    if ( 4 * v31 )
    {
      v85 = v10;
      v77 = v12;
      v87 = a3;
      v34 = v8;
      do
      {
        a6 = **(_QWORD **)(v34 + 24) + 80LL * *v33;
        a5 = *(_QWORD *)a6;
        v35 = *(_QWORD *)(a6 + 8);
        v36 = (const void **)a6;
        if ( *(_QWORD *)(v34 + 4240) != v92 )
        {
          v37 = *(_QWORD *)(v34 + 4240) - v92;
          c[0] = **(unsigned __int8 **)a6;
          v38 = (const void *)(v92 + v98);
          for ( i = memchr((const void *)(v92 + v98), c[0], v37); ; i = memchr(v38, c[0], v37) )
          {
            v46 = i;
            if ( !i )
              break;
            v40 = v37 - (i - (_BYTE *)v38);
            v41 = v40;
            if ( v35 <= v40 )
              v41 = v35;
            if ( !memcmp(i, *v36, v41) )
            {
              v42 = &v46[(_QWORD)v77 - v98];
              v78 = v42;
              if ( v40 >= v35 )
              {
                **(_QWORD **)(v34 + 8) = v42;
                return 1;
              }
              v79 = *v33;
              v43 = (_QWORD *)qalloc_or_throw();
              v43[4] = v41;
              v43[2] = v78;
              *v43 = v89;
              v43[3] = v79;
              v44 = *(_QWORD **)(v34 + 4160);
              v43[1] = v44;
              *v44 = v43;
              *(_QWORD *)(v34 + 4160) = v43;
              v45 = *(int **)(v34 + 4144);
              ++*(_QWORD *)(v34 + 4168);
              v77 = v45;
            }
            v38 = v46 + 1;
            v37 = v40 - 1;
            if ( !v37 )
              break;
          }
          v32 = *(int **)(v34 + 4184);
          v31 = *(_QWORD *)(v34 + 4192);
        }
        ++v33;
      }
      while ( v33 != &v32[v31] );
      v8 = v34;
      v10 = v85;
      v12 = v77;
      a3 = v87;
    }
    if ( *(_QWORD *)(v8 + 4216) )
    {
      v51 = *(_QWORD *)(v8 + 4240);
      if ( v92 < v51 )
        break;
    }
LABEL_44:
    v92 = 0;
    v7 = (unsigned __int64)(v12 + 1024);
    *(_QWORD *)(v8 + 4144) = v12 + 1024;
    if ( !--v10 )
    {
      v47 = qtime64();
      v48 = HIDWORD(v47);
      if ( (unsigned int)(HIDWORD(v47) - *(_DWORD *)(v8 + 4232)) > 4 )
      {
        sub_11E40(*(_QWORD *)(v8 + 16), (__int64)"");
        *(_DWORD *)(v8 + 4232) = v48;
      }
      v7 = *(_QWORD *)(v8 + 4144);
      goto LABEL_2;
    }
  }
  v100 = v10;
  v52 = v8;
  v101 = a3;
  v97 = v12;
  a6 = *(_QWORD *)(v8 + 4208);
  v53 = *(_QWORD *)(v8 + 4216);
  v54 = v92;
LABEL_62:
  v55 = (int *)a6;
  v88 = v51 - v54;
  if ( !(4 * v53) )
    goto LABEL_81;
  v99 = v54;
  v56 = v52;
  v57 = a6;
  v58 = v98 + v54;
  while ( 2 )
  {
    while ( 2 )
    {
      v59 = *v55;
      v60 = (__int64 *)(**(_QWORD **)(v56 + 24) + 80 * v59);
      v61 = v88;
      v62 = v60[1];
      v63 = *v60;
      if ( v88 > v62 )
        v61 = v60[1];
      v64 = 0;
      if ( v60[4] )
        v64 = v60[3];
      if ( v61 )
      {
        sa = v55;
        v65 = 0;
        a5 = *(_DWORD *)(v56 + 32) & 1;
        v66 = v64;
        v67 = nullptr;
        v81 = *(_DWORD *)(v56 + 32) & 0x20;
        v94 = v59;
        v96 = v62;
        v91 = v53;
        while ( 1 )
        {
          v68 = *((_BYTE *)v67 + v63);
          v69 = *((_BYTE *)v67 + v58);
          if ( !(_DWORD)a5 )
          {
            LODWORD(v79) = 0;
            v77 = v67;
            *(_QWORD *)c = v65;
            v69 = toupper(v69);
            v70 = toupper(v68);
            a5 = 0;
            v67 = v77;
            v65 = *(_QWORD *)c;
            v68 = v70;
          }
          if ( !v66 )
          {
LABEL_72:
            if ( v69 != v68 )
              goto LABEL_79;
            goto LABEL_73;
          }
          if ( v81 )
            break;
          if ( v66 == 255 )
          {
            if ( v68 != 0xFF )
              goto LABEL_72;
            v67 = (int *)((char *)v67 + 1);
            v65 = (int)v67;
            if ( (int)v67 >= v61 )
            {
LABEL_85:
              v59 = v94;
              v62 = v96;
              v55 = sa;
              goto LABEL_86;
            }
          }
          else
          {
            if ( *(_BYTE *)(v66 + v65) )
              goto LABEL_72;
LABEL_73:
            v67 = (int *)((char *)v67 + 1);
            v65 = (int)v67;
            if ( (int)v67 >= v61 )
              goto LABEL_85;
          }
        }
        if ( (*(_BYTE *)(v66 + v65) & (unsigned __int8)(v69 ^ v68)) != 0 )
        {
LABEL_79:
          v53 = v91;
          v55 = sa + 1;
          if ( sa + 1 != (int *)(v57 + 4 * v91) )
            continue;
LABEL_80:
          v54 = v99;
          v51 = *(_QWORD *)(v56 + 4240);
          v52 = v56;
          a6 = v57;
LABEL_81:
          if ( ++v54 >= v51 )
          {
            v10 = v100;
            v12 = v97;
            v8 = v52;
            a3 = v101;
            goto LABEL_44;
          }
          goto LABEL_62;
        }
        goto LABEL_73;
      }
      break;
    }
LABEL_86:
    v71 = (__int64)v97 + v99;
    if ( v88 < v62 )
    {
      v77 = v55;
      *(_QWORD *)c = v59;
      v72 = (_QWORD *)qalloc_or_throw();
      v72[2] = v71;
      v72[3] = *(_QWORD *)c;
      v72[4] = v61;
      v55 = v77 + 1;
      *v72 = v89;
      v73 = *(_QWORD **)(v56 + 4160);
      v72[1] = v73;
      *v73 = v72;
      v53 = *(_QWORD *)(v56 + 4216);
      *(_QWORD *)(v56 + 4160) = v72;
      v57 = *(_QWORD *)(v56 + 4208);
      v74 = *(int **)(v56 + 4144);
      ++*(_QWORD *)(v56 + 4168);
      v97 = v74;
      if ( v77 + 1 == (int *)(v57 + 4 * v53) )
        goto LABEL_80;
      continue;
    }
    break;
  }
  **(_QWORD **)(v56 + 8) = v71;
  return 1;
}

