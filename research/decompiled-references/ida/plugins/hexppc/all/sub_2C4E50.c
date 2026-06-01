unsigned __int64 __fastcall sub_2C4E50(__int64 *a1, _QWORD *a2, int a3)
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
  __m128i v25; // xmm7
  int v26; // esi
  int v27; // ecx
  __int64 v28; // r15
  __int64 (__fastcall *v29)(__int64, __int64); // rcx
  __int64 v30; // rsi
  __int64 v31; // r12
  __int64 i; // rbx
  _QWORD *v33; // rdi
  bool v34; // cc
  __int64 v35; // r15
  __int64 v36; // r13
  unsigned __int64 v37; // rbp
  __int64 v38; // rbx
  unsigned __int64 v39; // r12
  unsigned __int8 (***v40)(void); // rdi
  unsigned __int8 (*v41)(void); // rax
  __int64 v42; // rsi
  unsigned __int8 (***v43)(void); // rdi
  unsigned __int8 (*v44)(void); // rax
  __int64 v46; // r15
  __int64 v47; // r13
  __m128i v48; // xmm0
  __m128i v49; // xmm2
  __int64 v50; // r12
  int v51; // r10d
  __int16 v52; // r9
  __int8 v53; // r8
  char v54; // si
  __int64 v55; // rbx
  __int64 *v56; // r11
  __m128i v57; // xmm0
  __int64 v58; // rdi
  __m128i v59; // xmm3
  int v60; // edi
  int v61; // esi
  __int64 v62; // r14
  __int64 (__fastcall *v63)(__int64, __int64); // r8
  __int64 *v64; // r14
  __int64 v65; // r12
  __int64 j; // rbx
  _QWORD *v67; // r13
  __int64 v68; // rdi
  __int64 *v69; // rbx
  __int64 v70; // r12
  __int64 *v71; // rbx
  __int64 *v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rbx
  __int64 *v75; // rax
  __int64 (__fastcall *v76)(__int64, __int64); // r10
  __int64 *v77; // rsi
  __m128i v78; // xmm0
  __m128i v79; // xmm6
  __int64 v80; // r14
  __int64 v81; // r10
  int v82; // edi
  __int64 v83; // r13
  __int64 v84; // r11
  __m128i v85; // xmm0
  __int64 v86; // rdi
  __m128i v87; // xmm7
  int v88; // r10d
  int v89; // edi
  __int64 v90; // rdi
  __int64 v91; // r13
  __int64 v92; // r12
  __int64 v93; // rbx
  _QWORD *v94; // rax
  __int64 v95; // rdi
  __m128i v96; // [rsp+0h] [rbp-118h] BYREF
  __int64 *v97; // [rsp+10h] [rbp-108h]
  __int64 *v98; // [rsp+18h] [rbp-100h]
  __m128i v99; // [rsp+20h] [rbp-F8h] BYREF
  __int64 *v100; // [rsp+30h] [rbp-E8h]
  __int64 *v101; // [rsp+38h] [rbp-E0h]
  __m128i v102; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v103; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v104; // [rsp+60h] [rbp-B8h]
  __int64 *v105; // [rsp+68h] [rbp-B0h]
  __int64 *v106; // [rsp+70h] [rbp-A8h]
  _QWORD *v107; // [rsp+78h] [rbp-A0h]
  __int64 *v108; // [rsp+80h] [rbp-98h]
  int v109; // [rsp+8Ch] [rbp-8Ch]
  __m128i v110; // [rsp+90h] [rbp-88h]
  __m128i v111; // [rsp+A0h] [rbp-78h]
  __m128i v112; // [rsp+B0h] [rbp-68h]
  __int64 v113; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v114; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v115; // [rsp+D8h] [rbp-40h]

  v3 = a1;
  v4 = a1[14] == 0;
  v107 = a2;
  v109 = a3;
  v115 = __readfsqword(0x28u);
  v97 = (__int64 *)a1[12];
  if ( v4 )
  {
    if ( !a1[1] )
    {
      if ( (_BYTE)v109 )
      {
        v97 = nullptr;
        v35 = *v107;
        v36 = v107[1];
        v98 = (__int64 *)(*v107 + 40LL);
        v99.m128i_i64[0] = v36 + 40;
        goto LABEL_26;
      }
      return v115 - __readfsqword(0x28u);
    }
    v108 = a1;
    v5 = 0;
    v6 = a2;
    v7 = a1 + 2;
    do
    {
      switch_dbctx();
      v8 = v6[v5];
      sub_2C49F0((__int64 *)(v8 + 40), (unsigned __int64)v97);
      v9 = *v7;
      v10 = *v7 + 96 * v7[1];
      if ( *v7 != v10 )
      {
        v105 = v7;
        v11 = v8;
        v12 = v10;
        v106 = v6;
        v13 = v9;
        v104 = v5;
        do
        {
          while ( 1 )
          {
            v28 = *(_QWORD *)(v11 + 40) + 88LL * *(_QWORD *)(v13 + 88);
            v29 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 8LL);
            if ( v29 == sub_2AD8B0 )
              break;
            v30 = v13;
            v13 += 96;
            v29(v28, v30);
            if ( v13 == v12 )
              goto LABEL_13;
          }
          v14 = _mm_loadu_si128((const __m128i *)(v28 + 8));
          *(_QWORD *)(v28 + 8) = *(_QWORD *)(v13 + 8);
          *(_DWORD *)(v28 + 16) = *(_DWORD *)(v13 + 16);
          v112 = v14;
          *(_QWORD *)(v13 + 8) = v14.m128i_i64[0];
          *(_DWORD *)(v13 + 16) = v112.m128i_i32[2];
          v15 = _mm_loadu_si128((const __m128i *)(v28 + 40));
          v16 = *(_QWORD *)(v28 + 32);
          *(_OWORD *)(v28 + 40) = 0;
          v17 = *(_DWORD *)(v28 + 24);
          v18 = *(_WORD *)(v28 + 28);
          v19 = *(_BYTE *)(v28 + 30);
          v96 = v15;
          *(_QWORD *)(v28 + 32) = 0;
          v20 = *(_BYTE *)(v28 + 31);
          v21 = *(_QWORD *)(v28 + 56);
          *(_DWORD *)(v28 + 24) = *(_DWORD *)(v13 + 24);
          *(_BYTE *)(v28 + 28) = *(_BYTE *)(v13 + 28);
          *(_BYTE *)(v28 + 29) = *(_BYTE *)(v13 + 29);
          *(_BYTE *)(v28 + 30) = *(_BYTE *)(v13 + 30);
          *(_BYTE *)(v28 + 31) = *(_BYTE *)(v13 + 31);
          v22 = *(_QWORD *)(v13 + 32);
          v23 = _mm_loadu_si128((const __m128i *)(v13 + 40));
          *(_QWORD *)(v13 + 32) = 0;
          *(_OWORD *)(v13 + 40) = 0;
          if ( *(_QWORD *)(v28 + 32) )
          {
            *(_QWORD *)(v28 + 40) = 0;
            v103.m128i_i64[0] = v22;
            v102.m128i_i8[0] = v20;
            LOBYTE(v101) = v19;
            LODWORD(v100) = v17;
            LOWORD(v98) = v18;
            v99 = v23;
            qfree();
            v22 = v103.m128i_i64[0];
            v20 = v102.m128i_i8[0];
            v19 = (char)v101;
            v17 = (int)v100;
            v23 = _mm_load_si128(&v99);
            v18 = (__int16)v98;
          }
          *(_QWORD *)(v28 + 32) = v22;
          *(__m128i *)(v28 + 40) = v23;
          *(_QWORD *)(v28 + 56) = *(_QWORD *)(v13 + 56);
          v24 = *(_QWORD *)(v13 + 32);
          *(_DWORD *)(v13 + 24) = v17;
          *(_WORD *)(v13 + 28) = v18;
          *(_BYTE *)(v13 + 30) = v19;
          *(_BYTE *)(v13 + 31) = v20;
          if ( v24 )
          {
            *(_QWORD *)(v13 + 40) = 0;
            qfree();
          }
          v25 = _mm_load_si128(&v96);
          v26 = *(_DWORD *)(v13 + 80);
          *(_QWORD *)(v13 + 32) = v16;
          v13 += 96;
          *(_QWORD *)(v13 - 40) = v21;
          *(__m128i *)(v13 - 56) = v25;
          v27 = *(_DWORD *)(v28 + 80);
          *(_DWORD *)(v28 + 80) = v26;
          *(_DWORD *)(v13 - 16) = v27;
        }
        while ( v13 != v12 );
LABEL_13:
        v7 = v105;
        v5 = v104;
        v6 = v106;
        v10 = *v105;
      }
      if ( v10 )
      {
        v31 = v7[1];
        if ( v31 )
        {
          for ( i = 0; i != v31; ++i )
          {
            v33 = (_QWORD *)(96 * i + v10);
            *v33 = off_4CE3C8;
            if ( v33[4] )
            {
              v33[5] = 0;
              qfree();
            }
            v10 = *v7;
          }
        }
        v7[1] = 0;
        qfree();
        *v7 = 0;
        v7[2] = 0;
      }
      ++v5;
      v7 += 3;
    }
    while ( v5 < v108[1] );
    v3 = v108;
  }
  else
  {
    v113 = 0;
    v108 = &v113;
    v114 = 0;
    sub_2C49F0(&v113, (unsigned __int64)v97);
    v4 = a1[1] == 0;
    v104 = 0;
    v105 = a1 + 2;
    if ( !v4 )
    {
      do
      {
        switch_dbctx();
        v46 = *v105;
        v47 = *v105 + 96 * v105[1];
        if ( *v105 != v47 )
        {
          do
          {
            while ( 1 )
            {
              v62 = v113 + 88LL * *(_QWORD *)(v46 + 88);
              v63 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 8LL);
              if ( v63 == sub_2AD8B0 )
                break;
              v63(v113 + 88LL * *(_QWORD *)(v46 + 88), v46);
              v46 += 96;
              if ( v47 == v46 )
                goto LABEL_54;
            }
            v48 = _mm_loadu_si128((const __m128i *)(v62 + 8));
            *(_QWORD *)(v62 + 8) = *(_QWORD *)(v46 + 8);
            *(_DWORD *)(v62 + 16) = *(_DWORD *)(v46 + 16);
            v111 = v48;
            *(_QWORD *)(v46 + 8) = v48.m128i_i64[0];
            *(_DWORD *)(v46 + 16) = v111.m128i_i32[2];
            v49 = _mm_loadu_si128((const __m128i *)(v62 + 40));
            v50 = *(_QWORD *)(v62 + 32);
            *(_OWORD *)(v62 + 40) = 0;
            v51 = *(_DWORD *)(v62 + 24);
            v52 = *(_WORD *)(v62 + 28);
            v53 = *(_BYTE *)(v62 + 30);
            v96 = v49;
            *(_QWORD *)(v62 + 32) = 0;
            v54 = *(_BYTE *)(v62 + 31);
            v55 = *(_QWORD *)(v62 + 56);
            *(_DWORD *)(v62 + 24) = *(_DWORD *)(v46 + 24);
            *(_BYTE *)(v62 + 28) = *(_BYTE *)(v46 + 28);
            *(_BYTE *)(v62 + 29) = *(_BYTE *)(v46 + 29);
            *(_BYTE *)(v62 + 30) = *(_BYTE *)(v46 + 30);
            *(_BYTE *)(v62 + 31) = *(_BYTE *)(v46 + 31);
            v56 = *(__int64 **)(v46 + 32);
            v57 = _mm_loadu_si128((const __m128i *)(v46 + 40));
            *(_QWORD *)(v46 + 32) = 0;
            *(_OWORD *)(v46 + 40) = 0;
            if ( *(_QWORD *)(v62 + 32) )
            {
              *(_QWORD *)(v62 + 40) = 0;
              v102.m128i_i16[0] = v52;
              v101 = v56;
              LOBYTE(v100) = v54;
              v99.m128i_i8[0] = v53;
              LODWORD(v98) = v51;
              v103 = v57;
              qfree();
              v57 = _mm_load_si128(&v103);
              v52 = v102.m128i_i16[0];
              v56 = v101;
              v54 = (char)v100;
              v53 = v99.m128i_i8[0];
              v51 = (int)v98;
            }
            *(_QWORD *)(v62 + 32) = v56;
            *(__m128i *)(v62 + 40) = v57;
            *(_QWORD *)(v62 + 56) = *(_QWORD *)(v46 + 56);
            v58 = *(_QWORD *)(v46 + 32);
            *(_DWORD *)(v46 + 24) = v51;
            *(_WORD *)(v46 + 28) = v52;
            *(_BYTE *)(v46 + 30) = v53;
            *(_BYTE *)(v46 + 31) = v54;
            if ( v58 )
            {
              *(_QWORD *)(v46 + 40) = 0;
              qfree();
            }
            v59 = _mm_load_si128(&v96);
            v60 = *(_DWORD *)(v46 + 80);
            *(_QWORD *)(v46 + 32) = v50;
            v46 += 96;
            *(_QWORD *)(v46 - 40) = v55;
            *(__m128i *)(v46 - 56) = v59;
            v61 = *(_DWORD *)(v62 + 80);
            *(_DWORD *)(v62 + 80) = v60;
            *(_DWORD *)(v46 - 16) = v61;
          }
          while ( v47 != v46 );
LABEL_54:
          v47 = *v105;
        }
        if ( v47 )
        {
          v64 = v105;
          v65 = v105[1];
          if ( v65 )
          {
            for ( j = 0; j != v65; ++j )
            {
              v67 = (_QWORD *)(96 * j + v47);
              v68 = v67[4];
              *v67 = off_4CE3C8;
              if ( v68 )
              {
                v67[5] = 0;
                qfree();
              }
              v47 = *v64;
            }
          }
          v69 = v105;
          v105[1] = 0;
          qfree();
          *v69 = 0;
          v69[2] = 0;
        }
        v70 = v107[v104];
        v71 = v97;
        sub_2C49F0((__int64 *)(v70 + 40), (unsigned __int64)v97 - v3[14]);
        if ( v71 )
        {
          v72 = nullptr;
          v73 = 0;
          v74 = 0;
          do
          {
            if ( *(_DWORD *)(v3[11] + 4 * v73) )
            {
              v75 = (__int64 *)(*(_QWORD *)(v70 + 40) + 88 * v74);
              v76 = *(__int64 (__fastcall **)(__int64, __int64))(*v75 + 8);
              v77 = (__int64 *)((char *)v72 + v113);
              if ( v76 == sub_2AD8B0 )
              {
                v78 = _mm_loadu_si128((const __m128i *)(v75 + 1));
                v75[1] = v77[1];
                *((_DWORD *)v75 + 4) = *((_DWORD *)v77 + 4);
                v110 = v78;
                v77[1] = v78.m128i_i64[0];
                *((_DWORD *)v77 + 4) = v110.m128i_i32[2];
                v79 = _mm_loadu_si128((const __m128i *)(v75 + 5));
                v80 = v75[4];
                *(_OWORD *)(v75 + 5) = 0;
                v81 = v75[3];
                v75[4] = 0;
                v82 = *((_DWORD *)v77 + 6);
                v83 = v75[7];
                v96 = v79;
                *((_DWORD *)v75 + 6) = v82;
                *((_BYTE *)v75 + 28) = *((_BYTE *)v77 + 28);
                *((_BYTE *)v75 + 29) = *((_BYTE *)v77 + 29);
                *((_BYTE *)v75 + 30) = *((_BYTE *)v77 + 30);
                *((_BYTE *)v75 + 31) = *((_BYTE *)v77 + 31);
                v84 = v77[4];
                v85 = _mm_loadu_si128((const __m128i *)(v77 + 5));
                v77[4] = 0;
                *(_OWORD *)(v77 + 5) = 0;
                if ( v75[4] )
                {
                  v75[5] = 0;
                  v106 = v72;
                  v103.m128i_i64[0] = v84;
                  v101 = v77;
                  v100 = (__int64 *)v73;
                  v99.m128i_i64[0] = v81;
                  v98 = v75;
                  v102 = v85;
                  qfree();
                  v72 = v106;
                  v84 = v103.m128i_i64[0];
                  v85 = _mm_load_si128(&v102);
                  v77 = v101;
                  v73 = (__int64)v100;
                  v81 = v99.m128i_i64[0];
                  v75 = v98;
                }
                v75[4] = v84;
                *(__m128i *)(v75 + 5) = v85;
                v75[7] = v77[7];
                v86 = v77[4];
                v77[3] = v81;
                if ( v86 )
                {
                  v77[5] = 0;
                  v101 = v72;
                  v100 = v75;
                  v99.m128i_i64[0] = v73;
                  v98 = v77;
                  qfree();
                  v72 = v101;
                  v75 = v100;
                  v73 = v99.m128i_i64[0];
                  v77 = v98;
                }
                v87 = _mm_load_si128(&v96);
                v88 = *((_DWORD *)v77 + 20);
                v77[4] = v80;
                v77[7] = v83;
                *(__m128i *)(v77 + 5) = v87;
                v89 = *((_DWORD *)v75 + 20);
                *((_DWORD *)v75 + 20) = v88;
                *((_DWORD *)v77 + 20) = v89;
              }
              else
              {
                v98 = v72;
                v96.m128i_i64[0] = v73;
                v76((__int64)v75, (__int64)v77);
                v73 = v96.m128i_i64[0];
                v72 = v98;
              }
              ++v74;
            }
            ++v73;
            v72 += 11;
          }
          while ( (__int64 *)v73 != v97 );
        }
        else
        {
          v74 = 0;
        }
        if ( *(_QWORD *)(v70 + 48) != v74 )
        {
          if ( !under_debugger )
            sub_37EEE0(1962);
          BUG();
        }
        ++v104;
        v105 += 3;
      }
      while ( v104 < v3[1] );
    }
    v90 = v113;
    if ( v113 )
    {
      v91 = v114;
      if ( (_QWORD)v114 )
      {
        v92 = 0;
        v93 = 0;
        do
        {
          v94 = (_QWORD *)(v90 + v92);
          v95 = *(_QWORD *)(v90 + v92 + 32);
          *v94 = off_4CE3C8;
          if ( v95 )
          {
            v94[5] = 0;
            qfree();
          }
          ++v93;
          v90 = v113;
          v92 += 88;
        }
        while ( v91 != v93 );
      }
      *(_QWORD *)&v114 = 0;
      qfree();
    }
  }
  if ( !(_BYTE)v109 )
    return v115 - __readfsqword(0x28u);
  v34 = (unsigned __int64)v3[1] <= 2;
  v97 = nullptr;
  v35 = *v107;
  v36 = v107[1];
  v98 = (__int64 *)(*v107 + 40LL);
  v99.m128i_i64[0] = v36 + 40;
  if ( !v34 )
  {
    v96.m128i_i64[0] = v107[2];
    v97 = (__int64 *)(v96.m128i_i64[0] + 40);
  }
