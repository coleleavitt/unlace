__int64 __fastcall sub_BF780(__int64 a1, _BYTE *a2, int *a3, _QWORD *a4, __int64 *a5)
{
  _BYTE *v5; // rbp
  __int64 v6; // r12
  int v7; // eax
  __int64 v8; // rdx
  unsigned __int64 tm_sec; // rcx
  __int64 v10; // r8
  _QWORD *v11; // r9
  int v12; // r13d
  char *v13; // rbx
  __int64 v14; // r15
  signed int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // ebx
  signed int v19; // eax
  unsigned __int64 v20; // r14
  int tm_year; // eax
  int tm_min; // esi
  __m128i v23; // xmm0
  signed int v24; // eax
  unsigned int v25; // eax
  __int64 *v26; // rdx
  __int64 v27; // xmm0_8
  signed int v28; // eax
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rsi
  const char *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned int v37; // eax
  unsigned __int64 *v38; // rdx
  unsigned int v39; // eax
  unsigned int *v40; // rdx
  unsigned int v41; // eax
  __int64 *v42; // rdx
  __int64 v43; // r15
  __int64 v44; // rax
  _QWORD *v45; // r14
  __int64 v46; // rax
  __int64 v47; // rsi
  unsigned int v48; // eax
  unsigned int *v49; // rdx
  unsigned int v50; // eax
  unsigned __int64 *v51; // rdx
  const void *v52; // rdi
  size_t v53; // rax
  size_t v54; // r15
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned int v57; // eax
  const char **v58; // rdx
  const char *v59; // r15
  __int64 v60; // rax
  const char **v61; // r14
  char *v62; // rax
  __int64 v63; // rax
  __int64 v64; // rsi
  const char *v65; // rax
  void *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  void *v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  _QWORD *srca; // [rsp+8h] [rbp-E0h]
  _QWORD *srcb; // [rsp+8h] [rbp-E0h]
  _QWORD *srcc; // [rsp+8h] [rbp-E0h]
  _QWORD *srcd; // [rsp+8h] [rbp-E0h]
  _QWORD *srce; // [rsp+8h] [rbp-E0h]
  _BYTE *srck; // [rsp+8h] [rbp-E0h]
  void *srcf; // [rsp+8h] [rbp-E0h]
  _QWORD *srcg; // [rsp+8h] [rbp-E0h]
  _QWORD *srch; // [rsp+8h] [rbp-E0h]
  void *srci; // [rsp+8h] [rbp-E0h]
  _QWORD *srcj; // [rsp+8h] [rbp-E0h]
  _QWORD *srcl; // [rsp+8h] [rbp-E0h]
  int v86; // [rsp+10h] [rbp-D8h]
  _QWORD *v87; // [rsp+18h] [rbp-D0h]
  _QWORD *v88; // [rsp+18h] [rbp-D0h]
  _QWORD *v90; // [rsp+30h] [rbp-B8h]
  time_t timer; // [rsp+48h] [rbp-A0h] BYREF
  void *ptr; // [rsp+50h] [rbp-98h] BYREF
  __int128 v94; // [rsp+58h] [rbp-90h]
  struct tm tp; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v96; // [rsp+A8h] [rbp-40h]

  v5 = a2;
  v96 = __readfsqword(0x28u);
  v6 = *(_QWORD *)a1;
  v7 = mysql_stmt_param_count(*(_QWORD *)(*(_QWORD *)a1 + 24LL));
  v11 = a4;
  v86 = v7;
  if ( v7 < 0 )
  {
    if ( !unk_2439A0 )
      sub_198E10(1603);
LABEL_122:
    BUG();
  }
  ptr = nullptr;
  v94 = 0;
  if ( v7 )
  {
    ptr = (void *)sub_1987B0(&ptr, 0, v7, 112);
    memset((char *)ptr + 112 * v94, 0, 112 * (v86 - (_QWORD)v94));
    *(_QWORD *)&v94 = v86;
    memset(ptr, 0, 112LL * v86);
    v11 = a4;
    *(_DWORD *)(v6 + 1056) = 0;
    if ( !*a2 )
    {
LABEL_20:
      sub_2AAE0(a5);
      goto LABEL_21;
    }
  }
  else
  {
    *(_DWORD *)(v6 + 1056) = 0;
    if ( !*a2 )
      goto LABEL_104;
  }
  v12 = 0;
  while ( 2 )
  {
    v8 = v12;
    v13 = (char *)ptr + 112 * v12;
    if ( v11 )
    {
      while ( 1 )
      {
        v14 = *v11 + 32 * v8;
        *(_OWORD *)v13 = 0;
        if ( *v5 == 32 )
        {
          if ( !*++v5 )
            goto LABEL_19;
        }
        else
        {
          switch ( *v5 )
          {
            case 'B':
              *((_DWORD *)v13 + 24) = 252;
              if ( !v14 )
                goto LABEL_69;
              srcc = v11;
              v30 = sub_198760(24);
              v34 = *(_QWORD *)(v14 + 16);
              v11 = srcc;
              if ( v34 )
              {
                v52 = *(const void **)(v14 + 8);
                v53 = v34 - 1;
                *(_QWORD *)v30 = 0;
                *(_OWORD *)(v30 + 8) = 0;
                v54 = v53;
                if ( v53 )
                {
                  v55 = sub_1987B0(v30, 0, v53, 1);
                  v56 = *(_QWORD *)(v30 + 8);
                  *(_QWORD *)v30 = v55;
                  memset((void *)(v55 + v56), 0, v54 - v56);
                  *(_QWORD *)(v30 + 8) = v54;
                  memcpy(*(void **)v30, v52, v54);
                  v11 = srcc;
                }
              }
              else
              {
                *(_QWORD *)v30 = 0;
                *(_OWORD *)(v30 + 8) = 0;
              }
              v35 = *(_QWORD *)(v6 + 1096);
              v36 = *(_QWORD *)(v6 + 1088);
              v8 = v35 + 1;
              if ( *(_QWORD *)(v6 + 1104) < (unsigned __int64)(v35 + 1) )
              {
                srch = v11;
                v68 = sub_1987B0(v6 + 1088, v36, v8, 8);
                *(_QWORD *)(v6 + 1088) = v68;
                v36 = v68;
                v11 = srch;
                v35 = *(_QWORD *)(v6 + 1096);
              }
              *(_QWORD *)(v36 + 8 * v35) = v30;
              ++*(_QWORD *)(v6 + 1096);
              *((_QWORD *)v13 + 8) = *(_QWORD *)(v30 + 8);
              goto LABEL_52;
            case 'I':
            case 'U':
              if ( !v14 )
                goto LABEL_62;
              tm_sec = *(_QWORD *)(v14 + 8);
              goto LABEL_27;
            case 'd':
              if ( !v14 )
                goto LABEL_42;
              if ( !unk_2439A0 )
                sub_198E10(1662);
              goto LABEL_122;
            case 'i':
            case 'u':
              if ( !v14 )
                goto LABEL_65;
              tm_sec = *(unsigned int *)(v14 + 8);
              goto LABEL_14;
            case 's':
              *((_DWORD *)v13 + 24) = 254;
              if ( !v14 )
                goto LABEL_88;
              srcb = v11;
              v29 = operator new(0x18u);
              *(_QWORD *)v29 = 0;
              v11 = srcb;
              v30 = v29;
              *(_OWORD *)(v29 + 8) = 0;
              if ( *(_QWORD *)(v14 + 16) )
              {
                v87 = srcb;
                srcf = *(void **)(v14 + 16);
                v66 = (void *)sub_198760(srcf);
                *(_QWORD *)v30 = v66;
                *(_QWORD *)(v30 + 16) = srcf;
                memcpy(v66, *(const void **)(v14 + 8), (size_t)srcf);
                v11 = v87;
                *(_QWORD *)(v30 + 8) = srcf;
              }
              v31 = *(_QWORD *)(v6 + 1072);
              v32 = *(_QWORD *)(v6 + 1064);
              v8 = v31 + 1;
              if ( *(_QWORD *)(v6 + 1080) < (unsigned __int64)(v31 + 1) )
              {
                srcg = v11;
                v67 = sub_1987B0(v6 + 1064, v32, v8, 8);
                *(_QWORD *)(v6 + 1064) = v67;
                v32 = v67;
                v11 = srcg;
                v31 = *(_QWORD *)(v6 + 1072);
              }
              *(_QWORD *)(v32 + 8 * v31) = v30;
              ++*(_QWORD *)(v6 + 1072);
              *((_QWORD *)v13 + 8) = (*(_QWORD *)(v30 + 8) == 0) + *(_QWORD *)(v30 + 8) - 1LL;
              v33 = s1;
              if ( *(_QWORD *)(v30 + 8) )
LABEL_52:
                v33 = *(const char **)v30;
              ++v5;
              *((_QWORD *)v13 + 2) = v33;
              ++v12;
              if ( !*v5 )
                goto LABEL_19;
              v8 = v12;
              break;
            case 't':
              if ( !v14 )
                goto LABEL_79;
              v20 = *(_QWORD *)(v14 + 8);
              goto LABEL_38;
            case 'y':
              if ( !v14 )
                goto LABEL_76;
              tm_sec = *(unsigned int *)(v14 + 8);
              goto LABEL_33;
            default:
              goto LABEL_108;
          }
        }
        v13 = (char *)ptr + 112 * v8;
      }
    }
    while ( 1 )
    {
      *(_OWORD *)v13 = 0;
      if ( *v5 != 32 )
        break;
      if ( !*++v5 )
        goto LABEL_19;
      v13 = (char *)ptr + 112 * v12;
    }
    switch ( *v5 )
    {
      case 'B':
        *((_DWORD *)v13 + 24) = 252;
LABEL_69:
        v41 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v42 = *((__int64 **)a3 + 1);
          *((_QWORD *)a3 + 1) = v42 + 1;
        }
        else
        {
          v42 = (__int64 *)(*((_QWORD *)a3 + 2) + v41);
          *a3 = v41 + 8;
        }
        srcd = v11;
        v43 = *v42;
        v44 = sub_198760(24);
        *(_QWORD *)v44 = 0;
        v11 = srcd;
        v45 = (_QWORD *)v44;
        *(_OWORD *)(v44 + 8) = 0;
        if ( *(_QWORD *)(v43 + 8) )
        {
          v88 = srcd;
          srci = *(void **)(v43 + 8);
          v69 = (void *)sub_198760(srci);
          *v45 = v69;
          v45[2] = srci;
          memcpy(v69, *(const void **)v43, (size_t)srci);
          v11 = v88;
          v45[1] = srci;
        }
        v46 = *(_QWORD *)(v6 + 1096);
        v47 = *(_QWORD *)(v6 + 1088);
        v8 = v46 + 1;
        if ( *(_QWORD *)(v6 + 1104) < (unsigned __int64)(v46 + 1) )
        {
          srcj = v11;
          v70 = sub_1987B0(v6 + 1088, v47, v8, 8);
          *(_QWORD *)(v6 + 1088) = v70;
          v47 = v70;
          v11 = srcj;
          v46 = *(_QWORD *)(v6 + 1096);
        }
        *(_QWORD *)(v47 + 8 * v46) = v45;
        ++v12;
        ++*(_QWORD *)(v6 + 1096);
        *((_QWORD *)v13 + 8) = v45[1];
        *((_QWORD *)v13 + 2) = *v45;
        goto LABEL_18;
      case 'I':
      case 'U':
LABEL_62:
        v37 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v38 = *((unsigned __int64 **)a3 + 1);
          *((_QWORD *)a3 + 1) = v38 + 1;
        }
        else
        {
          v38 = (unsigned __int64 *)(*((_QWORD *)a3 + 2) + v37);
          *a3 = v37 + 8;
        }
        tm_sec = *v38;
LABEL_27:
        *((_DWORD *)v13 + 24) = 8;
        if ( *v5 == 85 )
          v13[101] = 1;
        v19 = (*(_DWORD *)(v6 + 1056) + 7) & 0xFFFFFFF8;
        *(_DWORD *)(v6 + 1056) = v19;
        if ( (unsigned __int64)(v19 + 8LL) > 0x400 )
        {
          if ( !unk_2439A0 )
            sub_198E10(2488);
          goto LABEL_122;
        }
        v8 = v6 + v19 + 32;
        ++v12;
        *(_DWORD *)(v6 + 1056) = v19 + 8;
        *(_QWORD *)v8 = tm_sec;
        *((_QWORD *)v13 + 2) = v8;
        goto LABEL_18;
      case 'd':
LABEL_42:
        v25 = a3[1];
        if ( v25 > 0xAF )
        {
          v26 = *((__int64 **)a3 + 1);
          *((_QWORD *)a3 + 1) = v26 + 1;
        }
        else
        {
          v26 = (__int64 *)(*((_QWORD *)a3 + 2) + v25);
          a3[1] = v25 + 16;
        }
        v27 = *v26;
        *((_DWORD *)v13 + 24) = 5;
        v28 = (*(_DWORD *)(v6 + 1056) + 7) & 0xFFFFFFF8;
        *(_DWORD *)(v6 + 1056) = v28;
        tm_sec = v28 + 8LL;
        if ( tm_sec > 0x400 )
        {
          if ( !unk_2439A0 )
            sub_198E10(2488);
          goto LABEL_122;
        }
        v8 = v6 + v28 + 32;
        ++v12;
        *(_DWORD *)(v6 + 1056) = v28 + 8;
        *(_QWORD *)v8 = v27;
        *((_QWORD *)v13 + 2) = v8;
        goto LABEL_18;
      case 'i':
      case 'u':
LABEL_65:
        v39 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v40 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v40 + 2;
        }
        else
        {
          v40 = (unsigned int *)(*((_QWORD *)a3 + 2) + v39);
          *a3 = v39 + 8;
        }
        tm_sec = *v40;
