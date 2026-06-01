__int64 __fastcall sub_14FA0(__int64 a1)
{
  _QWORD *v1; // rax
  __int64 ph; // r12
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __m128i *v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // r15
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // r14
  __m128i v15; // xmm0
  char *v16; // rax
  __int64 v17; // r14
  __m128i v18; // xmm0
  __int64 v19; // rdx
  const char *v20; // rax
  int v21; // eax
  __int64 v22; // rsi
  __m128i v23; // xmm1
  __int64 v24; // rax
  __m128i v25; // xmm0
  unsigned int v26; // r14d
  __int64 v27; // rdi
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 v30; // r15
  _QWORD *v31; // rbx
  __int64 v33; // r13
  __int64 v34; // rsi
  __int64 v35; // r14
  __int64 v36; // r15
  __m128i si128; // xmm0
  char *v38; // rax
  __int64 v39; // r15
  __int64 v40; // rsi
  __int64 v41; // r12
  __int64 v42; // r14
  __m128i v43; // xmm0
  __m128i *v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // rsi
  __int64 v47; // r12
  __int64 v48; // r14
  __m128i v49; // xmm0
  char *v50; // rax
  __int64 v51; // rbx
  __int64 v52; // r15
  __int64 v53; // r13
  __m128i v54; // xmm1
  __m128i v55; // xmm0
  __m128i v56; // xmm2
  __int16 v57; // ax
  __int64 v58; // rax
  __int64 v59; // r12
  __int64 v60; // r12
  void *v61; // rax
  void *v62; // rax
  __int64 v63; // rdi
  __int64 v64; // rbx
  __int64 v65; // r13
  __int64 v66; // r15
  _QWORD *v67; // r12
  size_t na; // [rsp+0h] [rbp-D0h]
  size_t n; // [rsp+0h] [rbp-D0h]
  __int64 v70; // [rsp+8h] [rbp-C8h]
  __m128i v72; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v73; // [rsp+28h] [rbp-A8h] BYREF
  _QWORD *v74; // [rsp+30h] [rbp-A0h]
  __int128 v75; // [rsp+38h] [rbp-98h]
  __int64 v76; // [rsp+50h] [rbp-80h] BYREF
  __int128 v77; // [rsp+58h] [rbp-78h]
  __int64 v78; // [rsp+70h] [rbp-60h] BYREF
  __m128i v79; // [rsp+78h] [rbp-58h] BYREF
  int v80; // [rsp+88h] [rbp-48h]
  unsigned __int64 v81; // [rsp+98h] [rbp-38h]

  v81 = __readfsqword(0x28u);
  v75 = 0;
  v1 = (_QWORD *)qvector_reserve();
  v74 = v1;
  *(_QWORD *)&v75 = 664;
  *v1 = 0x5B323235313A3040LL;
  *(_QWORD *)((char *)v1 + 655) = 0x3E3333433A74726FLL;
  qmemcpy(
    (void *)((unsigned __int64)(v1 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_56110 - ((char *)v1 - ((unsigned __int64)(v1 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v1 - (((_DWORD)v1 + 8) & 0xFFFFFFF8) + 663) >> 3));
  *((_BYTE *)v74 + 663) = 0;
  ph = get_ph();
  if ( !(unsigned __int8)netnode_inited() || !*(_DWORD *)(ph + 4) )
  {
    v33 = v75;
    if ( (_QWORD)v75 )
    {
      v36 = v75 + 204;
      v35 = v75 + 205;
      v34 = (__int64)v74;
      v33 = v75 - 1;
      if ( *((_QWORD *)&v75 + 1) >= (unsigned __int64)(v75 + 205) )
        goto LABEL_40;
    }
    else
    {
      v34 = (__int64)v74;
      v35 = 206;
      v36 = 205;
      if ( *((_QWORD *)&v75 + 1) >= 0xCEu )
      {
LABEL_40:
        *(_QWORD *)&v75 = v35;
        si128 = _mm_load_si128((const __m128i *)&xmmword_59260);
        *(_BYTE *)(v34 + v36) = 0;
        v38 = (char *)v74 + v33;
        *(__m128i *)v38 = si128;
        *((__m128i *)v38 + 1) = _mm_load_si128((const __m128i *)&xmmword_59270);
        *((__m128i *)v38 + 2) = _mm_load_si128((const __m128i *)&xmmword_59280);
        *((__m128i *)v38 + 3) = _mm_load_si128((const __m128i *)&xmmword_59290);
        *((__m128i *)v38 + 4) = _mm_load_si128((const __m128i *)&xmmword_592A0);
        *((__m128i *)v38 + 5) = _mm_load_si128((const __m128i *)&xmmword_592B0);
        *((__m128i *)v38 + 6) = _mm_load_si128((const __m128i *)&xmmword_592C0);
        *((__m128i *)v38 + 7) = _mm_load_si128((const __m128i *)&xmmword_592D0);
        *((__m128i *)v38 + 8) = _mm_load_si128((const __m128i *)&xmmword_592E0);
        *((__m128i *)v38 + 9) = _mm_load_si128((const __m128i *)&xmmword_592F0);
        *((__m128i *)v38 + 10) = _mm_load_si128((const __m128i *)&xmmword_59300);
        *((__m128i *)v38 + 11) = _mm_load_si128((const __m128i *)&xmmword_59310);
        *(__m128i *)(v38 + 189) = _mm_load_si128((const __m128i *)&xmmword_59320);
        goto LABEL_3;
      }
    }
    v74 = (_QWORD *)qvector_reserve();
    v34 = (__int64)v74;
    goto LABEL_40;
  }
LABEL_3:
  if ( (unsigned __int8)netnode_inited() && *(_DWORD *)(ph + 4) != 13 )
  {
    v3 = v75;
    v4 = v75;
    if ( (_QWORD)v75 )
      goto LABEL_6;
LABEL_44:
    v7 = (__int64)v74;
    v6 = 69;
    v5 = 68;
    if ( *((_QWORD *)&v75 + 1) >= 0x45u )
      goto LABEL_7;
    goto LABEL_45;
  }
  v39 = v75;
  if ( (_QWORD)v75 )
  {
    v42 = v75 + 112;
    v41 = v75 + 113;
    v40 = (__int64)v74;
    v39 = v75 - 1;
    if ( *((_QWORD *)&v75 + 1) >= (unsigned __int64)(v75 + 113) )
      goto LABEL_43;
  }
  else
  {
    v40 = (__int64)v74;
    v41 = 114;
    v42 = 113;
    if ( *((_QWORD *)&v75 + 1) >= 0x72u )
      goto LABEL_43;
  }
  v74 = (_QWORD *)qvector_reserve();
  v40 = (__int64)v74;
LABEL_43:
  *(_QWORD *)&v75 = v41;
  v43 = _mm_load_si128((const __m128i *)&xmmword_59330);
  *(_BYTE *)(v40 + v42) = 0;
  v44 = (__m128i *)((char *)v74 + v39);
  *v44 = v43;
  v45 = _mm_load_si128((const __m128i *)&xmmword_59340);
  v44[7].m128i_i8[0] = 62;
  v44[1] = v45;
  v44[2] = _mm_load_si128((const __m128i *)&xmmword_59350);
  v44[3] = _mm_load_si128((const __m128i *)&xmmword_59360);
  v44[4] = _mm_load_si128((const __m128i *)&xmmword_59370);
  v44[5] = _mm_load_si128((const __m128i *)&xmmword_59380);
  v44[6] = _mm_load_si128((const __m128i *)&xmmword_59390);
  v3 = v75;
  v4 = v75;
  if ( !(_QWORD)v75 )
    goto LABEL_44;
LABEL_6:
  v5 = v3 + 67;
  v6 = v3 + 68;
  v7 = (__int64)v74;
  v4 = v3 - 1;
  if ( *((_QWORD *)&v75 + 1) >= (unsigned __int64)(v3 + 68) )
    goto LABEL_7;
LABEL_45:
  v74 = (_QWORD *)qvector_reserve();
  v7 = (__int64)v74;
LABEL_7:
  *(_QWORD *)&v75 = v6;
  v8 = _mm_load_si128((const __m128i *)&xmmword_593A0);
  *(_BYTE *)(v7 + v5) = 0;
  v9 = (__m128i *)((char *)v74 + v4);
  *v9 = v8;
  v10 = _mm_load_si128((const __m128i *)&xmmword_593B0);
  v9[4].m128i_i32[0] = 168443445;
  v9[1] = v10;
  v9[2] = _mm_load_si128((const __m128i *)&xmmword_593C0);
  v9[3] = _mm_load_si128((const __m128i *)&xmmword_593D0);
  v11 = v75;
  if ( (unsigned __int8)netnode_inited() )
  {
    if ( (_QWORD)v75 )
    {
      v46 = (__int64)v74;
      v48 = v75 + 25;
      v47 = v75 + 26;
      v11 = v75 - 1;
      if ( *((_QWORD *)&v75 + 1) >= (unsigned __int64)(v75 + 26) )
        goto LABEL_48;
    }
    else
    {
      v46 = (__int64)v74;
      v47 = 27;
      v48 = 26;
      if ( *((_QWORD *)&v75 + 1) >= 0x1Bu )
      {
LABEL_48:
        *(_QWORD *)&v75 = v47;
        v49 = _mm_load_si128((const __m128i *)&xmmword_59400);
        *(_BYTE *)(v46 + v48) = 0;
        v50 = (char *)v74 + v11;
        *(__m128i *)v50 = v49;
        *(__m128i *)(v50 + 10) = _mm_load_si128((const __m128i *)&xmmword_59410);
        goto LABEL_11;
      }
    }
    v74 = (_QWORD *)qvector_reserve();
    v46 = (__int64)v74;
    goto LABEL_48;
  }
  if ( (_QWORD)v75 )
  {
    v12 = (__int64)v74;
    v14 = v75 + 25;
    v13 = v75 + 26;
    v11 = v75 - 1;
    if ( *((_QWORD *)&v75 + 1) >= (unsigned __int64)(v75 + 26) )
      goto LABEL_10;
LABEL_56:
    v74 = (_QWORD *)qvector_reserve();
    v12 = (__int64)v74;
    goto LABEL_10;
  }
  v12 = (__int64)v74;
  v13 = 27;
  v14 = 26;
  if ( *((_QWORD *)&v75 + 1) < 0x1Bu )
    goto LABEL_56;
LABEL_10:
  *(_QWORD *)&v75 = v13;
  v15 = _mm_load_si128((const __m128i *)&xmmword_593E0);
  *(_BYTE *)(v12 + v14) = 0;
  v16 = (char *)v74 + v11;
  *(__m128i *)v16 = v15;
  *(__m128i *)(v16 + 10) = _mm_load_si128((const __m128i *)&xmmword_593F0);
LABEL_11:
  v70 = 0;
  v17 = *(_QWORD *)(qword_6AAF0 + 8LL * *(int *)(a1 + 1176));
  v78 = 0;
  v79 = 0;
  v72.m128i_i64[0] = xmmword_6AB38;
  if ( (_QWORD)xmmword_6AB38 )
  {
    v70 = qalloc_or_throw();
    v51 = v70;
    v52 = 0;
    v53 = 0;
    do
    {
      v59 = qword_6AB30;
      *(_QWORD *)v51 = 0;
      *(_OWORD *)(v51 + 8) = 0;
      v60 = v52 + v59;
      if ( *(_QWORD *)(v60 + 8) )
      {
        na = *(_QWORD *)(v60 + 8);
        v61 = (void *)qalloc_or_throw();
        *(_QWORD *)v51 = v61;
        *(_QWORD *)(v51 + 16) = na;
        memcpy(v61, *(const void **)v60, na);
        *(_QWORD *)(v51 + 8) = na;
      }
      v54 = _mm_loadu_si128((const __m128i *)(v60 + 48));
      v55 = _mm_loadu_si128((const __m128i *)(v60 + 64));
      v56 = _mm_loadu_si128((const __m128i *)(v60 + 32));
      *(_QWORD *)(v51 + 24) = *(_QWORD *)(v60 + 24);
      v57 = *(_WORD *)(v60 + 80);
      *(__m128i *)(v51 + 32) = v56;
      *(_WORD *)(v51 + 80) = v57;
      v58 = *(_QWORD *)(v60 + 88);
      *(__m128i *)(v51 + 48) = v54;
      *(_QWORD *)(v51 + 88) = v58;
      *(_QWORD *)(v51 + 96) = 0;
      *(__m128i *)(v51 + 64) = v55;
      *(_OWORD *)(v51 + 104) = 0;
      if ( *(_QWORD *)(v60 + 104) )
      {
        n = *(_QWORD *)(v60 + 104);
        v62 = (void *)qalloc_or_throw();
        *(_QWORD *)(v51 + 96) = v62;
        *(_QWORD *)(v51 + 112) = n;
        memcpy(v62, *(const void **)(v60 + 96), n);
        *(_QWORD *)(v51 + 104) = n;
      }
      ++v53;
      v52 += 120;
      v51 += 120;
    }
    while ( v72.m128i_i64[0] != v53 );
    v63 = v78;
    if ( v78 )
    {
      v64 = v79.m128i_i64[0];
      if ( v79.m128i_i64[0] )
      {
        v65 = 0;
        v66 = 0;
        do
        {
          v67 = (_QWORD *)(v63 + v65);
          if ( *(_QWORD *)(v63 + v65 + 96) )
          {
            v67[13] = 0;
            qfree();
          }
          if ( *v67 )
          {
            v67[1] = 0;
            qfree();
          }
          ++v66;
          v63 = v78;
          v65 += 120;
        }
        while ( v64 != v66 );
      }
      v79.m128i_i64[0] = 0;
      qfree();
    }
  }
  v80 = v17;
  v18 = _mm_loadl_epi64(&v72);
  v78 = v70;
  v79 = _mm_unpacklo_epi64(v18, v18);
  sub_142F0((_QWORD *)a1, v70 + 120LL * (int)v17);
  while ( 1 )
  {
    v76 = 0;
    v73 = 0;
    v77 = 0;
    if ( (unsigned __int8)netnode_inited() )
    {
      v19 = qword_6AB10 + 24 * v17;
      v20 = s;
      if ( *(_QWORD *)(v19 + 8) )
        v20 = *(const char **)v19;
      v21 = sub_12FA0((__int64)v74, sub_14C80, &v78, &qword_6A770, &v73, &v73, 0, &v76, &v73, 0, &v73, v20);
    }
    else
    {
      v21 = sub_12FA0(
              (__int64)v74,
              sub_14C80,
              &v78,
              &qword_6A770,
              &v73,
              &v73,
              0,
              &v76,
              &v73,
              0,
              &v73,
              &qword_6AB10,
              &v73);
    }
    if ( !v21 )
      break;
    v22 = v78 + 120LL * v80;
    if ( *(__int64 *)(v22 + 32) < 0 )
    {
      sub_DB10((__int64)"AUTOHIDE NONE\nWrong timeout value");
    }
    else
    {
      if ( !*(_WORD *)(v22 + 80) || *(_QWORD *)(v22 + 104) > 1u )
      {
        v23 = _mm_loadu_si128(&v79);
        v24 = qword_6AB30;
        v25 = _mm_loadu_si128((const __m128i *)&xmmword_6AB38);
        qword_6AB30 = v78;
        xmmword_6AB38 = (__int128)v23;
        v78 = v24;
        v79 = v25;
        sub_143F0((_QWORD *)a1, v22);
        if ( v80 != v17 )
        {
          *(_DWORD *)(a1 + 1176) = *(_DWORD *)(qword_6AB30 + 120LL * v80 + 28);
          sub_33910(a1);
        }
        if ( v76 )
        {
          *(_QWORD *)&v77 = 0;
          qfree();
        }
        v26 = 1;
        goto LABEL_26;
      }
      sub_DB10((__int64)"AUTOHIDE NONE\nYou must set command line for the external program.");
    }
    if ( v76 )
    {
      *(_QWORD *)&v77 = 0;
      qfree();
    }
  }
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree();
  }
  v26 = 0;
LABEL_26:
  v27 = v78;
  if ( v78 )
  {
    v28 = v79.m128i_i64[0];
    if ( v79.m128i_i64[0] )
    {
      v29 = 0;
      v30 = 0;
      do
      {
        v31 = (_QWORD *)(v27 + v29);
        if ( *(_QWORD *)(v27 + v29 + 96) )
        {
          v31[13] = 0;
          qfree();
        }
        if ( *v31 )
        {
          v31[1] = 0;
          qfree();
        }
        v27 = v78;
        v29 += 120;
        ++v30;
      }
      while ( v28 != v30 );
    }
    v79.m128i_i64[0] = 0;
    qfree();
  }
  if ( v74 )
  {
    *(_QWORD *)&v75 = 0;
    qfree();
  }
  return v26;
}

