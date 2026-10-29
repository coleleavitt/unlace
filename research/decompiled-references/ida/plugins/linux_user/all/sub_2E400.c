__int64 __fastcall sub_2E400(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rbx
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  __int64 *v10; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r11
  __int64 v13; // r9
  __int64 *v14; // r14
  __int64 v15; // r10
  unsigned __int64 v16; // rdi
  int v17; // ebx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // r10
  _QWORD *v25; // r9
  unsigned __int64 v26; // r12
  unsigned __int64 v27; // r13
  unsigned __int8 v28; // bp
  unsigned __int8 v29; // bl
  unsigned __int8 v30; // al
  __int64 *v31; // rbx
  __int64 v32; // rax
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
  _QWORD *v54; // r11
  __int64 v55; // r13
  __int64 v56; // rdi
  __int64 v57; // r12
  __int64 v58; // r10
  int v59; // r13d
  _QWORD *v60; // r8
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  unsigned __int64 v63; // r15
  unsigned __int64 v64; // rbx
  unsigned __int64 v65; // rsi
  __int64 v66; // r14
  _QWORD *v67; // r9
  unsigned __int64 v68; // r12
  unsigned __int64 v69; // r11
  __int64 v70; // r15
  unsigned __int8 v71; // bl
  unsigned __int8 v72; // bp
  unsigned __int8 v73; // al
  unsigned __int64 v74; // rbx
  unsigned __int64 v75; // rbx
  _QWORD *v76; // rax
  _QWORD *v77; // rdx
  unsigned __int64 v78; // rax
  __int64 v79; // [rsp+0h] [rbp-E8h]
  int c[2]; // [rsp+8h] [rbp-E0h]
  _QWORD *v81; // [rsp+10h] [rbp-D8h]
  char *v82; // [rsp+18h] [rbp-D0h]
  int v83; // [rsp+20h] [rbp-C8h]
  int *v84; // [rsp+20h] [rbp-C8h]
  unsigned __int64 v85; // [rsp+28h] [rbp-C0h]
  __int64 *v86; // [rsp+28h] [rbp-C0h]
  __int64 v87; // [rsp+30h] [rbp-B8h]
  unsigned __int64 v88; // [rsp+38h] [rbp-B0h]
  __int64 v89; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v90; // [rsp+40h] [rbp-A8h]
  _QWORD *v91; // [rsp+40h] [rbp-A8h]
  __int64 v92; // [rsp+48h] [rbp-A0h]
  __int64 v93; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v94; // [rsp+50h] [rbp-98h]
  unsigned __int64 v95; // [rsp+50h] [rbp-98h]
  __int64 *v96; // [rsp+58h] [rbp-90h]
  unsigned __int64 v97; // [rsp+60h] [rbp-88h]
  _QWORD *v98; // [rsp+60h] [rbp-88h]
  unsigned __int64 v99; // [rsp+68h] [rbp-80h]
  unsigned __int64 v100; // [rsp+70h] [rbp-78h]
  __int64 v101; // [rsp+70h] [rbp-78h]
  unsigned __int64 v102; // [rsp+78h] [rbp-70h]
  __int64 v103; // [rsp+80h] [rbp-68h]
  unsigned __int64 v104; // [rsp+88h] [rbp-60h]
  _QWORD v105[11]; // [rsp+90h] [rbp-58h] BYREF

  v6 = a1;
  v105[3] = __readfsqword(0x28u);
  v87 = a1 + 48;
  v8 = (a3 - 1) & 0xFFFFFFFFFFFFF000LL;
  *(_QWORD *)(a1 + 4144) = v8;
  v88 = a3 - v8;
LABEL_2:
  v103 = 1000;
  while ( 1 )
  {
    if ( a2 >= v8 + 4096 )
      return 0xFFFFFFFFLL;
    if ( (*(_BYTE *)(v6 + 32) & 2) == 0 )
    {
      v105[1] = 0;
      v105[0] = off_44FC0;
      v105[2] = 0;
      v49 = callui(86, v105, 0, &callui, a5, a6, v79, *(_QWORD *)c, v81, v82);
      v105[0] = &off_45470;
      qsem_free();
      if ( v49 )
        return 4294967289LL;
      v8 = *(_QWORD *)(v6 + 4144);
    }
    v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, __int64, _QWORD))(**(_QWORD **)(v6 + 16) + 288LL))(
           *(_QWORD *)(v6 + 16),
           v8,
           v87,
           4096,
           *(_QWORD *)(v6 + 40));
    v85 = *(_QWORD *)(v6 + 4144);
    if ( v9 != 4096 )
    {
      *(_QWORD *)(v6 + 4176) = *(_QWORD *)(v6 + 4144);
      return 4294967289LL;
    }
    v10 = *(__int64 **)(v6 + 4152);
    v11 = 0;
    if ( v85 < a2 )
      v11 = a2 - v85;
    *(_QWORD *)(v6 + 4240) = v11;
    v12 = v11;
    v96 = (__int64 *)(v6 + 4152);
    if ( v10 != (__int64 *)(v6 + 4152) )
    {
      v100 = a2;
      v13 = v6;
      v14 = v10;
      while ( 1 )
      {
        v15 = v14[4];
        v16 = 4096 - v12;
        v17 = *(_DWORD *)(v13 + 32);
        a5 = **(_QWORD **)(v13 + 24) + 80 * v14[3];
        v18 = 4096 - v12;
        v19 = *(_QWORD *)(a5 + 8) - v15;
        if ( v19 <= 4096 - v12 )
          v18 = *(_QWORD *)(a5 + 8) - v15;
        v20 = 0;
        v21 = *(_QWORD *)(a5 + 8) - v15 - v18;
        v22 = v21 + *(_QWORD *)a5;
        if ( *(_QWORD *)(a5 + 32) )
          v20 = *(_QWORD *)(a5 + 24) + v21;
        if ( v18 )
          break;
LABEL_46:
        if ( v16 >= v19 )
        {
          **(_QWORD **)(v13 + 8) = v14[2];
          return 1;
        }
        if ( v12 )
        {
LABEL_26:
          v31 = (__int64 *)*v14;
          *(_QWORD *)c = v13;
          *(_QWORD *)v14[1] = *v14;
          v32 = v14[1];
          v14 = v31;
          v31[1] = v32;
          qfree();
          v13 = *(_QWORD *)c;
          --*(_QWORD *)(*(_QWORD *)c + 4168LL);
          v12 = *(_QWORD *)(*(_QWORD *)c + 4240LL);
          if ( v96 == v31 )
            goto LABEL_27;
        }
        else
        {
          v14[4] = v15 + 4096;
          v14 = (__int64 *)*v14;
          v12 = *(_QWORD *)(v13 + 4240);
          if ( v96 == v14 )
          {
LABEL_27:
            a2 = v100;
            v6 = v13;
            v85 = *(_QWORD *)(v13 + 4144);
            goto LABEL_28;
          }
        }
      }
      v86 = v14;
      a5 = v17 & 1;
      v23 = v87 + 4096 - v18;
      v92 = v15;
      v24 = 0;
      v89 = v13;
      v25 = nullptr;
      v26 = v20;
      v27 = v18;
      v94 = v19;
      v97 = 4096 - v12;
      v99 = v12;
      v83 = v17 & 0x20;
      while ( 1 )
      {
        v28 = *((_BYTE *)v25 + v22);
        v29 = *((_BYTE *)v25 + v23);
        if ( !(_DWORD)a5 )
        {
          LODWORD(v82) = 0;
          v81 = v25;
          *(_QWORD *)c = v24;
          v29 = toupper(v29);
          v30 = toupper(v28);
          a5 = 0;
          v25 = v81;
          v24 = *(_QWORD *)c;
          v28 = v30;
        }
        if ( !v26 )
          goto LABEL_18;
        if ( v83 )
          break;
        if ( v26 != 255 )
        {
          if ( *(_BYTE *)(v26 + v24) )
          {
LABEL_18:
            if ( v29 != v28 )
              goto LABEL_25;
          }
LABEL_19:
          v25 = (_QWORD *)((char *)v25 + 1);
          v24 = (int)v25;
          if ( (int)v25 >= v27 )
            goto LABEL_45;
          continue;
        }
        if ( v28 != 0xFF )
          goto LABEL_18;
        v25 = (_QWORD *)((char *)v25 + 1);
        v24 = (int)v25;
        if ( (int)v25 >= v27 )
        {
LABEL_45:
          v14 = v86;
          v15 = v92;
          v19 = v94;
          v16 = v97;
          v12 = v99;
          v13 = v89;
          goto LABEL_46;
        }
      }
      if ( (*(_BYTE *)(v26 + v24) & (unsigned __int8)(v29 ^ v28)) != 0 )
      {
LABEL_25:
        v14 = v86;
        v13 = v89;
        goto LABEL_26;
      }
      goto LABEL_19;
    }
