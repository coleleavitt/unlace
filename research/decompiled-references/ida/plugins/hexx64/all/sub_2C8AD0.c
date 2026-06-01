unsigned __int64 __fastcall sub_2C8AD0(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 *v3; // rbp
  bool v4; // zf
  unsigned __int64 v5; // r15
  __int64 *v6; // r13
  __int64 *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r13
  __m128i v14; // xmm0
  __m128i v15; // xmm6
  __int64 v16; // rbx
  int v17; // r10d
  __int16 v18; // r9
  char v19; // si
  __int8 v20; // cl
  __int64 v21; // r12
  __int64 v22; // r11
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rdi
  __m128i v26; // xmm7
  int v27; // esi
  int v28; // ecx
  __int64 v29; // r15
  __int64 (__fastcall *v30)(__int64, __int64); // rcx
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 i; // rbx
  _QWORD *v34; // rdi
  __int64 v35; // rax
  bool v36; // cc
  __int64 v37; // r15
  __int64 v38; // r13
  unsigned __int64 v39; // rbp
  __int64 v40; // rbx
  unsigned __int64 v41; // r12
  unsigned __int8 (***v42)(void); // rdi
  unsigned __int8 (*v43)(void); // rax
  __int64 v44; // rsi
  unsigned __int8 (***v45)(void); // rdi
  unsigned __int8 (*v46)(void); // rax
  __m128i v48; // xmm0
  __int64 v49; // r15
  __int64 v50; // r13
  __m128i v51; // xmm0
  __m128i v52; // xmm2
  __int64 v53; // r12
  int v54; // r10d
  __int16 v55; // r9
  __int8 v56; // r8
  char v57; // si
  __int64 v58; // rbx
  __int64 *v59; // r11
  __int64 v60; // rdi
  __int64 v61; // rdi
  __m128i v62; // xmm3
  int v63; // edi
  int v64; // esi
  __int64 v65; // r14
  __int64 (__fastcall *v66)(__int64, __int64); // r8
  __int64 *v67; // r14
  __int64 v68; // r12
  __int64 j; // rbx
  _QWORD *v70; // r13
  __int64 v71; // rdi
  __int64 *v72; // rbx
  __int64 v73; // r12
  __int64 *v74; // rbx
  __int64 *v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rbx
  __int64 *v78; // rax
  __int64 (__fastcall *v79)(__int64, __int64); // r10
  __int64 *v80; // rsi
  __m128i v81; // xmm0
  __m128i v82; // xmm6
  __int64 v83; // r14
  __int64 v84; // r10
  int v85; // edi
  __int64 v86; // r13
  __int64 v87; // r11
  __int64 v88; // rdi
  __int64 v89; // rdi
  __m128i v90; // xmm7
  int v91; // r10d
  int v92; // edi
  __int64 v93; // rdi
  __int64 v94; // r13
  __int64 v95; // r12
  __int64 v96; // rbx
  _QWORD *v97; // rax
  __int64 v98; // rdi
  __m128i v99; // [rsp+0h] [rbp-118h] BYREF
  __int64 *v100; // [rsp+10h] [rbp-108h]
  __int64 *v101; // [rsp+18h] [rbp-100h]
  __m128i v102; // [rsp+20h] [rbp-F8h] BYREF
  __int64 *v103; // [rsp+30h] [rbp-E8h]
  __int64 *v104; // [rsp+38h] [rbp-E0h]
  __m128i v105; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v106; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v107; // [rsp+60h] [rbp-B8h]
  __int64 *v108; // [rsp+68h] [rbp-B0h]
  __int64 *v109; // [rsp+70h] [rbp-A8h]
  _QWORD *v110; // [rsp+78h] [rbp-A0h]
  __int64 *v111; // [rsp+80h] [rbp-98h]
  int v112; // [rsp+8Ch] [rbp-8Ch]
  __m128i v113; // [rsp+90h] [rbp-88h]
  __m128i v114; // [rsp+A0h] [rbp-78h]
  __m128i v115; // [rsp+B0h] [rbp-68h]
  __int64 v116; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v117; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v118; // [rsp+D8h] [rbp-40h]

  v3 = a1;
  v4 = a1[14] == 0;
  v110 = a2;
  v112 = a3;
  v118 = __readfsqword(0x28u);
  v100 = (__int64 *)a1[12];
  if ( v4 )
  {
    if ( !a1[1] )
    {
      if ( (_BYTE)v112 )
      {
        v100 = nullptr;
        v37 = *v110;
        v38 = v110[1];
        v101 = (__int64 *)(*v110 + 40LL);
        v102.m128i_i64[0] = v38 + 40;
        goto LABEL_26;
      }
      return v118 - __readfsqword(0x28u);
    }
    v111 = a1;
    v5 = 0;
    v6 = a2;
    v7 = a1 + 2;
    do
    {
      switch_dbctx();
      v8 = v6[v5];
      sub_2C8670((__int64 *)(v8 + 40), (unsigned __int64)v100);
      v9 = *v7;
      v10 = *v7 + 96 * v7[1];
      if ( *v7 != v10 )
      {
        v108 = v7;
        v11 = v8;
        v12 = v10;
        v109 = v6;
        v13 = v9;
        v107 = v5;
        do
        {
          while ( 1 )
          {
            v29 = *(_QWORD *)(v11 + 40) + 88LL * *(_QWORD *)(v13 + 88);
            v30 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 8LL);
            if ( v30 == sub_2B1530 )
              break;
            v31 = v13;
            v13 += 96;
            v30(v29, v31);
            if ( v13 == v12 )
              goto LABEL_13;
          }
          v14 = _mm_loadu_si128((const __m128i *)(v29 + 8));
          *(_QWORD *)(v29 + 8) = *(_QWORD *)(v13 + 8);
          *(_DWORD *)(v29 + 16) = *(_DWORD *)(v13 + 16);
          v115 = v14;
          *(_QWORD *)(v13 + 8) = v14.m128i_i64[0];
          *(_DWORD *)(v13 + 16) = v115.m128i_i32[2];
          v15 = _mm_loadu_si128((const __m128i *)(v29 + 40));
          v16 = *(_QWORD *)(v29 + 32);
          *(_OWORD *)(v29 + 40) = 0;
          v17 = *(_DWORD *)(v29 + 24);
          v18 = *(_WORD *)(v29 + 28);
          v19 = *(_BYTE *)(v29 + 30);
          v99 = v15;
          *(_QWORD *)(v29 + 32) = 0;
          v20 = *(_BYTE *)(v29 + 31);
          v21 = *(_QWORD *)(v29 + 56);
          *(_DWORD *)(v29 + 24) = *(_DWORD *)(v13 + 24);
          *(_BYTE *)(v29 + 28) = *(_BYTE *)(v13 + 28);
          *(_BYTE *)(v29 + 29) = *(_BYTE *)(v13 + 29);
          *(_BYTE *)(v29 + 30) = *(_BYTE *)(v13 + 30);
          *(_BYTE *)(v29 + 31) = *(_BYTE *)(v13 + 31);
          v22 = *(_QWORD *)(v13 + 32);
          v23 = _mm_loadu_si128((const __m128i *)(v13 + 40));
          *(_QWORD *)(v13 + 32) = 0;
          *(_OWORD *)(v13 + 40) = 0;
          v24 = *(_QWORD *)(v29 + 32);
          if ( v24 )
          {
            *(_QWORD *)(v29 + 40) = 0;
            v106.m128i_i64[0] = v22;
            v105.m128i_i8[0] = v20;
            LOBYTE(v104) = v19;
            LODWORD(v103) = v17;
            LOWORD(v101) = v18;
            v102 = v23;
            qfree(v24);
            v22 = v106.m128i_i64[0];
            v20 = v105.m128i_i8[0];
            v19 = (char)v104;
            v17 = (int)v103;
            v23 = _mm_load_si128(&v102);
            v18 = (__int16)v101;
          }
          *(_QWORD *)(v29 + 32) = v22;
          *(__m128i *)(v29 + 40) = v23;
          *(_QWORD *)(v29 + 56) = *(_QWORD *)(v13 + 56);
          v25 = *(_QWORD *)(v13 + 32);
          *(_DWORD *)(v13 + 24) = v17;
          *(_WORD *)(v13 + 28) = v18;
          *(_BYTE *)(v13 + 30) = v19;
          *(_BYTE *)(v13 + 31) = v20;
          if ( v25 )
          {
            *(_QWORD *)(v13 + 40) = 0;
            qfree(v25);
          }
          v26 = _mm_load_si128(&v99);
          v27 = *(_DWORD *)(v13 + 80);
          *(_QWORD *)(v13 + 32) = v16;
          v13 += 96;
          *(_QWORD *)(v13 - 40) = v21;
          *(__m128i *)(v13 - 56) = v26;
          v28 = *(_DWORD *)(v29 + 80);
          *(_DWORD *)(v29 + 80) = v27;
          *(_DWORD *)(v13 - 16) = v28;
        }
        while ( v13 != v12 );
LABEL_13:
        v7 = v108;
        v5 = v107;
        v6 = v109;
        v10 = *v108;
      }
      if ( v10 )
      {
        v32 = v7[1];
        if ( v32 )
        {
          for ( i = 0; i != v32; ++i )
          {
            v34 = (_QWORD *)(96 * i + v10);
            *v34 = off_4E12A8;
            v35 = v34[4];
            if ( v35 )
            {
              v34[5] = 0;
              qfree(v35);
            }
            v10 = *v7;
          }
        }
        v7[1] = 0;
        qfree(v10);
        *v7 = 0;
        v7[2] = 0;
      }
      ++v5;
      v7 += 3;
    }
    while ( v5 < v111[1] );
    v3 = v111;
  }
  else
  {
    v48.m128i_i64[0] = 0;
    v116 = 0;
    v111 = &v116;
    v117 = 0;
    sub_2C8670(&v116, (unsigned __int64)v100);
    v4 = a1[1] == 0;
    v107 = 0;
    v108 = a1 + 2;
    if ( !v4 )
    {
      do
      {
        switch_dbctx();
        v49 = *v108;
        v50 = *v108 + 96 * v108[1];
        if ( *v108 != v50 )
        {
          do
          {
            while ( 1 )
            {
              v65 = v116 + 88LL * *(_QWORD *)(v49 + 88);
              v66 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 8LL);
              if ( v66 == sub_2B1530 )
                break;
              v66(v116 + 88LL * *(_QWORD *)(v49 + 88), v49);
              v49 += 96;
              if ( v50 == v49 )
                goto LABEL_54;
            }
            v51 = _mm_loadu_si128((const __m128i *)(v65 + 8));
            *(_QWORD *)(v65 + 8) = *(_QWORD *)(v49 + 8);
            *(_DWORD *)(v65 + 16) = *(_DWORD *)(v49 + 16);
            v114 = v51;
            *(_QWORD *)(v49 + 8) = v51.m128i_i64[0];
            *(_DWORD *)(v49 + 16) = v114.m128i_i32[2];
            v52 = _mm_loadu_si128((const __m128i *)(v65 + 40));
            v53 = *(_QWORD *)(v65 + 32);
            *(_OWORD *)(v65 + 40) = 0;
            v54 = *(_DWORD *)(v65 + 24);
            v55 = *(_WORD *)(v65 + 28);
            v56 = *(_BYTE *)(v65 + 30);
            v99 = v52;
            *(_QWORD *)(v65 + 32) = 0;
            v57 = *(_BYTE *)(v65 + 31);
            v58 = *(_QWORD *)(v65 + 56);
            *(_DWORD *)(v65 + 24) = *(_DWORD *)(v49 + 24);
            *(_BYTE *)(v65 + 28) = *(_BYTE *)(v49 + 28);
            *(_BYTE *)(v65 + 29) = *(_BYTE *)(v49 + 29);
            *(_BYTE *)(v65 + 30) = *(_BYTE *)(v49 + 30);
            *(_BYTE *)(v65 + 31) = *(_BYTE *)(v49 + 31);
            v59 = *(__int64 **)(v49 + 32);
            v48 = _mm_loadu_si128((const __m128i *)(v49 + 40));
            *(_QWORD *)(v49 + 32) = 0;
            *(_OWORD *)(v49 + 40) = 0;
            v60 = *(_QWORD *)(v65 + 32);
            if ( v60 )
            {
              *(_QWORD *)(v65 + 40) = 0;
              v105.m128i_i16[0] = v55;
              v104 = v59;
              LOBYTE(v103) = v57;
              v102.m128i_i8[0] = v56;
              LODWORD(v101) = v54;
              v106 = v48;
              qfree(v60);
              v48 = _mm_load_si128(&v106);
              v55 = v105.m128i_i16[0];
              v59 = v104;
              v57 = (char)v103;
              v56 = v102.m128i_i8[0];
              v54 = (int)v101;
            }
            *(_QWORD *)(v65 + 32) = v59;
            *(__m128i *)(v65 + 40) = v48;
            *(_QWORD *)(v65 + 56) = *(_QWORD *)(v49 + 56);
            v61 = *(_QWORD *)(v49 + 32);
            *(_DWORD *)(v49 + 24) = v54;
            *(_WORD *)(v49 + 28) = v55;
            *(_BYTE *)(v49 + 30) = v56;
            *(_BYTE *)(v49 + 31) = v57;
            if ( v61 )
            {
              *(_QWORD *)(v49 + 40) = 0;
              qfree(v61);
            }
            v62 = _mm_load_si128(&v99);
            v63 = *(_DWORD *)(v49 + 80);
            *(_QWORD *)(v49 + 32) = v53;
            v49 += 96;
            *(_QWORD *)(v49 - 40) = v58;
            *(__m128i *)(v49 - 56) = v62;
            v64 = *(_DWORD *)(v65 + 80);
            *(_DWORD *)(v65 + 80) = v63;
            *(_DWORD *)(v49 - 16) = v64;
          }
          while ( v50 != v49 );
LABEL_54:
          v50 = *v108;
        }
        if ( v50 )
        {
          v67 = v108;
          v68 = v108[1];
          if ( v68 )
          {
            for ( j = 0; j != v68; ++j )
            {
              v70 = (_QWORD *)(96 * j + v50);
              v71 = v70[4];
              *v70 = off_4E12A8;
              if ( v71 )
              {
                v70[5] = 0;
                qfree(v71);
              }
              v50 = *v67;
            }
          }
          v72 = v108;
          v108[1] = 0;
          qfree(v50);
          *v72 = 0;
          v72[2] = 0;
        }
        v73 = v110[v107];
        v74 = v100;
        sub_2C8670((__int64 *)(v73 + 40), (unsigned __int64)v100 - v3[14]);
        if ( v74 )
        {
          v75 = nullptr;
          v76 = 0;
          v77 = 0;
          do
          {
            if ( *(_DWORD *)(v3[11] + 4 * v76) )
            {
              v78 = (__int64 *)(*(_QWORD *)(v73 + 40) + 88 * v77);
              v79 = *(__int64 (__fastcall **)(__int64, __int64))(*v78 + 8);
              v80 = (__int64 *)((char *)v75 + v116);
              if ( v79 == sub_2B1530 )
              {
                v81 = _mm_loadu_si128((const __m128i *)(v78 + 1));
                v78[1] = v80[1];
                *((_DWORD *)v78 + 4) = *((_DWORD *)v80 + 4);
                v113 = v81;
                v80[1] = v81.m128i_i64[0];
                *((_DWORD *)v80 + 4) = v113.m128i_i32[2];
                v82 = _mm_loadu_si128((const __m128i *)(v78 + 5));
                v83 = v78[4];
                *(_OWORD *)(v78 + 5) = 0;
                v84 = v78[3];
                v78[4] = 0;
                v85 = *((_DWORD *)v80 + 6);
                v86 = v78[7];
                v99 = v82;
                *((_DWORD *)v78 + 6) = v85;
                *((_BYTE *)v78 + 28) = *((_BYTE *)v80 + 28);
                *((_BYTE *)v78 + 29) = *((_BYTE *)v80 + 29);
                *((_BYTE *)v78 + 30) = *((_BYTE *)v80 + 30);
                *((_BYTE *)v78 + 31) = *((_BYTE *)v80 + 31);
                v87 = v80[4];
                v48 = _mm_loadu_si128((const __m128i *)(v80 + 5));
                v80[4] = 0;
                *(_OWORD *)(v80 + 5) = 0;
                v88 = v78[4];
                if ( v88 )
                {
                  v78[5] = 0;
                  v109 = v75;
                  v106.m128i_i64[0] = v87;
                  v104 = v80;
                  v103 = (__int64 *)v76;
                  v102.m128i_i64[0] = v84;
                  v101 = v78;
                  v105 = v48;
                  qfree(v88);
                  v75 = v109;
                  v87 = v106.m128i_i64[0];
                  v48 = _mm_load_si128(&v105);
                  v80 = v104;
                  v76 = (__int64)v103;
                  v84 = v102.m128i_i64[0];
                  v78 = v101;
                }
                v78[4] = v87;
                *(__m128i *)(v78 + 5) = v48;
                v78[7] = v80[7];
                v89 = v80[4];
                v80[3] = v84;
                if ( v89 )
                {
                  v80[5] = 0;
                  v104 = v75;
                  v103 = v78;
                  v102.m128i_i64[0] = v76;
                  v101 = v80;
                  qfree(v89);
                  v75 = v104;
                  v78 = v103;
                  v76 = v102.m128i_i64[0];
                  v80 = v101;
                }
                v90 = _mm_load_si128(&v99);
                v91 = *((_DWORD *)v80 + 20);
                v80[4] = v83;
                v80[7] = v86;
                *(__m128i *)(v80 + 5) = v90;
                v92 = *((_DWORD *)v78 + 20);
                *((_DWORD *)v78 + 20) = v91;
                *((_DWORD *)v80 + 20) = v92;
              }
              else
              {
                v101 = v75;
                v99.m128i_i64[0] = v76;
                v79((__int64)v78, (__int64)v80);
                v76 = v99.m128i_i64[0];
                v75 = v101;
              }
              ++v77;
            }
            ++v76;
            v75 += 11;
          }
          while ( (__int64 *)v76 != v100 );
        }
        else
        {
          v77 = 0;
        }
        if ( *(_QWORD *)(v73 + 48) != v77 )
        {
          if ( !under_debugger )
            sub_383060(0x7AAu, *(double *)v48.m128i_i64);
          BUG();
        }
        ++v107;
        v108 += 3;
      }
      while ( v107 < v3[1] );
    }
    v93 = v116;
    if ( v116 )
    {
      v94 = v117;
      if ( (_QWORD)v117 )
      {
        v95 = 0;
        v96 = 0;
        do
        {
          v97 = (_QWORD *)(v93 + v95);
          v98 = *(_QWORD *)(v93 + v95 + 32);
          *v97 = off_4E12A8;
          if ( v98 )
          {
            v97[5] = 0;
            qfree(v98);
          }
          ++v96;
          v93 = v116;
          v95 += 88;
        }
        while ( v94 != v96 );
      }
      *(_QWORD *)&v117 = 0;
      qfree(v93);
    }
  }
  if ( !(_BYTE)v112 )
    return v118 - __readfsqword(0x28u);
  v36 = (unsigned __int64)v3[1] <= 2;
  v100 = nullptr;
  v37 = *v110;
  v38 = v110[1];
  v101 = (__int64 *)(*v110 + 40LL);
  v102.m128i_i64[0] = v38 + 40;
  if ( !v36 )
  {
    v99.m128i_i64[0] = v110[2];
    v100 = (__int64 *)(v99.m128i_i64[0] + 40);
  }
