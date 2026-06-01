unsigned __int64 __fastcall sub_13A580(__int64 a1, double a2, __m128 a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // r8
  __int64 v6; // rdx
  __int64 v7; // rdi
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r11
  _DWORD *v11; // rax
  _DWORD *v12; // r10
  _DWORD *v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rsi
  unsigned int v17; // r13d
  signed __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r9d
  __m128i v26; // xmm0
  unsigned __int64 *v27; // rdi
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rax
  unsigned int v31; // ebx
  __int64 v32; // rdx
  int v33; // eax
  int v34; // ebp
  __int64 v35; // r12
  unsigned int v36; // eax
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rdx
  int v40; // r14d
  int v41; // ebp
  unsigned int v42; // eax
  __int64 v43; // rbx
  char v44; // dl
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rdx
  int v49; // eax
  int v51; // eax
  __int64 v52; // rdx
  int v53; // eax
  __int64 v54; // rbx
  __int64 v55; // rbx
  __m128i v56; // xmm1
  __m128i v57; // xmm4
  __m128i v58; // xmm2
  __m128i v59; // xmm0
  int epi16; // r14d
  __int64 v61; // r12
  unsigned __int16 *i; // rbp
  int v63; // ecx
  int v64; // edx
  unsigned __int16 v65; // bx
  unsigned __int16 *j; // rbx
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // [rsp+0h] [rbp-198h]
  int v71; // [rsp+0h] [rbp-198h]
  char v72; // [rsp+8h] [rbp-190h]
  __int64 v73; // [rsp+10h] [rbp-188h]
  int v74; // [rsp+28h] [rbp-170h]
  int v75; // [rsp+2Ch] [rbp-16Ch]
  __int64 v76; // [rsp+30h] [rbp-168h]
  _QWORD *v77; // [rsp+38h] [rbp-160h]
  int v78; // [rsp+40h] [rbp-158h]
  char v79; // [rsp+46h] [rbp-152h]
  bool v80; // [rsp+47h] [rbp-151h]
  int v81; // [rsp+58h] [rbp-140h]
  int v82; // [rsp+5Ch] [rbp-13Ch]
  unsigned __int16 *src; // [rsp+60h] [rbp-138h]
  __int64 v84; // [rsp+68h] [rbp-130h]
  __int64 v85; // [rsp+78h] [rbp-120h]
  __int64 v86[2]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v87; // [rsp+90h] [rbp-108h] BYREF
  __int128 v88; // [rsp+98h] [rbp-100h]
  __int64 v89; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v90; // [rsp+B8h] [rbp-E0h]
  __int64 v91; // [rsp+C8h] [rbp-D0h]
  char v92; // [rsp+D0h] [rbp-C8h]
  unsigned int v93; // [rsp+D8h] [rbp-C0h]
  int v94; // [rsp+DCh] [rbp-BCh]
  char v95; // [rsp+E0h] [rbp-B8h]
  _UNKNOWN **v96; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v97; // [rsp+F8h] [rbp-A0h]
  __int64 v98; // [rsp+100h] [rbp-98h]
  __int64 v99; // [rsp+108h] [rbp-90h]
  __int64 v100; // [rsp+110h] [rbp-88h]
  __int128 v101; // [rsp+118h] [rbp-80h]
  __int64 v102; // [rsp+128h] [rbp-70h]
  __int64 *v103; // [rsp+130h] [rbp-68h]
  __int64 *v104; // [rsp+138h] [rbp-60h]
  __int64 v105; // [rsp+140h] [rbp-58h]
  signed __int64 v106; // [rsp+148h] [rbp-50h]
  int v107; // [rsp+150h] [rbp-48h]
  int v108; // [rsp+154h] [rbp-44h]
  unsigned __int64 v109; // [rsp+158h] [rbp-40h]

  v109 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 464);
  if ( (int)v3 > 0 )
  {
    v4 = *(_QWORD *)(a1 + 440);
    v6 = 0;
    v7 = *(_QWORD *)(a1 + 456);
    while ( 1 )
    {
      v8 = *(int *)(v7 + 4 * v6);
      if ( v8 >= v4 )
      {
LABEL_91:
        if ( !under_debugger )
          sub_383060(0xC50Au, a2);
        goto LABEL_94;
      }
      v9 = *(_QWORD *)(a1 + 432) + 104 * v8;
      if ( *(_DWORD *)v9 == 2 )
      {
        v10 = *(_QWORD *)(v9 + 8);
        v11 = *(_DWORD **)v10;
        if ( (unsigned int)(**(_DWORD **)v10 - 3) <= 1 )
          break;
      }
LABEL_3:
      if ( (_DWORD)v3 - 1 == v6 )
        return v109 - __readfsqword(0x28u);
      if ( v3 == v6 + 1 )
        goto LABEL_91;
      ++v6;
    }
    v12 = &v11[6 * *(_QWORD *)(v10 + 8)];
    do
    {
      v11 += 6;
      if ( v11 == v12 )
        goto LABEL_3;
    }
    while ( *v11 != 1 );
    v13 = v11;
    src = (unsigned __int16 *)v11;
    v14 = v9;
    v15 = *(_QWORD *)(a1 + 1504);
    v16 = *(_QWORD *)(a1 + 1496);
    v84 = v9;
    v88 = 0;
    v86[0] = 0;
    v17 = *(_DWORD *)(v15 + 80);
    v18 = *(_QWORD *)(a1 + 144);
    v97 = v16;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    v19 = *((unsigned __int16 *)v13 + 8);
    v106 = v18;
    v20 = *(_QWORD *)(v16 + 112);
    v102 = v9;
    v96 = &off_4DDC10;
    v103 = v86;
    v21 = *(_DWORD *)(v20 + 80);
    v104 = &v87;
    v107 = v19;
    v86[1] = 0;
    v87 = 0;
    v108 = sub_1C2F30(v14, v16, v19 - v21, v21, v19);
    v22 = *(_QWORD *)(a1 + 784);
    v105 = *((_QWORD *)v13 + 1) - v107;
    v85 = sub_1108E0(v22, 0, v107, v23, v24, v25, 0.0, a3);
    if ( !v85 )
    {
      if ( !under_debugger )
        sub_383060(0xC50Eu, 0.0);
      goto LABEL_94;
    }
    v26.m128i_i64[0] = 0;
    ++*(_DWORD *)(v85 + 24);
    v27 = *(unsigned __int64 **)v85;
    v92 = 1;
    v89 = 0;
    v91 = v108;
    v93 = v17;
    v94 = -1;
    v95 = 1;
    v90 = 0;
    v77 = sub_104DF0(v27, (__int64)&v89);
    if ( v89 )
    {
      *(_QWORD *)&v90 = 0;
      qfree(v89);
    }
    if ( v77 && v77[1] )
    {
      v82 = 0;
      v30 = 0;
      v81 = 0;
      while ( 1 )
      {
        v31 = *(_DWORD *)(*v77 + 4 * v30);
        if ( v31 >= *(_DWORD *)(a1 + 64) )
          sub_1346B0(*(double *)v26.m128i_i64);
        v32 = *(_QWORD *)(a1 + 528);
        v73 = *(_QWORD *)(v32 + 8LL * v31);
        v33 = sub_331E00(&v96, v73, v32, (__int64)v77, v28, v29);
        if ( !(_QWORD)v88 || !v33 )
          goto LABEL_60;
        v34 = sub_64960(v86, 0);
        v82 = sub_64BA0(v86, v34);
        if ( v34 + v82 != v107 )
          goto LABEL_43;
        if ( v106 != *(_QWORD *)(a1 + 144) )
          sub_232880(a1, v106);
        v78 = v105 + v34;
        v70 = *(_QWORD *)(a1 + 1496);
        v75 = v88 - 1;
        if ( (int)v88 - 1 >= 0 )
        {
          v80 = v31 != 1;
          v76 = 8LL * (unsigned int)(v88 - 1);
          while ( 1 )
          {
            v35 = *(_QWORD *)(v87 + v76);
            if ( !(unsigned __int8)sub_32F330(v35 + 64, &v89) )
              break;
            v36 = (unsigned int)v77;
            v79 = v80 || v77[1] != 1;
            LOBYTE(v36) = v79;
            v37 = v36;
            v38 = v78;
            if ( v78 <= v89 )
            {
              sub_136E60(v73, v35, v79, *(double *)v26.m128i_i64);
            }
            else
            {
              v39 = *(int *)(v35 + 68);
              v40 = *(_DWORD *)(v35 + 68);
              if ( v78 >= v39 + v89 )
              {
                if ( !under_debugger )
                  sub_383060(0xC9FBu, *(double *)v26.m128i_i64);
                goto LABEL_94;
              }
              v41 = 0;
              v74 = v39 - v17;
              if ( (int)v39 > 0 )
              {
                do
                {
                  if ( v41 == v74 )
                  {
                    v43 = v35;
                  }
                  else
                  {
                    v26.m128i_i64[0] = 0;
                    v43 = j__qalloc_or_throw(80, v38, v39, v37);
                    *(_OWORD *)(v43 + 8) = 0;
                    *(_QWORD *)(v43 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v43 + 40) = 0;
                    *(_QWORD *)(v43 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v43 + 56) = 0;
                    *(_QWORD *)(v43 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v43 + 72) = 0;
                    sub_1253A0(v43, v35);
                  }
                  v72 = sub_11CC50((unsigned __int8 *)(v35 + 48), v70, 0, *(double *)v26.m128i_i64);
                  v44 = sub_11CC50((unsigned __int8 *)(v35 + 64), v70, 0, *(double *)v26.m128i_i64);
                  v46 = *(_DWORD *)(v35 + 40);
                  if ( v72 == v44 )
                    v42 = v41 + v46;
                  else
                    v42 = v40 + v46 - v17 - v41;
                  v26.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), _mm_cvtsi32_si128(v42)).m128i_u64[0];
                  *(_QWORD *)(v43 + 36) = v26.m128i_i64[0];
                  sub_126F10((int *)(v43 + 64), *(unsigned __int64 **)(a1 + 1504), v41, v45, *(double *)v26.m128i_i64);
                  *(_DWORD *)(v43 + 68) = v17;
                  if ( v78 > v89 + v41 )
                  {
                    v38 = v43;
                    sub_A3160(v73, (_QWORD *)v43, v35, *(double *)v26.m128i_i64);
                  }
                  else
                  {
                    if ( v35 != v43 )
                      sub_A3160(v73, (_QWORD *)v43, v35, *(double *)v26.m128i_i64);
                    v38 = v43;
                    sub_136E60(v73, v43, v79, *(double *)v26.m128i_i64);
                  }
                  v41 += v17;
                }
                while ( v40 > v41 );
              }
            }
            --v75;
            v76 -= 8;
            if ( v75 == -1 )
              goto LABEL_57;
          }
          if ( !under_debugger )
            sub_383060(0xC9FAu, *(double *)v26.m128i_i64);
LABEL_94:
          BUG();
        }
LABEL_57:
        v51 = *(_DWORD *)(v73 + 24);
        BYTE1(v51) &= ~2u;
        LOBYTE(v51) = v51 | 0x80;
        *(_DWORD *)(v73 + 24) = v51;
        if ( *(_DWORD *)(a1 + 64) <= 1u )
          sub_1346B0(*(double *)v26.m128i_i64);
        v52 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL);
        v53 = *(_DWORD *)(v52 + 24);
        BYTE1(v53) &= ~2u;
        LOBYTE(v53) = v53 | 0x80;
        *(_DWORD *)(v52 + 24) = v53;
        if ( v82 != src[8] )
          break;
        v54 = *((_QWORD *)src + 1) - v82;
        cleanup_argloc();
        *(_DWORD *)(v84 + 24) |= 0x4000000u;
        *(_DWORD *)v84 = 1;
        *(_QWORD *)(v84 + 8) = v54;