LABEL_28:
    a6 = *(_QWORD **)(v6 + 4192);
    v33 = (const void *)(v87 + v12);
    if ( 4LL * (_QWORD)a6 )
    {
      v90 = a2;
      v34 = *(int **)(v6 + 4184);
      v35 = v6;
      v36 = v34;
      while ( 1 )
      {
        v37 = (_QWORD *)(**(_QWORD **)(v35 + 24) + 80LL * *v34);
        v38 = v37[1];
        a5 = (__int64)v37;
        v39 = *(_BYTE *)(*v37 + v38 - 1);
        if ( v88 != v12 )
        {
          v81 = (_QWORD *)(**(_QWORD **)(v35 + 24) + 80LL * *v34);
          c[0] = v39;
          v84 = v34;
          for ( i = memrchr(v33, v39, v88 - v12); i; i = memrchr(v33, c[0], v42 - 1) )
          {
            v41 = i + 1;
            v42 = i + 1 - (_BYTE *)v33;
            v43 = v42;
            if ( v38 <= v42 )
              v43 = v38;
            if ( !memcmp(&i[1 - v43], (const void *)(*v81 + v38 - v43), v43) )
            {
              v82 = &v41[v85 - v38 - v87];
              if ( v42 >= v38 )
              {
                **(_QWORD **)(v35 + 8) = v82;
                return 1;
              }
              v44 = *v84;
              v45 = (_QWORD *)qalloc_or_throw();
              v45[3] = v44;
              v45[2] = v82;
              v45[4] = v43;
              *v45 = v96;
              v46 = *(_QWORD **)(v35 + 4160);
              v45[1] = v46;
              *v46 = v45;
              *(_QWORD *)(v35 + 4160) = v45;
              v47 = *(_QWORD *)(v35 + 4144);
              ++*(_QWORD *)(v35 + 4168);
              v85 = v47;
            }
            if ( v42 == 1 )
              break;
          }
          v34 = v84;
          v36 = *(int **)(v35 + 4184);
          a6 = *(_QWORD **)(v35 + 4192);
        }
        if ( ++v34 == &v36[(_QWORD)a6] )
          break;
        v12 = *(_QWORD *)(v35 + 4240);
      }
      a2 = v90;
      v6 = v35;
    }
    if ( *(_QWORD *)(v6 + 4216) )
    {
      v53 = *(_QWORD *)(v6 + 4240);
      if ( v53 < v88 )
        break;
    }
