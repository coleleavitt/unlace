__int64 __fastcall sub_26BE0(__int64 a1)
{
  unsigned __int64 v2; // rsi
  unsigned int v3; // ecx
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax
  unsigned int v6; // r10d
  unsigned int v7; // eax
  unsigned int v8; // r11d
  __int64 v9; // rdi
  __int64 v10; // r9
  int v11; // r13d
  unsigned int v12; // edx
  __int16 v13; // di
  __int64 v14; // rcx
  __int64 v15; // rdi
  unsigned int v16; // r9d
  __int64 v17; // r8
  unsigned int v18; // ecx
  _WORD *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r9
  unsigned int v22; // esi
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // edx
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // rax
  __int64 result; // rax
  unsigned int v31; // eax
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rsi
  int v36; // r9d
  unsigned int v37; // edi
  __int16 v38; // dx
  unsigned int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // r8
  unsigned int v42; // esi
  unsigned int v43; // ecx
  _WORD *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // r9
  unsigned int v47; // edi
  __int64 v48; // rdx
  unsigned int v49; // ecx
  unsigned int v50; // eax
  __int64 v51; // rdx
  __int64 v52; // rsi
  __int64 v53; // rdi
  int v54; // r9d
  unsigned int v55; // edx
  __int16 v56; // si
  __int64 v57; // rcx
  __int64 v58; // rsi
  __int64 v59; // rdi
  int v60; // r8d
  unsigned int v61; // ecx
  __int16 v62; // si
  unsigned __int64 v63; // r9
  __int64 v64; // rcx
  int v65; // r10d
  int v66; // r11d
  __int16 v67; // ax
  int v68; // r9d
  int v69; // r9d
  _WORD *v70; // rdi
  __int64 v71; // rsi
  __int64 v72; // r12
  unsigned int v73; // esi
  unsigned int v74; // edi
  int v75; // esi
  unsigned int v76; // edi
  unsigned int v77; // r8d
  __int64 v78; // rsi
  int v79; // ecx
  __int64 v80; // r10
  unsigned int v81; // edx
  unsigned int v82; // esi
  _WORD *v83; // rax
  __int64 v84; // r9
  __int64 v85; // r12
  unsigned int v86; // r9d
  int v87; // eax
  unsigned int v88; // eax
  unsigned int v89; // ecx
  __int64 v90; // rdx
  __int64 v91; // rsi
  __int64 v92; // r9
  unsigned int v93; // edi
  int v94; // r12d
  unsigned int v95; // edx
  __int16 v96; // si
  __m128i v97; // xmm0
  unsigned int v98; // ecx
  unsigned int v99; // eax
  __int64 v100; // rdx
  __int64 v101; // rsi
  int v102; // r9d
  unsigned int v103; // edx
  __int16 v104; // si
  __int16 v105; // si
  unsigned int v106; // eax
  unsigned int v107; // r9d
  unsigned int v108; // eax
  unsigned int v109; // ecx
  __int64 v110; // rdx
  __int64 v111; // rdi
  int v112; // edx
  unsigned int v113; // esi
  _WORD *v114; // r8
  __int64 v115; // rdx
  __int64 v116; // r12
  unsigned int v117; // edx

  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 < *(_QWORD *)(a1 + 72) )
  {
    if ( !*(_DWORD *)(a1 + 144)
      || (sub_24F80((__int64 *)(a1 + 40), (_DWORD *)(a1 + 144), *(_DWORD *)(a1 + 124)),
          v2 = *(_QWORD *)(a1 + 56),
          v2 < *(_QWORD *)(a1 + 72)) )
    {
      while ( 1 )
      {
        v3 = *(_DWORD *)a1;
        v4 = *(_QWORD *)(a1 + 24);
        v5 = *(_DWORD *)a1;
        if ( *(_QWORD *)(a1 + 32) < v4 )
          goto LABEL_27;
        v6 = *(_DWORD *)(a1 + 140);
        v7 = *(_DWORD *)(a1 + 4);
        v8 = v2 & *(_DWORD *)(a1 + 156);
        if ( v3 <= 0xFFFFFF )
        {
          v9 = *(_QWORD *)(a1 + 16);
          v3 <<= 8;
          *(_DWORD *)a1 = v3;
          *(_QWORD *)(a1 + 24) = v4 + 1;
          v7 = *(unsigned __int8 *)(v9 + v4) + (v7 << 8);
          *(_DWORD *)(a1 + 4) = v7;
        }
        v10 = 16LL * v6 + v8 + 72;
        v11 = *(unsigned __int16 *)(a1 + 2 * v10 + 16);
        v12 = v11 * (v3 >> 11);
        v13 = *(_WORD *)(a1 + 2 * v10 + 16);
        if ( v7 < v12 )
        {
          *(_DWORD *)a1 = v12;
          *(_WORD *)(a1 + 2 * v10 + 16) = v11 + ((2048 - v11) >> 5);
          v14 = v2 - 1;
          if ( !v2 )
            v14 = *(_QWORD *)(a1 + 80) - 1LL;
          v15 = *(_QWORD *)(a1 + 64);
          v16 = 0;
          if ( v15 )
            v16 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v14);
          v17 = a1
              + 1536LL
              * ((unsigned int)((unsigned __int64)(*(_DWORD *)(a1 + 152) & (unsigned int)v2) << *(_DWORD *)(a1 + 148))
               + (v16 >> (8 - *(_DWORD *)(a1 + 148))))
              + 3852;
          if ( v6 <= 6 )
          {
            v18 = 1;
            while ( 1 )
            {
              v19 = (_WORD *)(v17 + 2LL * v18);
              if ( v12 <= 0xFFFFFF )
              {
                v20 = *(_QWORD *)(a1 + 24);
                v21 = *(_QWORD *)(a1 + 16);
                v12 <<= 8;
                *(_DWORD *)a1 = v12;
                *(_QWORD *)(a1 + 24) = v20 + 1;
                v7 = *(unsigned __int8 *)(v21 + v20) + (v7 << 8);
                *(_DWORD *)(a1 + 4) = v7;
              }
              v18 *= 2;
              v22 = (unsigned __int16)*v19 * (v12 >> 11);
              if ( v7 < v22 )
              {
                *(_DWORD *)a1 = v22;
                *v19 += (2048 - (unsigned __int16)*v19) >> 5;
                if ( v18 > 0xFF )
                  goto LABEL_19;
              }
              else
              {
                ++v18;
                *(_DWORD *)a1 = v12 - v22;
                *(_DWORD *)(a1 + 4) = v7 - v22;
                *v19 -= *v19 >> 5;
                if ( v18 > 0xFF )
                  goto LABEL_19;
              }
              v12 = *(_DWORD *)a1;
              v7 = *(_DWORD *)(a1 + 4);
            }
          }
          v63 = *(unsigned int *)(a1 + 124);
          v64 = v2 - v63 - 1;
          if ( v63 >= v2 )
            v64 += *(_QWORD *)(a1 + 80);
          v65 = 0;
          if ( v15 )
            v65 = 2 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + v64);
          v66 = 256;
          v18 = 1;
          while ( 1 )
          {
            v68 = v65;
            v65 *= 2;
            v69 = v66 & v68;
            v70 = (_WORD *)(v17 + 2LL * (v69 + v66 + v18));
            if ( v12 <= 0xFFFFFF )
            {
              v71 = *(_QWORD *)(a1 + 24);
              v72 = *(_QWORD *)(a1 + 16);
              v12 <<= 8;
              *(_DWORD *)a1 = v12;
              *(_QWORD *)(a1 + 24) = v71 + 1;
              v7 = *(unsigned __int8 *)(v72 + v71) + (v7 << 8);
              *(_DWORD *)(a1 + 4) = v7;
            }
            v18 *= 2;
            v73 = (unsigned __int16)*v70 * (v12 >> 11);
            if ( v7 < v73 )
            {
              *(_DWORD *)a1 = v73;
              v66 &= ~v69;
              v67 = ((2048 - (unsigned __int16)*v70) >> 5) + *v70;
            }
            else
            {
              ++v18;
              v66 = v69;
              *(_DWORD *)a1 = v12 - v73;
              *(_DWORD *)(a1 + 4) = v7 - v73;
              v67 = *v70 - (*v70 >> 5);
            }
            *v70 = v67;
            if ( v18 > 0xFF )
              break;
            v12 = *(_DWORD *)a1;
            v7 = *(_DWORD *)(a1 + 4);
          }
LABEL_19:
          v23 = *(_QWORD *)(a1 + 56);
          v24 = *(_QWORD *)(a1 + 40);
          *(_QWORD *)(a1 + 56) = v23 + 1;
          *(_BYTE *)(v24 + v23) = v18;
          v2 = *(_QWORD *)(a1 + 56);
          if ( *(_QWORD *)(a1 + 64) < v2 )
            *(_QWORD *)(a1 + 64) = v2;
          v25 = *(_DWORD *)(a1 + 140);
          v26 = 0;
          if ( v25 > 3 )
          {
            v26 = v25 - 6;
            if ( v25 <= 9 )
              v26 = v25 - 3;
          }
          *(_DWORD *)(a1 + 140) = v26;
          goto LABEL_25;
        }
        v31 = v7 - v12;
        v32 = v3 - v12;
        *(_DWORD *)(a1 + 4) = v31;
        *(_WORD *)(a1 + 2 * v10 + 16) = v13 - ((unsigned __int16)v11 >> 5);
        if ( v32 <= 0xFFFFFF )
        {
          v33 = *(_QWORD *)(a1 + 24);
          v34 = *(_QWORD *)(a1 + 16);
          v32 <<= 8;
          *(_DWORD *)a1 = v32;
          *(_QWORD *)(a1 + 24) = v33 + 1;
          v31 = *(unsigned __int8 *)(v34 + v33) + (v31 << 8);
          *(_DWORD *)(a1 + 4) = v31;
        }
        v35 = v6 + 264LL;
        v36 = *(unsigned __int16 *)(a1 + 2 * v35 + 16);
        v37 = v36 * (v32 >> 11);
        v38 = *(_WORD *)(a1 + 2 * v35 + 16);
        if ( v31 < v37 )
        {
          *(_DWORD *)a1 = v37;
          *(_WORD *)(a1 + 2 * v35 + 16) = v36 + ((2048 - v36) >> 5);
          *(__m128i *)(a1 + 128) = _mm_unpacklo_epi64(
                                     _mm_unpacklo_epi32(
                                       _mm_cvtsi32_si128(*(_DWORD *)(a1 + 124)),
                                       _mm_cvtsi32_si128(*(_DWORD *)(a1 + 128))),
                                     _mm_unpacklo_epi32(
                                       _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132)),
                                       _mm_cvtsi32_si128(v6 < 7 ? 7 : 10)));
          sub_25040((unsigned int *)a1, (unsigned __int16 *)(a1 + 1796), v8);
          v39 = *(_DWORD *)(a1 + 144);
          if ( v39 > 5 )
            v39 = 5;
          v40 = 1;
          v41 = (v39 - 2 + 8LL) << 7;
          do
          {
            while ( 1 )
            {
              v42 = *(_DWORD *)a1;
              v43 = *(_DWORD *)(a1 + 4);
              v44 = (_WORD *)(a1 + v41 + 2LL * v40);
              if ( *(_DWORD *)a1 <= 0xFFFFFFu )
              {
                v45 = *(_QWORD *)(a1 + 24);
                v46 = *(_QWORD *)(a1 + 16);
                v42 <<= 8;
                *(_DWORD *)a1 = v42;
                *(_QWORD *)(a1 + 24) = v45 + 1;
                v43 = *(unsigned __int8 *)(v46 + v45) + (v43 << 8);
                *(_DWORD *)(a1 + 4) = v43;
              }
              v40 *= 2;
              v47 = (unsigned __int16)*v44 * (v42 >> 11);
              if ( v43 >= v47 )
                break;
              *(_DWORD *)a1 = v47;
              *v44 += (2048 - (unsigned __int16)*v44) >> 5;
              if ( v40 > 0x3F )
                goto LABEL_44;
            }
            ++v40;
            *(_DWORD *)a1 = v42 - v47;
            *(_DWORD *)(a1 + 4) = v43 - v47;
            *v44 -= *v44 >> 5;
          }
          while ( v40 <= 0x3F );
