unsigned __int64 __fastcall sub_1F3340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v5; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  bool v14; // cl
  __int64 v15; // rcx
  __int64 v16; // r9
  unsigned __int64 v17; // r10
  char v18; // al
  bool v19; // al
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  bool v22; // al
  __int64 v23; // rcx
  int v24; // r8d
  int v25; // r9d
  unsigned __int64 v26; // r12
  __int64 v27; // rax
  unsigned __int64 v28; // rsi
  bool v29; // dl
  __int64 v30; // rdx
  char v31; // dl
  __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  bool v34; // dl
  __int64 v35; // rdi
  char v36; // cl
  __int64 v37; // rcx
  __int64 v38; // r9
  unsigned __int64 v39; // r8
  char v40; // al
  char v41; // dl
  __int64 v42; // rdx
  unsigned __int64 v43; // rsi
  bool v44; // al
  char v45; // dl
  __int64 v46; // rbp
  __int64 v47; // r12
  __int64 v48; // r13
  __int64 v49; // rdi
  __int64 v50; // rax
  __m128i v51; // xmm0
  __int64 v52; // rax
  __m128i v53; // xmm1
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rbp
  __m128i v57; // xmm0
  __int64 v58; // rax
  __m128i v59; // xmm3
  bool v60; // zf
  __int64 v61; // rbp
  __int64 v62; // r13
  __int64 v63; // r12
  __m128i v64; // xmm4
  __int64 *v65; // rbp
  __int64 *v66; // rsi
  __int64 v67; // rax
  __m128i v68; // xmm0
  __m128i v69; // xmm1
  __m128i v70; // xmm0
  __int64 v71; // rdi
  __int64 v72; // rbp
  __int64 v73; // r13
  __int64 v74; // r12
  __int64 v75; // rdi
  __int64 v76; // rbp
  __int64 v77; // r13
  __int64 v78; // r12
  char v80; // al
  __int64 i; // rbp
  __int64 v82; // rax
  __int64 *v83; // rsi
  __m128i v84; // xmm0
  __int64 *v85; // r14
  __int64 v86; // rax
  __m128i v87; // xmm0
  __int64 v88; // rax
  __m128i v89; // xmm0
  __int64 v90; // rax
  __m128i v91; // xmm0
  __m128i v92; // xmm0
  __m128i v93; // xmm0
  __int64 v94; // rdi
  __int64 v95; // r13
  __int64 v96; // r12
  __int64 v97; // r14
  __int64 v98; // r13
  __int64 v99; // r12
  __int64 v100; // rdx
  __m128i v101; // [rsp+0h] [rbp-138h] BYREF
  __int64 *v102; // [rsp+10h] [rbp-128h]
  __int64 v103; // [rsp+18h] [rbp-120h]
  __int64 *v104; // [rsp+20h] [rbp-118h]
  __int64 v105; // [rsp+28h] [rbp-110h]
  __int64 v106; // [rsp+30h] [rbp-108h] BYREF
  int v107; // [rsp+38h] [rbp-100h]
  __int64 v108; // [rsp+40h] [rbp-F8h]
  __m128i v109; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v110; // [rsp+58h] [rbp-E0h]
  __m128i v111; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v112; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v113; // [rsp+80h] [rbp-B8h]
  int v114; // [rsp+88h] [rbp-B0h]
  __int64 v115; // [rsp+90h] [rbp-A8h] BYREF
  int v116; // [rsp+98h] [rbp-A0h]
  __int64 v117; // [rsp+A0h] [rbp-98h]
  __m128i v118; // [rsp+A8h] [rbp-90h]
  __int64 v119; // [rsp+B8h] [rbp-80h]
  __m128i v120; // [rsp+C0h] [rbp-78h]
  __m128i v121; // [rsp+D0h] [rbp-68h]
  __int64 v122; // [rsp+E0h] [rbp-58h]
  int v123; // [rsp+E8h] [rbp-50h]
  __int64 v124; // [rsp+F0h] [rbp-48h]
  unsigned __int64 v125; // [rsp+F8h] [rbp-40h]

  v125 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( a2 - a1 <= 1536 )
    return v125 - __readfsqword(0x28u);
  v5 = a2;
