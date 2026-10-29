unsigned __int64 __fastcall sub_19F70(__int64 a1, unsigned __int64 *a2, __int64 a3, char a4)
{
  void *v8; // r9
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rcx
  __int64 *v12; // rax
  _QWORD *v13; // rcx
  __int64 *v14; // rax
  _QWORD *v15; // rcx
  __int64 *v16; // rax
  _QWORD *v17; // rcx
  __int64 *v18; // rax
  _QWORD *v19; // rcx
  __int64 *v20; // rax
  _QWORD *v21; // rcx
  __int64 *v22; // rax
  _QWORD *v23; // rcx
  __int64 *v24; // rax
  _QWORD *v25; // rcx
  __int64 *v26; // rax
  _QWORD *v27; // rcx
  __int64 *v28; // rax
  _QWORD *v29; // rcx
  __int64 *v30; // rax
  _QWORD *v31; // rcx
  __int64 *v32; // rax
  _QWORD *v33; // rcx
  __int64 *v34; // rax
  _QWORD *v35; // rcx
  __int64 *v36; // rax
  _QWORD *v37; // rcx
  __int64 *v38; // rax
  _QWORD *v39; // rcx
  __int64 *v40; // rax
  _QWORD *v41; // rcx
  __int64 *v42; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v44; // r8
  __int64 *v45; // rdi
  __int64 *v46; // rax
  _QWORD *v47; // rsi
  unsigned __int64 v48; // rdi
  _QWORD *v49; // r8
  _QWORD *v50; // rax
  _QWORD *v51; // rsi
  unsigned __int64 v52; // rdi
  _QWORD *v53; // r8
  _QWORD *v54; // rax
  _QWORD *v55; // rsi
  unsigned __int64 v56; // rdi
  _QWORD *v57; // r8
  _QWORD *v58; // rax
  _QWORD *v59; // rsi
  unsigned __int64 v60; // rdi
  _QWORD *v61; // r8
  _QWORD *v62; // rax
  _QWORD *v63; // rsi
  unsigned __int64 v64; // rdi
  _QWORD *v65; // r8
  _QWORD *v66; // rax
  _QWORD *v67; // rsi
  unsigned __int64 v68; // rdi
  _QWORD *v69; // r8
  _QWORD *v70; // rax
  _QWORD *v71; // rsi
  unsigned __int64 v72; // rdi
  _QWORD *v73; // r8
  _QWORD *v74; // rax
  _QWORD *v75; // rsi
  unsigned __int64 v76; // rdi
  _QWORD *v77; // r8
  _QWORD *v78; // rax
  _QWORD *v79; // rsi
  unsigned __int64 v80; // rdi
  _QWORD *v81; // r8
  _QWORD *v82; // rax
  _QWORD *v83; // rsi
  unsigned __int64 v84; // rdi
  _QWORD *v85; // r8
  _QWORD *v86; // rax
  _QWORD *v87; // rsi
  unsigned __int64 v88; // rdi
  _QWORD *v89; // r8
  _QWORD *v90; // rax
  _QWORD *v91; // rsi
  unsigned __int64 v92; // rdi
  _QWORD *v93; // r8
  _QWORD *v94; // rax
  _QWORD *v95; // rsi
  unsigned __int64 v96; // rdi
  _QWORD *v97; // r8
  _QWORD *v98; // rax
  _QWORD *v99; // rsi
  unsigned __int64 v100; // rdi
  _QWORD *v101; // r8
  _QWORD *v102; // rax
  _QWORD *v103; // rsi
  unsigned __int64 v104; // rdi
  _QWORD *v105; // r8
  _QWORD *v106; // rax
  _QWORD *v107; // rsi
  unsigned __int64 v108; // rdi
  _QWORD *v109; // r8
  _QWORD *v110; // rax
  _QWORD *v111; // rsi
  _QWORD *v112; // rcx
  unsigned __int64 v113; // rdi
  _QWORD *v114; // r8
  _QWORD *v115; // rax
  _QWORD *v116; // rsi
  __int64 *v117; // rax
  _QWORD *v118; // rcx
  __int64 *v119; // rax
  _QWORD *v120; // rcx
  __int64 *v121; // rax
  _QWORD *v122; // rcx
  __int64 *v123; // rax
  _QWORD *v124; // rcx
  __int64 *v125; // rax
  _QWORD *v126; // rcx
  __int64 *v127; // rax
  _QWORD *v128; // rcx
  __int64 *v129; // rax
  _QWORD *v130; // rcx
  __int64 *v131; // rax
  unsigned __int64 v132; // rdi
  _QWORD *v133; // r8
  _QWORD *v134; // rax
  _QWORD *v135; // rsi
  unsigned __int64 v136; // rdi
  _QWORD *v137; // r8
  _QWORD *v138; // rax
  _QWORD *v139; // rsi
  unsigned __int64 v140; // rdi
  _QWORD *v141; // r8
  _QWORD *v142; // rax
  _QWORD *v143; // rsi
  unsigned __int64 v144; // rdi
  _QWORD *v145; // r8
  _QWORD *v146; // rax
  _QWORD *v147; // rsi
  unsigned __int64 v148; // rdi
  _QWORD *v149; // r8
  _QWORD *v150; // rax
  _QWORD *v151; // rsi
  unsigned __int64 v152; // rdi
  _QWORD *v153; // r8
  _QWORD *v154; // rax
  _QWORD *v155; // rsi
  unsigned __int64 v156; // rdi
  _QWORD *v157; // r8
  _QWORD *v158; // rax
  _QWORD *v159; // rsi

  v8 = *(void **)(a3 + 144);
  v9 = *(_QWORD *)(*(_QWORD *)a1 + 664LL);
  if ( !*(_QWORD *)(v9 + 64) )
  {
    v10 = *(_QWORD *)(v9 + 56);
    if ( v10 )
      goto LABEL_5;
    goto LABEL_3;
  }
  v44 = *(_QWORD *)(v9 + 48);
  v45 = **(__int64 ***)(v9 + 40);
  if ( !v45 )
    goto LABEL_3;
  v46 = (__int64 *)*v45;
  if ( *(_QWORD *)(*v45 + 8) )
  {
    while ( 1 )
    {
      v47 = (_QWORD *)*v46;
      if ( !*v46 )
        break;
      v45 = v46;
      if ( v47[1] % v44 )
        break;
      v46 = (__int64 *)*v46;
      if ( !v47[1] )
        goto LABEL_93;
    }
    while ( 1 )
    {
LABEL_3:
      v10 = sub_17CF0();
      while ( 1 )
      {
        v10 = *(_QWORD *)v10;
        if ( !v10 )
          break;
LABEL_5:
        if ( !*(_QWORD *)(v10 + 8) )
          goto LABEL_6;
      }
    }
  }
LABEL_93:
  if ( !v45 )
    goto LABEL_3;
  v10 = *v45;
  if ( !*v45 )
    goto LABEL_3;
LABEL_6:
  a2 += 2;
  sub_17E70(a2, *(_DWORD *)(v10 + 16), v8);
  v11 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v11[8] )
  {
    v60 = v11[6];
    v61 = *(_QWORD **)(v11[5] + 8 * (1 % v60));
    if ( !v61 )
      goto LABEL_3;
    v62 = (_QWORD *)*v61;
    if ( *(_QWORD *)(*v61 + 8LL) != 1 )
    {
      do
      {
        v63 = (_QWORD *)*v62;
        if ( !*v62 )
          goto LABEL_3;
        v61 = v62;
        if ( 1 % v60 != v63[1] % v60 )
          goto LABEL_3;
        v62 = (_QWORD *)*v62;
      }
      while ( v63[1] != 1 );
    }
    if ( !v61 )
      goto LABEL_3;
    v12 = (__int64 *)*v61;
    if ( !*v61 )
      goto LABEL_3;
  }
  else
  {
    v12 = (__int64 *)v11[7];
    if ( !v12 )
      goto LABEL_3;
    while ( v12[1] != 1 )
    {
      v12 = (__int64 *)*v12;
      if ( !v12 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v12 + 4), *(void **)(a3 + 152));
  v13 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v13[8] )
  {
    v56 = v13[6];
    v57 = *(_QWORD **)(v13[5] + 8 * (2 % v56));
    if ( !v57 )
      goto LABEL_3;
    v58 = (_QWORD *)*v57;
    if ( *(_QWORD *)(*v57 + 8LL) != 2 )
    {
      do
      {
        v59 = (_QWORD *)*v58;
        if ( !*v58 )
          goto LABEL_3;
        v57 = v58;
        if ( 2 % v56 != v59[1] % v56 )
          goto LABEL_3;
        v58 = (_QWORD *)*v58;
      }
      while ( v59[1] != 2 );
    }
    if ( !v57 )
      goto LABEL_3;
    v14 = (__int64 *)*v57;
    if ( !*v57 )
      goto LABEL_3;
  }
  else
  {
    v14 = (__int64 *)v13[7];
    if ( !v14 )
      goto LABEL_3;
    while ( v14[1] != 2 )
    {
      v14 = (__int64 *)*v14;
      if ( !v14 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v14 + 4), *(void **)(a3 + 160));
  v15 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v15[8] )
  {
    v76 = v15[6];
    v77 = *(_QWORD **)(v15[5] + 8 * (3 % v76));
    if ( !v77 )
      goto LABEL_3;
    v78 = (_QWORD *)*v77;
    if ( *(_QWORD *)(*v77 + 8LL) != 3 )
    {
      do
      {
        v79 = (_QWORD *)*v78;
        if ( !*v78 )
          goto LABEL_3;
        v77 = v78;
        if ( 3 % v76 != v79[1] % v76 )
          goto LABEL_3;
        v78 = (_QWORD *)*v78;
      }
      while ( v79[1] != 3 );
    }
    if ( !v77 )
      goto LABEL_3;
    v16 = (__int64 *)*v77;
    if ( !*v77 )
      goto LABEL_3;
  }
  else
  {
    v16 = (__int64 *)v15[7];
    if ( !v16 )
      goto LABEL_3;
    while ( v16[1] != 3 )
    {
      v16 = (__int64 *)*v16;
      if ( !v16 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v16 + 4), *(void **)(a3 + 168));
  v17 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v17[8] )
  {
    v72 = v17[6];
    v73 = *(_QWORD **)(v17[5] + 8 * (4 % v72));
    if ( !v73 )
      goto LABEL_3;
    v74 = (_QWORD *)*v73;
    if ( *(_QWORD *)(*v73 + 8LL) != 4 )
    {
      do
      {
        v75 = (_QWORD *)*v74;
        if ( !*v74 )
          goto LABEL_3;
        v73 = v74;
        if ( 4 % v72 != v75[1] % v72 )
          goto LABEL_3;
        v74 = (_QWORD *)*v74;
      }
      while ( v75[1] != 4 );
    }
    if ( !v73 )
      goto LABEL_3;
    v18 = (__int64 *)*v73;
    if ( !*v73 )
      goto LABEL_3;
  }
  else
  {
    v18 = (__int64 *)v17[7];
    if ( !v18 )
      goto LABEL_3;
    while ( v18[1] != 4 )
    {
      v18 = (__int64 *)*v18;
      if ( !v18 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v18 + 4), *(void **)(a3 + 176));
  v19 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v19[8] )
  {
    v68 = v19[6];
    v69 = *(_QWORD **)(v19[5] + 8 * (5 % v68));
    if ( !v69 )
      goto LABEL_3;
    v70 = (_QWORD *)*v69;
    if ( *(_QWORD *)(*v69 + 8LL) != 5 )
    {
      do
      {
        v71 = (_QWORD *)*v70;
        if ( !*v70 )
          goto LABEL_3;
        v69 = v70;
        if ( 5 % v68 != v71[1] % v68 )
          goto LABEL_3;
        v70 = (_QWORD *)*v70;
      }
      while ( v71[1] != 5 );
    }
    if ( !v69 )
      goto LABEL_3;
    v20 = (__int64 *)*v69;
    if ( !*v69 )
      goto LABEL_3;
  }
  else
  {
    v20 = (__int64 *)v19[7];
    if ( !v20 )
      goto LABEL_3;
    while ( v20[1] != 5 )
    {
      v20 = (__int64 *)*v20;
      if ( !v20 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v20 + 4), *(void **)(a3 + 184));
  v21 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v21[8] )
  {
    v64 = v21[6];
    v65 = *(_QWORD **)(v21[5] + 8 * (6 % v64));
    if ( !v65 )
      goto LABEL_3;
    v66 = (_QWORD *)*v65;
    if ( *(_QWORD *)(*v65 + 8LL) != 6 )
    {
      do
      {
        v67 = (_QWORD *)*v66;
        if ( !*v66 )
          goto LABEL_3;
        v65 = v66;
        if ( 6 % v64 != v67[1] % v64 )
          goto LABEL_3;
        v66 = (_QWORD *)*v66;
      }
      while ( v67[1] != 6 );
    }
    if ( !v65 )
      goto LABEL_3;
    v22 = (__int64 *)*v65;
    if ( !*v65 )
      goto LABEL_3;
  }
  else
  {
    v22 = (__int64 *)v21[7];
    if ( !v22 )
      goto LABEL_3;
    while ( v22[1] != 6 )
    {
      v22 = (__int64 *)*v22;
      if ( !v22 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v22 + 4), *(void **)a3);
  v23 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v23[8] )
  {
    v108 = v23[6];
    v109 = *(_QWORD **)(v23[5] + 8 * (7 % v108));
    if ( !v109 )
      goto LABEL_3;
    v110 = (_QWORD *)*v109;
    if ( *(_QWORD *)(*v109 + 8LL) != 7 )
    {
      do
      {
        v111 = (_QWORD *)*v110;
        if ( !*v110 )
          goto LABEL_3;
        v109 = v110;
        if ( 7 % v108 != v111[1] % v108 )
          goto LABEL_3;
        v110 = (_QWORD *)*v110;
      }
      while ( v111[1] != 7 );
    }
    if ( !v109 )
      goto LABEL_3;
    v24 = (__int64 *)*v109;
    if ( !*v109 )
      goto LABEL_3;
  }
  else
  {
    v24 = (__int64 *)v23[7];
    if ( !v24 )
      goto LABEL_3;
    while ( v24[1] != 7 )
    {
      v24 = (__int64 *)*v24;
      if ( !v24 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v24 + 4), *(void **)(a3 + 8));
  v25 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v25[8] )
  {
    v104 = v25[6];
    v105 = *(_QWORD **)(v25[5] + 8 * (8 % v104));
    if ( !v105 )
      goto LABEL_3;
    v106 = (_QWORD *)*v105;
    if ( *(_QWORD *)(*v105 + 8LL) != 8 )
    {
      do
      {
        v107 = (_QWORD *)*v106;
        if ( !*v106 )
          goto LABEL_3;
        v105 = v106;
        if ( 8 % v104 != v107[1] % v104 )
          goto LABEL_3;
        v106 = (_QWORD *)*v106;
      }
      while ( v107[1] != 8 );
    }
    if ( !v105 )
      goto LABEL_3;
    v26 = (__int64 *)*v105;
    if ( !*v105 )
      goto LABEL_3;
  }
  else
  {
    v26 = (__int64 *)v25[7];
    if ( !v26 )
      goto LABEL_3;
    while ( v26[1] != 8 )
    {
      v26 = (__int64 *)*v26;
      if ( !v26 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v26 + 4), *(void **)(a3 + 16));
  v27 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v27[8] )
  {
    v100 = v27[6];
    v101 = *(_QWORD **)(v27[5] + 8 * (9 % v100));
    if ( !v101 )
      goto LABEL_3;
    v102 = (_QWORD *)*v101;
    if ( *(_QWORD *)(*v101 + 8LL) != 9 )
    {
      do
      {
        v103 = (_QWORD *)*v102;
        if ( !*v102 )
          goto LABEL_3;
        v101 = v102;
        if ( 9 % v100 != v103[1] % v100 )
          goto LABEL_3;
        v102 = (_QWORD *)*v102;
      }
      while ( v103[1] != 9 );
    }
    if ( !v101 )
      goto LABEL_3;
    v28 = (__int64 *)*v101;
    if ( !*v101 )
      goto LABEL_3;
  }
  else
  {
    v28 = (__int64 *)v27[7];
    if ( !v28 )
      goto LABEL_3;
    while ( v28[1] != 9 )
    {
      v28 = (__int64 *)*v28;
      if ( !v28 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v28 + 4), *(void **)(a3 + 24));
  v29 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v29[8] )
  {
    v96 = v29[6];
    v97 = *(_QWORD **)(v29[5] + 8 * (0xA % v96));
    if ( !v97 )
      goto LABEL_3;
    v98 = (_QWORD *)*v97;
    if ( *(_QWORD *)(*v97 + 8LL) != 10 )
    {
      do
      {
        v99 = (_QWORD *)*v98;
        if ( !*v98 )
          goto LABEL_3;
        v97 = v98;
        if ( 0xA % v96 != v99[1] % v96 )
          goto LABEL_3;
        v98 = (_QWORD *)*v98;
      }
      while ( v99[1] != 10 );
    }
    if ( !v97 )
      goto LABEL_3;
    v30 = (__int64 *)*v97;
    if ( !*v97 )
      goto LABEL_3;
  }
  else
  {
    v30 = (__int64 *)v29[7];
    if ( !v30 )
      goto LABEL_3;
    while ( v30[1] != 10 )
    {
      v30 = (__int64 *)*v30;
      if ( !v30 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v30 + 4), *(void **)(a3 + 32));
  v31 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v31[8] )
  {
    v92 = v31[6];
    v93 = *(_QWORD **)(v31[5] + 8 * (0xB % v92));
    if ( !v93 )
      goto LABEL_3;
    v94 = (_QWORD *)*v93;
    if ( *(_QWORD *)(*v93 + 8LL) != 11 )
    {
      do
      {
        v95 = (_QWORD *)*v94;
        if ( !*v94 )
          goto LABEL_3;
        v93 = v94;
        if ( 0xB % v92 != v95[1] % v92 )
          goto LABEL_3;
        v94 = (_QWORD *)*v94;
      }
      while ( v95[1] != 11 );
    }
    if ( !v93 )
      goto LABEL_3;
    v32 = (__int64 *)*v93;
    if ( !*v93 )
      goto LABEL_3;
  }
  else
  {
    v32 = (__int64 *)v31[7];
    if ( !v32 )
      goto LABEL_3;
    while ( v32[1] != 11 )
    {
      v32 = (__int64 *)*v32;
      if ( !v32 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v32 + 4), *(void **)(a3 + 40));
  v33 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v33[8] )
  {
    v88 = v33[6];
    v89 = *(_QWORD **)(v33[5] + 8 * (6 % v88));
    if ( !v89 )
      goto LABEL_3;
    v90 = (_QWORD *)*v89;
    if ( *(_QWORD *)(*v89 + 8LL) != 6 )
    {
      do
      {
        v91 = (_QWORD *)*v90;
        if ( !*v90 )
          goto LABEL_3;
        v89 = v90;
        if ( 6 % v88 != v91[1] % v88 )
          goto LABEL_3;
        v90 = (_QWORD *)*v90;
      }
      while ( v91[1] != 6 );
    }
    if ( !v89 )
      goto LABEL_3;
    v34 = (__int64 *)*v89;
    if ( !*v89 )
      goto LABEL_3;
  }
  else
  {
    v34 = (__int64 *)v33[7];
    if ( !v34 )
      goto LABEL_3;
    while ( v34[1] != 6 )
    {
      v34 = (__int64 *)*v34;
      if ( !v34 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v34 + 4), *(void **)a3);
  v35 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v35[8] )
  {
    v84 = v35[6];
    v85 = *(_QWORD **)(v35[5] + 8 * (0xD % v84));
    if ( !v85 )
      goto LABEL_3;
    v86 = (_QWORD *)*v85;
    if ( *(_QWORD *)(*v85 + 8LL) != 13 )
    {
      do
      {
        v87 = (_QWORD *)*v86;
        if ( !*v86 )
          goto LABEL_3;
        v85 = v86;
        if ( 0xD % v84 != v87[1] % v84 )
          goto LABEL_3;
        v86 = (_QWORD *)*v86;
      }
      while ( v87[1] != 13 );
    }
    if ( !v85 )
      goto LABEL_3;
    v36 = (__int64 *)*v85;
    if ( !*v85 )
      goto LABEL_3;
  }
  else
  {
    v36 = (__int64 *)v35[7];
    if ( !v36 )
      goto LABEL_3;
    while ( v36[1] != 13 )
    {
      v36 = (__int64 *)*v36;
      if ( !v36 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v36 + 4), *(void **)(a3 + 56));
  v37 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v37[8] )
  {
    v80 = v37[6];
    v81 = *(_QWORD **)(v37[5] + 8 * (0xC % v80));
    if ( !v81 )
      goto LABEL_3;
    v82 = (_QWORD *)*v81;
    if ( *(_QWORD *)(*v81 + 8LL) != 12 )
    {
      do
      {
        v83 = (_QWORD *)*v82;
        if ( !*v82 )
          goto LABEL_3;
        v81 = v82;
        if ( 0xC % v80 != v83[1] % v80 )
          goto LABEL_3;
        v82 = (_QWORD *)*v82;
      }
      while ( v83[1] != 12 );
    }
    if ( !v81 )
      goto LABEL_3;
    v38 = (__int64 *)*v81;
    if ( !*v81 )
      goto LABEL_3;
  }
  else
  {
    v38 = (__int64 *)v37[7];
    if ( !v38 )
      goto LABEL_3;
    while ( v38[1] != 12 )
    {
      v38 = (__int64 *)*v38;
      if ( !v38 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v38 + 4), *(void **)(a3 + 48));
  v39 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v39[8] )
  {
    v52 = v39[6];
    v53 = *(_QWORD **)(v39[5] + 8 * (0xE % v52));
    if ( !v53 )
      goto LABEL_3;
    v54 = (_QWORD *)*v53;
    if ( *(_QWORD *)(*v53 + 8LL) != 14 )
    {
      do
      {
        v55 = (_QWORD *)*v54;
        if ( !*v54 )
          goto LABEL_3;
        v53 = v54;
        if ( 0xE % v52 != v55[1] % v52 )
          goto LABEL_3;
        v54 = (_QWORD *)*v54;
      }
      while ( v55[1] != 14 );
    }
    if ( !v53 )
      goto LABEL_3;
    v40 = (__int64 *)*v53;
    if ( !*v53 )
      goto LABEL_3;
  }
  else
  {
    v40 = (__int64 *)v39[7];
    if ( !v40 )
      goto LABEL_3;
    while ( v40[1] != 14 )
    {
      v40 = (__int64 *)*v40;
      if ( !v40 )
        goto LABEL_3;
    }
  }
  sub_17E70(a2, *((_DWORD *)v40 + 4), *(void **)(a3 + 64));
  v41 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
  if ( v41[8] )
  {
    v48 = v41[6];
    v49 = *(_QWORD **)(v41[5] + 8 * (0xF % v48));
    if ( !v49 )
      goto LABEL_3;
    v50 = (_QWORD *)*v49;
    if ( *(_QWORD *)(*v49 + 8LL) != 15 )
    {
      do
      {
        v51 = (_QWORD *)*v50;
        if ( !*v50 )
          goto LABEL_3;
        v49 = v50;
        if ( 0xF % v48 != v51[1] % v48 )
          goto LABEL_3;
        v50 = (_QWORD *)*v50;
      }
      while ( v51[1] != 15 );
    }
    if ( !v49 )
      goto LABEL_3;
    v42 = (__int64 *)*v49;
    if ( !*v49 )
      goto LABEL_3;
  }
  else
  {
    v42 = (__int64 *)v41[7];
    if ( !v42 )
      goto LABEL_3;
    while ( v42[1] != 15 )
    {
      v42 = (__int64 *)*v42;
      if ( !v42 )
        goto LABEL_3;
    }
  }
  result = sub_17E70(a2, *((_DWORD *)v42 + 4), *(void **)(a3 + 136));
  if ( a4 )
  {
    v112 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
    if ( v112[8] )
    {
      v113 = v112[6];
      v114 = *(_QWORD **)(v112[5] + 8 * (0x10 % v113));
      if ( !v114 )
        goto LABEL_3;
      v115 = (_QWORD *)*v114;
      if ( *(_QWORD *)(*v114 + 8LL) != 16 )
      {
        do
        {
          v116 = (_QWORD *)*v115;
          if ( !*v115 )
            goto LABEL_3;
          v114 = v115;
          if ( 0x10 % v113 != v116[1] % v113 )
            goto LABEL_3;
          v115 = (_QWORD *)*v115;
        }
        while ( v116[1] != 16 );
      }
      if ( !v114 )
        goto LABEL_3;
      v117 = (__int64 *)*v114;
      if ( !*v114 )
        goto LABEL_3;
    }
    else
    {
      v117 = (__int64 *)v112[7];
      if ( !v117 )
        goto LABEL_3;
      while ( v117[1] != 16 )
      {
        v117 = (__int64 *)*v117;
        if ( !v117 )
          goto LABEL_3;
      }
    }
    sub_17E70(a2, *((_DWORD *)v117 + 4), *(void **)(a3 + 72));
    v118 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
    if ( v118[8] )
    {
      v132 = v118[6];
      v133 = *(_QWORD **)(v118[5] + 8 * (0x11 % v132));
      if ( !v133 )
        goto LABEL_3;
      v134 = (_QWORD *)*v133;
      if ( *(_QWORD *)(*v133 + 8LL) != 17 )
      {
        do
        {
          v135 = (_QWORD *)*v134;
          if ( !*v134 )
            goto LABEL_3;
          v133 = v134;
          if ( 0x11 % v132 != v135[1] % v132 )
            goto LABEL_3;
          v134 = (_QWORD *)*v134;
        }
        while ( v135[1] != 17 );
      }
      if ( !v133 )
        goto LABEL_3;
      v119 = (__int64 *)*v133;
      if ( !*v133 )
        goto LABEL_3;
    }
    else
    {
      v119 = (__int64 *)v118[7];
      if ( !v119 )
        goto LABEL_3;
      while ( v119[1] != 17 )
      {
        v119 = (__int64 *)*v119;
        if ( !v119 )
          goto LABEL_3;
      }
    }
    sub_17E70(a2, *((_DWORD *)v119 + 4), *(void **)(a3 + 80));
    v120 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
    if ( v120[8] )
    {
      v140 = v120[6];
      v141 = *(_QWORD **)(v120[5] + 8 * (0x12 % v140));
      if ( !v141 )
        goto LABEL_3;
      v142 = (_QWORD *)*v141;
      if ( *(_QWORD *)(*v141 + 8LL) != 18 )
      {
        do
        {
          v143 = (_QWORD *)*v142;
          if ( !*v142 )
            goto LABEL_3;
          v141 = v142;
          if ( 0x12 % v140 != v143[1] % v140 )
            goto LABEL_3;
          v142 = (_QWORD *)*v142;
        }
        while ( v143[1] != 18 );
      }
      if ( !v141 )
        goto LABEL_3;
      v121 = (__int64 *)*v141;
      if ( !*v141 )
        goto LABEL_3;
    }
    else
    {
      v121 = (__int64 *)v120[7];
      if ( !v121 )
        goto LABEL_3;
      while ( v121[1] != 18 )
      {
        v121 = (__int64 *)*v121;
        if ( !v121 )
          goto LABEL_3;
      }
    }
    sub_17E70(a2, *((_DWORD *)v121 + 4), *(void **)(a3 + 88));
    v122 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
    if ( v122[8] )
    {
      v136 = v122[6];
      v137 = *(_QWORD **)(v122[5] + 8 * (0x13 % v136));
      if ( !v137 )
        goto LABEL_3;
      v138 = (_QWORD *)*v137;
      if ( *(_QWORD *)(*v137 + 8LL) != 19 )
      {
        do
        {
          v139 = (_QWORD *)*v138;
          if ( !*v138 )
            goto LABEL_3;
          v137 = v138;
          if ( 0x13 % v136 != v139[1] % v136 )
            goto LABEL_3;
          v138 = (_QWORD *)*v138;
        }
        while ( v139[1] != 19 );
      }
      if ( !v137 )
        goto LABEL_3;
      v123 = (__int64 *)*v137;
      if ( !*v137 )
        goto LABEL_3;
    }
    else
    {
      v123 = (__int64 *)v122[7];
      if ( !v123 )
        goto LABEL_3;
      while ( v123[1] != 19 )
      {
        v123 = (__int64 *)*v123;
        if ( !v123 )
          goto LABEL_3;
      }
    }
    sub_17E70(a2, *((_DWORD *)v123 + 4), *(void **)(a3 + 96));
    v124 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
    if ( v124[8] )
    {
      v156 = v124[6];
      v157 = *(_QWORD **)(v124[5] + 8 * (0x14 % v156));
      if ( !v157 )
        goto LABEL_3;
      v158 = (_QWORD *)*v157;
      if ( *(_QWORD *)(*v157 + 8LL) != 20 )
      {
        do
        {
          v159 = (_QWORD *)*v158;
          if ( !*v158 )
            goto LABEL_3;
          v157 = v158;
          if ( 0x14 % v156 != v159[1] % v156 )
            goto LABEL_3;
          v158 = (_QWORD *)*v158;
        }
        while ( v159[1] != 20 );
      }
      if ( !v157 )
        goto LABEL_3;
      v125 = (__int64 *)*v157;
      if ( !*v157 )
        goto LABEL_3;
    }
    else
    {
      v125 = (__int64 *)v124[7];
      if ( !v125 )
        goto LABEL_3;
      while ( v125[1] != 20 )
      {
        v125 = (__int64 *)*v125;
        if ( !v125 )
          goto LABEL_3;
      }
    }
    sub_17E70(a2, *((_DWORD *)v125 + 4), *(void **)(a3 + 104));
    v126 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
    if ( v126[8] )
    {
      v152 = v126[6];
      v153 = *(_QWORD **)(v126[5] + 8 * (0x15 % v152));
      if ( !v153 )
        goto LABEL_3;
      v154 = (_QWORD *)*v153;
      if ( *(_QWORD *)(*v153 + 8LL) != 21 )
      {
        do
        {
          v155 = (_QWORD *)*v154;
          if ( !*v154 )
            goto LABEL_3;
          v153 = v154;
          if ( 0x15 % v152 != v155[1] % v152 )
            goto LABEL_3;
          v154 = (_QWORD *)*v154;
        }
        while ( v155[1] != 21 );
      }
      if ( !v153 )
        goto LABEL_3;
      v127 = (__int64 *)*v153;
      if ( !*v153 )
        goto LABEL_3;
    }
    else
    {
      v127 = (__int64 *)v126[7];
      if ( !v127 )
        goto LABEL_3;
      while ( v127[1] != 21 )
      {
        v127 = (__int64 *)*v127;
        if ( !v127 )
          goto LABEL_3;
      }
    }
    sub_17E70(a2, *((_DWORD *)v127 + 4), *(void **)(a3 + 112));
    v128 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
    if ( v128[8] )
    {
      v148 = v128[6];
      v149 = *(_QWORD **)(v128[5] + 8 * (0x16 % v148));
      if ( !v149 )
        goto LABEL_3;
      v150 = (_QWORD *)*v149;
      if ( *(_QWORD *)(*v149 + 8LL) != 22 )
      {
        do
        {
          v151 = (_QWORD *)*v150;
          if ( !*v150 )
            goto LABEL_3;
          v149 = v150;
          if ( 0x16 % v148 != v151[1] % v148 )
            goto LABEL_3;
          v150 = (_QWORD *)*v150;
        }
        while ( v151[1] != 22 );
      }
      if ( !v149 )
        goto LABEL_3;
      v129 = (__int64 *)*v149;
      if ( !*v149 )
        goto LABEL_3;
    }
    else
    {
      v129 = (__int64 *)v128[7];
      if ( !v129 )
        goto LABEL_3;
      while ( v129[1] != 22 )
      {
        v129 = (__int64 *)*v129;
        if ( !v129 )
          goto LABEL_3;
      }
    }
    sub_17E70(a2, *((_DWORD *)v129 + 4), *(void **)(a3 + 120));
    v130 = *(_QWORD **)(*(_QWORD *)a1 + 664LL);
    if ( v130[8] )
    {
      v144 = v130[6];
      v145 = *(_QWORD **)(v130[5] + 8 * (0x17 % v144));
      if ( !v145 )
        goto LABEL_3;
      v146 = (_QWORD *)*v145;
      if ( *(_QWORD *)(*v145 + 8LL) != 23 )
      {
        do
        {
          v147 = (_QWORD *)*v146;
          if ( !*v146 )
            goto LABEL_3;
          v145 = v146;
          if ( 0x17 % v144 != v147[1] % v144 )
            goto LABEL_3;
          v146 = (_QWORD *)*v146;
        }
        while ( v147[1] != 23 );
      }
      if ( !v145 )
        goto LABEL_3;
      v131 = (__int64 *)*v145;
      if ( !*v145 )
        goto LABEL_3;
    }
    else
    {
      v131 = (__int64 *)v130[7];
      if ( !v131 )
        goto LABEL_3;
      while ( v131[1] != 23 )
      {
        v131 = (__int64 *)*v131;
        if ( !v131 )
          goto LABEL_3;
      }
    }
    return sub_17E70(a2, *((_DWORD *)v131 + 4), *(void **)(a3 + 128));
  }
  return result;
}