LABEL_14:
        *((_DWORD *)v13 + 24) = 3;
        if ( *v5 == 117 )
          v13[101] = 1;
        v15 = (*(_DWORD *)(v6 + 1056) + 3) & 0xFFFFFFFC;
        v16 = v15;
        *(_DWORD *)(v6 + 1056) = v15;
        if ( (unsigned __int64)(v15 + 4LL) <= 0x400 )
          goto LABEL_17;
        if ( !unk_2439A0 )
          sub_198E10(2488);
        goto LABEL_122;
      case 's':
        *((_DWORD *)v13 + 24) = 254;
LABEL_88:
        v57 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v58 = *((const char ***)a3 + 1);
          *((_QWORD *)a3 + 1) = v58 + 1;
        }
        else
        {
          v58 = (const char **)(*((_QWORD *)a3 + 2) + v57);
          *a3 = v57 + 8;
        }
        srce = v11;
        v59 = *v58;
        v60 = operator new(0x18u);
        v11 = srce;
        v61 = (const char **)v60;
        *(_QWORD *)v60 = 0;
        *(_OWORD *)(v60 + 8) = 0;
        if ( v59 )
        {
          v90 = srce;
          srck = (_BYTE *)strlen(v59);
          v62 = (char *)sub_1987B0(v61, 0, srck + 1, 1);
          *v61 = v62;
          v61[1] = srck + 1;
          memmove(v62, v59, (size_t)srck);
          v11 = v90;
          srck[(_QWORD)*v61] = 0;
        }
        v63 = *(_QWORD *)(v6 + 1072);
        v64 = *(_QWORD *)(v6 + 1064);
        v8 = v63 + 1;
        if ( *(_QWORD *)(v6 + 1080) < (unsigned __int64)(v63 + 1) )
        {
          srcl = v11;
          v71 = sub_1987B0(v6 + 1064, v64, v8, 8);
          *(_QWORD *)(v6 + 1064) = v71;
          v64 = v71;
          v11 = srcl;
          v63 = *(_QWORD *)(v6 + 1072);
        }
        *(_QWORD *)(v64 + 8 * v63) = v61;
        ++*(_QWORD *)(v6 + 1072);
        *((_QWORD *)v13 + 8) = &v61[1][(v61[1] == nullptr) - 1];
        v65 = s1;
        if ( v61[1] )
          v65 = *v61;
        *((_QWORD *)v13 + 2) = v65;
        ++v12;
        goto LABEL_18;
      case 't':
