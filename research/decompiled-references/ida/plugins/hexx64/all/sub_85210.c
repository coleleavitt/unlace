__int64 __fastcall sub_85210(char ***a1, __int64 a2, double a3)
{
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int8 **v7; // rdi
  unsigned __int8 *v8; // rax
  __int64 v9; // rax
  const void **v10; // rcx
  __int64 v11; // rdx
  char *v12; // rsi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int8 v16; // bp
  __int64 v17; // rax
  __int64 v18; // rsi
  __m128i *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  __int64 v23; // rax
  __m128i *v24; // rbx
  __int64 m128i_i64; // rbx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned int v28; // r15d
  int v29; // r12d
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  char **v34; // rdx
  char v35; // r12
  char *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  _QWORD *v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // edi
  _QWORD *v53; // rbp
  __int64 v54; // rdx
  __int64 v55; // rsi
  __int64 v56; // r15
  unsigned int v57; // eax
  unsigned int v58; // ebp
  int v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // rsi
  __int64 v62; // rdx
  __int64 v63; // rax
  unsigned int v64; // eax
  unsigned int v65; // r12d
  unsigned int v66; // ebp
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  _QWORD *v70; // rsi
  char *v71; // r14
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rbp
  __int64 v76; // r12
  __int64 v77; // rax
  __int64 v78; // rdx
  _QWORD *v79; // rdx
  _QWORD *v80; // rdi
  __int64 v81; // rax
  __m128i *v82; // rax
  __int64 v83; // r14
  __m128i *v84; // rax
  unsigned __int64 v85; // r14
  __m128i *v86; // rbx
  int v87; // [rsp+4h] [rbp-D4h]
  int v88; // [rsp+4h] [rbp-D4h]
  unsigned int v89; // [rsp+10h] [rbp-C8h]
  __int64 v90; // [rsp+10h] [rbp-C8h]
  __int64 v91; // [rsp+20h] [rbp-B8h] BYREF
  __int128 v92; // [rsp+28h] [rbp-B0h]
  __int64 v93; // [rsp+40h] [rbp-98h] BYREF
  __int64 v94; // [rsp+48h] [rbp-90h]
  __int64 v95[4]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD *v96; // [rsp+80h] [rbp-58h] BYREF
  __int128 v97; // [rsp+88h] [rbp-50h]
  unsigned __int64 v98; // [rsp+98h] [rbp-40h]

  v98 = __readfsqword(0x28u);
  v4 = a2;
  v5 = unpack_dd();
  if ( (unsigned int)(v5 - 70) <= 0xF )
  {
    *(_DWORD *)(a2 + 8) = v5;
    v7 = (unsigned __int8 **)*a1;
    if ( *((_DWORD *)a1 + 4) > 3u && (v8 = *v7, *v7 < (unsigned __int8 *)(*a1)[1]) )
    {
      v16 = *v8;
      v11 = -1;
      *v7 = v8 + 1;
      if ( v16 > 1u || (v9 = unpack_dq(), v10 = (const void **)a1[1], v11 = (__int64)*v10 + ~v9, v16) )
      {
LABEL_7:
        *(_QWORD *)a2 = v11;
        v12 = (*a1)[1];
        v13 = unpack_dd();
        *(_DWORD *)(v4 + 12) = v13;
        if ( *((_DWORD *)a1 + 4) > 2u )
          *(_DWORD *)(v4 + 12) = v13 - 1;
        switch ( *(_DWORD *)(v4 + 8) )
        {
          case 'F':
          case 'N':
          case 'O':
            return 1;
          case 'G':
            v19 = (__m128i *)qalloc_or_throw(24, (__int64)v12, v14, v15);
            v19[1].m128i_i64[0] = 0;
            *v19 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v19, (__m128i)(unsigned __int64)v19);
            *(_QWORD *)(v4 + 24) = v19;
            return sub_867C0((const void ***)a1, (__int64)v19);
          case 'H':
          case 'P':
          case 'T':
            v17 = j__qalloc_or_throw(64, (__int64)v12, v14, v15);
            *(_QWORD *)v17 = -1;
            v18 = v17;
            *(_QWORD *)(v17 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v17 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v17 + 40) = 0;
            *(_QWORD *)(v17 + 48) = 0;
            *(_DWORD *)(v17 + 56) = 0;
            *(_OWORD *)(v17 + 24) = 0;
            *(_QWORD *)(v4 + 24) = v17;
            return sub_86090((const void ***)a1, v18);
          case 'I':
            v34 = *a1;
            v35 = 0;
            v36 = **a1;
            if ( v36 < (*a1)[1] )
              v35 = *v36++;
            *v34 = v36;
            v37 = j__qalloc_or_throw(80, (__int64)v12, (__int64)v34, v15);
            *(_QWORD *)v37 = -1;
            *(_QWORD *)(v37 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v37 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v37 + 40) = 0;
            *(_QWORD *)(v37 + 48) = 0;
            *(_QWORD *)(v37 + 56) = 0;
            *(_OWORD *)(v37 + 24) = 0;
            *(_OWORD *)(v37 + 64) = 0;
            *(_QWORD *)(v4 + 24) = v37;
            v39 = (_QWORD *)j__qalloc_or_throw(32, (__int64)v12, v38, 0xFFFFFFFF00000000LL);
            *v39 = -1;
            v39[1] = -4294967226LL;
            v39[2] = 0xFFFFFFFFLL;
            v39[3] = 0;
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL) = v39;
            v40 = *(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL);
            if ( (unsigned __int8)sub_85210((const void ***)a1, v40) )
            {
              if ( v35 )
                goto LABEL_44;
              v43 = (_QWORD *)j__qalloc_or_throw(32, v40, v41, v42);
              *v43 = -1;
              v43[1] = -4294967226LL;
              v43[2] = 0xFFFFFFFFLL;
              v43[3] = 0;
              *(_QWORD *)(*(_QWORD *)(v4 + 24) + 72LL) = v43;
              if ( (unsigned __int8)sub_85210((const void ***)a1, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 72LL)) )
                goto LABEL_44;
            }
            return 0;
          case 'J':
            v44 = j__qalloc_or_throw(200, (__int64)v12, v14, v15);
            *(_QWORD *)v44 = -1;
            *(_DWORD *)(v44 + 8) = 0;
            *(_QWORD *)(v44 + 12) = -1;
            *(_QWORD *)(v44 + 40) = 0;
            *(_QWORD *)(v44 + 48) = 0;
            *(_DWORD *)(v44 + 56) = 0;
            *(_QWORD *)(v44 + 64) = 0;
            *(_QWORD *)(v44 + 72) = -1;
            *(_DWORD *)(v44 + 80) = 0;
            *(_QWORD *)(v44 + 84) = -1;
            *(_QWORD *)(v44 + 112) = 0;
            *(_QWORD *)(v44 + 120) = 0;
            *(_DWORD *)(v44 + 128) = 0;
            *(_QWORD *)(v44 + 136) = -1;
            *(_QWORD *)(v44 + 144) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v44 + 152) = 0xFFFFFFFFLL;
            *(_QWORD *)(v44 + 176) = 0;
            *(_QWORD *)(v44 + 184) = 0;
            *(_DWORD *)(v44 + 192) = 0;
            *(_OWORD *)(v44 + 24) = 0;
            *(_OWORD *)(v44 + 96) = 0;
            *(_OWORD *)(v44 + 160) = 0;
            *(_QWORD *)(v4 + 24) = v44;
            if ( (unsigned __int8)sub_86090((const void ***)a1, v44 + 72) )
            {
              v12 = (char *)(*(_QWORD *)(v4 + 24) + 136LL);
              if ( (unsigned __int8)sub_86090((const void ***)a1, (__int64)v12) )
                goto LABEL_47;
            }
            return 0;
          case 'K':
            v48 = j__qalloc_or_throw(72, (__int64)v12, v14, v15);
            v46 = 0xFFFFFFFF00000000LL;
            *(_QWORD *)v48 = -1;
            *(_QWORD *)(v48 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v48 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v48 + 40) = 0;
            *(_QWORD *)(v48 + 48) = 0;
            *(_QWORD *)(v48 + 56) = 0;
            *(_QWORD *)(v48 + 64) = 0;
            *(_OWORD *)(v48 + 24) = 0;
            *(_QWORD *)(v4 + 24) = v48;
LABEL_47:
            v47 = (_QWORD *)j__qalloc_or_throw(32, (__int64)v12, v45, v46);
            *v47 = -1;
            v47[1] = -4294967226LL;
            v47[2] = 0xFFFFFFFFLL;
            goto LABEL_48;
          case 'L':
            v49 = j__qalloc_or_throw(72, (__int64)v12, v14, v15);
            *(_QWORD *)(v49 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)v49 = -1;
            *(_QWORD *)(v49 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)(v49 + 40) = 0;
            *(_QWORD *)(v49 + 48) = 0;
            *(_QWORD *)(v49 + 56) = 0;
            *(_QWORD *)(v49 + 64) = 0;
            *(_OWORD *)(v49 + 24) = 0;
            *(_QWORD *)(v4 + 24) = v49;
            v47 = (_QWORD *)j__qalloc_or_throw(32, (__int64)v12, v50, 0xFFFFFFFF00000000LL);
            *v47 = -1;
            v47[1] = -4294967226LL;
            v47[2] = 0xFFFFFFFFLL;
LABEL_48:
            v47[3] = 0;
            *(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL) = v47;
            if ( (unsigned __int8)sub_85210((const void ***)a1, *(_QWORD *)(*(_QWORD *)(v4 + 24) + 64LL)) )
              goto LABEL_44;
            return 0;
          case 'M':
            v51 = j__qalloc_or_throw(136, (__int64)v12, v14, v15);
            *(_QWORD *)(v51 + 8) = 0xFFFFFFFF00000000LL;
            *(_QWORD *)(v51 + 16) = 0xFFFFFFFFLL;
            *(_QWORD *)v51 = -1;
            *(_QWORD *)(v51 + 40) = 0;
            *(_QWORD *)(v51 + 48) = 0;
            *(_DWORD *)(v51 + 56) = 0;
            *(_QWORD *)(v51 + 64) = 0;
            *(_QWORD *)(v51 + 72) = 0;
            *(_QWORD *)(v51 + 80) = 0;
            *(_QWORD *)(v51 + 104) = 0;
            *(_QWORD *)(v51 + 112) = 0;
            *(_OWORD *)(v51 + 24) = 0;
            *(_OWORD *)(v51 + 88) = 0;
            *(_OWORD *)(v51 + 120) = 0;
            *(_QWORD *)(v4 + 24) = v51;
            sub_817D0(a1, v51 + 64);
            v52 = unpack_dd();
            if ( (*a1)[1] - **a1 < (unsigned __int64)v52 )
              return 0;
            if ( !v52 )
              goto LABEL_44;
            v88 = 0;
            v90 = v4;
            while ( 2 )
            {
              v53 = *(_QWORD **)(v90 + 24);
              v54 = v53[15];
              v55 = v53[14];
              if ( v53[16] < (unsigned __int64)(v54 + 1) )
              {
                v74 = qvector_reserve((__int64)(v53 + 14), v55, v54 + 1, 56);
                v54 = v53[15];
                v53[14] = v74;
                v55 = v74;
              }
              v56 = v55 + 56 * v54;
              *(_QWORD *)v56 = -1;
              *(_QWORD *)(v56 + 12) = -1;
              *(_DWORD *)(v56 + 8) = 70;
              *(_OWORD *)(v56 + 24) = 0;
              *(_OWORD *)(v56 + 40) = 0;
              ++v53[15];
              v57 = unpack_dd();
              v58 = v57;
              if ( (*a1)[1] - **a1 < (unsigned __int64)v57 )
                return 0;
              *(_QWORD *)(v56 + 40) = 0;
              if ( *(_QWORD *)(v56 + 48) < (unsigned __int64)v57 )
              {
                *(_QWORD *)(v56 + 32) = qvector_reserve(v56 + 32, *(_QWORD *)(v56 + 32), v57, 8);
              }
              else if ( !v57 )
              {
                goto LABEL_71;
              }
              v59 = 0;
              do
              {
                v60 = *(_QWORD *)(v56 + 40);
                v61 = *(_QWORD *)(v56 + 32);
                v62 = v60 + 1;
                if ( *(_QWORD *)(v56 + 48) < (unsigned __int64)(v60 + 1) )
                {
                  v63 = qvector_reserve(v56 + 32, v61, v62, 8);
                  v60 = *(_QWORD *)(v56 + 40);
                  *(_QWORD *)(v56 + 32) = v63;
                  v61 = v63;
                  v62 = v60 + 1;
                }
                *(_QWORD *)(v56 + 40) = v62;
                ++v59;
                *(_QWORD *)(v61 + 8 * v60) = unpack_dq();
              }
              while ( v58 != v59 );
LABEL_71:
              if ( !(unsigned __int8)sub_85210((const void ***)a1, v56) )
                return 0;
              if ( ++v88 == v52 )
              {
                v4 = v90;
LABEL_44:
                v18 = *(_QWORD *)(v4 + 24);
                return sub_86090((const void ***)a1, v18);
              }
              continue;
            }
          case 'Q':
            *(_QWORD *)(v4 + 24) = j__qalloc_or_throw(4, (__int64)v12, v14, v15);
            **(_DWORD **)(v4 + 24) = unpack_dd();
            return 1;
          case 'R':
            v96 = nullptr;
            v97 = 0;
            v64 = unpack_dd();
            v65 = v64;
            if ( (*a1)[1] - **a1 < (unsigned __int64)v64 )
              goto LABEL_74;
            *(_QWORD *)&v97 = 0;
            if ( *((_QWORD *)&v97 + 1) < (unsigned __int64)v64 )
            {
              v96 = (_QWORD *)qvector_reserve((__int64)&v96, (__int64)v96, v64, 8);
            }
            else if ( !v64 )
            {
              goto LABEL_74;
            }
            v66 = 0;
            do
            {
              v68 = unpack_dq();
              v70 = v96;
              v71 = &(*a1[1])[v68];
              v72 = v97;
              v73 = v97 + 1;
              if ( *((_QWORD *)&v97 + 1) < (unsigned __int64)(v97 + 1) )
              {
                v96 = (_QWORD *)qvector_reserve((__int64)&v96, (__int64)v96, v73, 8);
                v70 = v96;
                v72 = v97;
              }
              v70[v72] = v71;
              ++v66;
              v67 = v97 + 1;
              *(_QWORD *)&v97 = v97 + 1;
            }
            while ( v66 < v65 );
            if ( v67 )
            {
              v75 = qalloc_or_throw(24, (__int64)v70, v73, v69);
              v76 = *v96;
              *(_QWORD *)v75 = 0;
              *(_OWORD *)(v75 + 8) = 0;
              v77 = qvector_reserve(v75, 0, 1, 8);
              v78 = *(_QWORD *)(v75 + 8);
              *(_QWORD *)v75 = v77;
              *(_QWORD *)(v77 + 8 * v78) = v76;
              ++*(_QWORD *)(v75 + 8);
              v79 = v96;
              *(_QWORD *)(v4 + 24) = v75;
              v80 = *(_QWORD **)v75;
              *(_QWORD *)v75 = v79;
              v81 = *(_QWORD *)(v75 + 16);
              *(_OWORD *)(v75 + 8) = v97;
              v96 = v80;
              *((_QWORD *)&v97 + 1) = v81;
              if ( v80 )
              {
                *(_QWORD *)&v97 = 0;
                qfree((__int64)v80);
              }
              return 1;
            }
LABEL_74:
            if ( v96 )
            {
              *(_QWORD *)&v97 = 0;
              qfree((__int64)v96);
            }
            return 0;
          case 'S':
            v20 = qalloc_or_throw(72, (__int64)v12, v14, v15);
            *(_BYTE *)(v20 + 64) = 0;
            v21 = v20;
            *(_QWORD *)(v20 + 16) = 0;
            *(__m128i *)v20 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v20, (__m128i)(unsigned __int64)v20);
            *(_QWORD *)(v20 + 24) = 0;
            *(_OWORD *)(v20 + 32) = 0;
            *(_OWORD *)(v20 + 48) = 0;
            *(_QWORD *)(v4 + 24) = v20;
            if ( !(unsigned __int8)sub_867C0((const void ***)a1, v20) )
              return 1;
            *(_BYTE *)(v21 + 64) = (unsigned int)unpack_dd() != 0;
            *(_QWORD *)(v21 + 48) = (unsigned int)unpack_dd();
            *(_QWORD *)(v21 + 56) = (unsigned int)unpack_dd();
            v89 = unpack_dd();
            if ( (*a1)[1] - **a1 < (unsigned __int64)v89 )
              return 0;
            v22 = *(_QWORD *)(v21 + 40);
            if ( v22 < v89 )
            {
              v84 = (__m128i *)qvector_reserve(v21 + 24, 0, v89, 48);
              v85 = *(_QWORD *)(v21 + 40);
              *(_QWORD *)(v21 + 40) = v22;
              v86 = v84;
              v22 = v85;
              sub_85110(v84, *(const __m128i **)(v21 + 24), *(_QWORD *)(v21 + 32));
              qfree(*(_QWORD *)(v21 + 24));
              *(_QWORD *)(v21 + 24) = v86;
              *(_QWORD *)(v21 + 40) = v85;
            }
            else if ( !v89 )
            {
              return 1;
            }
            v87 = 0;
            while ( 2 )
            {
              v23 = *(_QWORD *)(v21 + 32);
              if ( v22 < v23 + 1 )
              {
                v82 = (__m128i *)qvector_reserve(v21 + 24, 0, v23 + 1, 48);
                v83 = *(_QWORD *)(v21 + 40);
                *(_QWORD *)(v21 + 40) = v22;
                v24 = v82;
                sub_85110(v82, *(const __m128i **)(v21 + 24), *(_QWORD *)(v21 + 32));
                qfree(*(_QWORD *)(v21 + 24));
                *(_QWORD *)(v21 + 24) = v24;
                v23 = *(_QWORD *)(v21 + 32);
                *(_QWORD *)(v21 + 40) = v83;
              }
              else
              {
                v24 = *(__m128i **)(v21 + 24);
              }
              m128i_i64 = (__int64)v24[3 * v23].m128i_i64;
              *(_QWORD *)(m128i_i64 + 16) = 0;
              *(_QWORD *)(m128i_i64 + 24) = 0;
              *(__m128i *)m128i_i64 = _mm_unpacklo_epi64(
                                        (__m128i)(unsigned __int64)m128i_i64,
                                        (__m128i)(unsigned __int64)m128i_i64);
              *(_OWORD *)(m128i_i64 + 32) = 0;
              ++*(_QWORD *)(v21 + 32);
              v91 = 0;
              v92 = 0;
              sub_6B870(&v91);
              sub_81980((__int64)&v96, "block.size");
              sub_83210((__int64)&v93, (__int64)&v91, (__int64)&v96, v26);
              if ( v96 )
              {
                *(_QWORD *)&v97 = 0;
                qfree((__int64)v96);
              }
              if ( (unsigned __int8)sub_867C0((const void ***)a1, m128i_i64) )
              {
                sub_81980((__int64)v95, "catchexps.size");
                sub_83210((__int64)&v96, (__int64)&v91, (__int64)v95, v27);
                v28 = unpack_dd();
                if ( v96 )
                {
                  *(_QWORD *)&v97 = 0;
                  qfree((__int64)v96);
                }
                if ( v95[0] )
                {
                  v95[1] = 0;
                  qfree(v95[0]);
                }
                if ( (*a1)[1] - **a1 >= (unsigned __int64)v28 )
                {
                  v29 = 0;
                  if ( !v28 )
                  {
LABEL_85:
                    if ( v93 )
                    {
                      v94 = 0;
                      qfree(v93);
                    }
                    if ( v91 )
                    {
                      *(_QWORD *)&v92 = 0;
                      qfree(v91);
                    }
                    if ( ++v87 == v89 )
                      return 1;
                    v22 = *(_QWORD *)(v21 + 40);
                    continue;
                  }
                  while ( 1 )
                  {
                    v31 = *(_QWORD *)(m128i_i64 + 32);
                    v32 = *(_QWORD *)(m128i_i64 + 24);
                    if ( *(_QWORD *)(m128i_i64 + 40) < (unsigned __int64)(v31 + 1) )
                    {
                      v33 = qvector_reserve(m128i_i64 + 24, v32, v31 + 1, 88);
                      *(_QWORD *)(m128i_i64 + 24) = v33;
                      v31 = *(_QWORD *)(m128i_i64 + 32);
                      v32 = v33;
                    }
                    v30 = v32 + 88 * v31;
                    *(_QWORD *)(v30 + 8) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)v30 = -1;
                    *(_QWORD *)(v30 + 16) = 0xFFFFFFFFLL;
                    *(_QWORD *)(v30 + 40) = 0;
                    *(_QWORD *)(v30 + 48) = 0;
                    *(_DWORD *)(v30 + 56) = 0;
                    *(_QWORD *)(v30 + 64) = 0;
                    *(_OWORD *)(v30 + 24) = 0;
                    *(_OWORD *)(v30 + 72) = 0;
                    ++*(_QWORD *)(m128i_i64 + 32);
                    sub_7BE00((__int64 *)(v30 + 64), (const void **)*a1, (unsigned __int64)(*a1)[1]);
                    if ( !(unsigned __int8)sub_86090((const void ***)a1, v30) )
                      break;
                    if ( ++v29 == v28 )
                      goto LABEL_85;
                  }
                }
              }
              break;
            }
            if ( v93 )
            {
              v94 = 0;
              qfree(v93);
            }
            if ( v91 )
            {
              *(_QWORD *)&v92 = 0;
              qfree(v91);
            }
            return 0;
          default:
            *(_DWORD *)(v4 + 8) = 70;
            if ( !under_debugger )
              sub_383060(0xCC7Cu, a3);
            BUG();
        }
      }
    }
    else
    {
      v9 = unpack_dq();
      v10 = (const void **)a1[1];
    }
    v11 = (__int64)*v10 + v9;
    goto LABEL_7;
  }
  return 0;
}