LABEL_60:
        v30 = ++v81;
        if ( (unsigned __int64)v81 >= v77[1] )
          goto LABEL_44;
      }
      v55 = *((_QWORD *)src + 1) - v82;
      cleanup_argloc();
      v56 = _mm_cvtsi32_si128(*((_DWORD *)src + 4));
      v58 = _mm_shufflelo_epi16(_mm_insert_epi16(v57, (unsigned __int16)v82, 0), 0);
      *((_QWORD *)src + 1) = v55;
      *(_DWORD *)src = 1;
      v59 = _mm_sub_epi16(v56, v58);
      epi16 = _mm_extract_epi16(v59, 0);
      v26 = _mm_shufflelo_epi16(_mm_unpacklo_epi16(v59, _mm_add_epi16(v56, v58)), 236);
      *((_DWORD *)src + 4) = _mm_cvtsi128_si32(v26);
      v61 = *(_QWORD *)(v84 + 8);
      for ( i = *(unsigned __int16 **)v61; ; i += 12 )
      {
        v63 = i[8];
        v64 = i[9];
        v65 = i[8];
        if ( epi16 < v63 + v64 )
          break;
      }
      if ( (unsigned __int16)v63 >= (unsigned __int16)epi16 )
      {
LABEL_70:
        for ( j = i; src != j; j += 12 )
          cleanup_argloc();
        memmove(i, src, *(_QWORD *)v61 + 24LL * *(_QWORD *)(v61 + 8) - (_QWORD)src);
        *(_QWORD *)(v61 + 8) -= 0xAAAAAAAAAAAAAAABLL * (((char *)src - (char *)i) >> 3);
        goto LABEL_60;
      }
      if ( *(_DWORD *)i == 4 )
      {
        if ( epi16 - v63 != (unsigned __int16)v64 >> 1 )
        {
          if ( !under_debugger )
            sub_383060(0xC851u, *(double *)v26.m128i_i64);
          goto LABEL_94;
        }
        v71 = i[4];
        cleanup_argloc();
      }
      else
      {
        if ( *(_DWORD *)i != 3 )
        {
          if ( !under_debugger )
            sub_383060(0xC92Cu, *(double *)v26.m128i_i64);
          goto LABEL_94;
        }
        if ( !*(_BYTE *)(v70 + 145) )
          goto LABEL_69;
        v71 = i[4] + v63 + v64 - epi16;
        cleanup_argloc();
      }
      *(_DWORD *)i = 3;
      *((_DWORD *)i + 2) = v71;