LABEL_44:
          v48 = v40 - 64;
          if ( (unsigned int)v48 > 3 )
          {
            v74 = (unsigned int)v48 >> 1;
            v75 = (v48 & 1) + 2;
            *(_DWORD *)(a1 + 124) = v75;
            if ( (unsigned int)v48 > 0xD )
            {
              v107 = *(_DWORD *)a1;
              v108 = *(_DWORD *)(a1 + 4);
              v109 = v74 - 5;
              do
              {
                if ( v107 <= 0xFFFFFF )
                {
                  v110 = *(_QWORD *)(a1 + 24);
                  v111 = *(_QWORD *)(a1 + 16);
                  v107 <<= 8;
                  *(_DWORD *)a1 = v107;
                  *(_QWORD *)(a1 + 24) = v110 + 1;
                  v108 = *(unsigned __int8 *)(v111 + v110) + (v108 << 8);
                }
                v107 >>= 1;
                *(_DWORD *)a1 = v107;
                v112 = (int)(v108 - v107) >> 31;
                v75 = v112 + 2 * v75 + 1;
                v108 = (v112 & v107) + v108 - v107;
                *(_DWORD *)(a1 + 124) = v75;
                *(_DWORD *)(a1 + 4) = v108;
                --v109;
              }
              while ( v109 );
              *(_DWORD *)(a1 + 124) = 16 * v75;
              v113 = 1;
              while ( 1 )
              {
                v114 = (_WORD *)(a1 + 1764 + 2LL * v113);
                if ( v107 <= 0xFFFFFF )
                {
                  v115 = *(_QWORD *)(a1 + 24);
                  v116 = *(_QWORD *)(a1 + 16);
                  v107 <<= 8;
                  *(_DWORD *)a1 = v107;
                  *(_QWORD *)(a1 + 24) = v115 + 1;
                  v108 = *(unsigned __int8 *)(v116 + v115) + (v108 << 8);
                  *(_DWORD *)(a1 + 4) = v108;
                }
                v113 *= 2;
                v117 = (unsigned __int16)*v114 * (v107 >> 11);
                if ( v108 < v117 )
                {
                  *(_DWORD *)a1 = v117;
                  *v114 += (2048 - (unsigned __int16)*v114) >> 5;
                }
                else
                {
                  ++v113;
                  *(_DWORD *)a1 = v107 - v117;
                  *(_DWORD *)(a1 + 4) = v108 - v117;
                  *v114 -= *v114 >> 5;
                  *(_DWORD *)(a1 + 124) += 1 << v109;
                }
                if ( ++v109 == 4 )
                  break;
                v107 = *(_DWORD *)a1;
                v108 = *(_DWORD *)(a1 + 4);
              }
            }
            else
            {
              v76 = v74 - 1;
              v77 = 1;
              v78 = (unsigned int)(v75 << v76);
              v79 = 0;
              *(_DWORD *)(a1 + 124) = v78;
              v80 = 2 * (v78 - v48) - 2;
              do
              {
                while ( 1 )
                {
                  v81 = *(_DWORD *)a1;
                  v82 = *(_DWORD *)(a1 + 4);
                  v83 = (_WORD *)(a1 + 1536 + v80 + 2LL * v77);
                  if ( *(_DWORD *)a1 <= 0xFFFFFFu )
                  {
                    v84 = *(_QWORD *)(a1 + 24);
                    v85 = *(_QWORD *)(a1 + 16);
                    v81 <<= 8;
                    *(_DWORD *)a1 = v81;
                    *(_QWORD *)(a1 + 24) = v84 + 1;
                    v82 = *(unsigned __int8 *)(v85 + v84) + (v82 << 8);
                    *(_DWORD *)(a1 + 4) = v82;
                  }
                  v77 *= 2;
                  v86 = (unsigned __int16)*v83 * (v81 >> 11);
                  if ( v82 >= v86 )
                    break;
                  *(_DWORD *)a1 = v86;
                  ++v79;
                  *v83 += (2048 - (unsigned __int16)*v83) >> 5;
                  if ( v76 == v79 )
                    goto LABEL_74;
                }
                ++v77;
                *(_DWORD *)(a1 + 4) = v82 - v86;
                *(_DWORD *)a1 = v81 - v86;
                *v83 -= *v83 >> 5;
                v87 = 1 << v79++;
                *(_DWORD *)(a1 + 124) += v87;
              }
              while ( v76 != v79 );
            }
LABEL_74:
            LODWORD(v48) = *(_DWORD *)(a1 + 124);
          }
          else
          {
            *(_DWORD *)(a1 + 124) = v48;
          }
          goto LABEL_46;
        }
        v49 = v32 - v37;
        v50 = v31 - v37;
        *(_DWORD *)a1 = v49;
        *(_DWORD *)(a1 + 4) = v50;
        *(_WORD *)(a1 + 2 * v35 + 16) = v38 - ((unsigned __int16)v36 >> 5);
        if ( v49 <= 0xFFFFFF )
        {
          v51 = *(_QWORD *)(a1 + 24);
          v52 = *(_QWORD *)(a1 + 16);
          v49 <<= 8;
          *(_DWORD *)a1 = v49;
          *(_QWORD *)(a1 + 24) = v51 + 1;
          v50 = *(unsigned __int8 *)(v52 + v51) + (v50 << 8);
          *(_DWORD *)(a1 + 4) = v50;
        }
        v53 = v6 + 272LL;
        v54 = *(unsigned __int16 *)(a1 + 2 * v53 + 24);
        v55 = v54 * (v49 >> 11);
        v56 = *(_WORD *)(a1 + 2 * v53 + 24);
        if ( v50 >= v55 )
          break;
        *(_WORD *)(a1 + 2 * v53 + 24) = v54 + ((2048 - v54) >> 5);
        if ( v55 <= 0xFFFFFF )
        {
          v57 = *(_QWORD *)(a1 + 24);
          v58 = *(_QWORD *)(a1 + 16);
          v55 <<= 8;
          *(_DWORD *)a1 = v55;
          *(_QWORD *)(a1 + 24) = v57 + 1;
          v50 = *(unsigned __int8 *)(v58 + v57) + (v50 << 8);
          *(_DWORD *)(a1 + 4) = v50;
        }
        v59 = 16LL * v6 + v8 + 312;
        v60 = *(unsigned __int16 *)(a1 + 2 * v59 + 16);
        v61 = v60 * (v55 >> 11);
        v62 = *(_WORD *)(a1 + 2 * v59 + 16);
        if ( v50 >= v61 )
        {
          *(_DWORD *)(a1 + 4) = v50 - v61;
          *(_DWORD *)a1 = v55 - v61;
          *(_WORD *)(a1 + 2 * v59 + 16) = v62 - ((unsigned __int16)v60 >> 5);
LABEL_80:
          *(_DWORD *)(a1 + 140) = v6 < 7 ? 8 : 11;
          sub_25040((unsigned int *)a1, (unsigned __int16 *)(a1 + 2824), v8);
          LODWORD(v48) = *(_DWORD *)(a1 + 124);
          goto LABEL_46;
        }
        *(_DWORD *)a1 = v61;
        *(_WORD *)(a1 + 2 * v59 + 16) = v60 + ((2048 - v60) >> 5);
        LODWORD(v48) = *(_DWORD *)(a1 + 124);
        *(_DWORD *)(a1 + 144) = 1;
        *(_DWORD *)(a1 + 140) = v6 < 7 ? 9 : 11;