LABEL_56:
    v88 = 4096;
    v8 = v85 - 4096;
    v50 = v103-- == 1;
    *(_QWORD *)(v6 + 4144) = v85 - 4096;
    if ( v50 )
    {
      v51 = qtime64();
      v52 = HIDWORD(v51);
      if ( (unsigned int)(HIDWORD(v51) - *(_DWORD *)(v6 + 4232)) > 4 )
      {
        sub_143D0(*(_QWORD *)(v6 + 16), (__int64)"");
        *(_DWORD *)(v6 + 4232) = v52;
      }
      v8 = *(_QWORD *)(v6 + 4144);
      goto LABEL_2;
    }
  }
  v104 = a2;
  v54 = *(_QWORD **)(v6 + 4208);
  v55 = v6;
  v56 = *(_QWORD *)(v6 + 4216);
LABEL_63:
  a6 = v54;
  v95 = v88 - v53;
  if ( !(4 * v56) )
    goto LABEL_82;
  v57 = v55;
  while ( 2 )
  {
    while ( 2 )
    {
      v58 = *(int *)a6;
      v59 = *(_DWORD *)(v57 + 32);
      v60 = (_QWORD *)(**(_QWORD **)(v57 + 24) + 80 * v58);
      v61 = v95;
      v62 = v60[1];
      if ( v95 > v62 )
        v61 = v60[1];
      v63 = 0;
      v64 = v60[1] - v61;
      v65 = v64 + *v60;
      if ( v60[4] )
        v63 = v60[3] + v64;
      if ( v61 )
      {
        v91 = a6;
        v93 = v57;
        a5 = v59 & 1;
        v66 = 0;
        v67 = nullptr;
        v98 = v54;
        v68 = v61;
        v69 = v63;
        v70 = v87 + v88 - v61;
        v101 = v58;
        v102 = v62;
        while ( 1 )
        {
          v71 = *((_BYTE *)v67 + v65);
          v72 = *((_BYTE *)v67 + v70);
          if ( !(_DWORD)a5 )
          {
            LODWORD(v82) = 0;
            v81 = v67;
            *(_QWORD *)c = v69;
            v72 = toupper(v72);
            v73 = toupper(v71);
            a5 = 0;
            v67 = v81;
            v69 = *(_QWORD *)c;
            v71 = v73;
          }
          if ( !v69 )
          {
LABEL_73:
            if ( v72 != v71 )
              goto LABEL_80;
            goto LABEL_74;
          }
          if ( (v59 & 0x20) != 0 )
            break;
          if ( v69 == 255 )
          {
            if ( v71 != 0xFF )
              goto LABEL_73;
            v67 = (_QWORD *)((char *)v67 + 1);
            v66 = (int)v67;
            if ( (int)v67 >= v68 )
            {
LABEL_86:
              v61 = v68;
              a6 = v91;
              v58 = v101;
              v62 = v102;
              v57 = v93;
              goto LABEL_87;
            }
          }
          else
          {
            if ( *(_BYTE *)(v69 + v66) )
              goto LABEL_73;
LABEL_74:
            v67 = (_QWORD *)((char *)v67 + 1);
            v66 = (int)v67;
            if ( (int)v67 >= v68 )
              goto LABEL_86;
          }
        }
        if ( (*(_BYTE *)(v69 + v66) & (unsigned __int8)(v72 ^ v71)) != 0 )
        {
LABEL_80:
          v54 = v98;
          v57 = v93;
          a6 = (_QWORD *)((char *)v91 + 4);
          if ( (char *)v91 + 4 != (char *)v98 + 4 * v56 )
            continue;
LABEL_81:
          v53 = *(_QWORD *)(v57 + 4240);
          v55 = v57;
LABEL_82:
          if ( v53 >= --v88 )
          {
            a2 = v104;
            v6 = v55;
            goto LABEL_56;
          }
          goto LABEL_63;
        }
        goto LABEL_74;
      }
      break;
    }
LABEL_87:
    v74 = v88 + v85;
    if ( v95 < v62 )
    {
      v82 = (char *)v61;
      v75 = v74 - v62;
      v81 = a6;
      *(_QWORD *)c = v58;
      v76 = (_QWORD *)qalloc_or_throw();
      v76[2] = v75;
      v76[3] = *(_QWORD *)c;
      v76[4] = v82;
      a6 = (_QWORD *)((char *)v81 + 4);
      *v76 = v96;
      v77 = *(_QWORD **)(v57 + 4160);
      v76[1] = v77;
      *v77 = v76;
      v56 = *(_QWORD *)(v57 + 4216);
      *(_QWORD *)(v57 + 4160) = v76;
      v54 = *(_QWORD **)(v57 + 4208);
      v78 = *(_QWORD *)(v57 + 4144);
      ++*(_QWORD *)(v57 + 4168);
      v85 = v78;
      if ( (char *)v81 + 4 == (char *)v54 + 4 * v56 )
        goto LABEL_81;
      continue;
    }
    break;
  }
  **(_QWORD **)(v57 + 8) = v74 - v61;
  return 1;
}