LABEL_69:
      i += 12;
      *(i - 3) = epi16 - v65;
      goto LABEL_70;
    }
LABEL_43:
    v82 = 0;
LABEL_44:
    sub_104E10(v85, *(double *)v26.m128i_i64);
    v96 = (_UNKNOWN **)&unk_4EBEE0;
    if ( v100 )
    {
      *(_QWORD *)&v101 = 0;
      qfree(v100);
    }
    qfree(v98);
    if ( v87 )
    {
      *(_QWORD *)&v88 = 0;
      qfree(v87);
    }
    qfree(v86[0]);
    if ( v82 )
    {
      v47 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x100) != 0 )
      {
        if ( !*(_DWORD *)(a1 + 64) )
          sub_1346B0(*(double *)v26.m128i_i64);
        v48 = **(_QWORD **)(a1 + 528);
        v49 = *(_DWORD *)(v48 + 24);
        BYTE1(v49) &= ~2u;
        LOBYTE(v49) = v49 | 0x80;
        *(_DWORD *)(v48 + 24) = v49;
      }
      else
      {
        BYTE1(v47) |= 1u;
        v67 = *(_QWORD *)(a1 + 168);
        v68 = *(_QWORD *)(a1 + 152);
        *(_DWORD *)a1 = v47;
        sub_18D650(a1, v68, v67);
        sub_139B20(a1, *(double *)v26.m128i_i64);
        v69 = *(_QWORD *)(a1 + 784);
        if ( v69 )
          *(_DWORD *)(v69 + 48) = 63;
      }
      sub_2604A0((__int64)&v96, (_QWORD *)a1, v84, 1);
      sub_66FA0(a1, 1);
      if ( v96 )
      {
        v97 = 0;
        qfree((__int64)v96);
      }
    }
  }
  return v109 - __readfsqword(0x28u);
}