LABEL_26:
  v39 = *(_QWORD *)(v37 + 48);
  if ( v39 )
  {
    v40 = 0;
    v41 = 0;
    v39 = 0;
    do
    {
      v45 = (unsigned __int8 (***)(void))(v40 + *(_QWORD *)(v37 + 40));
      v46 = **v45;
      if ( (char *)v46 == (char *)sub_2AD660 )
      {
        if ( (unsigned int)sub_257C40((__int64)(v45 + 1), (__int64)(v45 + 8)) )
          goto LABEL_31;
      }
      else if ( v46() )
      {
        goto LABEL_31;
      }
      v42 = (unsigned __int8 (***)(void))(v40 + *(_QWORD *)(v38 + 40));
      v43 = **v42;
      if ( (char *)v43 == (char *)sub_2AD660 )
      {
        if ( (unsigned int)sub_257C40((__int64)(v42 + 1), (__int64)(v42 + 8)) )
          goto LABEL_31;
      }
      else if ( v43() )
      {
LABEL_31:
        if ( v39 < v41 )
        {
          v44 = *(_QWORD *)(v37 + 40);
          v99.m128i_i64[0] = 88 * v39;
          (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v44 + 88 * v39) + 8LL))(
            v44 + 88 * v39,
            v40 + v44);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v38 + 40) + v99.m128i_i64[0]) + 8LL))(
            *(_QWORD *)(v38 + 40) + v99.m128i_i64[0],
            v40 + *(_QWORD *)(v38 + 40));
          if ( v100 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*v100 + v99.m128i_i64[0]) + 8LL))(
              *v100 + v99.m128i_i64[0],
              v40 + *v100);
        }
        ++v39;
      }
      ++v41;
      v40 += 88;
    }
    while ( v41 < *(_QWORD *)(v37 + 48) );
  }
  switch_dbctx();
  sub_2C8670(v101, v39);
  switch_dbctx();
  sub_2C8670((__int64 *)v102.m128i_i64[0], v39);
  if ( !v100 )
    return v118 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2C8670(v100, v39);
}

