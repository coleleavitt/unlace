unsigned __int64 __fastcall sub_4A8C0(__int64 a1, __int64 a2, __int64 *a3, double a4, __m128i a5)
{
  __int64 v5; // r13
  __m128i v6; // xmm0
  __int64 v9; // rax
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  int v14; // esi
  char *v15; // rsi
  unsigned __int16 v16; // r13
  unsigned __int8 v17; // al
  char *v18; // rdx
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // ecx
  __int8 v22; // al
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  const char *v26; // rsi
  __m128i v27; // xmm0
  char **v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  int v39; // edx
  char v40; // r9
  int v41; // eax
  char v42; // al
  __int64 v43; // rdx
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rax
  char *v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // rsi
  __m128i v51; // xmm0
  unsigned int v52; // eax
  const char *v53; // rdi
  const char *v54; // r8
  unsigned __int64 v55; // rdi
  __int64 v56; // rcx
  unsigned __int64 v57; // rax
  int v58; // r10d
  unsigned int *v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rdi
  unsigned __int64 v63; // r14
  __int64 v64; // rcx
  __int64 *v65; // rdi
  int v66; // ecx
  __int64 v67; // rax
  __int64 v68; // rax
  unsigned int v69; // edx
  __int64 v70; // r9
  int v71; // r8d
  __int64 v72; // rax
  unsigned __int64 i; // rdx
  __int64 v74; // rsi
  int v75; // esi
  __int64 v76; // rdi
  __int64 v77; // rdi
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // [rsp-10h] [rbp-110h]
  int v83; // [rsp+8h] [rbp-F8h]
  __int8 v84; // [rsp+Fh] [rbp-F1h]
  int v85; // [rsp+14h] [rbp-ECh]
  char v86; // [rsp+18h] [rbp-E8h]
  char **p_s1; // [rsp+20h] [rbp-E0h]
  __m128i v88; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v89; // [rsp+38h] [rbp-C8h]
  char *s1; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v91; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v92; // [rsp+70h] [rbp-90h] BYREF
  __int128 v93; // [rsp+78h] [rbp-88h]
  const char *v94; // [rsp+90h] [rbp-70h] BYREF
  __int128 v95; // [rsp+98h] [rbp-68h]
  const char *v96; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v97; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v98; // [rsp+C8h] [rbp-38h]

  v6.m128i_i64[0] = 0;
  v98 = __readfsqword(0x28u);
  LODWORD(v9) = *(_DWORD *)(a2 + 568);
  v89 = 0;
  v88.m128i_i64[1] = 0;
  s1 = nullptr;
  v92 = 0;
  v83 = 0;
  v91 = 0;
  v93 = 0;
  if ( (unsigned int)v9 <= 1 )
  {
LABEL_59:
    v11 = 0;
    LOBYTE(v28) = 0;
    if ( (_DWORD)v9 )
      goto LABEL_62;
    goto LABEL_145;
  }
  v86 = 1;
  v85 = 0;
LABEL_3:
  v10 = 1;
  while ( 1 )
  {
    v84 = *(_BYTE *)(a2 + 248);
    if ( !v84 )
    {
      if ( !under_debugger )
      {
        interr(20099);
LABEL_235:
        sub_EB70(0);
      }
      goto LABEL_241;
    }
    v11 = v10 >= *(_QWORD *)(a2 + 120) ? 0LL : *(_QWORD *)(a2 + 112) + (v10 << 6);
    if ( v86 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) == 20 && (*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFEFFFFLL) == 0x800000 )
      {
        v43 = v89;
        v44 = v88.m128i_i64[1];
        if ( (_QWORD)v89 )
        {
LABEL_112:
          *(_BYTE *)(v44 + v10) = 1;
          LODWORD(v9) = *(_DWORD *)(a2 + 568);
          --v85;
          goto LABEL_55;
        }
        LOBYTE(v96) = 0;
        v63 = (unsigned int)v9;
        if ( (unsigned __int64)&v96 >= v88.m128i_i64[1] )
        {
          v9 = (unsigned int)v9;
          if ( (unsigned __int64)&v96 >= v88.m128i_i64[1] + *((_QWORD *)&v89 + 1) )
          {
            if ( *((_QWORD *)&v89 + 1) < (unsigned __int64)(unsigned int)v9 )
              goto LABEL_222;
LABEL_177:
            v9 = (unsigned int)v9;
            goto LABEL_178;
          }
          if ( *((_QWORD *)&v89 + 1) < (unsigned __int64)(unsigned int)v9 )
          {
            v80 = qvector_reserve(&v88.m128i_u64[1], v88.m128i_i64[1], (unsigned int)v9, 1);
            v43 = v89;
            v88.m128i_i64[1] = v80;
            v44 = v80;
            v9 = v63;
            if ( (unsigned __int64)v89 >= v63 )
              goto LABEL_181;
          }
          do
          {
            *(_BYTE *)(v44 + v43++) = 0;
            v44 = v88.m128i_i64[1];
          }
          while ( v9 != v43 );
        }
        else
        {
          if ( *((_QWORD *)&v89 + 1) >= (unsigned __int64)(unsigned int)v9 )
            goto LABEL_177;
LABEL_222:
          v79 = qvector_reserve(&v88.m128i_u64[1], v88.m128i_i64[1], (unsigned int)v9, 1);
          v43 = v89;
          v88.m128i_i64[1] = v79;
          v44 = v79;
          v9 = v63;
          if ( (unsigned __int64)v89 >= v63 )
          {
LABEL_181:
            *(_QWORD *)&v89 = v63;
            goto LABEL_112;
          }
LABEL_178:
          v64 = v9;
          do
          {
            *(_BYTE *)(v44 + v43++) = (_BYTE)v96;
            v9 = v64;
            v44 = v88.m128i_i64[1];
          }
          while ( v64 != v43 );
        }
        v63 = v9;
        goto LABEL_181;
      }
    }
    else
    {
      if ( !v85 )
        goto LABEL_59;
      if ( !*(_BYTE *)(v88.m128i_i64[1] + v10) )
        goto LABEL_55;
      if ( v85 < 0 )
      {
        v85 = -v85;
        v12 = 0x800000;
        *(_QWORD *)(a1 + 512) = 0x800000;
      }
      else
      {
        v12 = *(_QWORD *)(a1 + 512);
      }
      v13 = *(_QWORD *)(v11 + 16);
      if ( v13 >= v12 )
        *(_QWORD *)(a1 + 512) = v13;
      else
        *(_QWORD *)(v11 + 16) = v12;
      --v85;
    }
    v14 = *(_DWORD *)(a2 + 572);
    *(_QWORD *)&v91 = 0;
    if ( v14 )
    {
      if ( v11
        && *(__int64 *)(a2 + 256) > 0
        && *(_QWORD *)(a2 + 272)
        && (sub_461E0(*(_QWORD *)(a2 + 240), (__int64 *)&s1, (__int64 *)(a2 + 256), *(_DWORD *)v11), (_QWORD)v91) )
      {
        v15 = s1;
      }
      else
      {
        v15 = (char *)&::s1;
      }
      sub_41480(a1, v15);
    }
    p_s1 = &s1;
    v16 = *(_WORD *)(a1 + 520) & 0x2000;
    v88.m128i_i8[0] = (*(_WORD *)(a1 + 520) & 8) != 0;
    v17 = sub_41670(a1, a2, v11, v10, (__int64)&s1);
    v5 = v16 >> 13;
    v88.m128i_i8[0] &= (unsigned __int8)v5 ^ 1;
    if ( v88.m128i_i8[0] )
    {
      v18 = (char *)&::s1;
      if ( (_QWORD)v91 )
        v18 = s1;
      v19 = sub_343A0(
              v17,
              (__int64)"AUTOHIDE DATABASE\nLoad section '%s' (start 0x%08llX, size 0x%08llX)?",
              v18,
              *(_QWORD *)(v11 + 16),
              *(_QWORD *)(v11 + 32));
      if ( v19 < 0 )
        goto LABEL_235;
      if ( !v19 )
        goto LABEL_104;
      v20 = *(_DWORD *)(v11 + 4);
      v21 = v20 - 1610612736;
      if ( v20 - 1610612736 > 0xFFFFFFF )
      {
        if ( v20 > 0x12 )
          goto LABEL_44;
LABEL_29:
        if ( v20 )
        {
          switch ( v20 )
          {
            case 1u:
              goto LABEL_45;
            case 2u:
            case 6u:
            case 0xBu:
              goto LABEL_54;
            case 3u:
              goto LABEL_92;
            case 4u:
            case 9u:
              goto LABEL_78;
            case 5u:
            case 7u:
            case 0x11u:
            case 0x12u:
              goto LABEL_43;
            case 8u:
              goto LABEL_94;
            default:
              goto LABEL_35;
          }
        }
        goto LABEL_35;
      }
    }
    else
    {
      v88.m128i_i8[0] = v5;
      if ( !(_BYTE)v5 && !v17 )
        goto LABEL_104;
      v20 = *(_DWORD *)(v11 + 4);
      v21 = v20 - 1610612736;
      if ( v20 - 1610612736 > 0xFFFFFFF )
      {
        if ( v20 > 0x12 )
          goto LABEL_35;
        goto LABEL_29;
      }
    }
    if ( *(_BYTE *)(a2 + 511) != 6 && v20 == 1879048181 )
      break;
    if ( v20 - 1610612737 <= 1 )
      goto LABEL_78;
