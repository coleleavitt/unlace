__int64 __fastcall sub_299F0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r14
  __int64 v3; // r13
  _QWORD *v4; // r12
  __int64 v5; // rcx
  _BOOL8 v6; // rcx
  bool v7; // zf
  __int64 v8; // r14
  __int64 v9; // r12
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r15
  __int64 v15; // r15
  __m128i *v16; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __m128i *v19; // rdi
  __m128i *v20; // r15
  __int64 v21; // rdi
  __int64 v22; // r15
  __m128i *v23; // rbx
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rdx
  __m128i *v26; // rdi
  __m128i *v27; // r15
  __int64 v28; // rdi
  __int64 v29; // r15
  __m128i *v30; // rbx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rdx
  __m128i *v33; // rdi
  __m128i *v34; // r15
  __int64 v35; // rdi
  __int64 v36; // r15
  __m128i *v37; // rbx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __m128i *v40; // rdi
  __m128i *v41; // r15
  __int64 v42; // rdi
  __m128i *v43; // rdi
  __int64 v44; // r12
  __int64 v45; // rbp
  __m128i *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // r12
  __int64 v49; // rbp
  _QWORD *v50; // rbx
  __int64 v51; // rdi
  __int64 v52; // r12
  __int64 v53; // rbp
  _QWORD *v54; // rbx
  __int64 v55; // rdi
  __int64 v56; // r12
  __int64 v57; // rbp
  _QWORD *v58; // rbx
  __m128i *v60; // [rsp+8h] [rbp-F0h]
  __m128i *v61; // [rsp+8h] [rbp-F0h]
  __m128i *v62; // [rsp+8h] [rbp-F0h]
  __m128i *v63; // [rsp+8h] [rbp-F0h]
  __int64 v64; // [rsp+8h] [rbp-F0h]
  __m128i *v65; // [rsp+8h] [rbp-F0h]
  __int64 v66; // [rsp+8h] [rbp-F0h]
  __int64 v67; // [rsp+8h] [rbp-F0h]
  __m128i *v68; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v69; // [rsp+28h] [rbp-D0h]
  __m128i *v70; // [rsp+40h] [rbp-B8h] BYREF
  __int128 v71; // [rsp+48h] [rbp-B0h]
  __m128i *v72; // [rsp+60h] [rbp-98h] BYREF
  __int128 i; // [rsp+68h] [rbp-90h]
  __m128i *v74; // [rsp+80h] [rbp-78h] BYREF
  __m128i si128; // [rsp+88h] [rbp-70h]
  int v76; // [rsp+98h] [rbp-60h]
  __int64 *v77; // [rsp+A0h] [rbp-58h]
  __int64 v78; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v79; // [rsp+B8h] [rbp-40h]

  v2 = 0;
  v3 = a2[1];
  v79 = __readfsqword(0x28u);
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)(*a2 + 80 * v2);
      if ( v4[5] )
      {
        v4[6] = 0;
        qfree();
      }
      if ( v4[2] )
      {
        v4[3] = 0;
        qfree();
      }
      ++v2;
    }
    while ( v3 != v2 );
  }
  a2[1] = 0;
  if ( *(_DWORD *)(a1 + 1360) == 6 )
    return 4294967291LL;
  v5 = *(_QWORD *)(a1 + 2032);
  v68 = nullptr;
  v69 = 0;
  sub_1F110(a1, (__int64 *)&v68, 0, v5);
  sub_1F110(a1, (__int64 *)&v68, *(_QWORD *)(a1 + 2032), *(_QWORD *)(a1 + 1880));
  sub_1F110(a1, (__int64 *)&v68, *(_QWORD *)(a1 + 1880), *(_QWORD *)(a1 + 1888));
  v70 = nullptr;
  v6 = 0;
  v7 = *(_DWORD *)(a1 + 2128) == 1;
  v71 = 0;
  if ( v7 )
    v6 = *(_DWORD *)(a1 + 2132) > 0xAu;
  sub_2FFE0(a1, &v70, a1 + 1496, v6);
  v8 = *(_QWORD *)(a1 + 1424);
  v9 = a1 + 1408;
  v72 = nullptr;
  for ( i = 0; v8 != v9; v8 = std::_Rb_tree_increment() )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v8 + 104);
      if ( v10 != 11 )
        break;
      v76 = 0;
      v74 = (__m128i *)&off_97388;
      v77 = (__int64 *)&v72;
      v78 = v8 + 40;
      si128 = _mm_load_si128((const __m128i *)&xmmword_82370);
      sub_245C0(a1, (__int64)&v74, *(_QWORD *)(v8 + 40));
      v8 = std::_Rb_tree_increment();
      if ( v8 == v9 )
        goto LABEL_17;
    }
    if ( v10 == 25 )
      sub_2FFE0(a1, &v72, v8 + 40, 1);
  }
