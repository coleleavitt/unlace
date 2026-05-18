__int64 __fastcall sub_84820(__int64 *a1, _QWORD *a2, unsigned int a3)
{
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  __int64 v7; // r15
  __int64 v8; // rsi
  unsigned int v9; // r13d
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbp
  unsigned __int64 v26; // r15
  __int64 v27; // r8
  __int64 v28; // rsi
  unsigned __int64 v29; // rcx
  __int64 v30; // rbp
  __int64 v31; // rax
  __int64 v32; // rbp
  unsigned __int64 v33; // r15
  __int64 v34; // r8
  __int64 v35; // rsi
  unsigned __int64 v36; // rcx
  __int64 v37; // rbp
  __int64 v38; // rax
  __int64 v39; // rbp
  unsigned __int64 v40; // r15
  __int64 v41; // r8
  __int64 v42; // rax
  __m128i si128; // xmm0
  __int64 v44; // rbp
  unsigned __int64 v45; // rbp
  __int64 v46; // r15
  unsigned __int64 v47; // rdx
  __int64 v48; // r9
  __int64 v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rax
  __int64 v52; // rax
  unsigned __int64 v53; // rbp
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned __int64 v61; // rbp
  __int64 v62; // r15
  __int64 v63; // rsi
  unsigned __int64 v64; // rbp
  __int64 v65; // r15
  __int64 v66; // rsi
  unsigned __int64 v67; // rbp
  __int64 v68; // r15
  __int64 v69; // rsi
  unsigned __int64 v70; // rbp
  __int64 v71; // r15
  __int64 v72; // rsi
  unsigned __int64 v73; // rbp
  __int64 v74; // r15
  __int64 v75; // rsi
  __int64 v76; // [rsp+8h] [rbp-50h]
  __int64 v77; // [rsp+8h] [rbp-50h]
  __int64 v78; // [rsp+8h] [rbp-50h]
  __int64 v79; // [rsp+8h] [rbp-50h]
  __int64 v80; // [rsp+8h] [rbp-50h]
  __int64 v81; // [rsp+8h] [rbp-50h]
  __int64 v82; // [rsp+8h] [rbp-50h]
  __int64 v83; // [rsp+8h] [rbp-50h]
  __int64 v84; // [rsp+8h] [rbp-50h]
  unsigned __int8 v85; // [rsp+8h] [rbp-50h]
  unsigned __int64 v86; // [rsp+10h] [rbp-48h]
  unsigned __int64 v87; // [rsp+10h] [rbp-48h]
  __int64 v88; // [rsp+18h] [rbp-40h]
  __int64 v89; // [rsp+18h] [rbp-40h]
  __int64 v90; // [rsp+18h] [rbp-40h]

  sub_171F20(a1, a3);
  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 + 1;
    v7 = a1[1];
    v8 = *a1;
    --v5;
    if ( a1[2] >= v6 )
      goto LABEL_3;
  }
  else
  {
    v8 = *a1;
    v7 = 1;
    v6 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v11 = sub_1987B0(a1, v8, v6, 1);
  *a1 = v11;
  v8 = v11;
LABEL_3:
  a1[1] = v6;
  v9 = a3 + 1;
  *(_BYTE *)(v8 + v5) = 123;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_171F20(a1, a3 + 1);
  if ( !(unsigned __int8)sub_171FB0(a1, *(unsigned int *)a2, a3 + 1) )
    return 0;
  v12 = a1[1];
  if ( !v12 )
  {
    v15 = *a1;
    v14 = 10;
    v13 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_9;
LABEL_20:
    v77 = v13;
    v24 = sub_1987B0(a1, v15, v14, 1);
    v13 = v77;
    *a1 = v24;
    v15 = v24;
    goto LABEL_9;
  }
  v13 = v12 + 8;
  v14 = v12 + 9;
  v15 = *a1;
  --v12;
  if ( a1[2] < v14 )
    goto LABEL_20;
LABEL_9:
  a1[1] = v14;
  *(_BYTE *)(v15 + v13) = 0;
  v16 = *a1 + v12;
  *(_QWORD *)v16 = 0x67616C66202F2F20LL;
  *(_BYTE *)(v16 + 8) = 115;
  sub_171F20(a1, v9);
  v17 = a2[2];
  if ( v17 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v17, v9) )
    return 0;
  if ( (_DWORD)v17 )
  {
    v18 = 0;
    v76 = 24LL * (unsigned int)v17;
    do
    {
      v22 = a1[1];
      if ( v22 )
      {
        v19 = v22 + 1;
        v20 = a1[1];
        v21 = *a1;
        --v22;
        if ( a1[2] < v19 )
          goto LABEL_18;
      }
      else
      {
        v21 = *a1;
        v20 = 1;
        v19 = 2;
        if ( (unsigned __int64)a1[2] < 2 )
        {
LABEL_18:
          v88 = v20;
          v86 = v19;
          v23 = sub_1987B0(a1, v21, v19, 1);
          v20 = v88;
          v19 = v86;
          *a1 = v23;
          v21 = v23;
        }
      }
      a1[1] = v19;
      *(_BYTE *)(v21 + v22) = 32;
      *(_BYTE *)(*a1 + v20) = 0;
      if ( !(unsigned __int8)sub_1721B0(a1, v18 + a2[1], v9) )
        return 0;
      v18 += 24;
    }
    while ( v18 != v76 );
  }
  v25 = a1[1];
  if ( v25 )
  {
    v27 = v25 + 13;
    v26 = v25 + 14;
    --v25;
  }
  else
  {
    v26 = 15;
    v27 = 14;
  }
  v28 = *a1;
  if ( a1[2] < v26 )
  {
    v79 = v27;
    v31 = sub_1987B0(a1, v28, v26, 1);
    v27 = v79;
    *a1 = v31;
    v28 = v31;
  }
  a1[1] = v26;
  *(_BYTE *)(v28 + v27) = 0;
  qmemcpy((void *)(*a1 + v25), " // license_id", 14);
  sub_171F20(a1, v9);
  v29 = a2[5];
  if ( v29 > 0x7FFFFFFF )
    return 0;
  v78 = a2[5];
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v29, v9) )
    return 0;
  v30 = 0;
  if ( (_DWORD)v78 )
  {
    while ( (unsigned __int8)sub_837C0(a1, (_QWORD *)(v30 + a2[4]), v9) )
    {
      v30 += 16;
      if ( v30 == 16LL * (unsigned int)v78 )
        goto LABEL_33;
    }
    return 0;
  }