LABEL_35:
    if ( !v88.m128i_i8[0] )
    {
      if ( (!*(_BYTE *)(a2 + 248) || !*(_QWORD *)(a2 + 120) || *(_WORD *)(a2 + 520) != 1)
        && !*(_QWORD *)(v11 + 16)
        && (*(_WORD *)(a2 + 522) != 8 || *(_WORD *)(a2 + 520) != 0xFFA0)
        || (v20 & 0x80000000) != 0
        || v21 <= 0xFFFFFFF )
      {
        goto LABEL_104;
      }
      if ( v20 > 0x6FFFFFFF )
      {
        v5 = qlseek(*(_QWORD *)(a2 + 472), 0, 1) - *(_QWORD *)(a2 + 480);
        v22 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64))(**(_QWORD **)(a1 + 240) + 72LL))(
                *(_QWORD *)(a1 + 240),
                v11,
                1);
        v23 = *(_QWORD *)(a2 + 480);
        v24 = *(_QWORD *)(a2 + 472);
        v88.m128i_i8[0] = v22;
        qlseek(v24, v5 + v23, 0);
LABEL_43:
        if ( !v88.m128i_i8[0] )
          goto LABEL_104;
      }
    }
LABEL_44:
    v88.m128i_i8[0] = v84;
LABEL_45:
    v25 = *(_QWORD *)(v11 + 8);
    if ( (v25 & 0x407) == 0 )
    {
      if ( *(_BYTE *)(a2 + 248) && *(_QWORD *)(a2 + 120) && *(_WORD *)(a2 + 520) == 1 )
        goto LABEL_99;
      if ( *(_QWORD *)(v11 + 16) )
        goto LABEL_99;
      v26 = *(const char **)(*(_QWORD *)(a1 + 240) + 280LL);
      if ( !v26 )
        goto LABEL_99;
      if ( (_QWORD)v91 )
      {
        if ( strcmp(s1, v26) )
          goto LABEL_99;
LABEL_53:
        *(_QWORD *)(a1 + 504) = *(_QWORD *)(v11 + 32);
      }
      else
      {
        if ( !strcmp(&::s1, v26) )
          goto LABEL_53;
LABEL_99:
        v40 = v88.m128i_i8[0];
LABEL_100:
        v42 = sub_49D80(
                a1,
                (_QWORD *)a2,
                v11,
                v10,
                (__int64)&s1,
                v40,
                *(double *)v6.m128i_i64,
                *(double *)a5.m128i_i64,
                &v94,
                (unsigned __int64 *)&v96);
        v5 = v81;
        if ( !v83 )
        {
          if ( v42 )
          {
            if ( v94 )
            {
              v47 = getseg(0);
              if ( v47 )
              {
                *(_WORD *)(v47 + 44) |= 0x40u;
                update_segm(v47);
              }
            }
          }
        }
        ++v83;
        if ( *(_DWORD *)(v11 + 4) == 7 )
        {
          v45 = a3[1];
          v46 = *a3;
          v88.m128i_i64[0] = (__int64)v94;
          v5 = (__int64)&v96[(_QWORD)v94];
          if ( a3[2] < (unsigned __int64)(v45 + 1) )
          {
            v67 = qvector_reserve(a3, v46, v45 + 1, 16);
            *a3 = v67;
            v45 = a3[1];
            v46 = v67;
          }
          v6 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v88), (__m128i)(unsigned __int64)v5);
          *(__m128i *)(v46 + 16 * v45) = v6;
          ++a3[1];
        }
      }
      goto LABEL_104;
    }