LABEL_17:
  v11 = *(_QWORD *)(a1 + 1968);
  v12 = *(_QWORD *)(a1 + 1960);
  v74 = nullptr;
  si128 = 0;
  v13 = v12;
  v14 = v12 + 104 * v11;
  if ( v14 != v12 )
  {
    do
    {
      sub_2FFE0(a1, &v74, v13, 1);
      v13 += 104;
    }
    while ( v14 != v13 );
  }
  v15 = 80 * v69;
  v16 = &v68[5 * v69];
  if ( v68 != v16 )
  {
    v17 = 0xCCCCCCCCCCCCCCCDLL * (v15 >> 4);
    if ( v17 )
    {
      _BitScanReverse64(&v18, v17);
      v60 = v68;
      sub_28EE0((__int64)v68, (unsigned __int64)&v68[5 * v69], 2LL * (int)v18);
      v19 = v60;
      if ( v15 > 1280 )
      {
        v20 = v60 + 80;
        sub_19E80(v60, v60 + 80);
        do
        {
          v21 = (__int64)v20;
          v20 += 5;
          sub_19C70(v21);
        }
        while ( v16 != v20 );
        goto LABEL_24;
      }
    }
    else
    {
      v64 = (__int64)v68;
      sub_28EE0((__int64)v68, (unsigned __int64)&v68[5 * v69], -2);
      v19 = (__m128i *)v64;
    }
    sub_19E80(v19, v16);
  }
LABEL_24:
  v22 = 80 * v71;
  v23 = &v70[5 * v71];
  if ( v70 == v23 )
    goto LABEL_29;
  v24 = 0xCCCCCCCCCCCCCCCDLL * (v22 >> 4);
  if ( !v24 )
  {
    v67 = (__int64)v70;
    sub_28EE0((__int64)v70, (unsigned __int64)&v70[5 * v71], -2);
    v26 = (__m128i *)v67;
    goto LABEL_83;
  }
  _BitScanReverse64(&v25, v24);
  v61 = v70;
  sub_28EE0((__int64)v70, (unsigned __int64)&v70[5 * v71], 2LL * (int)v25);
  v26 = v61;
  if ( v22 <= 1280 )
  {
LABEL_83:
    sub_19E80(v26, v23);
    goto LABEL_29;
  }
  v27 = v61 + 80;
  sub_19E80(v61, v61 + 80);
  do
  {
    v28 = (__int64)v27;
    v27 += 5;
    sub_19C70(v28);
  }
  while ( v23 != v27 );
LABEL_29:
  v29 = 80 * i;
  v30 = &v72[5 * i];
  if ( v72 == v30 )
    goto LABEL_34;
  v31 = 0xCCCCCCCCCCCCCCCDLL * (v29 >> 4);
  if ( !v31 )
  {
    v66 = (__int64)v72;
    sub_28EE0((__int64)v72, (unsigned __int64)&v72[5 * i], -2);
    v33 = (__m128i *)v66;
    goto LABEL_81;
  }
  _BitScanReverse64(&v32, v31);
  v62 = v72;
  sub_28EE0((__int64)v72, (unsigned __int64)&v72[5 * i], 2LL * (int)v32);
  v33 = v62;
  if ( v29 <= 1280 )
  {
LABEL_81:
    sub_19E80(v33, v30);
    goto LABEL_34;
  }
  v34 = v62 + 80;
  sub_19E80(v62, v62 + 80);
  do
  {
    v35 = (__int64)v34;
    v34 += 5;
    sub_19C70(v35);
  }
  while ( v30 != v34 );
