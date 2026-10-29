unsigned __int64 __fastcall sub_2CBB60(_QWORD *a1, _QWORD *a2, char a3)
{
  bool v4; // zf
  __int64 v5; // r13
  __int64 v6; // rbx
  __m128i v7; // xmm0
  __int64 v8; // rcx
  char v9; // cl
  int v10; // esi
  int v11; // ecx
  __int64 v12; // r14
  unsigned __int64 (__fastcall *v13)(__int64, __int64); // rcx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rbp
  __int64 v17; // rax
  _QWORD *v18; // rbx
  __int64 v19; // r13
  unsigned __int64 v20; // r12
  __int64 v21; // rbx
  unsigned __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r14
  unsigned __int64 (__fastcall *v26)(__int64, __int64); // rcx
  __int64 v27; // rcx
  __m128i v28; // xmm0
  char v29; // cl
  int v30; // esi
  int v31; // ecx
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // r14
  unsigned __int64 (__fastcall *v35)(__int64, __int64); // rcx
  __int64 v36; // rcx
  __m128i v37; // xmm0
  char v38; // cl
  int v39; // esi
  int v40; // ecx
  __int64 v41; // rdi
  unsigned __int8 (*v42)(void); // rax
  __int64 v43; // rdi
  unsigned __int8 (*v44)(void); // rax
  __m128i v46; // xmm0
  __int64 v47; // r14
  __int64 v48; // r13
  __m128i v49; // xmm0
  __int64 v50; // rdx
  char v51; // dl
  int v52; // ecx
  int v53; // edx
  __int64 v54; // r12
  unsigned __int64 (__fastcall *v55)(__int64, __int64); // rdx
  __int64 v56; // r14
  __int64 v57; // rbp
  __int64 v58; // rax
  _QWORD *v59; // r13
  __int64 v60; // rbp
  __int64 v61; // r13
  __int64 v62; // r12
  __int64 v63; // r14
  unsigned __int64 (__fastcall *v64)(__int64, __int64); // r8
  __m128i v65; // xmm0
  char v66; // si
  int v67; // edi
  int v68; // esi
  __int64 v69; // rdi
  __int64 v70; // r14
  __int64 v71; // r13
  __int64 v72; // r12
  _QWORD *v73; // rbp
  unsigned __int64 v74; // [rsp+8h] [rbp-120h]
  __int64 v75; // [rsp+10h] [rbp-118h]
  __int64 v76; // [rsp+10h] [rbp-118h]
  __int64 v77; // [rsp+10h] [rbp-118h]
  unsigned __int64 v78; // [rsp+18h] [rbp-110h]
  __int64 *v79; // [rsp+18h] [rbp-110h]
  __int64 *v80; // [rsp+20h] [rbp-108h]
  __int64 v81; // [rsp+20h] [rbp-108h]
  __int64 *v82; // [rsp+28h] [rbp-100h]
  unsigned __int64 v83; // [rsp+28h] [rbp-100h]
  __int64 *v84; // [rsp+30h] [rbp-F8h]
  __int64 *i; // [rsp+30h] [rbp-F8h]
  __int64 v88; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v89; // [rsp+58h] [rbp-D0h]
  __m128i v90; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v91; // [rsp+80h] [rbp-A8h]
  char v92[8]; // [rsp+88h] [rbp-A0h] BYREF
  __int128 v93; // [rsp+90h] [rbp-98h]
  unsigned __int64 v94; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v95; // [rsp+B0h] [rbp-78h]
  unsigned __int64 v96; // [rsp+B8h] [rbp-70h] BYREF
  __int64 v97; // [rsp+C0h] [rbp-68h]
  unsigned __int64 v98; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v99; // [rsp+D0h] [rbp-58h]
  int v100; // [rsp+D8h] [rbp-50h]
  int v101; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v102; // [rsp+E8h] [rbp-40h]

  v4 = a1[14] == 0;
  v102 = __readfsqword(0x28u);
  v74 = a1[12];
  if ( v4 )
  {
    if ( a1[1] )
    {
      v78 = 0;
      v80 = a1 + 2;
      do
      {
        switch_dbctx();
        v75 = a2[v78];
        sub_2CB4E0((__int64 *)(v75 + 40), v74);
        v5 = *v80;
        v6 = *v80 + 272 * v80[1];
        if ( *v80 != v6 )
        {
          do
          {
            while ( 1 )
            {
              v12 = *(_QWORD *)(v75 + 40) + 264LL * *(_QWORD *)(v5 + 264);
              v13 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 8LL);
              if ( v13 != sub_2B5C70 )
                break;
              v7 = _mm_loadu_si128((const __m128i *)(v12 + 8));
              v8 = *(_QWORD *)(v12 + 24);
              v94 = 0xFFFFFFFF00000000LL;
              v90 = v7;
              v91 = v8;
              v95 = 0;
              v96 = 0xFFFFFFFF00000000LL;
              v97 = 0;
              v98 = 0xFFFFFFFF00000000LL;
              v99 = 0;
              v93 = 0;
              sub_1253A0((__int64)v92, v12 + 32);
              v100 = *(_DWORD *)(v12 + 112);
              v101 = *(_DWORD *)(v12 + 120);
              *(__m128i *)(v12 + 8) = _mm_loadu_si128((const __m128i *)(v5 + 8));
              *(_DWORD *)(v12 + 24) = *(_DWORD *)(v5 + 24);
              sub_1253A0(v12 + 32, v5 + 32);
              *(_DWORD *)(v12 + 112) = *(_DWORD *)(v5 + 112);
              *(_DWORD *)(v12 + 120) = *(_DWORD *)(v5 + 120);
              *(__m128i *)(v5 + 8) = _mm_load_si128(&v90);
              *(_DWORD *)(v5 + 24) = v91;
              sub_1253A0(v5 + 32, (__int64)v92);
              v5 += 272;
              *(_DWORD *)(v5 - 160) = v100;
              *(_DWORD *)(v5 - 152) = v101;
              sub_11CDA0((__int64)&v98);
              sub_11CDA0((__int64)&v96);
              sub_11CDA0((__int64)&v94);
              v9 = *(_BYTE *)(v12 + 128);
              *(_BYTE *)(v12 + 128) = *(_BYTE *)(v5 - 144);
              v10 = *(_DWORD *)(v5 - 16);
              *(_BYTE *)(v5 - 144) = v9;
              v11 = *(_DWORD *)(v12 + 256);
              *(_DWORD *)(v12 + 256) = v10;
              *(_DWORD *)(v5 - 16) = v11;
              if ( v5 == v6 )
                goto LABEL_9;
            }
            v14 = v5;
            v5 += 272;
            v13(v12, v14);
          }
          while ( v5 != v6 );
LABEL_9:
          v6 = *v80;
        }
        if ( v6 )
        {
          v15 = v80[1];
          if ( v15 )
          {
            v16 = 0;
            do
            {
              v17 = 17 * v16++;
              v18 = (_QWORD *)(16 * v17 + v6);
              *v18 = off_4E1460;
              sub_11CDA0((__int64)(v18 + 28));
              sub_11CDA0((__int64)(v18 + 26));
              sub_11CDA0((__int64)(v18 + 24));
              sub_11CDA0((__int64)(v18 + 12));
              sub_11CDA0((__int64)(v18 + 10));
              sub_11CDA0((__int64)(v18 + 8));
              v6 = *v80;
            }
            while ( v15 != v16 );
          }
          v80[1] = 0;
          qfree(v6);
          *v80 = 0;
          v80[2] = 0;
        }
        ++v78;
        v80 += 3;
      }
      while ( v78 < a1[1] );
      goto LABEL_16;
    }
    if ( a3 )
    {
      v79 = nullptr;
      v19 = *a2;
      v76 = a2[1];
      v82 = (__int64 *)(*a2 + 40LL);
      v84 = (__int64 *)(v76 + 40);
      goto LABEL_19;
    }
    return v102 - __readfsqword(0x28u);
  }
  v46.m128i_i64[0] = 0;
  v88 = 0;
  v89 = 0;
  sub_2CB4E0(&v88, v74);
  v83 = 0;
  for ( i = a1 + 2; v83 < a1[1]; i += 3 )
  {
    switch_dbctx();
    v47 = *i;
    v48 = *i + 272 * i[1];
    if ( *i != v48 )
    {
      do
      {
        while ( 1 )
        {
          v54 = v88 + 264LL * *(_QWORD *)(v47 + 264);
          v55 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 8LL);
          if ( v55 != sub_2B5C70 )
            break;
          v49 = _mm_loadu_si128((const __m128i *)(v54 + 8));
          v50 = *(_QWORD *)(v54 + 24);
          v94 = 0xFFFFFFFF00000000LL;
          v90 = v49;
          v91 = v50;
          v95 = 0;
          v96 = 0xFFFFFFFF00000000LL;
          v97 = 0;
          v98 = 0xFFFFFFFF00000000LL;
          v99 = 0;
          v93 = 0;
          sub_1253A0((__int64)v92, v54 + 32);
          v100 = *(_DWORD *)(v54 + 112);
          v101 = *(_DWORD *)(v54 + 120);
          *(__m128i *)(v54 + 8) = _mm_loadu_si128((const __m128i *)(v47 + 8));
          *(_DWORD *)(v54 + 24) = *(_DWORD *)(v47 + 24);
          sub_1253A0(v54 + 32, v47 + 32);
          *(_DWORD *)(v54 + 112) = *(_DWORD *)(v47 + 112);
          *(_DWORD *)(v54 + 120) = *(_DWORD *)(v47 + 120);
          v46 = _mm_load_si128(&v90);
          *(__m128i *)(v47 + 8) = v46;
          *(_DWORD *)(v47 + 24) = v91;
          sub_1253A0(v47 + 32, (__int64)v92);
          v47 += 272;
          *(_DWORD *)(v47 - 160) = v100;
          *(_DWORD *)(v47 - 152) = v101;
          sub_11CDA0((__int64)&v98);
          sub_11CDA0((__int64)&v96);
          sub_11CDA0((__int64)&v94);
          v51 = *(_BYTE *)(v54 + 128);
          *(_BYTE *)(v54 + 128) = *(_BYTE *)(v47 - 144);
          v52 = *(_DWORD *)(v47 - 16);
          *(_BYTE *)(v47 - 144) = v51;
          v53 = *(_DWORD *)(v54 + 256);
          *(_DWORD *)(v54 + 256) = v52;
          *(_DWORD *)(v47 - 16) = v53;
          if ( v48 == v47 )
            goto LABEL_50;
        }
        v55(v88 + 264LL * *(_QWORD *)(v47 + 264), v47);
        v47 += 272;
      }
      while ( v48 != v47 );
LABEL_50:
      v48 = *i;
    }
    if ( v48 )
    {
      v56 = i[1];
      if ( v56 )
      {
        v57 = 0;
        do
        {
          v58 = 17 * v57++;
          v59 = (_QWORD *)(16 * v58 + v48);
          *v59 = off_4E1460;
          sub_11CDA0((__int64)(v59 + 28));
          sub_11CDA0((__int64)(v59 + 26));
          sub_11CDA0((__int64)(v59 + 24));
          sub_11CDA0((__int64)(v59 + 12));
          sub_11CDA0((__int64)(v59 + 10));
          sub_11CDA0((__int64)(v59 + 8));
          v48 = *i;
        }
        while ( v56 != v57 );
      }
      i[1] = 0;
      qfree(v48);
      *i = 0;
      i[2] = 0;
    }
    v81 = a2[v83];
    sub_2CB4E0((__int64 *)(v81 + 40), v74 - a1[14]);
    if ( v74 )
    {
      v60 = 0;
      v61 = 0;
      v77 = 0;
      do
      {
        if ( *(_DWORD *)(a1[11] + 4 * v61) )
        {
          v62 = v60 + v88;
          v63 = *(_QWORD *)(v81 + 40) + 264 * v77;
          v64 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v63 + 8LL);
          if ( v64 == sub_2B5C70 )
          {
            v65 = _mm_loadu_si128((const __m128i *)(v63 + 8));
            v91 = *(_QWORD *)(v63 + 24);
            v94 = 0xFFFFFFFF00000000LL;
            v95 = 0;
            v96 = 0xFFFFFFFF00000000LL;
            v97 = 0;
            v98 = 0xFFFFFFFF00000000LL;
            v99 = 0;
            v90 = v65;
            v93 = 0;
            sub_1253A0((__int64)v92, v63 + 32);
            v100 = *(_DWORD *)(v63 + 112);
            v101 = *(_DWORD *)(v63 + 120);
            *(__m128i *)(v63 + 8) = _mm_loadu_si128((const __m128i *)(v62 + 8));
            *(_DWORD *)(v63 + 24) = *(_DWORD *)(v62 + 24);
            sub_1253A0(v63 + 32, v62 + 32);
            *(_DWORD *)(v63 + 112) = *(_DWORD *)(v62 + 112);
            *(_DWORD *)(v63 + 120) = *(_DWORD *)(v62 + 120);
            v46 = _mm_load_si128(&v90);
            *(__m128i *)(v62 + 8) = v46;
            *(_DWORD *)(v62 + 24) = v91;
            sub_1253A0(v62 + 32, (__int64)v92);
            *(_DWORD *)(v62 + 112) = v100;
            *(_DWORD *)(v62 + 120) = v101;
            sub_11CDA0((__int64)&v98);
            sub_11CDA0((__int64)&v96);
            sub_11CDA0((__int64)&v94);
            v66 = *(_BYTE *)(v63 + 128);
            *(_BYTE *)(v63 + 128) = *(_BYTE *)(v62 + 128);
            v67 = *(_DWORD *)(v62 + 256);
            *(_BYTE *)(v62 + 128) = v66;
            v68 = *(_DWORD *)(v63 + 256);
            *(_DWORD *)(v63 + 256) = v67;
            *(_DWORD *)(v62 + 256) = v68;
          }
          else
          {
            v64(*(_QWORD *)(v81 + 40) + 264 * v77, v60 + v88);
          }
          ++v77;
        }
        ++v61;
        v60 += 264;
      }
      while ( v61 != v74 );
    }
    else
    {
      v77 = 0;
    }
    if ( *(_QWORD *)(v81 + 48) != v77 )
    {
      if ( !under_debugger )
        sub_383060(0x7AAu, *(double *)v46.m128i_i64);
      BUG();
    }
    ++v83;
  }
  v69 = v88;
  if ( v88 )
  {
    v70 = v89;
    if ( (_QWORD)v89 )
    {
      v71 = 0;
      v72 = 0;
      do
      {
        v73 = (_QWORD *)(v69 + v71);
        ++v72;
        v71 += 264;
        *v73 = off_4E1460;
        sub_11CDA0((__int64)(v73 + 28));
        sub_11CDA0((__int64)(v73 + 26));
        sub_11CDA0((__int64)(v73 + 24));
        sub_11CDA0((__int64)(v73 + 12));
        sub_11CDA0((__int64)(v73 + 10));
        sub_11CDA0((__int64)(v73 + 8));
        v69 = v88;
      }
      while ( v70 != v72 );
    }
    *(_QWORD *)&v89 = 0;
    qfree(v69);
    if ( a3 )
      goto LABEL_17;
    return v102 - __readfsqword(0x28u);
  }