LABEL_95:
    if ( (v25 & 0x400) == 0 )
      goto LABEL_99;
    v41 = *(_DWORD *)(v11 + 4);
    if ( v41 == 1 )
    {
      v48 = (char *)&::s1;
      if ( (_QWORD)v91 )
        v48 = s1;
      sub_2E240((__int64 *)(a1 + 232), (_QWORD *)v11, v10, v48, *(double *)v6.m128i_i64, *(double *)a5.m128i_i64);
    }
    else
    {
      if ( v41 != 8 )
      {
        if ( *(_WORD *)(a2 + 520) != 1 )
          goto LABEL_99;
        goto LABEL_104;
      }
      v65 = (__int64 *)(a1 + 232);
      if ( (_QWORD)v91 )
        sub_2E250(v65, (_QWORD *)v11, v10, s1, *(double *)v6.m128i_i64, *(double *)a5.m128i_i64);
      else
        sub_2E250(v65, (_QWORD *)v11, v10, &::s1, *(double *)v6.m128i_i64, *(double *)a5.m128i_i64);
    }
    if ( *(_WORD *)(a2 + 520) == 1 )
      goto LABEL_104;
    if ( *(_DWORD *)(v11 + 4) != 8 )
      goto LABEL_99;
    v49 = v93;
    v50 = v92;
    if ( *((_QWORD *)&v93 + 1) < (unsigned __int64)(v93 + 1) )
    {
      v92 = qvector_reserve(&v92, v92, v93 + 1, 4);
      v50 = v92;
      v49 = v93;
    }
    *(_DWORD *)(v50 + 4 * v49) = v10;
    v51 = _mm_loadu_si128((const __m128i *)(v11 + 24));
    v9 = *(_QWORD *)(a2 + 1352) + 32 * v10;
    *(_QWORD *)&v93 = v93 + 1;
    *(_QWORD *)(v9 + 16) = -1;
    *(_BYTE *)(v9 + 24) = 1;
    a5 = _mm_add_epi64(_mm_srli_si128(v51, 8), v51);
    v6 = _mm_unpacklo_epi64(v51, a5);
    *(__m128i *)v9 = v6;
    LODWORD(v9) = *(_DWORD *)(a2 + 568);
