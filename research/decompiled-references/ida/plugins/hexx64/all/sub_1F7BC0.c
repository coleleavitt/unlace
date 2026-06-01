unsigned __int64 __fastcall sub_1F7BC0(__int64 a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v4; // rax
  __int64 v6; // rbx
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  bool v15; // cl
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // r10
  char v19; // al
  bool v20; // al
  __int64 v21; // rax
  unsigned __int64 v22; // rax
  bool v23; // al
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rsi
  bool v28; // dl
  __int64 v29; // rdx
  char v30; // dl
  __int64 v31; // rdx
  __int64 v32; // rcx
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
  __int64 *v48; // r13
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rax
  __m128i v52; // xmm0
  __int64 v53; // rax
  __m128i v54; // xmm1
  __int64 v55; // rax
  __m128i v56; // xmm0
  __int64 v57; // rbp
  __m128i v58; // xmm0
  __int64 v59; // rdi
  __int64 v60; // rax
  __m128i v61; // xmm3
  bool v62; // zf
  __int64 v63; // rbp
  __int64 v64; // r13
  __int64 *v65; // r12
  __int64 v66; // rdi
  __m128i v67; // xmm4
  __int64 *v68; // rbp
  __int64 *v69; // rsi
  __m128i v70; // xmm0
  __int64 v71; // rax
  __m128i v72; // xmm0
  __m128i v73; // xmm1
  __int64 v74; // rdi
  __int64 v75; // rbp
  __int64 v76; // r13
  __int64 *v77; // r12
  __int64 v78; // rdi
  __int64 v79; // rdi
  __int64 v80; // rbp
  __int64 v81; // r13
  __int64 *v82; // r12
  __int64 v83; // rdi
  char v85; // al
  __int64 i; // rbp
  __int64 v87; // rax
  __int64 *v88; // rsi
  __m128i v89; // xmm0
  __int64 *v90; // r14
  __int64 v91; // rax
  __m128i v92; // xmm0
  __int64 v93; // rax
  __m128i v94; // xmm0
  __int64 v95; // rax
  __m128i v96; // xmm0
  __m128i v97; // xmm0
  __int64 v98; // rdi
  __int64 v99; // r13
  __int64 v100; // r12
  __int64 *v101; // r14
  __int64 v102; // rdi
  __int64 v103; // r13
  __int64 v104; // r12
  __int64 *v105; // rdx
  __int64 v106; // rdi
  __m128i v107; // [rsp+0h] [rbp-138h] BYREF
  __int64 *v108; // [rsp+10h] [rbp-128h]
  __int64 v109; // [rsp+18h] [rbp-120h]
  __int64 *v110; // [rsp+20h] [rbp-118h]
  __int64 v111; // [rsp+28h] [rbp-110h]
  __int64 v112; // [rsp+30h] [rbp-108h] BYREF
  __int64 v113; // [rsp+40h] [rbp-F8h]
  __m128i v114; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v115; // [rsp+58h] [rbp-E0h]
  __m128i v116; // [rsp+60h] [rbp-D8h] BYREF
  __m128i v117; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v118; // [rsp+80h] [rbp-B8h]
  int v119; // [rsp+88h] [rbp-B0h]
  __int64 v120; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v121; // [rsp+A0h] [rbp-98h]
  __m128i v122; // [rsp+A8h] [rbp-90h]
  __int64 v123; // [rsp+B8h] [rbp-80h]
  __m128i v124; // [rsp+C0h] [rbp-78h]
  __m128 v125; // [rsp+D0h] [rbp-68h]
  __int64 v126; // [rsp+E0h] [rbp-58h]
  int v127; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v128; // [rsp+F8h] [rbp-40h]

  v128 = __readfsqword(0x28u);
  v4 = a2 - a1;
  if ( a2 - a1 <= 1536 )
    return v128 - __readfsqword(0x28u);
  v6 = a2;
LABEL_3:
  v111 = 0xAAAAAAAAAAAAAAABLL * (v4 >> 5);
  v8 = v111 >> 1;
  if ( a3 )
  {
    v9 = *(_QWORD *)(a1 + 160);
    --a3;
    v10 = a1 + 96;
    v11 = a1 + 96 * v8;
    v12 = *(_QWORD *)(v11 + 64);
    if ( v9 != v12 )
    {
      v13 = *(_QWORD *)(v11 + 72);
      if ( !*(_QWORD *)(a1 + 168) )
      {
        v15 = v13 == 0;
        goto LABEL_9;
      }
      if ( !v13 )
      {
        v37 = *(_QWORD *)(v6 - 32);
        if ( v12 != v37 )
        {
          v38 = *(_QWORD *)(v6 - 24);
          goto LABEL_123;
        }
LABEL_57:
        v41 = *(_BYTE *)(v11 + 84);
        if ( v41 == *(_BYTE *)(v6 - 12) )
        {
          if ( *(_DWORD *)(v11 + 80) < *(_DWORD *)(v6 - 16) )
            goto LABEL_25;
        }
        else if ( !v41 )
        {
          goto LABEL_25;
        }
LABEL_59:
        if ( v37 == v9 )
          goto LABEL_53;
        goto LABEL_60;
      }
      v14 = *(_QWORD *)(v12 + 24);
      if ( *(_QWORD *)(v9 + 24) != v14 )
      {
        v15 = *(_QWORD *)(v9 + 24) < v14;
        goto LABEL_9;
      }
    }
    v36 = *(_BYTE *)(a1 + 180);
    if ( v36 != *(_BYTE *)(v11 + 84) )
    {
      if ( v36 )
        goto LABEL_10;
      goto LABEL_47;
    }
    v15 = *(_DWORD *)(a1 + 176) < *(_DWORD *)(v11 + 80);
LABEL_9:
    if ( !v15 )
    {
LABEL_10:
      v16 = *(_QWORD *)(v6 - 32);
      if ( v9 == v16 )
      {
LABEL_16:
        v19 = *(_BYTE *)(a1 + 180);
        if ( v19 != *(_BYTE *)(v6 - 12) )
        {
          if ( !v19 )
            goto LABEL_55;
          if ( v12 == v16 )
            goto LABEL_119;
LABEL_20:
          v21 = *(_QWORD *)(v6 - 24);
          if ( !*(_QWORD *)(v11 + 72) )
          {
            v23 = v21 == 0;
            goto LABEL_24;
          }
          if ( !v21 )
            goto LABEL_65;
          v22 = *(_QWORD *)(v16 + 24);
          if ( *(_QWORD *)(v12 + 24) != v22 )
          {
            v23 = *(_QWORD *)(v12 + 24) < v22;
            goto LABEL_24;
          }
LABEL_119:
          v85 = *(_BYTE *)(v11 + 84);
          if ( v85 != *(_BYTE *)(v6 - 12) )
          {
            if ( v85 )
              goto LABEL_25;
            goto LABEL_65;
          }
          v23 = *(_DWORD *)(v11 + 80) < *(_DWORD *)(v6 - 16);
LABEL_24:
          if ( !v23 )
          {
LABEL_25:
            sub_1F7810(a1, v11, *(double *)a4.m128_u64);
            goto LABEL_26;
          }
LABEL_65:
          sub_1F7810(a1, v6 - 96, *(double *)a4.m128_u64);
LABEL_26:
          v24 = v6;
LABEL_27:
          v25 = *(_QWORD *)(a1 + 64);
          while ( 1 )
          {
            v29 = *(_QWORD *)(v10 + 64);
            if ( v29 != v25 )
            {
              v26 = *(_QWORD *)(a1 + 72);
              if ( !*(_QWORD *)(v10 + 72) )
              {
                v28 = v26 == 0;
LABEL_32:
                if ( !v28 )
                  goto LABEL_37;
                goto LABEL_33;
              }
              if ( !v26 )
                goto LABEL_33;
              v27 = *(_QWORD *)(v25 + 24);
              if ( *(_QWORD *)(v29 + 24) != v27 )
              {
                v28 = *(_QWORD *)(v29 + 24) < v27;
                goto LABEL_32;
              }
            }
            v30 = *(_BYTE *)(v10 + 84);
            if ( v30 == *(_BYTE *)(a1 + 84) )
            {
              v28 = *(_DWORD *)(v10 + 80) < *(_DWORD *)(a1 + 80);
              goto LABEL_32;
            }
            if ( v30 )
            {
              while ( 1 )
              {
LABEL_37:
                v31 = *(_QWORD *)(v24 - 32);
                v24 -= 96LL;
                if ( v25 == v31 )
                  goto LABEL_66;
                v32 = *(_QWORD *)(v24 + 72);
                if ( !*(_QWORD *)(a1 + 72) )
                {
                  v34 = v32 == 0;
                  goto LABEL_42;
                }
                if ( v32 )
                {
                  v33 = *(_QWORD *)(v31 + 24);
                  if ( *(_QWORD *)(v25 + 24) == v33 )
                  {
LABEL_66:
                    v45 = *(_BYTE *)(a1 + 84);
                    if ( v45 == *(_BYTE *)(v24 + 84) )
                    {
                      v34 = *(_DWORD *)(a1 + 80) < *(_DWORD *)(v24 + 80);
                      goto LABEL_42;
                    }
                    if ( v45 )
                    {
                      if ( v10 < v24 )
                        goto LABEL_44;
LABEL_69:
                      sub_1F7BC0(v10, v6, a3);
                      v4 = v10 - a1;
                      if ( (__int64)(v10 - a1) <= 1536 )
                        return v128 - __readfsqword(0x28u);
                      v6 = v10;
                      goto LABEL_3;
                    }
                  }
                  else
                  {
                    v34 = *(_QWORD *)(v25 + 24) < v33;
LABEL_42:
                    if ( !v34 )
                    {
                      if ( v10 >= v24 )
                        goto LABEL_69;
LABEL_44:
                      v35 = v10;
                      v10 += 96LL;
                      sub_1F7810(v35, v24, *(double *)a4.m128_u64);
                      goto LABEL_27;
                    }
                  }
                }
              }
            }
LABEL_33:
            v10 += 96LL;
          }
        }
        v20 = *(_DWORD *)(a1 + 176) < *(_DWORD *)(v6 - 16);
        goto LABEL_18;
      }
      v17 = *(_QWORD *)(v6 - 24);
      if ( !*(_QWORD *)(a1 + 168) )
      {
        v20 = v17 == 0;
LABEL_18:
        if ( v20 )
          goto LABEL_55;
        goto LABEL_19;
      }
      if ( v17 )
      {
        v18 = *(_QWORD *)(v16 + 24);
        if ( *(_QWORD *)(v9 + 24) != v18 )
        {
          if ( *(_QWORD *)(v9 + 24) < v18 )
            goto LABEL_55;
LABEL_19:
          if ( v12 == v16 )
            goto LABEL_119;
          goto LABEL_20;
        }
        goto LABEL_16;
      }
LABEL_55:
      sub_1F7810(a1, a1 + 96, *(double *)a4.m128_u64);
      goto LABEL_26;
    }
LABEL_47:
    v37 = *(_QWORD *)(v6 - 32);
    if ( v12 != v37 )
    {
      v38 = *(_QWORD *)(v6 - 24);
      if ( *(_QWORD *)(v11 + 72) )
      {
        if ( !v38 )
          goto LABEL_25;
        v39 = *(_QWORD *)(v37 + 24);
        if ( *(_QWORD *)(v12 + 24) != v39 )
        {
          if ( *(_QWORD *)(v12 + 24) < v39 )
            goto LABEL_25;
          if ( v37 == v9 )
            goto LABEL_53;
LABEL_60:
          v42 = *(_QWORD *)(v6 - 24);
          if ( !*(_QWORD *)(a1 + 168) )
          {
            v44 = v42 == 0;
            goto LABEL_64;
          }
          if ( !v42 )
            goto LABEL_65;
          v43 = *(_QWORD *)(v37 + 24);
          if ( *(_QWORD *)(v9 + 24) != v43 )
          {
            v44 = *(_QWORD *)(v9 + 24) < v43;
            goto LABEL_64;
          }
LABEL_53:
          v40 = *(_BYTE *)(a1 + 180);
          if ( v40 != *(_BYTE *)(v6 - 12) )
          {
            if ( !v40 )
              goto LABEL_65;
            goto LABEL_55;
          }
          v44 = *(_DWORD *)(a1 + 176) < *(_DWORD *)(v6 - 16);
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
  v109 = v8 - 1;
  v108 = &v112;
  v110 = &v120;
  for ( i = a1 + 96 * (v8 - 1); ; i -= 96 )
  {
    sub_64000(v108, i, *(double *)a4.m128_u64);
    v87 = *(_QWORD *)(i + 16);
    v88 = v108;
    v89 = _mm_loadu_si128((const __m128i *)(i + 24));
    v90 = v110;
    *(_OWORD *)(i + 24) = 0;
    v113 = v87;
    v91 = *(_QWORD *)(i + 40);
    v114 = v89;
    v92 = _mm_loadu_si128((const __m128i *)(i + 48));
    v115 = v91;
    v93 = *(_QWORD *)(i + 80);
    *(_QWORD *)(i + 16) = 0;
    *(_QWORD *)(i + 40) = 0;
    v118 = v93;
    LOBYTE(v93) = *(_BYTE *)(i + 88);
    v116 = v92;
    v94 = _mm_loadu_si128((const __m128i *)(i + 64));
    *(_OWORD *)(i + 48) = 0;
    LOBYTE(v119) = v93;
    v117 = v94;
    sub_64000(v90, (__int64)v88, *(double *)v94.m128i_i64);
    v95 = v113;
    v96 = _mm_loadu_si128(&v114);
    v113 = 0;
    v121 = v95;
    v122 = v96;
    v97 = _mm_load_si128(&v116);
    v123 = v115;
    v124 = v97;
    a4 = (__m128)_mm_load_si128(&v117);
    v126 = v118;
    v115 = 0;
    LOBYTE(v127) = v119;
    v114 = 0;
    v116 = 0;
    v125 = a4;
    sub_1F24B0(a1, v109, v111, (__int64)v90, a4);
    v98 = v123;
    if ( v123 )
    {
      v99 = v124.m128i_i64[0];
      if ( v124.m128i_i64[0] )
      {
        v100 = 0;
        do
        {
          v101 = (__int64 *)(v98 + 40 * v100);
          v102 = v101[2];
          if ( v102 )
          {
            v101[3] = 0;
            qfree(v102);
          }
          ++v100;
          qfree(*v101);
          v98 = v123;
        }
        while ( v99 != v100 );
      }
      v124.m128i_i64[0] = 0;
      qfree(v98);
    }
    if ( v121 )
    {
      v122.m128i_i64[0] = 0;
      qfree(v121);
    }
    qfree(v120);
    v50 = v115;
    if ( !v109 )
      break;
    --v109;
    if ( v115 )
    {
      v103 = v116.m128i_i64[0];
      if ( v116.m128i_i64[0] )
      {
        v104 = 0;
        do
        {
          v105 = (__int64 *)(v50 + 40 * v104);
          v106 = v105[2];
          if ( v106 )
          {
            v105[3] = 0;
            v107.m128i_i64[0] = (__int64)v105;
            qfree(v106);
            v105 = (__int64 *)v107.m128i_i64[0];
          }
          ++v104;
          qfree(*v105);
          v50 = v115;
        }
        while ( v103 != v104 );
      }
      v116.m128i_i64[0] = 0;
      qfree(v50);
    }
    if ( v113 )
    {
      v114.m128i_i64[0] = 0;
      qfree(v113);
    }
    qfree(v112);
  }
  if ( v115 )
  {
    v46 = v116.m128i_i64[0];
    if ( v116.m128i_i64[0] )
    {
      v47 = 0;
      do
      {
        v48 = (__int64 *)(v50 + 40 * v47);
        v49 = v48[2];
        if ( v49 )
        {
          v48[3] = 0;
          qfree(v49);
        }
        ++v47;
        qfree(*v48);
        v50 = v115;
      }
      while ( v46 != v47 );
    }
    v116.m128i_i64[0] = 0;
    qfree(v50);
  }
  if ( v113 )
  {
    v114.m128i_i64[0] = 0;
    qfree(v113);
  }
  qfree(v112);
  if ( v6 - a1 > 96 )
  {
    do
    {
      v6 -= 96;
      sub_64000(v108, v6, *(double *)a4.m128_u64);
      v51 = *(_QWORD *)(v6 + 16);
      v52 = _mm_loadu_si128((const __m128i *)(v6 + 24));
      *(_QWORD *)(v6 + 16) = 0;
      v113 = v51;
      v53 = *(_QWORD *)(v6 + 40);
      v114 = v52;
      v54 = _mm_loadu_si128((const __m128i *)(v6 + 48));
      v115 = v53;
      v55 = *(_QWORD *)(v6 + 80);
      *(_QWORD *)(v6 + 40) = 0;
      v118 = v55;
      LOBYTE(v55) = *(_BYTE *)(v6 + 88);
      *(_OWORD *)(v6 + 24) = 0;
      *(_OWORD *)(v6 + 48) = 0;
      v56 = _mm_loadu_si128((const __m128i *)(v6 + 64));
      LOBYTE(v119) = v55;
      v116 = v54;
      v117 = v56;
      sub_648D0((__int64 *)v6, (const void **)a1, *(double *)v56.m128i_i64);
      v57 = *(_QWORD *)(a1 + 16);
      v58 = _mm_loadu_si128((const __m128i *)(a1 + 24));
      *(_QWORD *)(a1 + 16) = 0;
      *(_OWORD *)(a1 + 24) = 0;
      v59 = *(_QWORD *)(v6 + 16);
      if ( v59 )
      {
        *(_QWORD *)(v6 + 24) = 0;
        v107 = v58;
        qfree(v59);
        v58 = _mm_load_si128(&v107);
      }
      *(__m128i *)(v6 + 24) = v58;
      *(_QWORD *)(v6 + 16) = v57;
      v60 = *(_QWORD *)(a1 + 40);
      v61 = _mm_loadu_si128((const __m128i *)(a1 + 48));
      *(_QWORD *)(a1 + 40) = 0;
      *(_OWORD *)(a1 + 48) = 0;
      v62 = *(_QWORD *)(v6 + 40) == 0;
      v109 = v60;
      v107 = v61;
      if ( !v62 )
      {
        v63 = *(_QWORD *)(v6 + 48);
        v64 = 0;
        if ( v63 )
        {
          do
          {
            v65 = (__int64 *)(*(_QWORD *)(v6 + 40) + 40 * v64);
            v66 = v65[2];
            if ( v66 )
            {
              v65[3] = 0;
              qfree(v66);
            }
            ++v64;
            qfree(*v65);
          }
          while ( v63 != v64 );
        }
        *(_QWORD *)(v6 + 48) = 0;
        qfree(*(_QWORD *)(v6 + 40));
      }
      v67 = _mm_load_si128(&v107);
      v68 = v110;
      v69 = v108;
      *(_QWORD *)(v6 + 40) = v109;
      *(__m128i *)(v6 + 48) = v67;
      v70 = _mm_loadu_si128((const __m128i *)(a1 + 64));
      *(__m128i *)(v6 + 64) = v70;
      *(_QWORD *)(v6 + 77) = *(_QWORD *)(a1 + 77);
      *(_BYTE *)(v6 + 88) = *(_BYTE *)(a1 + 88);
      sub_64000(v68, (__int64)v69, *(double *)v70.m128i_i64);
      v71 = v113;
      v72 = _mm_loadu_si128(&v114);
      v73 = _mm_load_si128(&v116);
      v113 = 0;
      v121 = v71;
      v122 = v72;
      v123 = v115;
      v114 = 0;
      v126 = v118;
      v116 = 0;
      a4 = (__m128)_mm_load_si128(&v117);
      LOBYTE(v127) = v119;
      v124 = v73;
      v107.m128i_i64[0] = v6 - a1;
      v125 = a4;
      v115 = 0;
      sub_1F24B0(a1, 0, 0xAAAAAAAAAAAAAAABLL * ((v6 - a1) >> 5), (__int64)v68, a4);
      v74 = v123;
      if ( v123 )
      {
        v75 = v124.m128i_i64[0];
        if ( v124.m128i_i64[0] )
        {
          v76 = 0;
          do
          {
            v77 = (__int64 *)(v74 + 40 * v76);
            v78 = v77[2];
            if ( v78 )
            {
              v77[3] = 0;
              qfree(v78);
            }
            ++v76;
            qfree(*v77);
            v74 = v123;
          }
          while ( v75 != v76 );
        }
        v124.m128i_i64[0] = 0;
        qfree(v74);
      }
      if ( v121 )
      {
        v122.m128i_i64[0] = 0;
        qfree(v121);
      }
      qfree(v120);
      v79 = v115;
      if ( v115 )
      {
        v80 = v116.m128i_i64[0];
        if ( v116.m128i_i64[0] )
        {
          v81 = 0;
          do
          {
            v82 = (__int64 *)(v79 + 40 * v81);
            v83 = v82[2];
            if ( v83 )
            {
              v82[3] = 0;
              qfree(v83);
            }
            ++v81;
            qfree(*v82);
            v79 = v115;
          }
          while ( v80 != v81 );
        }
        v116.m128i_i64[0] = 0;
        qfree(v79);
      }
      if ( v113 )
      {
        v114.m128i_i64[0] = 0;
        qfree(v113);
      }
      qfree(v112);
    }
    while ( v107.m128i_i64[0] > 96 );
  }
  return v128 - __readfsqword(0x28u);
}

