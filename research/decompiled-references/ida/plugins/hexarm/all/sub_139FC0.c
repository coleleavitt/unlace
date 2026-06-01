unsigned __int64 __fastcall sub_139FC0(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r8
  __int64 v4; // rdx
  __int64 v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r11
  _DWORD *v9; // rax
  _DWORD *v10; // r10
  _DWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  unsigned __int64 *v21; // rdi
  _QWORD *v22; // rsi
  _QWORD *v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned __int16 *v26; // rdi
  __int64 v27; // rax
  unsigned int v28; // ebx
  int v29; // eax
  _QWORD *v30; // rdi
  int v31; // ebp
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rsi
  __int64 v36; // r12
  signed int v37; // r14d
  signed int v38; // ebp
  unsigned int v39; // eax
  __int64 v40; // rbx
  char v41; // dl
  int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rdx
  int v50; // eax
  const char *v51; // rcx
  int v53; // eax
  __int64 v54; // rdx
  int v55; // eax
  __int64 v56; // rbx
  __int64 v57; // rbx
  __m128i v58; // xmm1
  __m128i v59; // xmm4
  __m128i v60; // xmm2
  __m128i v61; // xmm0
  int epi16; // r14d
  __int64 v63; // r12
  unsigned __int16 *i; // rbp
  int v65; // ecx
  int v66; // edx
  unsigned __int16 v67; // bx
  unsigned __int16 *j; // rbx
  __int64 v69; // rdx
  __int64 v70; // rsi
  __int64 v71; // rax
  __int64 v72; // [rsp+0h] [rbp-198h]
  int v73; // [rsp+0h] [rbp-198h]
  char v74; // [rsp+8h] [rbp-190h]
  __int64 v75; // [rsp+10h] [rbp-188h]
  int v76; // [rsp+28h] [rbp-170h]
  int v77; // [rsp+2Ch] [rbp-16Ch]
  __int64 v78; // [rsp+30h] [rbp-168h]
  _QWORD *v79; // [rsp+38h] [rbp-160h]
  int v80; // [rsp+40h] [rbp-158h]
  char v81; // [rsp+46h] [rbp-152h]
  bool v82; // [rsp+47h] [rbp-151h]
  int v83; // [rsp+58h] [rbp-140h]
  unsigned int v84; // [rsp+5Ch] [rbp-13Ch]
  unsigned __int16 *src; // [rsp+60h] [rbp-138h]
  __int64 v86; // [rsp+68h] [rbp-130h]
  __int64 v87; // [rsp+78h] [rbp-120h]
  _QWORD v88[2]; // [rsp+80h] [rbp-118h] BYREF
  __int64 v89; // [rsp+90h] [rbp-108h] BYREF
  __int128 v90; // [rsp+98h] [rbp-100h]
  unsigned __int16 *v91; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v92; // [rsp+B8h] [rbp-E0h]
  __int64 v93; // [rsp+C8h] [rbp-D0h]
  char v94; // [rsp+D0h] [rbp-C8h]
  unsigned int v95; // [rsp+D8h] [rbp-C0h]
  int v96; // [rsp+DCh] [rbp-BCh]
  char v97; // [rsp+E0h] [rbp-B8h]
  const char *v98; // [rsp+F0h] [rbp-A8h] BYREF
  __int64 v99; // [rsp+F8h] [rbp-A0h]
  __int64 v100; // [rsp+100h] [rbp-98h]
  __int64 v101; // [rsp+108h] [rbp-90h]
  __int64 v102; // [rsp+110h] [rbp-88h]
  __int128 v103; // [rsp+118h] [rbp-80h]
  __int64 v104; // [rsp+128h] [rbp-70h]
  _QWORD *v105; // [rsp+130h] [rbp-68h]
  __int64 *v106; // [rsp+138h] [rbp-60h]
  __int64 v107; // [rsp+140h] [rbp-58h]
  __int64 v108; // [rsp+148h] [rbp-50h]
  int v109; // [rsp+150h] [rbp-48h]
  int v110; // [rsp+154h] [rbp-44h]
  unsigned __int64 v111; // [rsp+158h] [rbp-40h]

  v111 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 464);
  if ( (int)v1 > 0 )
  {
    v2 = *(_QWORD *)(a1 + 440);
    v4 = 0;
    v5 = *(_QWORD *)(a1 + 456);
    while ( 1 )
    {
      v6 = *(int *)(v5 + 4 * v4);
      if ( v6 >= v2 )
      {
LABEL_93:
        if ( !under_debugger )
          sub_3835A0(50442);
        goto LABEL_96;
      }
      v7 = *(_QWORD *)(a1 + 432) + 104 * v6;
      if ( *(_DWORD *)v7 == 2 )
      {
        v8 = *(_QWORD *)(v7 + 8);
        v9 = *(_DWORD **)v8;
        if ( (unsigned int)(**(_DWORD **)v8 - 3) <= 1 )
          break;
      }
LABEL_3:
      if ( (_DWORD)v1 - 1 == v4 )
        return v111 - __readfsqword(0x28u);
      if ( v1 == v4 + 1 )
        goto LABEL_93;
      ++v4;
    }
    v10 = &v9[6 * *(_QWORD *)(v8 + 8)];
    do
    {
      v9 += 6;
      if ( v9 == v10 )
        goto LABEL_3;
    }
    while ( *v9 != 1 );
    v11 = v9;
    src = (unsigned __int16 *)v9;
    v12 = v7;
    v13 = *(_QWORD *)(a1 + 1504);
    v14 = *(_QWORD *)(a1 + 1496);
    v86 = v7;
    v90 = 0;
    v88[0] = 0;
    v15 = *(_DWORD *)(v13 + 80);
    v16 = *(_QWORD *)(a1 + 144);
    v99 = v14;
    v100 = 0;
    v101 = 0;
    v102 = 0;
    v103 = 0;
    v17 = *((unsigned __int16 *)v11 + 8);
    v108 = v16;
    v18 = *(_QWORD *)(v14 + 112);
    v104 = v7;
    v98 = (const char *)&off_4D82D0;
    v105 = v88;
    v19 = *(unsigned int *)(v18 + 80);
    v106 = &v89;
    v109 = v17;
    v88[1] = 0;
    v89 = 0;
    v110 = sub_1C2970(v12, v14, (unsigned int)(v17 - v19), v19, v17);
    v20 = *(_QWORD *)(a1 + 784);
    v107 = *((_QWORD *)v11 + 1) - v109;
    v87 = sub_110320(v20, 0);
    if ( !v87 )
    {
      if ( !under_debugger )
        sub_3835A0(50446);
      goto LABEL_96;
    }
    ++*(_DWORD *)(v87 + 24);
    v21 = *(unsigned __int64 **)v87;
    v94 = 1;
    v91 = nullptr;
    v93 = v110;
    v22 = &v91;
    v95 = v15;
    v96 = -1;
    v97 = 1;
    v92 = 0;
    v23 = sub_104830(v21, (__int64)&v91);
    v26 = v91;
    v79 = v23;
    if ( v91 )
    {
      *(_QWORD *)&v92 = 0;
      qfree();
    }
    if ( v79 && v79[1] )
    {
      v84 = 0;
      v27 = 0;
      v83 = 0;
      while ( 1 )
      {
        v28 = *(_DWORD *)(*v79 + 4 * v27);
        if ( v28 >= *(_DWORD *)(a1 + 64) )
          sub_1340F0(v26, v22, *v79, v79, v24, v25);
        v26 = (unsigned __int16 *)&v98;
        v22 = *(_QWORD **)(*(_QWORD *)(a1 + 528) + 8LL * v28);
        v75 = (__int64)v22;
        v29 = sub_332140(&v98, v22);
        if ( !(_QWORD)v90 || !v29 )
          goto LABEL_62;
        v30 = v88;
        v31 = sub_64360(v88, 0);
        v84 = sub_645A0(v88, v31);
        if ( v31 + v84 != v109 )
          goto LABEL_43;
        v35 = v108;
        if ( v108 != *(_QWORD *)(a1 + 144) )
        {
          v30 = (_QWORD *)a1;
          sub_232C40(a1);
        }
        v80 = v107 + v31;
        v72 = *(_QWORD *)(a1 + 1496);
        v77 = v90 - 1;
        if ( (int)v90 - 1 >= 0 )
        {
          v82 = v28 != 1;
          v78 = 8LL * (unsigned int)(v90 - 1);
          while ( 1 )
          {
            v36 = *(_QWORD *)(v89 + v78);
            v30 = (_QWORD *)(v36 + 64);
            if ( !(unsigned __int8)sub_32F650(v36 + 64, &v91) )
              break;
            v81 = v82 || v79[1] != 1;
            v35 = v80;
            if ( v80 <= (__int64)v91 )
            {
              v30 = (_QWORD *)v75;
              v35 = v36;
              sub_1368A0(v75, v36, v82 || v79[1] != 1);
            }
            else
            {
              v32 = *(int *)(v36 + 68);
              v37 = *(_DWORD *)(v36 + 68);
              if ( v80 >= (__int64)v91 + v32 )
              {
                if ( !under_debugger )
                  sub_3835A0(51707);
                goto LABEL_96;
              }
              v38 = 0;
              v76 = v32 - v15;
              if ( (int)v32 > 0 )
              {
                do
                {
                  if ( v38 == v76 )
                  {
                    v40 = v36;
                  }
                  else
                  {
                    v40 = j__qalloc_or_throw();
                    *(_OWORD *)(v40 + 8) = 0;
                    *(_QWORD *)(v40 + 32) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v40 + 40) = 0;
                    *(_QWORD *)(v40 + 48) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v40 + 56) = 0;
                    *(_QWORD *)(v40 + 64) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v40 + 72) = 0;
                    sub_124DE0(v40, v36);
                  }
                  v74 = sub_11C690((unsigned __int8 *)(v36 + 48), v72);
                  v41 = sub_11C690((unsigned __int8 *)(v36 + 64), v72);
                  v42 = *(_DWORD *)(v36 + 40);
                  if ( v74 == v41 )
                    v39 = v38 + v42;
                  else
                    v39 = v37 + v42 - v15 - v38;
                  *(_QWORD *)(v40 + 36) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(v39)).m128i_u64[0];
                  sub_126950(v40 + 64, *(_QWORD *)(a1 + 1504), v38);
                  *(_DWORD *)(v40 + 68) = v15;
                  if ( v80 > (__int64)v91 + v38 )
                  {
                    v30 = (_QWORD *)v75;
                    v35 = v40;
                    sub_A2BA0(v75, (_QWORD *)v40, v36);
                  }
                  else
                  {
                    if ( v36 != v40 )
                      sub_A2BA0(v75, (_QWORD *)v40, v36);
                    v30 = (_QWORD *)v75;
                    v35 = v40;
                    sub_1368A0(v75, v40, v81);
                  }
                  v38 += v15;
                }
                while ( v37 > v38 );
              }
            }
            --v77;
            v78 -= 8;
            if ( v77 == -1 )
              goto LABEL_59;
          }
          if ( !under_debugger )
            sub_3835A0(51706);