LABEL_26:
  v37 = *(_QWORD *)(v35 + 48);
  if ( v37 )
  {
    v38 = 0;
    v39 = 0;
    v37 = 0;
    do
    {
      v43 = (unsigned __int8 (***)(void))(v38 + *(_QWORD *)(v35 + 40));
      v44 = **v43;
      if ( (char *)v44 == (char *)sub_2A99E0 )
      {
        if ( (unsigned int)sub_253FC0((__int64)(v43 + 1), (__int64)(v43 + 8)) )
          goto LABEL_31;
      }
      else if ( v44() )
      {
        goto LABEL_31;
      }
      v40 = (unsigned __int8 (***)(void))(v38 + *(_QWORD *)(v36 + 40));
      v41 = **v40;
      if ( (char *)v41 == (char *)sub_2A99E0 )
      {
        if ( (unsigned int)sub_253FC0((__int64)(v40 + 1), (__int64)(v40 + 8)) )
          goto LABEL_31;
      }
      else if ( v41() )
      {
LABEL_31:
        if ( v37 < v39 )
        {
          v42 = *(_QWORD *)(v35 + 40);
          v96.m128i_i64[0] = 88 * v37;
          (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v42 + 88 * v37) + 8LL))(
            v42 + 88 * v37,
            v38 + v42);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v36 + 40) + v96.m128i_i64[0]) + 8LL))(
            *(_QWORD *)(v36 + 40) + v96.m128i_i64[0],
            v38 + *(_QWORD *)(v36 + 40));
          if ( v97 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*v97 + v96.m128i_i64[0]) + 8LL))(
              *v97 + v96.m128i_i64[0],
              v38 + *v97);
        }
        ++v37;
      }
      ++v39;
      v38 += 88;
    }
    while ( v39 < *(_QWORD *)(v35 + 48) );
  }
  switch_dbctx();
  sub_2C49F0(v98, v37);
  switch_dbctx();
  sub_2C49F0((__int64 *)v99.m128i_i64[0], v37);
  if ( !v97 )
    return v115 - __readfsqword(0x28u);
  switch_dbctx();
  return sub_2C49F0(v97, v37);
}