LABEL_55:
    if ( (unsigned int)++v10 >= (unsigned int)v9 )
    {
      if ( !(_QWORD)v89 )
        goto LABEL_59;
      if ( !v86 )
        goto LABEL_59;
      v86 = 0;
      if ( (unsigned int)v9 <= 1 )
        goto LABEL_59;
      goto LABEL_3;
    }
  }
  sub_C090((_QWORD *)a2, *(_DWORD *)(v11 + 24), *(_QWORD *)(v11 + 32));
  if ( !v88.m128i_i8[0] )
    goto LABEL_104;
  v52 = *(_DWORD *)(v11 + 4);
  if ( v52 <= 0x12 )
  {
    if ( v52 )
    {
      switch ( *(_DWORD *)(v11 + 4) )
      {
        case 2:
        case 6:
        case 0xB:
LABEL_54:
          v27 = _mm_loadu_si128((const __m128i *)(v11 + 24));
          v9 = *(_QWORD *)(a2 + 1352) + 32 * v10;
          *(_QWORD *)(v9 + 16) = -1;
          *(_BYTE *)(v9 + 24) = 0;
          a5 = _mm_add_epi64(_mm_srli_si128(v27, 8), v27);
          v6 = _mm_unpacklo_epi64(v27, a5);
          *(__m128i *)v9 = v6;
          LODWORD(v9) = *(_DWORD *)(a2 + 568);
          goto LABEL_55;
        case 3:
          goto LABEL_93;
        case 4:
        case 9:
          goto LABEL_78;
        case 8:
LABEL_94:
          v25 = *(_QWORD *)(v11 + 8);
          goto LABEL_95;
        default:
          goto LABEL_44;
      }
    }
    goto LABEL_44;
  }
  if ( v52 - 1610612737 > 1 )
    goto LABEL_44;