LABEL_3:
  v105 = 0xAAAAAAAAAAAAAAABLL * (v3 >> 5);
  v7 = v105 >> 1;
  if ( a3 )
  {
    v8 = *(_QWORD *)(a1 + 160);
    --a3;
    v9 = a1 + 96;
    v10 = a1 + 96 * v7;
    v11 = *(_QWORD *)(v10 + 64);
    if ( v8 != v11 )
    {
      v12 = *(_QWORD *)(v10 + 72);
      if ( !*(_QWORD *)(a1 + 168) )
      {
        v14 = v12 == 0;
        goto LABEL_9;
      }
      if ( !v12 )
      {
        v37 = *(_QWORD *)(v5 - 32);
        if ( v11 != v37 )
        {
          v38 = *(_QWORD *)(v5 - 24);
          goto LABEL_123;
        }
LABEL_57:
        v41 = *(_BYTE *)(v10 + 84);
        if ( v41 == *(_BYTE *)(v5 - 12) )
        {
          if ( *(_DWORD *)(v10 + 80) < *(_DWORD *)(v5 - 16) )
            goto LABEL_25;
        }
        else if ( !v41 )
        {
          goto LABEL_25;
        }
LABEL_59:
        if ( v37 == v8 )
          goto LABEL_53;
        goto LABEL_60;
      }
      v13 = *(_QWORD *)(v11 + 24);
      if ( *(_QWORD *)(v8 + 24) != v13 )
      {
        v14 = *(_QWORD *)(v8 + 24) < v13;
        goto LABEL_9;
      }
    }
    v36 = *(_BYTE *)(a1 + 180);
    if ( v36 != *(_BYTE *)(v10 + 84) )
    {
      if ( v36 )
        goto LABEL_10;
      goto LABEL_47;
    }
    v14 = *(_DWORD *)(a1 + 176) < *(_DWORD *)(v10 + 80);
LABEL_9:
    if ( !v14 )
    {
LABEL_10:
      v15 = *(_QWORD *)(v5 - 32);
      if ( v8 == v15 )
      {
LABEL_16:
        v18 = *(_BYTE *)(a1 + 180);
        if ( v18 != *(_BYTE *)(v5 - 12) )
        {
          if ( !v18 )
            goto LABEL_55;
          if ( v11 == v15 )
            goto LABEL_119;
LABEL_20:
          v20 = *(_QWORD *)(v5 - 24);
          if ( !*(_QWORD *)(v10 + 72) )
          {
            v22 = v20 == 0;
            goto LABEL_24;
          }
          if ( !v20 )
            goto LABEL_65;
          v21 = *(_QWORD *)(v15 + 24);
          if ( *(_QWORD *)(v11 + 24) != v21 )
          {
            v22 = *(_QWORD *)(v11 + 24) < v21;
            goto LABEL_24;
          }
LABEL_119:
          v80 = *(_BYTE *)(v10 + 84);
          if ( v80 != *(_BYTE *)(v5 - 12) )
          {
            if ( v80 )
              goto LABEL_25;
            goto LABEL_65;
          }
          v22 = *(_DWORD *)(v10 + 80) < *(_DWORD *)(v5 - 16);
LABEL_24:
          if ( !v22 )
          {
LABEL_25:
            sub_1F2F90(a1, v10);
            goto LABEL_26;
          }
LABEL_65:
          sub_1F2F90(a1, v5 - 96);
LABEL_26:
          v26 = v5;
LABEL_27:
          v27 = *(_QWORD *)(a1 + 64);
          while ( 1 )
          {
            v30 = *(_QWORD *)(v9 + 64);
            if ( v30 != v27 )
            {
              v23 = *(_QWORD *)(a1 + 72);
              if ( !*(_QWORD *)(v9 + 72) )
              {
                v29 = v23 == 0;
LABEL_32:
                if ( !v29 )
                  goto LABEL_37;
                goto LABEL_33;
              }
              if ( !v23 )
                goto LABEL_33;
              v28 = *(_QWORD *)(v27 + 24);
              if ( *(_QWORD *)(v30 + 24) != v28 )
              {
                v29 = *(_QWORD *)(v30 + 24) < v28;
                goto LABEL_32;
              }
            }
            v31 = *(_BYTE *)(v9 + 84);
            if ( v31 == *(_BYTE *)(a1 + 84) )
            {
              v29 = *(_DWORD *)(v9 + 80) < *(_DWORD *)(a1 + 80);
              goto LABEL_32;
            }
            if ( v31 )
            {
              while ( 1 )
              {
LABEL_37:
                v32 = *(_QWORD *)(v26 - 32);
                v26 -= 96LL;
                if ( v27 == v32 )
                  goto LABEL_66;
                v23 = *(_QWORD *)(v26 + 72);
                if ( !*(_QWORD *)(a1 + 72) )
                {
                  v34 = v23 == 0;
                  goto LABEL_42;
                }
                if ( v23 )
                {
                  v33 = *(_QWORD *)(v32 + 24);
                  if ( *(_QWORD *)(v27 + 24) == v33 )
                  {
LABEL_66:
                    v45 = *(_BYTE *)(a1 + 84);
                    if ( v45 == *(_BYTE *)(v26 + 84) )
                    {
                      v34 = *(_DWORD *)(a1 + 80) < *(_DWORD *)(v26 + 80);
                      goto LABEL_42;
                    }
                    if ( v45 )
                    {
                      if ( v9 < v26 )
                        goto LABEL_44;
LABEL_69:
                      sub_1F3340(
                        v9,
                        v5,
                        a3,
                        v23,
                        v24,
                        v25,
                        v101.m128i_i32[0],
                        v101.m128i_i64[1],
                        (_DWORD)v102,
                        v103,
                        (_DWORD)v104,
                        v105,
                        v106,
                        v107,
                        v108,
                        v109.m128i_i32[0],
                        v109.m128i_i8[8],
                        v110,
                        v111.m128i_i32[0],
                        v111.m128i_i32[2],
                        v112.m128i_i32[0],
                        v112.m128i_i32[2],
                        v113,
                        v114,
                        v115,
                        v116,
                        v117,
                        v118.m128i_i32[0],
                        v118.m128i_i8[8],
                        v119,
                        v120.m128i_i32[0],
                        v120.m128i_i32[2],
                        v121.m128i_i32[0],
                        v121.m128i_i32[2],
                        v122,
                        v123,
                        v124);
                      v3 = v9 - a1;
                      if ( (__int64)(v9 - a1) <= 1536 )
                        return v125 - __readfsqword(0x28u);
                      v5 = v9;
                      goto LABEL_3;
                    }
                  }
                  else
                  {
                    v34 = *(_QWORD *)(v27 + 24) < v33;
LABEL_42:
                    if ( !v34 )
                    {
                      if ( v9 >= v26 )
                        goto LABEL_69;
LABEL_44:
                      v35 = v9;
                      v9 += 96LL;
                      sub_1F2F90(v35, v26);
                      goto LABEL_27;
                    }
                  }
                }
              }
            }
LABEL_33:
            v9 += 96LL;
          }
        }
        v19 = *(_DWORD *)(a1 + 176) < *(_DWORD *)(v5 - 16);
        goto LABEL_18;
      }
      v16 = *(_QWORD *)(v5 - 24);
      if ( !*(_QWORD *)(a1 + 168) )
      {
        v19 = v16 == 0;
LABEL_18:
        if ( v19 )
          goto LABEL_55;
        goto LABEL_19;
      }
      if ( v16 )
      {
        v17 = *(_QWORD *)(v15 + 24);
        if ( *(_QWORD *)(v8 + 24) != v17 )
        {
          if ( *(_QWORD *)(v8 + 24) < v17 )
            goto LABEL_55;
LABEL_19:
          if ( v11 == v15 )
            goto LABEL_119;
          goto LABEL_20;
        }
        goto LABEL_16;
      }
LABEL_55:
      sub_1F2F90(a1, a1 + 96);
      goto LABEL_26;
    }
LABEL_47:
    v37 = *(_QWORD *)(v5 - 32);
    if ( v11 != v37 )
    {
      v38 = *(_QWORD *)(v5 - 24);
      if ( *(_QWORD *)(v10 + 72) )
      {
        if ( !v38 )
          goto LABEL_25;
        v39 = *(_QWORD *)(v37 + 24);
        if ( *(_QWORD *)(v11 + 24) != v39 )
        {
          if ( *(_QWORD *)(v11 + 24) < v39 )
            goto LABEL_25;
          if ( v37 == v8 )
            goto LABEL_53;
LABEL_60:
          v42 = *(_QWORD *)(v5 - 24);
          if ( !*(_QWORD *)(a1 + 168) )
          {
            v44 = v42 == 0;
            goto LABEL_64;
          }
          if ( !v42 )
            goto LABEL_65;
          v43 = *(_QWORD *)(v37 + 24);
          if ( *(_QWORD *)(v8 + 24) != v43 )
          {
            v44 = *(_QWORD *)(v8 + 24) < v43;
            goto LABEL_64;
          }
LABEL_53:
          v40 = *(_BYTE *)(a1 + 180);
          if ( v40 != *(_BYTE *)(v5 - 12) )
          {
            if ( !v40 )
              goto LABEL_65;
            goto LABEL_55;
          }
          v44 = *(_DWORD *)(a1 + 176) < *(_DWORD *)(v5 - 16);
LABEL_64:
          if ( !v44 )
            goto LABEL_55;
          goto LABEL_65;
        }
        goto LABEL_57;
      }
LABEL_123:
      if ( !v38 )
        goto LABEL_25;
      goto LABEL_59;
    }
    goto LABEL_57;
  }
  v103 = v7 - 1;
  v102 = &v106;
  v104 = &v115;
  for ( i = a1 + 96 * (v7 - 1); ; i -= 96 )
  {
    sub_5FE00(v102, i);
    v82 = *(_QWORD *)(i + 16);
    v83 = v102;
    v84 = _mm_loadu_si128((const __m128i *)(i + 24));
    v85 = v104;
    *(_OWORD *)(i + 24) = 0;
    v108 = v82;
    v86 = *(_QWORD *)(i + 40);
    v109 = v84;
    v87 = _mm_loadu_si128((const __m128i *)(i + 48));
    v110 = v86;
    v88 = *(_QWORD *)(i + 80);
    *(_QWORD *)(i + 16) = 0;
    *(_QWORD *)(i + 40) = 0;
    v113 = v88;
    LOBYTE(v88) = *(_BYTE *)(i + 88);
    v111 = v87;
    v89 = _mm_loadu_si128((const __m128i *)(i + 64));
    *(_OWORD *)(i + 48) = 0;
    LOBYTE(v114) = v88;
    v112 = v89;
    sub_5FE00(v85, (__int64)v83);
    v90 = v108;
    v91 = _mm_loadu_si128(&v109);
    v108 = 0;
    v117 = v90;
    v118 = v91;
    v92 = _mm_load_si128(&v111);
    v119 = v110;
    v120 = v92;
    v93 = _mm_load_si128(&v112);
    v122 = v113;
    v110 = 0;
    LOBYTE(v123) = v114;
    v109 = 0;
    v111 = 0;
    v121 = v93;
    sub_1EDC30(a1, v103, v105, (__int64)v85);
    v94 = v119;
    if ( v119 )
    {
      v95 = v120.m128i_i64[0];
      if ( v120.m128i_i64[0] )
      {
        v96 = 0;
        do
        {
          v97 = v94 + 40 * v96;
          if ( *(_QWORD *)(v97 + 16) )
          {
            *(_QWORD *)(v97 + 24) = 0;
            qfree();
          }
          ++v96;
          qfree();
          v94 = v119;
        }
        while ( v95 != v96 );
      }
      v120.m128i_i64[0] = 0;
      qfree();
    }
    if ( v117 )
    {
      v118.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
    v49 = v110;
    if ( !v103 )
      break;
    --v103;
    if ( v110 )
    {
      v98 = v111.m128i_i64[0];
      if ( v111.m128i_i64[0] )
      {
        v99 = 0;
        do
        {
          v100 = v49 + 40 * v99;
          if ( *(_QWORD *)(v100 + 16) )
          {
            *(_QWORD *)(v100 + 24) = 0;
            v101.m128i_i64[0] = v49 + 40 * v99;
            qfree();
          }
          ++v99;
          qfree();
          v49 = v110;
        }
        while ( v98 != v99 );
      }
      v111.m128i_i64[0] = 0;
      qfree();
    }
    if ( v108 )
    {
      v109.m128i_i64[0] = 0;
      qfree();
    }
    qfree();
  }
  if ( v110 )
  {
    v46 = v111.m128i_i64[0];
    if ( v111.m128i_i64[0] )
    {
      v47 = 0;
      do
      {
        v48 = v49 + 40 * v47;
        if ( *(_QWORD *)(v48 + 16) )
        {
          *(_QWORD *)(v48 + 24) = 0;
          qfree();
        }
        ++v47;
        qfree();
        v49 = v110;
      }
      while ( v46 != v47 );
    }
    v111.m128i_i64[0] = 0;
    qfree();
  }
  if ( v108 )
  {
    v109.m128i_i64[0] = 0;
    qfree();
  }
  qfree();
  if ( v5 - a1 > 96 )
  {
    do
    {
      v5 -= 96;
      sub_5FE00(v102, v5);
      v50 = *(_QWORD *)(v5 + 16);
      v51 = _mm_loadu_si128((const __m128i *)(v5 + 24));
      *(_QWORD *)(v5 + 16) = 0;
      v108 = v50;
      v52 = *(_QWORD *)(v5 + 40);
      v109 = v51;
      v53 = _mm_loadu_si128((const __m128i *)(v5 + 48));
      v110 = v52;
      v54 = *(_QWORD *)(v5 + 80);
      *(_QWORD *)(v5 + 40) = 0;
      v113 = v54;
      LOBYTE(v54) = *(_BYTE *)(v5 + 88);
      *(_OWORD *)(v5 + 24) = 0;
      *(_OWORD *)(v5 + 48) = 0;
      v55 = _mm_loadu_si128((const __m128i *)(v5 + 64));
      LOBYTE(v114) = v54;
      v111 = v53;
      v112 = v55;
      sub_606D0((__int64 *)v5, (__int64 *)a1);
      v56 = *(_QWORD *)(a1 + 16);
      v57 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      if ( *(_QWORD *)(v5 + 16) )
      {
        *(_QWORD *)(v5 + 24) = 0;
        v101 = v57;
        qfree();
        v57 = _mm_load_si128(&v101);
      }
      *(__m128i *)(v5 + 24) = v57;
      *(_QWORD *)(v5 + 16) = v56;
      v58 = *(_QWORD *)(a1 + 40);
      v59 = _mm_loadu_si128((const __m128i *)(a1 + 48));
      *(_QWORD *)(a1 + 40) = 0;
      *(_OWORD *)(a1 + 48) = 0;
      v60 = *(_QWORD *)(v5 + 40) == 0;
      v103 = v58;
      v101 = v59;
      if ( !v60 )
      {
        v61 = *(_QWORD *)(v5 + 48);
        v62 = 0;
        if ( v61 )
        {
          do
          {
            v63 = *(_QWORD *)(v5 + 40) + 40 * v62;
            if ( *(_QWORD *)(v63 + 16) )
            {
              *(_QWORD *)(v63 + 24) = 0;
              qfree();
            }
            ++v62;
            qfree();
          }
          while ( v61 != v62 );
        }
        *(_QWORD *)(v5 + 48) = 0;
        qfree();
      }
      v64 = _mm_load_si128(&v101);
      v65 = v104;
      v66 = v102;
      *(_QWORD *)(v5 + 40) = v103;
      *(__m128i *)(v5 + 48) = v64;
      *(__m128i *)(v5 + 64) = _mm_loadu_si128((const __m128i *)(a1 + 64));
      *(_QWORD *)(v5 + 77) = *(_QWORD *)(a1 + 77);
      *(_BYTE *)(v5 + 88) = *(_BYTE *)(a1 + 88);
      sub_5FE00(v65, (__int64)v66);
      v67 = v108;
      v68 = _mm_loadu_si128(&v109);
      v69 = _mm_load_si128(&v111);
      v108 = 0;
      v117 = v67;
      v118 = v68;
      v119 = v110;
      v109 = 0;
      v122 = v113;
      v111 = 0;
      v70 = _mm_load_si128(&v112);
      LOBYTE(v123) = v114;
      v120 = v69;
      v101.m128i_i64[0] = v5 - a1;
      v121 = v70;
      v110 = 0;
      sub_1EDC30(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((v5 - a1) >> 5), (__int64)v65);
      v71 = v119;
      if ( v119 )
      {
        v72 = v120.m128i_i64[0];
        if ( v120.m128i_i64[0] )
        {
          v73 = 0;
          do
          {
            v74 = v71 + 40 * v73;
            if ( *(_QWORD *)(v74 + 16) )
            {
              *(_QWORD *)(v74 + 24) = 0;
              qfree();
            }
            ++v73;
            qfree();
            v71 = v119;
          }
          while ( v72 != v73 );
        }
        v120.m128i_i64[0] = 0;
        qfree();
      }
      if ( v117 )
      {
        v118.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
      v75 = v110;
      if ( v110 )
      {
        v76 = v111.m128i_i64[0];
        if ( v111.m128i_i64[0] )
        {
          v77 = 0;
          do
          {
            v78 = v75 + 40 * v77;
            if ( *(_QWORD *)(v78 + 16) )
            {
              *(_QWORD *)(v78 + 24) = 0;
              qfree();
            }
            ++v77;
            qfree();
            v75 = v110;
          }
          while ( v76 != v77 );
        }
        v111.m128i_i64[0] = 0;
        qfree();
      }
      if ( v108 )
      {
        v109.m128i_i64[0] = 0;
        qfree();
      }
      qfree();
    }
    while ( v101.m128i_i64[0] > 96 );
  }
  return v125 - __readfsqword(0x28u);
}