LABEL_16:
  if ( !a3 )
    return v102 - __readfsqword(0x28u);
LABEL_17:
  v79 = nullptr;
  v19 = *a2;
  v82 = (__int64 *)(*a2 + 40LL);
  v76 = a2[1];
  v84 = (__int64 *)(v76 + 40);
  if ( a1[1] > 2u )
    v79 = (__int64 *)(a2[2] + 40LL);
LABEL_19:
  v20 = *(_QWORD *)(v19 + 48);
  if ( v20 )
  {
    v21 = 0;
    v22 = 0;
    v20 = 0;
    do
    {
      v41 = v21 + *(_QWORD *)(v19 + 40);
      v42 = **(unsigned __int8 (***)(void))v41;
      if ( (char *)v42 == (char *)sub_2AF040 )
      {
        if ( *(_DWORD *)(v41 + 120) != *(_DWORD *)(v41 + 248) || sub_1377A0(v41 + 8, v41 + 136) )
        {
LABEL_21:
          if ( v20 < v22 )
          {
            v23 = *(_QWORD *)(v19 + 40);
            v24 = v23 + v21;
            v25 = v23 + 264 * v20;
            v26 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v25 + 8LL);
            if ( v26 == sub_2B5C70 )
            {
              v27 = *(_QWORD *)(v25 + 24);
              v28 = _mm_loadu_si128((const __m128i *)(v25 + 8));
              v95 = 0;
              v91 = v27;
              v94 = 0xFFFFFFFF00000000LL;
              v96 = 0xFFFFFFFF00000000LL;
              v97 = 0;
              v98 = 0xFFFFFFFF00000000LL;
              v99 = 0;
              v90 = v28;
              v93 = 0;
              sub_1253A0((__int64)v92, v25 + 32);
              v100 = *(_DWORD *)(v25 + 112);
              v101 = *(_DWORD *)(v25 + 120);
              *(__m128i *)(v25 + 8) = _mm_loadu_si128((const __m128i *)(v24 + 8));
              *(_DWORD *)(v25 + 24) = *(_DWORD *)(v24 + 24);
              sub_1253A0(v25 + 32, v24 + 32);
              *(_DWORD *)(v25 + 112) = *(_DWORD *)(v24 + 112);
              *(_DWORD *)(v25 + 120) = *(_DWORD *)(v24 + 120);
              *(__m128i *)(v24 + 8) = _mm_load_si128(&v90);
              *(_DWORD *)(v24 + 24) = v91;
              sub_1253A0(v24 + 32, (__int64)v92);
              *(_DWORD *)(v24 + 112) = v100;
              *(_DWORD *)(v24 + 120) = v101;
              sub_11CDA0((__int64)&v98);
              sub_11CDA0((__int64)&v96);
              sub_11CDA0((__int64)&v94);
              v29 = *(_BYTE *)(v25 + 128);
              *(_BYTE *)(v25 + 128) = *(_BYTE *)(v24 + 128);
              v30 = *(_DWORD *)(v24 + 256);
              *(_BYTE *)(v24 + 128) = v29;
              v31 = *(_DWORD *)(v25 + 256);
              *(_DWORD *)(v25 + 256) = v30;
              *(_DWORD *)(v24 + 256) = v31;
            }
            else
            {
              v26(v25, v24);
            }
            v32 = *(_QWORD *)(v76 + 40);
            v33 = v32 + 264 * v20;
            v34 = v32 + v21;
            v35 = *(unsigned __int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v33 + 8LL);
            if ( v35 == sub_2B5C70 )
            {
              v36 = *(_QWORD *)(v33 + 24);
              v37 = _mm_loadu_si128((const __m128i *)(v33 + 8));
              v95 = 0;
              v91 = v36;
              v94 = 0xFFFFFFFF00000000LL;
              v96 = 0xFFFFFFFF00000000LL;
              v97 = 0;
              v98 = 0xFFFFFFFF00000000LL;
              v99 = 0;
              v90 = v37;
              v93 = 0;
              sub_1253A0((__int64)v92, v33 + 32);
              v100 = *(_DWORD *)(v33 + 112);
              v101 = *(_DWORD *)(v33 + 120);
              *(__m128i *)(v33 + 8) = _mm_loadu_si128((const __m128i *)(v34 + 8));
              *(_DWORD *)(v33 + 24) = *(_DWORD *)(v34 + 24);
              sub_1253A0(v33 + 32, v34 + 32);
              *(_DWORD *)(v33 + 112) = *(_DWORD *)(v34 + 112);
              *(_DWORD *)(v33 + 120) = *(_DWORD *)(v34 + 120);
              *(__m128i *)(v34 + 8) = _mm_load_si128(&v90);
              *(_DWORD *)(v34 + 24) = v91;
              sub_1253A0(v34 + 32, (__int64)v92);
              *(_DWORD *)(v34 + 112) = v100;
              *(_DWORD *)(v34 + 120) = v101;
              sub_11CDA0((__int64)&v98);
              sub_11CDA0((__int64)&v96);
              sub_11CDA0((__int64)&v94);
              v38 = *(_BYTE *)(v33 + 128);
              *(_BYTE *)(v33 + 128) = *(_BYTE *)(v34 + 128);
              v39 = *(_DWORD *)(v34 + 256);
              *(_BYTE *)(v34 + 128) = v38;
              v40 = *(_DWORD *)(v33 + 256);
              *(_DWORD *)(v33 + 256) = v39;
              *(_DWORD *)(v34 + 256) = v40;
            }
            else
            {
              v35(v33, v34);
            }
            if ( v79 )
              (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(*v79 + 264 * v20) + 8LL))(
                *v79 + 264 * v20,
                v21 + *v79);
          }
          ++v20;
          goto LABEL_29;
        }
      }
      else if ( v42() )
      {
        goto LABEL_21;
      }
      v43 = v21 + *(_QWORD *)(v76 + 40);
      v44 = **(unsigned __int8 (***)(void))v43;
      if ( (char *)v44 == (char *)sub_2AF040 )
      {
        if ( *(_DWORD *)(v43 + 120) != *(_DWORD *)(v43 + 248) || sub_1377A0(v43 + 8, v43 + 136) )
          goto LABEL_21;
      }
      else if ( v44() )
      {
        goto LABEL_21;
      }
LABEL_29:
      ++v22;
      v21 += 264;
    }
    while ( v22 < *(_QWORD *)(v19 + 48) );
  }
  switch_dbctx();
  sub_2CB4E0(v82, v20);
  switch_dbctx();
  sub_2CB4E0(v84, v20);
  if ( !v79 )
    return v102 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2CB4E0(v79, v20);
}