LABEL_78:
  LODWORD(v28) = *(_DWORD *)(v11 + 44);
  if ( *(_BYTE *)(a2 + 248) )
  {
    if ( (unsigned __int64)(unsigned int)v28 >= *(_QWORD *)(a2 + 120)
      || (v33 = *(_QWORD *)(a2 + 112) + ((unsigned __int64)(unsigned int)v28 << 6)) == 0 )
    {
      sub_EAA0((__int64)"Relocation to unexisting section 0x%X\n", (_DWORD)v28);
      goto LABEL_104;
    }
    if ( !v88.m128i_i8[0] )
    {
      v34 = *(unsigned int *)(v33 + 4);
      if ( (unsigned int)v34 <= 0xB && (v35 = 2306, _bittest64(&v35, v34)) )
      {
        if ( (_DWORD)v28 )
        {
LABEL_85:
          if ( !*(_QWORD *)(v33 + 8) )
            goto LABEL_104;
        }
      }
      else if ( (_DWORD)v28 )
      {
        v66 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL);
        if ( v66 != 12 && (v66 != 13 || (_DWORD)v34 != 1879048193 && (_DWORD)v34 != 5) )
        {
          sub_EAA0((__int64)"Relocation to non-code/data/bss section, skipping...\n");
          goto LABEL_104;
        }
        goto LABEL_85;
      }
    }
    *(_BYTE *)(a1 + 528) = 1;
    LODWORD(v28) = *(_DWORD *)(v11 + 40);
    if ( !*(_BYTE *)(a2 + 248) )
      goto LABEL_237;
    v36 = *(_QWORD *)(a2 + 120);
    if ( (unsigned int)v28 < v36 )
    {
      v37 = *(_QWORD *)(a2 + 112);
      v38 = v37 + ((unsigned __int64)(unsigned int)v28 << 6);
      if ( v38 )
      {
        if ( !(_DWORD)v28 || (v39 = *(_DWORD *)(v38 + 4), v39 == 2) || v39 == 11 )
        {
LABEL_92:
          if ( v88.m128i_i8[0] )
          {
LABEL_93:
            v40 = 1;
            goto LABEL_100;
          }
LABEL_104:
          LODWORD(v9) = *(_DWORD *)(a2 + 568);
          goto LABEL_55;
        }
        v69 = *(_DWORD *)(a2 + 568);
        if ( v69 > 1 )
        {
          v70 = v69;
          v71 = 0;
          v72 = v37 + 64;
          for ( i = 1; i != v70; ++i )
          {
            v74 = 0;
            if ( i < v36 )
              v74 = v72;
            v75 = *(_DWORD *)(v74 + 4);
            if ( v75 == 2 || v75 == 11 )
            {
              if ( v71 )
                goto LABEL_206;
              v71 = i;
            }
            v72 += 64;
          }
          if ( v71 )
          {
            *(_DWORD *)(v11 + 40) = v71;
            goto LABEL_92;
          }
        }
      }
    }
LABEL_206:
    sub_EAA0((__int64)"Relocation link to non-associated section.\n");
    goto LABEL_104;
  }
  sub_30AC0();
LABEL_237:
  sub_30AC0();
LABEL_238:
  if ( under_debugger )
LABEL_241:
    BUG();
  interr(20099);
LABEL_240:
  v9 = *(_QWORD *)(a2 + 1328);