LABEL_96:
          BUG();
        }
LABEL_59:
        v53 = *(_DWORD *)(v75 + 24);
        BYTE1(v53) &= ~2u;
        LOBYTE(v53) = v53 | 0x80;
        *(_DWORD *)(v75 + 24) = v53;
        if ( *(_DWORD *)(a1 + 64) <= 1u )
          sub_1340F0(v30, v35, v32, v75, v33, v34);
        v22 = src;
        v54 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL);
        v55 = *(_DWORD *)(v54 + 24);
        BYTE1(v55) &= ~2u;
        LOBYTE(v55) = v55 | 0x80;
        *(_DWORD *)(v54 + 24) = v55;
        if ( v84 != src[8] )
          break;
        v26 = (unsigned __int16 *)v86;
        v56 = *((_QWORD *)src + 1) - (int)v84;
        cleanup_argloc();
        *(_DWORD *)(v86 + 24) |= 0x4000000u;
        *(_DWORD *)v86 = 1;
        *(_QWORD *)(v86 + 8) = v56;
LABEL_62:
        v27 = ++v83;
        if ( (unsigned __int64)v83 >= v79[1] )
          goto LABEL_44;
      }
      v57 = *((_QWORD *)src + 1) - (int)v84;
      cleanup_argloc();
      v58 = _mm_cvtsi32_si128(*((_DWORD *)src + 4));
      v60 = _mm_shufflelo_epi16(_mm_insert_epi16(v59, (unsigned __int16)v84, 0), 0);
      *((_QWORD *)src + 1) = v57;
      *(_DWORD *)src = 1;
      v61 = _mm_sub_epi16(v58, v60);
      epi16 = _mm_extract_epi16(v61, 0);
      *((_DWORD *)src + 4) = _mm_cvtsi128_si32(_mm_shufflelo_epi16(_mm_unpacklo_epi16(v61, _mm_add_epi16(v58, v60)), 236));
      v63 = *(_QWORD *)(v86 + 8);
      for ( i = *(unsigned __int16 **)v63; ; i += 12 )
      {
        v65 = i[8];
        v66 = i[9];
        v67 = i[8];
        if ( epi16 < v65 + v66 )
          break;
      }
      if ( (unsigned __int16)v65 >= (unsigned __int16)epi16 )
      {
LABEL_72:
        for ( j = i; src != j; j += 12 )
          cleanup_argloc();
        v26 = i;
        v22 = src;
        memmove(i, src, *(_QWORD *)v63 + 24LL * *(_QWORD *)(v63 + 8) - (_QWORD)src);
        *(_QWORD *)(v63 + 8) -= 0xAAAAAAAAAAAAAAABLL * (((char *)src - (char *)i) >> 3);
        goto LABEL_62;
      }
      if ( *(_DWORD *)i == 4 )
      {
        if ( epi16 - v65 != (unsigned __int16)v66 >> 1 )
        {
          if ( !under_debugger )
            sub_3835A0(51281);
          goto LABEL_96;
        }
        v73 = i[4];
        cleanup_argloc();
      }
      else
      {
        if ( *(_DWORD *)i != 3 )
        {
          if ( !under_debugger )
            sub_3835A0(51500);
          goto LABEL_96;
        }
        if ( !*(_BYTE *)(v72 + 145) )
          goto LABEL_71;
        v73 = i[4] + v65 + v66 - epi16;
        cleanup_argloc();
      }
      *(_DWORD *)i = 3;
      *((_DWORD *)i + 2) = v73;