LABEL_79:
        v50 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v51 = *((unsigned __int64 **)a3 + 1);
          *((_QWORD *)a3 + 1) = v51 + 1;
        }
        else
        {
          v51 = (unsigned __int64 *)(*((_QWORD *)a3 + 2) + v50);
          *a3 = v50 + 8;
        }
        v20 = *v51;
LABEL_38:
        srca = v11;
        timer = HIDWORD(v20);
        if ( !gmtime_r(&timer, &tp) )
          goto LABEL_20;
        tm_year = tp.tm_year;
        *((_DWORD *)v13 + 24) = 7;
        tm_min = tp.tm_min;
        tm_sec = (unsigned int)tp.tm_sec;
        v11 = srca;
        v23 = _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(tm_year + 1900), _mm_cvtsi32_si128(tp.tm_mon + 1)),
                _mm_unpacklo_epi32(_mm_cvtsi32_si128(tp.tm_mday), _mm_cvtsi32_si128(tp.tm_hour)));
        v24 = (*(_DWORD *)(v6 + 1056) + 7) & 0xFFFFFFF8;
        *(_DWORD *)(v6 + 1056) = v24;
        if ( (unsigned __int64)(v24 + 40LL) > 0x400 )
        {
          if ( !unk_2439A0 )
            sub_198E10(2488);
          goto LABEL_122;
        }
        v8 = v6 + v24 + 32;
        ++v12;
        *(_DWORD *)(v6 + 1056) = v24 + 40;
        *(_DWORD *)(v8 + 16) = tm_min;
        *(_DWORD *)(v8 + 20) = tm_sec;
        *(_QWORD *)(v8 + 24) = (unsigned int)v20;
        *(_BYTE *)(v8 + 32) = 0;
        *(_DWORD *)(v8 + 36) = 0;
        *(__m128i *)v8 = v23;
        *((_QWORD *)v13 + 2) = v8;
        goto LABEL_18;
      case 'y':