LABEL_74:
  *(_BYTE *)(v9 + v11) = 1;
  LODWORD(v9) = *(_DWORD *)(a2 + 568);
  while ( (unsigned int)++v5 < (unsigned int)v9 )
  {
    v29 = *(_QWORD *)(a2 + 1352);
LABEL_69:
    v30 = 32 * v5 + v29;
    v31 = *(_QWORD *)v30;
    v32 = *(_QWORD *)(v30 + 8);
    v88.m128i_i64[0] = v30;
    if ( v31 < v32 && v31 < *(_QWORD *)(v10 + 8) && *(_QWORD *)v10 < v32 )
    {
      v9 = *(_QWORD *)(a2 + 1328);
      if ( *(_BYTE *)(v30 + 24) )
      {
        *(_BYTE *)(v9 + v5) = 1;
        if ( *(_BYTE *)(v10 + 24) )
          goto LABEL_240;
      }
      else
      {
        if ( *(_BYTE *)(v10 + 24) )
          goto LABEL_74;
        *(_BYTE *)(v9 + v5) = 1;
        *(_BYTE *)(*(_QWORD *)(a2 + 1328) + v11) = 1;
        v94 = nullptr;
        v96 = nullptr;
        v95 = 0;
        v97 = 0;
        sub_46600(a2 + 80, (__int64 *)&v94, (unsigned int)p_s1);
        sub_46600(a2 + 80, (__int64 *)&v96, v5);
        v53 = &::s1;
        if ( (_QWORD)v97 )
          v53 = v96;
        v54 = &::s1;
        if ( (_QWORD)v95 )
          v54 = v94;
        sub_EAA0(
          (__int64)"SHT sections %u (file start 0x%08llX, size 0x%08llX, name \"%s\") and %u (file start 0x%08llX, size 0"
                   "x%08llX, name \"%s\") overlap.\n",
          (_DWORD)p_s1,
          *(_QWORD *)v10,
          *(_QWORD *)(v10 + 8) - *(_QWORD *)v10,
          v54,
          v5,
          *(_QWORD *)v88.m128i_i64[0],
          *(_QWORD *)(v88.m128i_i64[0] + 8) - *(_QWORD *)v88.m128i_i64[0],
          v53);
        if ( v96 )
        {
          *(_QWORD *)&v97 = 0;
          qfree(v96);
        }
        if ( v94 )
        {
          *(_QWORD *)&v95 = 0;
          qfree(v94);
        }
        LOBYTE(v28) = 1;
      }
      LODWORD(v9) = *(_DWORD *)(a2 + 568);
    }
  }
  while ( (unsigned int)++v11 < (unsigned int)v9 )
  {
LABEL_62:
    v10 = *(_QWORD *)(a2 + 1352) + 32 * v11;
    v29 = *(_QWORD *)(a2 + 1352);
    if ( *(_QWORD *)v10 < *(_QWORD *)(v10 + 8) )
    {
      v5 = (unsigned int)(v11 + 1);
      LODWORD(p_s1) = v11;
      if ( (unsigned int)v5 < (unsigned int)v9 )
        goto LABEL_69;
      break;
    }
  }
  if ( (_BYTE)v28 )
    sub_BFC0((__int64)"The SHT is corrupt and has some overlapping sections that will not be fully processed.\n"
                      "Try loading sections manually.");
LABEL_145:
  v55 = v92;
  v56 = v93;
  v28 = &s1;
  v10 = (unsigned __int64)&s1;
  v11 = v92;
  if ( v92 < v92 + 4LL * (_QWORD)v93 )
  {
    while ( 1 )
    {
      v57 = *(unsigned int *)v11;
      if ( *(_BYTE *)(*(_QWORD *)(a2 + 1328) + v57) )
        goto LABEL_149;
      if ( !*(_BYTE *)(a2 + 248) )
        goto LABEL_238;
      if ( v57 >= *(_QWORD *)(a2 + 120) )
        break;
      v58 = *(_DWORD *)(a2 + 572);
      v59 = (unsigned int *)(*(_QWORD *)(a2 + 112) + (v57 << 6));
      *(_QWORD *)&v91 = 0;
      v5 = (__int64)v59;
      if ( v58 )
      {
        if ( !v59 )
          goto LABEL_159;
        if ( *(__int64 *)(a2 + 256) <= 0 || !*(_QWORD *)(a2 + 272) )
          goto LABEL_160;
        p_s1 = &s1;
        sub_461E0(*(_QWORD *)(a2 + 240), (__int64 *)&s1, (__int64 *)(a2 + 256), *v59);
      }
      else
      {
        p_s1 = &s1;
      }
LABEL_148:
      LOBYTE(v28) = a2;
      sub_49D80(
        a1,
        (_QWORD *)a2,
        v5,
        *(_DWORD *)v11,
        (__int64)&s1,
        0,
        *(double *)v6.m128i_i64,
        *(double *)a5.m128i_i64,
        nullptr,
        nullptr);
      ++v83;
      v56 = v93;
      v55 = v92;
LABEL_149:
      v11 += 4LL;
      if ( v11 >= v55 + 4 * v56 )
        goto LABEL_161;
    }
    *(_QWORD *)&v91 = 0;
LABEL_159:
    v5 = 0;
LABEL_160:
    p_s1 = &s1;
    goto LABEL_148;
  }