LABEL_33:
  v32 = a1[1];
  if ( v32 )
  {
    v34 = v32 + 14;
    v33 = v32 + 15;
    --v32;
  }
  else
  {
    v33 = 16;
    v34 = 15;
  }
  v35 = *a1;
  if ( a1[2] < v33 )
  {
    v81 = v34;
    v38 = sub_1987B0(a1, v35, v33, 1);
    v34 = v81;
    *a1 = v38;
    v35 = v38;
  }
  a1[1] = v33;
  *(_BYTE *)(v35 + v34) = 0;
  qmemcpy((void *)(*a1 + v32), " // time_ranges", 15);
  sub_171F20(a1, v9);
  v36 = a2[8];
  if ( v36 > 0x7FFFFFFF )
    return 0;
  v80 = a2[8];
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v36, v9) )
    return 0;
  v37 = 0;
  if ( (_DWORD)v80 )
  {
    while ( (unsigned __int8)sub_845C0(a1, (_QWORD *)(v37 + a2[7]), v9) )
    {
      v37 += 16;
      if ( v37 == 16LL * (unsigned int)v80 )
        goto LABEL_45;
    }
    return 0;
  }
LABEL_45:
  v39 = a1[1];
  if ( v39 )
  {
    v41 = v39 + 20;
    v40 = v39 + 21;
    --v39;
  }
  else
  {
    v40 = 22;
    v41 = 21;
  }
  if ( a1[2] < v40 )
  {
    v83 = v41;
    v52 = sub_1987B0(a1, *a1, v40, 1);
    v41 = v83;
    *a1 = v52;
  }
  v42 = *a1;
  a1[1] = v40;
  si128 = _mm_load_si128((const __m128i *)&xmmword_1B6E10);
  *(_BYTE *)(v42 + v41) = 0;
  v44 = *a1 + v39;
  *(__m128i *)v44 = si128;
  *(_QWORD *)(v44 + 13) = 0x7365676E61725F64LL;
  sub_171F20(a1, v9);
  v45 = a2[11];
  if ( v45 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v45, v9) )
    return 0;
  if ( (_DWORD)v45 )
  {
    v46 = 0;
    v82 = 24LL * (unsigned int)v45;
    do
    {
      v49 = a1[1];
      if ( v49 )
      {
        v47 = v49 + 1;
        v48 = a1[1];
        --v49;
      }
      else
      {
        v48 = 1;
        v47 = 2;
      }
      v50 = *a1;
      if ( a1[2] < v47 )
      {
        v89 = v48;
        v87 = v47;
        v51 = sub_1987B0(a1, v50, v47, 1);
        v48 = v89;
        v47 = v87;
        *a1 = v51;
        v50 = v51;
      }
      a1[1] = v47;
      *(_BYTE *)(v50 + v49) = 32;
      *(_BYTE *)(*a1 + v48) = 0;
      if ( !(unsigned __int8)sub_1721B0(a1, v46 + a2[10], v9) )
        return 0;
      v46 += 24;
    }
    while ( v46 != v82 );
  }
  sub_7DED0(a1, " // idbs");
  sub_171F20(a1, v9);
  v53 = a2[14];
  if ( v53 > 0x7FFFFFFF || !(unsigned __int8)sub_171FB0(a1, (unsigned int)v53, v9) )
    return 0;
  if ( (_DWORD)v53 )
  {
    v54 = 24LL * (unsigned int)v53;
    v55 = 0;
    v84 = v54;
    do
    {
      v57 = a1[1];
      v58 = 1;
      if ( v57 )
      {
        v58 = a1[1];
        --v57;
      }
      v59 = v57 + 2;
      if ( a1[2] < (unsigned __int64)(v57 + 2) )
      {
        v90 = v58;
        v60 = sub_1987B0(a1, *a1, v59, 1);
        v58 = v90;
        v59 = v57 + 2;
        *a1 = v60;
      }
      v56 = *a1;
      a1[1] = v59;
      *(_BYTE *)(v56 + v57) = 32;
      *(_BYTE *)(*a1 + v58) = 0;
      if ( !(unsigned __int8)sub_1721B0(a1, v55 + a2[13], v9) )
        return 0;
      v55 += 24;
    }
    while ( v55 != v84 );
  }
  sub_7DED0(a1, " // inputs");
  sub_171F20(a1, v9);
  v61 = a2[17];
  if ( v61 > 0x7FFFFFFF )
    return 0;
  v62 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v61, v9) )
    return 0;
  while ( (int)v61 > (int)v62 )
  {
    sub_7DE50(a1, 32);
    v63 = a2[16] + 24 * v62++;
    if ( !(unsigned __int8)sub_1721B0(a1, v63, v9) )
      return 0;
  }
  sub_7DED0(a1, " // funcs");
  sub_171F20(a1, v9);
  v64 = a2[20];
  if ( v64 > 0x7FFFFFFF )
    return 0;
  v65 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v64, v9) )
    return 0;
  while ( (int)v64 > (int)v65 )
  {
    sub_7DE50(a1, 32);
    v66 = a2[19] + 24 * v65++;
    if ( !(unsigned __int8)sub_1721B0(a1, v66, v9) )
      return 0;
  }
  sub_7DED0(a1, " // usernames");
  sub_171F20(a1, v9);
  v67 = a2[23];
  if ( v67 > 0x7FFFFFFF )
    return 0;
  v68 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v67, v9) )
    return 0;
  while ( (int)v67 > (int)v68 )
  {
    sub_7DE50(a1, 32);
    v69 = a2[22] + 16 * v68++;
    if ( !(unsigned __int8)sub_7DA10(a1, v69, v9) )
      return 0;
  }
  sub_7DED0(a1, " // input_hashes");
  sub_171F20(a1, v9);
  v70 = a2[26];
  if ( v70 > 0x7FFFFFFF )
    return 0;
  v71 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v70, v9) )
    return 0;
  while ( (int)v70 > (int)v71 )
  {
    sub_7DE50(a1, 32);
    v72 = a2[25] + 16 * v71++;
    if ( !(unsigned __int8)sub_7DA10(a1, v72, v9) )
      return 0;
  }
  sub_7DED0(a1, " // calcrel_hashes");
  sub_171F20(a1, v9);
  v73 = a2[29];
  if ( v73 > 0x7FFFFFFF )
    return 0;
  v74 = 0;
  if ( !(unsigned __int8)sub_171FB0(a1, (unsigned int)v73, v9) )
    return 0;
  while ( (int)v73 > (int)v74 )
  {
    v75 = v74++;
    if ( !(unsigned __int8)sub_845C0(a1, (_QWORD *)(a2[28] + 16 * v75), v9) )
      return 0;
  }
  sub_7DED0(a1, " // push_id_ranges");
  sub_171F20(a1, v9);
  v85 = sub_171FD0(a1, a2[31], v9);
  if ( !v85 )
    return 0;
  sub_7DED0(a1, " // max_entries");
  sub_171F20(a1, a3);
  sub_7DE50(a1, 125);
  return v85;
}