LABEL_76:
        v48 = *a3;
        if ( (unsigned int)*a3 > 0x2F )
        {
          v49 = *((unsigned int **)a3 + 1);
          *((_QWORD *)a3 + 1) = v49 + 2;
        }
        else
        {
          v49 = (unsigned int *)(*((_QWORD *)a3 + 2) + v48);
          *a3 = v48 + 8;
        }
        tm_sec = *v49;
LABEL_33:
        *((_DWORD *)v13 + 24) = 1;
        v15 = (*(_DWORD *)(v6 + 1056) + 3) & 0xFFFFFFFC;
        v16 = v15;
        *(_DWORD *)(v6 + 1056) = v15;
        if ( (unsigned __int64)(v15 + 4LL) > 0x400 )
        {
          if ( !unk_2439A0 )
            sub_198E10(2488);
          goto LABEL_122;
        }
LABEL_17:
        v8 = v6 + v16 + 32;
        ++v12;
        *(_DWORD *)(v6 + 1056) = v15 + 4;
        *(_DWORD *)v8 = tm_sec;
        *((_QWORD *)v13 + 2) = v8;
LABEL_18:
        if ( *++v5 )
          continue;
LABEL_19:
        if ( v86 != v12 )
          goto LABEL_20;
LABEL_104:
        v17 = 1;
        if ( (unsigned __int8)mysql_stmt_bind_param(*(_QWORD *)(v6 + 24), ptr, v8, tm_sec, v10, v11) )
        {
          sub_BCB40((__int64)a5, *(_QWORD *)(v6 + 16), a1);
LABEL_21:
          v17 = 0;
        }
        if ( ptr )
        {
          *(_QWORD *)&v94 = 0;
          j__free(ptr);
        }
        return v17;
      default:
LABEL_108:
        if ( !unk_2439A0 )
          sub_198E10(1604);
        goto LABEL_122;
    }
  }
}