LABEL_161:
  if ( v55 )
  {
    *(_QWORD *)&v93 = 0;
    qfree(v55);
    v92 = 0;
    *((_QWORD *)&v93 + 1) = 0;
  }
  if ( v83 )
  {
    if ( (*(_BYTE *)(a1 + 521) & 0x20) != 0 )
      goto LABEL_165;
    v68 = *(_QWORD *)(a2 + 528);
    if ( v68
      && *(_WORD *)(a2 + 520) == 2
      && !(unsigned __int8)is_mapped(*(_QWORD *)(a2 + 456) & (*(_QWORD *)(a2 + 608) + *(_QWORD *)(a1 + 328) + v68)) )
    {
      sub_BFC0(
        (__int64)"AUTOHIDE REGISTRY\n"
                 "Program entry point (%a) is not in the section headers\n"
                 "Program headers will be used to load the missing data.",
        *(double *)v6.m128i_i64);
LABEL_165:
      sub_498F0((__int64 *)a1, a2);
    }
    v60 = *(_QWORD *)(a1 + 184);
    if ( !v60 )
      v60 = 1;
    set_default_dataseg(v60);
    if ( v92 )
    {
      *(_QWORD *)&v93 = 0;
      qfree(v92);
    }
    if ( s1 )
    {
      *(_QWORD *)&v91 = 0;
      qfree(s1);
    }
    v61 = v88.m128i_i64[1];
    if ( v88.m128i_i64[1] )
    {
LABEL_173:
      *(_QWORD *)&v89 = 0;
      qfree(v61);
    }
  }
  else
  {
    sub_EAA0((__int64)"Section table does not seem to describe any loadable section.\n");
    *(_DWORD *)(a2 + 568) = 0;
    v76 = *(_QWORD *)(a2 + 112);
    *(_QWORD *)(a2 + 544) = 0;
    *(_WORD *)(a2 + 564) = 0;
    if ( v76 )
    {
      *(_QWORD *)(a2 + 120) = 0;
      qfree(v76);
      *(_QWORD *)(a2 + 112) = 0;
      *(_QWORD *)(a2 + 128) = 0;
    }
    *(_QWORD *)(a2 + 136) = 0;
    *(_QWORD *)(a2 + 232) = 0;
    memset(
      (void *)((a2 + 144) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * (((unsigned int)a2 - (((_DWORD)a2 + 144) & 0xFFFFFFF8) + 240) >> 3));
    v77 = *(_QWORD *)(a2 + 1352);
    if ( v77 )
    {
      *(_QWORD *)(a2 + 1360) = 0;
      qfree(v77);
      *(_QWORD *)(a2 + 1352) = 0;
      *(_QWORD *)(a2 + 1368) = 0;
    }
    v78 = *(_QWORD *)(a2 + 1328);
    if ( v78 )
    {
      *(_QWORD *)(a2 + 1336) = 0;
      qfree(v78);
      *(_QWORD *)(a2 + 1328) = 0;
      *(_QWORD *)(a2 + 1344) = 0;
    }
    if ( v92 )
    {
      *(_QWORD *)&v93 = 0;
      qfree(v92);
    }
    if ( s1 )
    {
      *(_QWORD *)&v91 = 0;
      qfree(s1);
    }
    v61 = v88.m128i_i64[1];
    if ( v88.m128i_i64[1] )
      goto LABEL_173;
  }
  return v98 - __readfsqword(0x28u);
}
