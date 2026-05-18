__int64 __fastcall sub_86190(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __m128i *v8; // rbp
  unsigned __int64 v9; // rbp
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r13
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  __int64 v17; // r14
  __int64 v18; // rsi
  unsigned __int64 v19; // rbp
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // r13
  __int64 v23; // rax
  __int64 v24; // rbp
  unsigned __int64 v25; // r13
  __int64 v26; // r14
  __int64 v27; // rsi
  __m128i v28; // xmm0
  __int64 v29; // rbp
  unsigned __int64 v30; // rbp
  __int64 v31; // r13
  __int64 v32; // r14
  unsigned __int64 v33; // r15
  __int64 v34; // r8
  __int64 v35; // rbp
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbp
  unsigned __int64 v40; // r13
  __int64 v41; // r14
  __int64 v42; // rsi
  __m128i v43; // xmm0
  __int64 v44; // rbp
  unsigned __int64 v45; // rbp
  __int64 v46; // r13
  __int64 v47; // r14
  unsigned __int64 v48; // r15
  __int64 v49; // r8
  __int64 v50; // rbp
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v54; // rbp
  __int64 v55; // r14
  __int64 v56; // rbp
  unsigned __int64 v57; // r15
  __int64 v58; // r8
  __int64 v59; // r13
  __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rbp
  __int64 v63; // r13
  __int64 v64; // rsi
  unsigned __int64 v65; // r13
  __int64 v66; // rbp
  __int64 v67; // rsi
  unsigned __int64 v68; // rbp
  __int64 v69; // r13
  __int64 v70; // rsi
  unsigned __int64 v71; // r13
  __int64 v72; // rbp
  __int64 v73; // rsi
  unsigned __int64 v74; // r13
  __int64 v75; // rbp
  __int64 v76; // rsi
  unsigned __int64 v77; // rbp
  __int64 v78; // r13
  __int64 v79; // rsi
  unsigned __int64 v80; // r13
  __int64 v81; // rbp
  __int64 v82; // rsi
  unsigned __int64 v83; // rbp
  __int64 v84; // r13
  __int64 v85; // rsi
  unsigned __int64 v86; // r13
  __int64 v87; // rbp
  __int64 v88; // rsi
  unsigned __int64 v89; // rbp
  __int64 v90; // r13
  __int64 v91; // rsi
  unsigned __int64 v92; // r13
  __int64 v93; // rbp
  __int64 v94; // rsi
  unsigned __int64 v95; // rbp
  __int64 v96; // r13
  __int64 v97; // rsi
  unsigned __int64 v98; // rbp
  __int64 v99; // r13
  __int64 v100; // rsi
  __int64 v101; // [rsp+8h] [rbp-40h]
  __int64 v102; // [rsp+8h] [rbp-40h]
  __int64 v103; // [rsp+8h] [rbp-40h]
  unsigned __int8 v104; // [rsp+8h] [rbp-40h]

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 19;
    v5 = v3 + 20;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 21;
    v4 = 20;
    if ( (unsigned __int64)a1[2] >= 0x15 )
      goto LABEL_3;
  }
  v11 = sub_1987B0(a1, v6, v5, 1);
  *a1 = v11;
  v6 = v11;
LABEL_3:
  a1[1] = v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6E50);
  *(_BYTE *)(v6 + v4) = 0;
  v8 = (__m128i *)(*a1 + v3);
  v8[1].m128i_i32[0] = 542395477;
  *v8 = si128;
  sub_171F20(a1, 1);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v9, 1) )
    return 0;
  if ( (_DWORD)v9 )
  {
    v12 = 5LL * (unsigned int)v9;
    v13 = 0;
    v14 = 16 * v12;
    while ( (unsigned __int8)sub_85680(a1, v13 + *(_QWORD *)(a2 + 16), 1u) )
    {
      v13 += 80;
      if ( v13 == v14 )
        goto LABEL_13;
    }
    return 0;
  }