LABEL_34:
  v36 = 80 * si128.m128i_i64[0];
  v37 = &v74[5 * si128.m128i_i64[0]];
  if ( v74 != v37 )
  {
    v38 = 0xCCCCCCCCCCCCCCCDLL * (v36 >> 4);
    if ( v38 )
    {
      _BitScanReverse64(&v39, v38);
      v63 = v74;
      sub_28EE0((__int64)v74, (unsigned __int64)&v74[5 * si128.m128i_i64[0]], 2LL * (int)v39);
      v40 = v63;
      if ( v36 > 1280 )
      {
        v41 = v63 + 80;
        sub_19E80(v63, v63 + 80);
        do
        {
          v42 = (__int64)v41;
          v41 += 5;
          sub_19C70(v42);
        }
        while ( v37 != v41 );
        goto LABEL_39;
      }
    }
    else
    {
      v65 = v74;
      sub_28EE0((__int64)v74, (unsigned __int64)&v74[5 * si128.m128i_i64[0]], -2);
      v40 = v65;
    }
    sub_19E80(v40, v37);
  }
LABEL_39:
  sub_2F3E0(a2, &v70, &v72);
  sub_2F3E0(a2, &v74, a2);
  sub_2F3E0(a2, &v68, a2);
  v43 = v74;
  if ( v74 )
  {
    v44 = si128.m128i_i64[0];
    if ( si128.m128i_i64[0] )
    {
      v45 = 0;
      do
      {
        v46 = &v43[5 * v45];
        if ( v46[2].m128i_i64[1] )
        {
          v46[3].m128i_i64[0] = 0;
          qfree();
        }
        if ( v46[1].m128i_i64[0] )
        {
          v46[1].m128i_i64[1] = 0;
          qfree();
        }
        ++v45;
        v43 = v74;
      }
      while ( v44 != v45 );
    }
    si128.m128i_i64[0] = 0;
    qfree();
  }
  v47 = (__int64)v72;
  if ( v72 )
  {
    v48 = i;
    if ( (_QWORD)i )
    {
      v49 = 0;
      do
      {
        v50 = (_QWORD *)(v47 + 80 * v49);
        if ( v50[5] )
        {
          v50[6] = 0;
          qfree();
        }
        if ( v50[2] )
        {
          v50[3] = 0;
          qfree();
        }
        ++v49;
        v47 = (__int64)v72;
      }
      while ( v48 != v49 );
    }
    *(_QWORD *)&i = 0;
    qfree();
  }
  v51 = (__int64)v70;
  if ( v70 )
  {
    v52 = v71;
    if ( (_QWORD)v71 )
    {
      v53 = 0;
      do
      {
        v54 = (_QWORD *)(v51 + 80 * v53);
        if ( v54[5] )
        {
          v54[6] = 0;
          qfree();
        }
        if ( v54[2] )
        {
          v54[3] = 0;
          qfree();
        }
        ++v53;
        v51 = (__int64)v70;
      }
      while ( v52 != v53 );
    }
    *(_QWORD *)&v71 = 0;
    qfree();
  }
  v55 = (__int64)v68;
  if ( v68 )
  {
    v56 = v69;
    if ( (_QWORD)v69 )
    {
      v57 = 0;
      do
      {
        v58 = (_QWORD *)(v55 + 80 * v57);
        if ( v58[5] )
        {
          v58[6] = 0;
          qfree();
        }
        if ( v58[2] )
        {
          v58[3] = 0;
          qfree();
        }
        ++v57;
        v55 = (__int64)v68;
      }
      while ( v56 != v57 );
    }
    *(_QWORD *)&v69 = 0;
    qfree();
  }
  return 1;
}

