__int64 __fastcall sub_BD40(_QWORD *a1)
{
  char *v2; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  bool v9; // bp
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // rdx
  int v13; // r13d
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // r14
  int v17; // r13d
  _DWORD *v18; // r12
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  int v23; // r13d
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r15
  const __m128i *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __m128i v31; // xmm0
  bool v32; // cf
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  int v35; // r13d
  __int64 v36; // r12
  _DWORD *v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  int v40; // eax
  unsigned __int64 v41; // r14
  __int64 v42; // rax
  __int64 v43; // rdx
  const __m128i *v44; // rcx
  __int64 v45; // rax
  __m128i v46; // xmm0
  __int64 v47; // rcx
  __int64 v48; // rdx
  int v49; // eax
  unsigned __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rdx
  const __m128i *v53; // rcx
  __int64 v54; // rax
  __m128i v55; // xmm0
  __int64 v56; // rax
  __int64 v57; // rdx
  int v58; // r13d
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // r14
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rdx
  __m128i v64; // xmm0
  __int64 v65; // rax
  unsigned __int64 v66; // r13
  __int64 v67; // r12
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r15
  const __m128i *v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __m128i v75; // xmm0
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rdx
  __m128i v79; // xmm0
  __int64 v80; // rax
  __int64 v81; // r14
  const __m128i *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rdx
  __m128i v85; // xmm0
  int v86; // [rsp+0h] [rbp-1ACh] BYREF
  __int128 v87; // [rsp+4h] [rbp-1A8h] BYREF
  __int64 v88; // [rsp+14h] [rbp-198h]
  __int64 v89; // [rsp+1Ch] [rbp-190h]
  __int64 v90; // [rsp+24h] [rbp-188h]
  char v91; // [rsp+2Ch] [rbp-180h] BYREF
  __int64 v92; // [rsp+34h] [rbp-178h]
  _QWORD v93[8]; // [rsp+16Ch] [rbp-40h] BYREF

  v93[0] = __readfsqword(0x28u);
  v2 = &v91;
  v87 = -1;
  v88 = -1;
  v89 = 0;
  v90 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 40;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *((_QWORD *)v2 - 2) = 0;
  }
  while ( v93 != (_QWORD *)v2 );
  if ( (int)decode_insn(&v87, a1[7], v93, 0.0) > 0 )
  {
    v3 = v88;
    a1[7] = v88 + WORD1(v89);
    v4 = *a1 + 352LL;
    v5 = *(_QWORD **)(*a1 + 360LL);
    if ( v5 )
    {
      v6 = *a1 + 352LL;
      do
      {
        while ( 1 )
        {
          v7 = v5[2];
          v8 = v5[3];
          if ( v5[4] < v3 )
            break;
          v6 = (__int64)v5;
          v5 = (_QWORD *)v5[2];
          if ( !v7 )
            goto LABEL_9;
        }
        v5 = (_QWORD *)v5[3];
      }
      while ( v8 );
LABEL_9:
      v9 = 1;
      if ( v4 != v6 )
        v9 = v3 < *(_QWORD *)(v6 + 32);
    }
    else
    {
      v9 = 1;
    }
    if ( (unsigned __int16)v89 > 0x64u )
      return v9;
    if ( (unsigned __int16)v89 > 0x36u )
    {
      switch ( (__int16)v89 )
      {
        case '7':
          v33 = a1[2];
          v34 = a1[3];
          v35 = v92;
          if ( v34 < v33 + 1 )
          {
            v69 = qvector_reserve(a1 + 1, 0, v33 + 1, 16);
            v70 = a1[2];
            v71 = a1[3];
            a1[3] = v34;
            v72 = (const __m128i *)a1[1];
            v36 = v69;
            v73 = v70 - 1;
            if ( v73 >= 0 )
            {
              v74 = v69;
              do
              {
                v75 = _mm_loadu_si128(v72);
                v74 += 16;
                ++v72;
                *(__m128i *)(v74 - 16) = v75;
                v32 = v73-- == 0;
              }
              while ( !v32 );
              v72 = (const __m128i *)a1[1];
            }
            qfree(v72);
            a1[1] = v36;
            v33 = a1[2];
            a1[3] = v71;
          }
          else
          {
            v36 = a1[1];
          }
          v37 = (_DWORD *)(v36 + 16 * v33);
          *v37 = -1;
          v37[2] = v35;
          ++a1[2];
          return v9;
        case '`':
          if ( !sub_BC80((__int64)a1, 0x60u, dword_1DA70, 2) )
            return 0xFFFFFFFFLL;
          v21 = a1[2];
          v11 = a1[1];
          v22 = *(_QWORD *)(v11 + 16 * v21 - 8);
          v23 = v22;
          if ( !v21 || (v24 = v21 - 1, a1[2] = v21 - 1, v22 = *(_QWORD *)(v11 + 16 * (v21 - 1) - 8), v21 == 1) )
          {
            v24 = 1;
            v15 = 0;
          }
          else
          {
            v15 = v21 - 2;
            a1[2] = v15;
          }
          v25 = a1[3];
          v17 = v22 + v23;
          if ( v25 >= v24 )
            goto LABEL_19;
          v26 = qvector_reserve(a1 + 1, 0, v24, 16);
          v27 = a1[3];
          v28 = (const __m128i *)a1[1];
          a1[3] = v25;
          v11 = v26;
          v29 = a1[2] - 1LL;
          if ( v29 < 0 )
            goto LABEL_36;
          v30 = v11;
          do
          {
            v31 = _mm_loadu_si128(v28);
            v30 += 16;
            ++v28;
            *(__m128i *)(v30 - 16) = v31;
            v32 = v29-- == 0;
          }
          while ( !v32 );
          break;
        case 'a':
          if ( !sub_BC80((__int64)a1, 0x61u, dword_1DA70, 2) )
            return 0xFFFFFFFFLL;
          v10 = a1[2];
          v11 = a1[1];
          v12 = *(_QWORD *)(v11 + 16 * v10 - 8);
          v13 = v12;
          if ( !v10 || (v14 = v10 - 1, a1[2] = v10 - 1, v12 = *(_QWORD *)(v11 + 16 * (v10 - 1) - 8), v10 == 1) )
          {
            v14 = 1;
            v15 = 0;
          }
          else
          {
            v15 = v10 - 2;
            a1[2] = v15;
          }
          v16 = a1[3];
          v17 = v13 - v12;
          if ( v16 >= v14 )
            goto LABEL_19;
          v76 = qvector_reserve(a1 + 1, 0, v14, 16);
          v27 = a1[3];
          v28 = (const __m128i *)a1[1];
          a1[3] = v16;
          v11 = v76;
          v77 = a1[2] - 1LL;
          if ( v77 < 0 )
            goto LABEL_36;
          v78 = v11;
          do
          {
            v79 = _mm_loadu_si128(v28);
            v78 += 16;
            ++v28;
            *(__m128i *)(v78 - 16) = v79;
            v32 = v77-- == 0;
          }
          while ( !v32 );
          break;
        case 'b':
          if ( !sub_BC80((__int64)a1, 0x62u, dword_1DA70, 2) )
            return 0xFFFFFFFFLL;
          v56 = a1[2];
          v11 = a1[1];
          v57 = *(_QWORD *)(v11 + 16 * v56 - 8);
          v58 = v57;
          if ( !v56 || (v59 = v56 - 1, a1[2] = v56 - 1, v57 = *(_QWORD *)(v11 + 16 * (v56 - 1) - 8), v56 == 1) )
          {
            v59 = 1;
            v15 = 0;
          }
          else
          {
            v15 = v56 - 2;
            a1[2] = v15;
          }
          v60 = a1[3];
          v17 = v57 * v58;
          if ( v60 >= v59 )
            goto LABEL_19;
          v61 = qvector_reserve(a1 + 1, 0, v59, 16);
          v27 = a1[3];
          v28 = (const __m128i *)a1[1];
          a1[3] = v60;
          v11 = v61;
          v62 = a1[2] - 1LL;
          if ( v62 < 0 )
            goto LABEL_36;
          v63 = v11;
          do
          {
            v64 = _mm_loadu_si128(v28);
            v63 += 16;
            ++v28;
            *(__m128i *)(v63 - 16) = v64;
            v32 = v62-- == 0;
          }
          while ( !v32 );
          break;
        case 'c':
          if ( !sub_BC80((__int64)a1, 0x63u, dword_1DA70, 2) )
            return 0xFFFFFFFFLL;
          v47 = a1[2];
          v11 = a1[1];
          v48 = *(_QWORD *)(v11 + 16 * v47 - 8);
          v49 = v48;
          if ( v47 )
          {
            a1[2] = v47 - 1;
            v48 = *(_QWORD *)(v11 + 16 * (v47 - 1) - 8);
            if ( v47 != 1 )
              a1[2] = v47 - 2;
          }
          if ( !(_DWORD)v48 )
            return v9;
          v50 = a1[3];
          v17 = v49 / (int)v48;
          v15 = a1[2];
          if ( v50 >= v15 + 1 )
            goto LABEL_19;
          v51 = qvector_reserve(a1 + 1, 0, v15 + 1, 16);
          v28 = (const __m128i *)a1[1];
          v27 = a1[3];
          a1[3] = v50;
          v11 = v51;
          v52 = v51;
          v53 = v28;
          v54 = a1[2] - 1LL;
          if ( v54 < 0 )
            goto LABEL_36;
          do
          {
            v55 = _mm_loadu_si128(v53);
            v52 += 16;
            ++v53;
            *(__m128i *)(v52 - 16) = v55;
            v32 = v54-- == 0;
          }
          while ( !v32 );
          break;
        case 'd':
          if ( !sub_BC80((__int64)a1, 0x64u, dword_1DA70, 2) )
            return 0xFFFFFFFFLL;
          v38 = a1[2];
          v11 = a1[1];
          v39 = *(_QWORD *)(v11 + 16 * v38 - 8);
          v40 = v39;
          if ( v38 )
          {
            a1[2] = v38 - 1;
            v39 = *(_QWORD *)(v11 + 16 * (v38 - 1) - 8);
            if ( v38 != 1 )
              a1[2] = v38 - 2;
          }
          if ( !(_DWORD)v39 )
            return v9;
          v41 = a1[3];
          v17 = v40 / (int)v39;
          v15 = a1[2];
          if ( v41 >= v15 + 1 )
            goto LABEL_19;
          v42 = qvector_reserve(a1 + 1, 0, v15 + 1, 16);
          v28 = (const __m128i *)a1[1];
          v27 = a1[3];
          a1[3] = v41;
          v11 = v42;
          v43 = v42;
          v44 = v28;
          v45 = a1[2] - 1LL;
          if ( v45 < 0 )
            goto LABEL_36;
          do
          {
            v46 = _mm_loadu_si128(v44);
            v43 += 16;
            ++v44;
            *(__m128i *)(v43 - 16) = v46;
            v32 = v45-- == 0;
          }
          while ( !v32 );
          break;
        default:
          return v9;
      }
      v28 = (const __m128i *)a1[1];
LABEL_36:
      qfree(v28);
      a1[1] = v11;
      v15 = a1[2];
      a1[3] = v27;
LABEL_19:
      v18 = (_DWORD *)(16 * v15 + v11);
      *v18 = -1;
      v18[2] = v17;
      ++a1[2];
      return v9;
    }
    if ( (_WORD)v89 == 22 )
    {
      v20 = a1[2];
      if ( v20 )
        a1[2] = v20 - 1;
      return v9;
    }
    if ( (_WORD)v89 != 27 )
      return v9;
    v86 = 0;
    if ( sub_BC80((__int64)a1, 0x1Bu, &v86, 1) )
    {
      v65 = a1[2];
      v66 = a1[3];
      if ( v66 < v65 + 1 )
      {
        v80 = qvector_reserve(a1 + 1, 0, v65 + 1, 16);
        v81 = a1[3];
        v82 = (const __m128i *)a1[1];
        a1[3] = v66;
        v67 = v80;
        v83 = a1[2] - 1LL;
        if ( v83 >= 0 )
        {
          v84 = v67;
          do
          {
            v85 = _mm_loadu_si128(v82);
            v84 += 16;
            ++v82;
            *(__m128i *)(v84 - 16) = v85;
            v32 = v83-- == 0;
          }
          while ( !v32 );
          v82 = (const __m128i *)a1[1];
        }
        qfree(v82);
        a1[1] = v67;
        v65 = a1[2];
        a1[3] = v81;
      }
      else
      {
        v67 = a1[1];
      }
      v68 = v67 + 16 * v65;
      *(_DWORD *)v68 = 0;
      *(_QWORD *)(v68 + 8) = 0;
      ++a1[2];
      return v9;
    }
  }
  return 0xFFFFFFFFLL;
}