LABEL_46:
        result = sub_24F80((__int64 *)(a1 + 40), (_DWORD *)(a1 + 144), v48);
        if ( !(_BYTE)result )
          return result;
        v2 = *(_QWORD *)(a1 + 56);
LABEL_25:
        if ( v2 >= *(_QWORD *)(a1 + 72) )
          goto LABEL_26;
      }
      v88 = v50 - v55;
      v89 = v49 - v55;
      *(_DWORD *)(a1 + 4) = v88;
      *(_WORD *)(a1 + 2 * v53 + 24) = v56 - ((unsigned __int16)v54 >> 5);
      if ( v89 <= 0xFFFFFF )
      {
        v90 = *(_QWORD *)(a1 + 24);
        v91 = *(_QWORD *)(a1 + 16);
        v89 <<= 8;
        *(_DWORD *)a1 = v89;
        *(_QWORD *)(a1 + 24) = v90 + 1;
        v88 = *(unsigned __int8 *)(v91 + v90) + (v88 << 8);
        *(_DWORD *)(a1 + 4) = v88;
      }
      v92 = v6 + 288LL;
      v93 = *(_DWORD *)(a1 + 128);
      v94 = *(unsigned __int16 *)(a1 + 2 * v92 + 16);
      v95 = v94 * (v89 >> 11);
      v96 = *(_WORD *)(a1 + 2 * v92 + 16);
      if ( v88 >= v95 )
      {
        v98 = v89 - v95;
        v99 = v88 - v95;
        *(_DWORD *)a1 = v98;
        *(_DWORD *)(a1 + 4) = v99;
        *(_WORD *)(a1 + 2 * v92 + 16) = v96 - ((unsigned __int16)v94 >> 5);
        if ( v98 <= 0xFFFFFF )
        {
          v100 = *(_QWORD *)(a1 + 24);
          v101 = *(_QWORD *)(a1 + 16);
          v98 <<= 8;
          *(_DWORD *)a1 = v98;
          *(_QWORD *)(a1 + 24) = v100 + 1;
          v99 = *(unsigned __int8 *)(v101 + v100) + (v99 << 8);
          *(_DWORD *)(a1 + 4) = v99;
        }
        v102 = *(unsigned __int16 *)(a1 + 2LL * v6 + 616);
        v97 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132));
        v103 = v102 * (v98 >> 11);
        v104 = *(_WORD *)(a1 + 2LL * v6 + 616);
        if ( v99 < v103 )
        {
          v105 = ((2048 - v102) >> 5) + v104;
        }
        else
        {
          *(_DWORD *)(a1 + 4) = v99 - v103;
          v103 = v98 - v103;
          v105 = v104 - ((unsigned __int16)v102 >> 5);
          v106 = *(_DWORD *)(a1 + 136);
          *(_DWORD *)(a1 + 136) = _mm_cvtsi128_si32(v97);
          v97 = _mm_cvtsi32_si128(v106);
        }
        *(_WORD *)(a1 + 2LL * v6 + 616) = v105;
        *(_DWORD *)a1 = v103;
        *(_DWORD *)(a1 + 132) = v93;
      }
      else
      {
        *(_DWORD *)a1 = v95;
        v97 = _mm_cvtsi32_si128(v93);
        *(_WORD *)(a1 + 2 * v92 + 16) = v94 + ((2048 - v94) >> 5);
      }
      *(_QWORD *)(a1 + 124) = _mm_unpacklo_epi32(v97, _mm_cvtsi32_si128(*(_DWORD *)(a1 + 124))).m128i_u64[0];
      goto LABEL_80;
    }
  }
LABEL_26:
  v5 = *(_DWORD *)a1;
LABEL_27:
  if ( v5 <= 0xFFFFFF )
  {
    v27 = *(_QWORD *)(a1 + 16);
    v28 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 = v5 << 8;
    v29 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v29 + 1;
    *(_DWORD *)(a1 + 4) = (v28 << 8) + *(unsigned __int8 *)(v27 + v29);
  }
  return 1;
}