LABEL_71:
      i += 12;
      *(i - 3) = epi16 - v67;
      goto LABEL_72;
    }
LABEL_43:
    v84 = 0;
LABEL_44:
    sub_104850(v87);
    v98 = (const char *)&unk_4E7DC0;
    if ( v102 )
    {
      *(_QWORD *)&v103 = 0;
      qfree();
    }
    qfree();
    if ( v89 )
    {
      *(_QWORD *)&v90 = 0;
      qfree();
    }
    v43 = v88[0];
    qfree();
    if ( v84 )
    {
      v47 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x100) != 0 )
      {
        v48 = *(unsigned int *)(a1 + 64);
        if ( !(_DWORD)v48 )
          sub_1340F0(v43, v84, v48, v44, v45, v46);
        v49 = **(_QWORD **)(a1 + 528);
        v50 = *(_DWORD *)(v49 + 24);
        BYTE1(v50) &= ~2u;
        LOBYTE(v50) = v50 | 0x80;
        *(_DWORD *)(v49 + 24) = v50;
      }
      else
      {
        BYTE1(v47) |= 1u;
        v69 = *(_QWORD *)(a1 + 168);
        v70 = *(_QWORD *)(a1 + 152);
        *(_DWORD *)a1 = v47;
        sub_18D090(a1, v70, v69);
        sub_139560(a1);
        v71 = *(_QWORD *)(a1 + 784);
        if ( v71 )
          *(_DWORD *)(v71 + 48) = 63;
      }
      sub_260860(&v98, a1, v86, 1);
      v51 = s1;
      if ( v99 )
        v51 = v98;
      sub_669A0(a1, 1u, (__int64)"fixed scattered arg %s\n", v51);
      if ( v98 )
      {
        v99 = 0;
        qfree();
      }
    }
  }
  return v111 - __readfsqword(0x28u);
}

