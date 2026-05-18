unsigned __int64 __fastcall sub_23899(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rax
  int *v15; // rdi
  unsigned int v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // edx
  char v19; // al
  __int64 i; // rcx
  const char *v21; // rax
  int v22; // r13d
  int v23; // eax
  unsigned int v24; // r12d
  char v25; // si
  unsigned int v26; // r15d
  unsigned int v27; // edx
  _DWORD *v28; // rax
  int v29; // eax
  unsigned int v30; // edi
  int v31; // eax
  unsigned int v32; // ecx
  int v33; // eax
  unsigned int v34; // ecx
  int v35; // eax
  unsigned int v36; // r9d
  int v37; // r13d
  unsigned int *v38; // rsi
  unsigned int v39; // r13d
  unsigned int v40; // r12d
  int v41; // eax
  int v42; // eax
  __int64 v43; // r12
  __int64 v44; // rdi
  __int64 j; // rbp
  __int64 v46; // rbx
  int *v47; // rdx
  int v48; // eax
  char *v49; // rax
  __int64 v50; // rdx
  int v51; // eax
  char v52; // al
  int v53; // r12d
  int v54; // edx
  _DWORD *v55; // rax
  int v56; // edx
  _DWORD *v57; // rax
  unsigned int v58; // r8d
  unsigned int v59; // edx
  unsigned int v60; // r13d
  unsigned int v61; // ebp
  __int64 v62; // rcx
  int v63; // ebp
  unsigned int v64; // r8d
  unsigned int v65; // edx
  int v66; // ebp
  int v67; // edx
  _DWORD *v68; // rax
  int v69; // r13d
  int v70; // edx
  _DWORD *v71; // rax
  int v72; // r12d
  int v73; // r15d
  int v74; // r12d
  int v75; // edx
  _DWORD *v76; // rax
  unsigned int v77; // r15d
  int v78; // ebp
  int v79; // edx
  _DWORD *v80; // rax
  int v81; // edx
  _DWORD *v82; // rax
  unsigned int v83; // r12d
  int v84; // r15d
  int v85; // edx
  _DWORD *v86; // rax
  __int64 v87; // rcx
  int v88; // edx
  _DWORD *v89; // rax
  unsigned int *v91; // [rsp+0h] [rbp-C8h]
  unsigned int v92; // [rsp+0h] [rbp-C8h]
  int v93; // [rsp+0h] [rbp-C8h]
  unsigned int v94; // [rsp+8h] [rbp-C0h]
  unsigned int v95; // [rsp+Ch] [rbp-BCh]
  unsigned int v96; // [rsp+Ch] [rbp-BCh]
  unsigned int v97; // [rsp+10h] [rbp-B8h]
  unsigned int v98; // [rsp+14h] [rbp-B4h]
  unsigned int v99; // [rsp+14h] [rbp-B4h]
  unsigned int v100; // [rsp+18h] [rbp-B0h]
  unsigned int v101; // [rsp+1Ch] [rbp-ACh]
  int v102; // [rsp+1Ch] [rbp-ACh]
  unsigned int v103; // [rsp+20h] [rbp-A8h]
  __int64 v104; // [rsp+20h] [rbp-A8h]
  int v105; // [rsp+20h] [rbp-A8h]
  unsigned int v106; // [rsp+28h] [rbp-A0h]
  unsigned int v107; // [rsp+2Ch] [rbp-9Ch]
  int v108; // [rsp+2Ch] [rbp-9Ch]
  int v109; // [rsp+2Ch] [rbp-9Ch]
  __int64 v111; // [rsp+38h] [rbp-90h]
  __int64 v112; // [rsp+40h] [rbp-88h] BYREF
  __int64 v113; // [rsp+48h] [rbp-80h]
  __int64 v114; // [rsp+50h] [rbp-78h]
  int v115; // [rsp+58h] [rbp-70h]
  int v116; // [rsp+5Ch] [rbp-6Ch]
  int v117; // [rsp+60h] [rbp-68h] BYREF
  int v118; // [rsp+64h] [rbp-64h]
  unsigned int v119; // [rsp+68h] [rbp-60h]
  unsigned int v120; // [rsp+6Ch] [rbp-5Ch]
  unsigned int v121; // [rsp+70h] [rbp-58h]
  unsigned int v122; // [rsp+74h] [rbp-54h]
  unsigned int v123; // [rsp+78h] [rbp-50h]
  unsigned int v124; // [rsp+7Ch] [rbp-4Ch]
  unsigned int v125; // [rsp+80h] [rbp-48h]
  unsigned __int64 v126; // [rsp+88h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 16);
  v126 = __readfsqword(0x28u);
  v91 = *(unsigned int **)(a3 + 24);
  if ( !v10 )
    v10 = sub_E2050(a1);
  v11 = *a2;
  v12 = 10;
  v112 = a1;
  v113 = a3;
  v114 = v10;
  v116 = a5;
  v13 = *(_DWORD *)(v11 + 72);
  v14 = *(_QWORD *)(v11 + 40);
  v115 = a6;
  v103 = v13;
  v15 = &v117;
  v98 = *(__int16 *)(v14 + 54);
  LODWORD(v14) = *(_DWORD *)(a1 + 68) - 1;
  *(_DWORD *)(a1 + 68) = v14;
  v97 = v14;
  while ( v12 )
  {
    *v15++ = 0;
    --v12;
  }
  v16 = *(_DWORD *)(a3 + 88);
  v17 = v16 + 1;
  v18 = v16 + 2;
  v122 = v16;
  v124 = v16 + 3;
  v19 = *(_BYTE *)(a3 + 33);
  v106 = v17;
  v120 = v18;
  if ( v19 == 86 )
  {
    if ( *(_BYTE *)(a3 + 32) == 89 || !sub_22329(*(_QWORD *)a1, *(_QWORD *)(a3 + 40)) )
      goto LABEL_18;
    goto LABEL_11;
  }
  if ( v19 != 90 )
  {
    v118 = 2;
    goto LABEL_18;
  }
  if ( !*(_DWORD *)(a3 + 132) )
  {
    for ( i = a3; i; i = *(_QWORD *)(i + 64) )
    {
      v21 = *(const char **)(*(_QWORD *)(i + 80) + 56LL);
      if ( v21 == "lead" || v21 == "nth_value" || v21 == "first_value" || v21 == (const char *)&unk_1BEAC0 )
        goto LABEL_18;
    }
    if ( *(_BYTE *)(a3 + 34) == 88 )
    {
      if ( *(_BYTE *)(a3 + 32) != 89 && sub_22329(*(_QWORD *)a1, *(_QWORD *)(a3 + 48)) )
        v118 = 3;
      goto LABEL_18;
    }
LABEL_11:
    v118 = 1;
  }
LABEL_18:
  v22 = *(_DWORD *)(a1 + 56);
  v94 = 0;
  v23 = v22 + v98;
  v24 = v22 + 1;
  *(_DWORD *)(a1 + 56) = v22 + v98 + 2;
  v25 = *(_BYTE *)(a3 + 33);
  v119 = v22 + v98 + 2;
  v101 = v22 + v98 + 1;
  if ( ((v25 - 86) & 0xFD) == 0 )
  {
    v94 = v23 + 3;
    *(_DWORD *)(a1 + 56) = v23 + 3;
  }
  v26 = 0;
  if ( ((*(_BYTE *)(a3 + 34) - 86) & 0xFD) == 0 )
  {
    v26 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v26;
  }
  if ( *(_BYTE *)(a3 + 32) == 76 )
  {
    v95 = 0;
    v100 = 0;
  }
  else
  {
    v27 = 0;
    if ( v91 )
      v27 = *v91;
    v100 = v24 + *(_DWORD *)(a3 + 120);
    v28 = *(_DWORD **)(a3 + 16);
    if ( v28 )
      v100 += *v28;
    v29 = *(_DWORD *)(a1 + 56);
    v30 = v29 + 1;
    v31 = v27 + v29;
    v32 = v31 + 1;
    v33 = v27 + v31;
    v95 = v30;
    v121 = v32;
    v34 = v33 + 1;
    v35 = v27 + v33;
    v123 = v34;
    *(_DWORD *)(a1 + 56) = v27 + v35;
    v125 = v35 + 1;
  }
  v36 = 0;
  v37 = v22 + 1;
  while ( (int)v98 > (int)v36 )
  {
    v107 = v36;
    sub_E1710(v10, 94, v103, v36, v37 + v36);
    v36 = v107 + 1;
  }
  sub_E1710(v10, 97, v24, v98, v101);
  v38 = *(unsigned int **)(a3 + 16);
  if ( v38 )
  {
    v39 = *v38;
    v40 = *(_DWORD *)(a3 + 120) + v24;
    v104 = sub_F44C0(a1, v38, 0, 0);
    v41 = *(_DWORD *)(a1 + 56) + 1;
    *(_DWORD *)(a1 + 56) = v41;
    v99 = v41;
    v108 = sub_E1710(v10, 90, v40, *(unsigned int *)(a3 + 108), v39);
    sub_D04B0(v10, v104, 4294967288LL);
    sub_E1710(v10, 13, (unsigned int)(v108 + 2), (unsigned int)(v108 + 4), (unsigned int)(v108 + 2));
    v105 = sub_E1710(v10, 9, v99, 0, 0);
    sub_E1710(v10, 80, v40, *(unsigned int *)(a3 + 108), v39 - 1);
  }
  else
  {
    v99 = 0;
    v105 = 0;
  }
  sub_E1710(v10, 127, v106, v119, 0);
  sub_E1710(v10, 128, v106, v101, v119);
  v42 = sub_E1710(v10, 52, *(unsigned int *)(a3 + 128), 0, v119);
  v43 = *(_QWORD *)(a1 + 16);
  v109 = v42;
  if ( !v43 )
    v43 = sub_E2050(a1);
  v44 = a1;
  v102 = 0;
  v111 = v10;
  for ( j = a3; j; j = *(_QWORD *)(j + 64) )
  {
    v46 = *(_QWORD *)(j + 80);
    sub_E1710(v43, 75, 0, *(unsigned int *)(j + 92), 0);
    v47 = *(int **)(*(_QWORD *)(j + 112) + 32LL);
    v48 = 0;
    if ( v47 )
      v48 = *v47;
    if ( v102 >= v48 )
      v48 = v102;
    v102 = v48;
    if ( !*(_DWORD *)(a3 + 132) )
    {
      v49 = *(char **)(v46 + 56);
      if ( v49 == "first_value" || v49 == "nth_value" )
      {
        sub_E1710(v43, 71, 0, *(unsigned int *)(j + 104), 0);
        sub_E1710(v43, 71, 0, (unsigned int)(*(_DWORD *)(j + 104) + 1), 0);
      }
      if ( (*(_BYTE *)(v46 + 5) & 0x10) != 0 )
      {
        v50 = *(unsigned int *)(j + 100);
        if ( (_DWORD)v50 )
        {
          sub_E1710(v43, 146, v50, 0, 0);
          sub_E1710(v43, 71, 0, (unsigned int)(*(_DWORD *)(j + 104) + 1), 0);
        }
      }
    }
  }
  v51 = *(_DWORD *)(v44 + 56);
  *(_DWORD *)(v44 + 56) = v51 + v102;
  v117 = v51 + 1;
  if ( v94 )
  {
    if ( *(_QWORD *)(v44 + 16) )
      sub_127300(v44, *(_QWORD *)(a3 + 40), v94);
    sub_21791(v44, v94, 3 * (*(_BYTE *)(a3 + 32) == 89));
  }
  if ( v26 )
  {
    if ( *(_QWORD *)(v44 + 16) )
      sub_127300(v44, *(_QWORD *)(a3 + 48), v26);
    sub_21791(v44, v26, 3 * (*(_BYTE *)(a3 + 32) == 89) + 1);
  }
  if ( *(_BYTE *)(a3 + 32) != 89 )
  {
    v52 = *(_BYTE *)(a3 + 33);
    if ( *(_BYTE *)(a3 + 34) == v52 )
    {
      if ( v94 )
      {
        v53 = sub_E1710(v111, 2 * (unsigned int)(v52 == 86) + 55, v94, 0, v26);
        sub_21946(v112, v113, 0);
        sub_E1710(v111, 35, v122, 1, 0);
        sub_22985((__int64)&v112);
        sub_E1710(v111, 146, v122, 0, 0);
        sub_E1710(v111, 8, 0, v97, 0);
        v54 = *(_DWORD *)(v111 + 144);
        if ( v53 < 0 )
          v53 = v54 - 1;
        v55 = &unk_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
          v55 = (_DWORD *)(24LL * v53 + *(_QWORD *)(v111 + 136));
        v55[2] = v54;
      }
    }
  }
  if ( *(_BYTE *)(a3 + 33) == 86 && *(_BYTE *)(a3 + 32) != 89 && v26 )
    sub_E1710(v111, 107, v94, v26, v94);
  if ( *(_BYTE *)(a3 + 33) != 90 )
    sub_E1710(v111, 35, v120, 1, 0);
  sub_E1710(v111, 35, v122, 1, 0);
  sub_E1710(v111, 35, v124, 1, 0);
  if ( v95 && v91 )
  {
    sub_E1710(v111, 80, v100, v95, *v91 - 1);
    sub_E1710(v111, 80, v95, v121, *v91 - 1);
    sub_E1710(v111, 80, v95, v123, *v91 - 1);
    sub_E1710(v111, 80, v95, v125, *v91 - 1);
  }
  sub_E1710(v111, 8, 0, v97, 0);
  v56 = *(_DWORD *)(v111 + 144);
  if ( v109 < 0 )
    v109 = v56 - 1;
  v57 = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
    v57 = (_DWORD *)(*(_QWORD *)(v111 + 136) + 24LL * v109);
  v57[2] = v56;
  if ( v95 )
    sub_22167(v44, v91, v100, v95, v97);
  if ( *(_BYTE *)(a3 + 33) == 86 )
  {
    sub_23099((__int64)&v112, 3, 0, 0);
    if ( *(_BYTE *)(a3 + 34) == 90 )
      goto LABEL_107;
    if ( *(_BYTE *)(a3 + 32) == 89 )
    {
      v58 = v124;
      v59 = v122;
      v60 = *(_DWORD *)(v44 + 68) - 1;
      *(_DWORD *)(v44 + 68) = v60;
      v61 = *(_DWORD *)(v111 + 144);
      sub_21DEB(&v112, 0x39u, v59, v26, v58, v60);
      sub_23099((__int64)&v112, 2, v94, 0);
      sub_23099((__int64)&v112, 1, 0, 0);
      v62 = v61;
LABEL_98:
      sub_E1710(v111, 8, 0, v62, 0);
      sub_E0BB0(v111, v60);
      goto LABEL_107;
    }
    sub_23099((__int64)&v112, 1, v26, 0);
LABEL_91:
    sub_23099((__int64)&v112, 2, v94, 0);
    goto LABEL_107;
  }
  if ( *(_BYTE *)(a3 + 34) == 88 )
  {
    v63 = *(_DWORD *)(a3 + 32);
    sub_23099((__int64)&v112, 3, v26, 0);
    if ( (_WORD)v63 == 22617 )
      sub_23099((__int64)&v112, 2, v94, 0);
    sub_23099((__int64)&v112, 1, 0, 0);
    if ( (_WORD)v63 != 22617 )
      goto LABEL_91;
  }
  else
  {
    sub_23099((__int64)&v112, 3, 0, 0);
    if ( *(_BYTE *)(a3 + 34) == 90 )
      goto LABEL_107;
    if ( *(_BYTE *)(a3 + 32) == 89 )
    {
      v60 = 0;
      v92 = *(_DWORD *)(v111 + 144);
      if ( v26 )
      {
        v64 = v124;
        v65 = v122;
        v60 = *(_DWORD *)(v44 + 68) - 1;
        *(_DWORD *)(v44 + 68) = v60;
        sub_21DEB(&v112, 0x39u, v65, v26, v64, v60);
      }
      sub_23099((__int64)&v112, 1, 0, 0);
      sub_23099((__int64)&v112, 2, v94, 0);
      if ( v26 )
      {
        v62 = v92;
        goto LABEL_98;
      }
    }
    else
    {
      v66 = 0;
      if ( v26 )
        v66 = sub_E1710(v111, 49, v26, 0, 1);
      sub_23099((__int64)&v112, 1, 0, 0);
      sub_23099((__int64)&v112, 2, v94, 0);
      if ( v26 )
      {
        v67 = *(_DWORD *)(v111 + 144);
        if ( v66 < 0 )
          v66 = v67 - 1;
        v68 = &unk_241F50;
        if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
          v68 = (_DWORD *)(24LL * v66 + *(_QWORD *)(v111 + 136));
        v68[2] = v67;
      }
    }
  }
LABEL_107:
  v69 = 0;
  sub_E0BB0(v111, v97);
  sub_133C90(a4);
  if ( *(_QWORD *)(a3 + 16) )
  {
    v69 = sub_E1710(v111, 71, 0, v99, 0);
    v70 = *(_DWORD *)(v111 + 144);
    if ( v105 < 0 )
      v105 = v70 - 1;
    v71 = &unk_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
      v71 = (_DWORD *)(*(_QWORD *)(v111 + 136) + 24LL * v105);
    v71[2] = v70;
  }
  v119 = 0;
  v93 = sub_E1710(v111, 35, v106, 0, 0);
  if ( *(_BYTE *)(a3 + 34) == 88 )
  {
    v72 = *(_DWORD *)(a3 + 32);
    sub_23099((__int64)&v112, 3, v26, 0);
    if ( (_WORD)v72 == 22617 )
      sub_23099((__int64)&v112, 2, v94, 0);
    sub_23099((__int64)&v112, 1, 0, 0);
  }
  else
  {
    if ( *(_BYTE *)(a3 + 33) == 86 )
    {
      sub_23099((__int64)&v112, 3, 0, 0);
      v96 = *(_DWORD *)(v111 + 144);
      if ( *(_BYTE *)(a3 + 32) == 89 )
      {
        v73 = sub_23099((__int64)&v112, 2, v94, 1u);
        v74 = sub_23099((__int64)&v112, 1, 0, 1u);
      }
      else if ( *(_BYTE *)(a3 + 34) == 90 )
      {
        v74 = sub_23099((__int64)&v112, 1, v94, 1u);
        v73 = sub_23099((__int64)&v112, 2, 0, 1u);
      }
      else
      {
        v74 = sub_23099((__int64)&v112, 1, v26, 1u);
        v73 = sub_23099((__int64)&v112, 2, v94, 1u);
      }
      sub_E1710(v111, 8, 0, v96, 0);
      v75 = *(_DWORD *)(v111 + 144);
      if ( v73 < 0 )
        v73 = v75 - 1;
      v76 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
        v76 = (_DWORD *)(24LL * v73 + *(_QWORD *)(v111 + 136));
      v76[2] = v75;
      v77 = *(_DWORD *)(v111 + 144);
      v78 = sub_23099((__int64)&v112, 1, 0, 1u);
      sub_E1710(v111, 8, 0, v77, 0);
      v79 = *(_DWORD *)(v111 + 144);
      if ( v74 < 0 )
        v74 = v79 - 1;
      v80 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
        v80 = (_DWORD *)(24LL * v74 + *(_QWORD *)(v111 + 136));
      v80[2] = v79;
      v81 = *(_DWORD *)(v111 + 144);
      if ( v78 < 0 )
        v78 = v81 - 1;
      v82 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
        v82 = (_DWORD *)(24LL * v78 + *(_QWORD *)(v111 + 136));
    }
    else
    {
      sub_23099((__int64)&v112, 3, 0, 0);
      v83 = *(_DWORD *)(v111 + 144);
      v84 = sub_23099((__int64)&v112, 1, 0, 1u);
      sub_23099((__int64)&v112, 2, v94, 0);
      sub_E1710(v111, 8, 0, v83, 0);
      v81 = *(_DWORD *)(v111 + 144);
      if ( v84 < 0 )
        v84 = v81 - 1;
      v82 = &unk_241F50;
      if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
        v82 = (_DWORD *)(24LL * v84 + *(_QWORD *)(v111 + 136));
    }
    v82[2] = v81;
  }
  v85 = *(_DWORD *)(v111 + 144);
  if ( v93 < 0 )
    v93 = v85 - 1;
  v86 = &unk_241F50;
  if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
    v86 = (_DWORD *)(*(_QWORD *)(v111 + 136) + 24LL * v93);
  v86[2] = v85;
  sub_E1710(v111, 146, v122, 0, 0);
  if ( *(_QWORD *)(a3 + 16) )
  {
    v87 = *(unsigned int *)(a3 + 132);
    if ( (_DWORD)v87 )
    {
      sub_E1710(v111, 71, 1, v87, 0);
      sub_E1710(v111, 71, 0, *(unsigned int *)(a3 + 136), 0);
    }
    v88 = *(_DWORD *)(v111 + 144);
    if ( v69 < 0 )
      v69 = v88 - 1;
    v89 = &unk_241F50;
    if ( !*(_BYTE *)(*(_QWORD *)v111 + 103LL) )
      v89 = (_DWORD *)(24LL * v69 + *(_QWORD *)(v111 + 136));
    v89[1] = v88;
    sub_E1710(v111, 67, v99, 0, 0);
  }
  return __readfsqword(0x28u) ^ v126;
}
