__int64 __fastcall sub_2884E0(_QWORD *a1, __int64 a2)
{
  __m128i v2; // xmm0
  _QWORD *v3; // rbx
  __int64 *v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v13; // r15
  int v14; // edx
  int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 **v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 *i; // r13
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rdi
  unsigned int v28; // r14d
  __int64 v29; // rdi
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rbp
  __int64 v33; // rbx
  __int64 v34; // rdi
  __int64 v36; // rbx
  __int64 v37; // rax
  int v38; // ecx
  int v39; // edx
  int v40; // ecx
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __m128i v47; // xmm1
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 k; // rbx
  __int64 v56; // rbp
  __int64 v57; // r13
  __int64 *v58; // rax
  __int64 v59; // rsi
  __int64 v60; // r14
  __int64 v61; // rdx
  __int64 v62; // rcx
  _QWORD *v63; // rbx
  __int64 v64; // r8
  __int64 v65; // rax
  __int64 *j; // r13
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 *v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rax
  _QWORD *v72; // [rsp+0h] [rbp-100h]
  _QWORD *v73; // [rsp+10h] [rbp-F0h]
  int v74; // [rsp+18h] [rbp-E8h]
  int v75; // [rsp+1Ch] [rbp-E4h]
  __int64 v76; // [rsp+20h] [rbp-E0h]
  _QWORD *v77; // [rsp+28h] [rbp-D8h] BYREF
  _QWORD *v78; // [rsp+30h] [rbp-D0h]
  __int64 v79; // [rsp+38h] [rbp-C8h] BYREF
  __m128i v80; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v81; // [rsp+50h] [rbp-B0h]
  __int128 v82; // [rsp+58h] [rbp-A8h]
  __int64 v83; // [rsp+68h] [rbp-98h]
  __int128 v84; // [rsp+70h] [rbp-90h]
  __int128 v85; // [rsp+80h] [rbp-80h]
  __int128 v86; // [rsp+90h] [rbp-70h]
  __int128 v87; // [rsp+A0h] [rbp-60h]
  __int64 v88; // [rsp+B0h] [rbp-50h]
  char v89; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v90; // [rsp+C0h] [rbp-40h]

  v2.m128i_i64[0] = 0;
  v90 = __readfsqword(0x28u);
  v80 = 0;
  v79 = 0;
  v81 = 0;
  v83 = 0;
  v89 = 0;
  v88 = -1;
  v82 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v87 = 0;
  sub_283C00(&v77, a1, a2, 0.0);
  v76 = a1[8];
  v72 = v77;
  v73 = v78;
  v3 = v78;
  while ( 1 )
  {
    v4 = &v79;
    v5 = (__int64)(v3 + 2);
    v6 = sub_287D00(&v79, (__int64)(v3 + 2), 0);
    if ( v6 == 4 )
    {
      if ( !under_debugger )
        sub_383060(0xC9BCu, 0.0);
      BUG();
    }
    if ( v6 > 4 )
      break;
    if ( !v6 )
    {
      v3 = (_QWORD *)*v3;
      if ( v72 != v3 )
        continue;
    }
    goto LABEL_6;
  }
  if ( v6 - 5 <= 1 )
  {
LABEL_18:
    v28 = 0;
    goto LABEL_19;
  }
LABEL_6:
  if ( v80.m128i_i64[0] <= 2uLL )
    goto LABEL_18;
  v74 = 0;
  v9 = 0;
  v75 = 0;
  do
  {
    v18 = *(_QWORD *)(v81 + 8 * v9);
    if ( v18 )
    {
      v10 = (_QWORD *)j__qalloc_or_throw(32, v5, v7, v8);
      *v10 = -1;
      v13 = v10;
      v10[1] = -4294967226LL;
      v10[3] = 0;
      v10[2] = 0xFFFFFFFFLL;
      *v10 = *(_QWORD *)v18;
      v14 = *(_DWORD *)(v18 + 8);
      *(_QWORD *)v18 = -1;
      LODWORD(v10) = *((_DWORD *)v10 + 2);
      *((_DWORD *)v13 + 2) = v14;
      v15 = *(_DWORD *)(v18 + 12);
      *(_DWORD *)(v18 + 8) = (_DWORD)v10;
      LODWORD(v10) = *((_DWORD *)v13 + 3);
      *((_DWORD *)v13 + 3) = v15;
      v16 = *(_QWORD *)(v18 + 24);
      *(_DWORD *)(v18 + 12) = (_DWORD)v10;
      v17 = v13[3];
      v13[3] = v16;
      *(_QWORD *)(v18 + 24) = v17;
    }
    else
    {
      v19 = (__int64 **)(v83 + 24LL * v75);
      v13 = sub_241330((__int64)v4, v5, 3LL * v75, v8);
      if ( (_QWORD)v87 == *((_QWORD *)&v87 + 1) )
      {
        v21 = *v13;
      }
      else
      {
        v21 = *(_QWORD *)(v87 + 16);
        *v13 = v21;
      }
      if ( v21 == -1 )
      {
        v58 = v19[2];
        *v13 = v58;
        if ( v58 == (__int64 *)-1LL )
          sub_27EDC0(0.0);
      }
      for ( i = *v19; i != v19[1]; i = (__int64 *)*i )
      {
        v23 = v13[3];
        v24 = qalloc_or_throw(48, v5, v20, v11);
        v5 = 0xFFFFFFFFLL;
        *(_QWORD *)(v24 + 24) = -4294967226LL;
        *(_QWORD *)(v24 + 16) = -1;
        *(_QWORD *)(v24 + 40) = 0;
        *(_QWORD *)(v24 + 32) = 0xFFFFFFFFLL;
        *(_QWORD *)v24 = v23;
        v25 = *(__int64 **)(v23 + 8);
        *(_QWORD *)(v24 + 8) = v25;
        *v25 = v24;
        *(_QWORD *)(v23 + 8) = v24;
        ++*(_QWORD *)(v23 + 16);
        v26 = *(_QWORD *)(v24 + 16);
        *(_QWORD *)(v24 + 16) = i[2];
        LODWORD(v25) = *((_DWORD *)i + 6);
        i[2] = v26;
        LODWORD(v26) = *(_DWORD *)(v24 + 24);
        *(_DWORD *)(v24 + 24) = (_DWORD)v25;
        LODWORD(v25) = *((_DWORD *)i + 7);
        *((_DWORD *)i + 6) = v26;
        LODWORD(v26) = *(_DWORD *)(v24 + 28);
        *(_DWORD *)(v24 + 28) = (_DWORD)v25;
        v27 = i[5];
        *((_DWORD *)i + 7) = v26;
        v11 = *(_QWORD *)(v24 + 40);
        *(_QWORD *)(v24 + 40) = v27;
        i[5] = v11;
      }
      ++v75;
    }
    v5 = (__int64)v13;
    v4 = (__int64 *)(v79 + 56 * v9);
    sub_256B30((__int64)v4, (__int64)v13, v79, v11, v12, (__m128)0LL);
    ++v74;
    v7 = v80.m128i_i64[0];
    v9 = v74;
  }
  while ( (unsigned __int64)v74 < v80.m128i_i64[0] );
  if ( v89 )
  {
    v59 = v79;
    if ( v80.m128i_i64[1] < (unsigned __int64)(v80.m128i_i64[0] + 1) )
    {
      v4 = &v79;
      v79 = qvector_reserve((__int64)&v79, v79, v80.m128i_i64[0] + 1, 56);
      v7 = v80.m128i_i64[0];
      v59 = v79;
    }
    v60 = v59 + 56 * v7;
    *(_QWORD *)v60 = -1;
    *(_QWORD *)(v60 + 12) = -1;
    *(_DWORD *)(v60 + 8) = 70;
    *(_OWORD *)(v60 + 24) = 0;
    *(_OWORD *)(v60 + 40) = 0;
    ++v80.m128i_i64[0];
    v63 = sub_241330((__int64)v4, v59, v7, 7 * v7);
    if ( (_QWORD)v87 == *((_QWORD *)&v87 + 1) )
    {
      if ( *v63 != -1 )
      {
LABEL_49:
        v5 = (__int64)v63;
        sub_256B30(v60, (__int64)v63, v61, v62, v64, (__m128)0LL);
        goto LABEL_32;
      }
    }
    else
    {
      v65 = *(_QWORD *)(v87 + 16);
      *v63 = v65;
      if ( v65 != -1 )
      {
LABEL_47:
        for ( j = (__int64 *)v87; j != *((__int64 **)&v87 + 1); j = (__int64 *)*j )
        {
          v67 = v63[3];
          v68 = qalloc_or_throw(48, v59, v61, v62);
          v59 = 0xFFFFFFFFLL;
          *(_QWORD *)(v68 + 24) = -4294967226LL;
          *(_QWORD *)(v68 + 16) = -1;
          *(_QWORD *)(v68 + 40) = 0;
          *(_QWORD *)(v68 + 32) = 0xFFFFFFFFLL;
          *(_QWORD *)v68 = v67;
          v69 = *(__int64 **)(v67 + 8);
          *(_QWORD *)(v68 + 8) = v69;
          *v69 = v68;
          *(_QWORD *)(v67 + 8) = v68;
          ++*(_QWORD *)(v67 + 16);
          v70 = *(_QWORD *)(v68 + 16);
          *(_QWORD *)(v68 + 16) = j[2];
          LODWORD(v69) = *((_DWORD *)j + 6);
          j[2] = v70;
          LODWORD(v70) = *(_DWORD *)(v68 + 24);
          *(_DWORD *)(v68 + 24) = (_DWORD)v69;
          LODWORD(v69) = *((_DWORD *)j + 7);
          *((_DWORD *)j + 6) = v70;
          LODWORD(v70) = *(_DWORD *)(v68 + 28);
          *(_DWORD *)(v68 + 28) = (_DWORD)v69;
          v62 = j[5];
          *((_DWORD *)j + 7) = v70;
          v61 = *(_QWORD *)(v68 + 40);
          *(_QWORD *)(v68 + 40) = v62;
          j[5] = v61;
        }
        goto LABEL_49;
      }
    }
    v71 = v88;
    *v63 = v88;
    if ( v71 == -1 )
      sub_27EDC0(0.0);
    goto LABEL_47;
  }
LABEL_32:
  if ( (_QWORD)v85 )
    *((_QWORD *)&v85 + 1) = v85;
  v36 = j__qalloc_or_throw(136, v5, v7, v8);
  *(_QWORD *)v36 = -1;
  *(_QWORD *)(v36 + 8) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(v36 + 24) = 0;
  *(_QWORD *)(v36 + 16) = 0xFFFFFFFFLL;
  *(_QWORD *)(v36 + 40) = 0;
  *(_QWORD *)(v36 + 48) = 0;
  *(_DWORD *)(v36 + 56) = 0;
  *(_QWORD *)(v36 + 64) = 0;
  *(_QWORD *)(v36 + 72) = 0;
  *(_QWORD *)(v36 + 80) = 0;
  v37 = *((_QWORD *)&v85 + 1);
  *(_OWORD *)(v36 + 88) = 0;
  *(_OWORD *)(v36 + 120) = 0;
  *(_QWORD *)(v36 + 104) = 0;
  *(_QWORD *)(v36 + 112) = 0;
  *(_QWORD *)v36 = *(_QWORD *)v37;
  v38 = *(_DWORD *)(v37 + 8);
  *(_QWORD *)v37 = -1;
  v39 = *(_DWORD *)(v36 + 8);
  *(_DWORD *)(v36 + 8) = v38;
  v40 = *(_DWORD *)(v37 + 12);
  *(_DWORD *)(v37 + 8) = v39;
  v41 = *(_DWORD *)(v36 + 12);
  *(_DWORD *)(v36 + 12) = v40;
  v42 = *(_QWORD *)(v37 + 24);
  *(_DWORD *)(v37 + 12) = v41;
  v43 = *(_QWORD *)(v36 + 24);
  *(_QWORD *)(v36 + 24) = v42;
  v44 = *(_QWORD *)(v37 + 32);
  *(_QWORD *)(v37 + 24) = v43;
  v45 = *(_QWORD *)(v36 + 32);
  *(_QWORD *)(v36 + 32) = v44;
  v46 = *(_QWORD *)(v37 + 40);
  v47 = _mm_loadu_si128(&v80);
  *(_QWORD *)(v37 + 32) = v45;
  v48 = *(_QWORD *)(v36 + 40);
  *(_QWORD *)(v36 + 40) = v46;
  v49 = *(_QWORD *)(v37 + 48);
  *(_QWORD *)(v37 + 40) = v48;
  v50 = *(_QWORD *)(v36 + 48);
  *(_QWORD *)(v36 + 48) = v49;
  LODWORD(v49) = *(_DWORD *)(v37 + 56);
  *(_QWORD *)(v37 + 48) = v50;
  LODWORD(v50) = *(_DWORD *)(v36 + 56);
  *(_DWORD *)(v36 + 56) = v49;
  *(_DWORD *)(v37 + 56) = v50;
  v51 = *(_QWORD *)(v36 + 112);
  v52 = v79;
  v2 = _mm_loadu_si128((const __m128i *)(v36 + 120));
  *(__m128i *)(v36 + 120) = v47;
  v79 = v51;
  v53 = v86;
  *(_QWORD *)(v36 + 112) = v52;
  v54 = *(_QWORD *)(v53 + 24);
  v80 = v2;
  sub_2420C0(v36, v76, v73[2], v54 + 8, *(double *)v2.m128i_i64);
  sub_255050((__int64)(v73 + 2), *(double *)v2.m128i_i64);
  *((_DWORD *)v73 + 6) = 77;
  v73[5] = v36;
  if ( *((_QWORD *)&v86 + 1) )
  {
    for ( k = *v73; (_QWORD *)k != v72; k = v56 )
    {
      v56 = *(_QWORD *)k;
      v57 = *((_QWORD *)&v86 + 1);
      **(_QWORD **)(k + 8) = *(_QWORD *)k;
      *(_QWORD *)(v56 + 8) = *(_QWORD *)(k + 8);
      sub_255050(k + 16, *(double *)v2.m128i_i64);
      qfree(k);
      --v72[2];
      if ( k + 16 == v57 )
        break;
    }
  }
  v28 = 1;
LABEL_19:
  if ( v83 )
  {
    *(_QWORD *)&v84 = 0;
    qfree(v83);
  }
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    qfree(v81);
  }
  v29 = v79;
  if ( v79 )
  {
    v30 = v80.m128i_i64[0];
    if ( v80.m128i_i64[0] )
    {
      v31 = 0;
      v32 = 0;
      do
      {
        v33 = v29 + v31;
        v34 = *(_QWORD *)(v29 + v31 + 32);
        if ( v34 )
        {
          *(_QWORD *)(v33 + 40) = 0;
          qfree(v34);
        }
        ++v32;
        v31 += 56;
        sub_255050(v33, *(double *)v2.m128i_i64);
        v29 = v79;
      }
      while ( v30 != v32 );
    }
    v80.m128i_i64[0] = 0;
    qfree(v29);
  }
  return v28;
}