LABEL_13:
  v15 = a1[1];
  if ( v15 )
  {
    v17 = v15 + 10;
    v16 = v15 + 11;
    --v15;
  }
  else
  {
    v16 = 12;
    v17 = 11;
  }
  v18 = *a1;
  if ( a1[2] < v16 )
  {
    v23 = sub_1987B0(a1, v18, v16, 1);
    *a1 = v23;
    v18 = v23;
  }
  a1[1] = v16;
  *(_BYTE *)(v18 + v17) = 0;
  qmemcpy((void *)(*a1 + v15), " // changes", 11);
  sub_171F20(a1, 1);
  v19 = *(_QWORD *)(a2 + 48);
  if ( v19 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v19, 1) )
    return 0;
  if ( (_DWORD)v19 )
  {
    v20 = 9LL * (unsigned int)v19;
    v21 = 0;
    v22 = 8 * v20;
    while ( (unsigned __int8)sub_85FE0(a1, v21 + *(_QWORD *)(a2 + 40), 1u) )
    {
      v21 += 72;
      if ( v21 == v22 )
        goto LABEL_25;
    }
    return 0;
  }
LABEL_25:
  v24 = a1[1];
  if ( v24 )
  {
    v26 = v24 + 20;
    v25 = v24 + 21;
    --v24;
  }
  else
  {
    v25 = 22;
    v26 = 21;
  }
  v27 = *a1;
  if ( a1[2] < v25 )
  {
    v38 = sub_1987B0(a1, v27, v25, 1);
    *a1 = v38;
    v27 = v38;
  }
  v28 = _mm_load_si128((const __m128i *)&xmmword_1B6E60);
  a1[1] = v25;
  *(_BYTE *)(v27 + v26) = 0;
  v29 = *a1 + v24;
  *(__m128i *)v29 = v28;
  *(_QWORD *)(v29 + 13) = 0x7365676E6168635FLL;
  sub_171F20(a1, 1);
  v30 = *(_QWORD *)(a2 + 72);
  if ( v30 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v30, 1) )
    return 0;
  v31 = 0;
  v32 = 4LL * (unsigned int)v30;
  if ( (_DWORD)v30 )
  {
    do
    {
      v35 = a1[1];
      if ( v35 )
      {
        v33 = v35 + 1;
        v34 = a1[1];
        --v35;
      }
      else
      {
        v34 = 1;
        v33 = 2;
      }
      v36 = *a1;
      if ( a1[2] < v33 )
      {
        v101 = v34;
        v37 = sub_1987B0(a1, v36, v33, 1);
        v34 = v101;
        *a1 = v37;
        v36 = v37;
      }
      a1[1] = v33;
      *(_BYTE *)(v36 + v35) = 32;
      *(_BYTE *)(*a1 + v34) = 0;
      if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(*(_QWORD *)(a2 + 64) + v31), 1) )
        return 0;
      v31 += 4;
    }
    while ( v31 != v32 );
  }
  v39 = a1[1];
  if ( v39 )
  {
    v41 = v39 + 24;
    v40 = v39 + 25;
    --v39;
  }
  else
  {
    v40 = 26;
    v41 = 25;
  }
  v42 = *a1;
  if ( a1[2] < v40 )
  {
    v53 = sub_1987B0(a1, v42, v40, 1);
    *a1 = v53;
    v42 = v53;
  }
  v43 = _mm_load_si128((const __m128i *)&xmmword_1B6E70);
  a1[1] = v40;
  *(_BYTE *)(v42 + v41) = 0;
  v44 = *a1 + v39;
  *(__m128i *)v44 = v43;
  *(__m128i *)(v44 + 9) = _mm_load_si128((const __m128i *)&xmmword_1B6E80);
  sub_171F20(a1, 1);
  v45 = *(_QWORD *)(a2 + 96);
  if ( v45 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v45, 1) )
    return 0;
  v46 = 0;
  v47 = 4LL * (unsigned int)v45;
  if ( (_DWORD)v45 )
  {
    do
    {
      v50 = a1[1];
      if ( v50 )
      {
        v48 = v50 + 1;
        v49 = a1[1];
        --v50;
      }
      else
      {
        v49 = 1;
        v48 = 2;
      }
      v51 = *a1;
      if ( a1[2] < v48 )
      {
        v102 = v49;
        v52 = sub_1987B0(a1, v51, v48, 1);
        v49 = v102;
        *a1 = v52;
        v51 = v52;
      }
      a1[1] = v48;
      *(_BYTE *)(v51 + v50) = 32;
      *(_BYTE *)(*a1 + v49) = 0;
      if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)(*(_QWORD *)(a2 + 88) + v46), 1) )
        return 0;
      v46 += 4;
    }
    while ( v46 != v47 );
  }
  sub_7DED0(a1, " // change_index_to_input_hash_index");
  sub_171F20(a1, 1);
  v54 = *(_QWORD *)(a2 + 120);
  if ( v54 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v54, 1) )
    return 0;
  if ( (_DWORD)v54 )
  {
    v55 = 0;
    v56 = 16LL * (unsigned int)v54;
    do
    {
      v59 = a1[1];
      if ( v59 )
      {
        v57 = v59 + 1;
        v58 = a1[1];
        --v59;
      }
      else
      {
        v58 = 1;
        v57 = 2;
      }
      if ( a1[2] < v57 )
      {
        v103 = v58;
        v61 = sub_1987B0(a1, *a1, v57, 1);
        v58 = v103;
        *a1 = v61;
      }
      v60 = *a1;
      a1[1] = v57;
      *(_BYTE *)(v60 + v59) = 32;
      *(_BYTE *)(*a1 + v58) = 0;
      if ( !(unsigned __int8)sub_7DA10(a1, v55 + *(_QWORD *)(a2 + 112), 1u) )
        return 0;
      v55 += 16;
    }
    while ( v55 != v56 );
  }
  sub_7DED0(a1, " // input_hashes");
  sub_171F20(a1, 1);
  v62 = *(_QWORD *)(a2 + 144);
  if ( v62 > 0x7FFFFFFF )
    return 0;
  v63 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v62, 1) )
    return 0;
  while ( (int)v62 > (int)v63 )
  {
    sub_7DE50(a1, 32);
    v64 = *(unsigned int *)(*(_QWORD *)(a2 + 136) + 4 * v63++);
    if ( !(unsigned __int8)sub_171FB0(a1, v64, 1) )
      return 0;
  }
  sub_7DED0(a1, " // change_index_to_input_path_index");
  sub_171F20(a1, 1);
  v65 = *(_QWORD *)(a2 + 168);
  if ( v65 > 0x7FFFFFFF )
    return 0;
  v66 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v65, 1) )
    return 0;
  while ( (int)v65 > (int)v66 )
  {
    sub_7DE50(a1, 32);
    v67 = *(_QWORD *)(a2 + 160) + 24 * v66++;
    if ( !(unsigned __int8)sub_1721B0(a1, v67, 1) )
      return 0;
  }
  sub_7DED0(a1, " // input_paths");
  sub_171F20(a1, 1);
  v68 = *(_QWORD *)(a2 + 192);
  if ( v68 > 0x7FFFFFFF )
    return 0;
  v69 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v68, 1) )
    return 0;
  while ( (int)v68 > (int)v69 )
  {
    sub_7DE50(a1, 32);
    v70 = *(unsigned int *)(*(_QWORD *)(a2 + 184) + 4 * v69++);
    if ( !(unsigned __int8)sub_171FB0(a1, v70, 1) )
      return 0;
  }
  sub_7DED0(a1, " // change_index_to_idb_path_index");
  sub_171F20(a1, 1);
  v71 = *(_QWORD *)(a2 + 216);
  if ( v71 > 0x7FFFFFFF )
    return 0;
  v72 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v71, 1) )
    return 0;
  while ( (int)v71 > (int)v72 )
  {
    sub_7DE50(a1, 32);
    v73 = *(_QWORD *)(a2 + 208) + 24 * v72++;
    if ( !(unsigned __int8)sub_1721B0(a1, v73, 1) )
      return 0;
  }
  sub_7DED0(a1, " // idb_paths");
  sub_171F20(a1, 1);
  v74 = *(_QWORD *)(a2 + 240);
  if ( v74 > 0x7FFFFFFF )
    return 0;
  v75 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v74, 1) )
    return 0;
  while ( (int)v74 > (int)v75 )
  {
    sub_7DE50(a1, 32);
    v76 = *(_QWORD *)(a2 + 232) + 16 * v75++;
    if ( !(unsigned __int8)sub_7DA10(a1, v76, 1u) )
      return 0;
  }
  sub_7DED0(a1, " // calcrel_hashes");
  sub_171F20(a1, 1);
  v77 = *(_QWORD *)(a2 + 264);
  if ( v77 > 0x7FFFFFFF )
    return 0;
  v78 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v77, 1) )
    return 0;
  while ( (int)v77 > (int)v78 )
  {
    sub_7DE50(a1, 32);
    v79 = *(unsigned int *)(*(_QWORD *)(a2 + 256) + 4 * v78++);
    if ( !(unsigned __int8)sub_171FB0(a1, v79, 1) )
      return 0;
  }
  sub_7DED0(a1, " // change_index_to_username_index");
  sub_171F20(a1, 1);
  v80 = *(_QWORD *)(a2 + 288);
  if ( v80 > 0x7FFFFFFF )
    return 0;
  v81 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v80, 1) )
    return 0;
  while ( (int)v80 > (int)v81 )
  {
    sub_7DE50(a1, 32);
    v82 = *(_QWORD *)(a2 + 280) + 24 * v81++;
    if ( !(unsigned __int8)sub_1721B0(a1, v82, 1) )
      return 0;
  }
  sub_7DED0(a1, " // usernames");
  sub_171F20(a1, 1);
  v83 = *(_QWORD *)(a2 + 312);
  if ( v83 > 0x7FFFFFFF )
    return 0;
  v84 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v83, 1) )
    return 0;
  while ( (int)v83 > (int)v84 )
  {
    sub_7DE50(a1, 32);
    v85 = *(unsigned int *)(*(_QWORD *)(a2 + 304) + 4 * v84++);
    if ( !(unsigned __int8)sub_171FB0(a1, v85, 1) )
      return 0;
  }
  sub_7DED0(a1, " // change_index_to_license_name_index");
  sub_171F20(a1, 1);
  v86 = *(_QWORD *)(a2 + 336);
  if ( v86 > 0x7FFFFFFF )
    return 0;
  v87 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v86, 1) )
    return 0;
  while ( (int)v86 > (int)v87 )
  {
    sub_7DE50(a1, 32);
    v88 = *(_QWORD *)(a2 + 328) + 24 * v87++;
    if ( !(unsigned __int8)sub_1721B0(a1, v88, 1) )
      return 0;
  }
  sub_7DED0(a1, " // license_names");
  sub_171F20(a1, 1);
  v89 = *(_QWORD *)(a2 + 360);
  if ( v89 > 0x7FFFFFFF )
    return 0;
  v90 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v89, 1) )
    return 0;
  while ( (int)v89 > (int)v90 )
  {
    sub_7DE50(a1, 32);
    v91 = *(unsigned int *)(*(_QWORD *)(a2 + 352) + 4 * v90++);
    if ( !(unsigned __int8)sub_171FB0(a1, v91, 1) )
      return 0;
  }
  sub_7DED0(a1, " // change_index_to_license_email_index");
  sub_171F20(a1, 1);
  v92 = *(_QWORD *)(a2 + 384);
  if ( v92 > 0x7FFFFFFF )
    return 0;
  v93 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v92, 1) )
    return 0;
  while ( (int)v92 > (int)v93 )
  {
    sub_7DE50(a1, 32);
    v94 = *(_QWORD *)(a2 + 376) + 24 * v93++;
    if ( !(unsigned __int8)sub_1721B0(a1, v94, 1) )
      return 0;
  }
  sub_7DED0(a1, " // license_emails");
  sub_171F20(a1, 1);
  v95 = *(_QWORD *)(a2 + 408);
  if ( v95 > 0x7FFFFFFF )
    return 0;
  v96 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v95, 1) )
    return 0;
  while ( (int)v95 > (int)v96 )
  {
    sub_7DE50(a1, 32);
    v97 = *(unsigned int *)(*(_QWORD *)(a2 + 400) + 4 * v96++);
    if ( !(unsigned __int8)sub_171FB0(a1, v97, 1) )
      return 0;
  }
  sub_7DED0(a1, " // change_index_to_license_id_index");
  sub_171F20(a1, 1);
  v98 = *(_QWORD *)(a2 + 432);
  if ( v98 > 0x7FFFFFFF )
    return 0;
  v99 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v98, 1) )
    return 0;
  while ( (int)v98 > (int)v99 )
  {
    sub_7DE50(a1, 32);
    v100 = *(_QWORD *)(a2 + 424) + 24 * v99++;
    if ( !(unsigned __int8)sub_1721B0(a1, v100, 1) )
      return 0;
  }
  sub_7DED0(a1, " // license_ids");
  sub_171F20(a1, 1);
  v104 = sub_171FB0(a1, *(unsigned __int8 *)(a2 + 448), 1);
  if ( !v104 )
    return 0;
  sub_7DED0(a1, " // has_more_results");
  sub_171F20(a1, 1);
  sub_7DE50(a1, 59);
  return v104;
}
