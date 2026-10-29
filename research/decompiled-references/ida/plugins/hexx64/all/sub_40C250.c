__int64 __fastcall sub_40C250(__int64 a1, __m128i a2, __m128 a3)
{
  int v3; // eax
  int i; // eax
  __int64 v5; // r12
  char v6; // al
  __int64 v7; // rsi
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // r13
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r13
  __int64 v19; // r14
  __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // r13
  char *v23; // r14
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  const char *v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  int v33; // r15d
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // r12
  char **v41; // r13
  char *v42; // rax
  int v43; // r12d
  const char *v44; // r15
  int v45; // eax
  const char *v46; // rsi
  int v47; // eax
  char v48; // al
  __int64 v49; // rcx
  __int64 v50; // rax
  _BYTE *v51; // rdx
  __int64 v52; // r13
  int v53; // eax
  _DWORD *v54; // r13
  int v55; // eax
  char v56; // al
  const char *v57; // r14
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rcx
  _QWORD *v68; // rax
  __int64 v69; // rsi
  __int64 v70; // r13
  char *s1; // [rsp+0h] [rbp-A8h]
  char *s1b; // [rsp+0h] [rbp-A8h]
  char *s1a; // [rsp+0h] [rbp-A8h]
  int v74; // [rsp+8h] [rbp-A0h]
  char *v75; // [rsp+8h] [rbp-A0h]
  __int64 v76; // [rsp+10h] [rbp-98h]
  char *s2; // [rsp+18h] [rbp-90h]
  char v78[16]; // [rsp+20h] [rbp-88h] BYREF
  char v79[16]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v80[2]; // [rsp+40h] [rbp-68h] BYREF
  __int64 v81; // [rsp+50h] [rbp-58h] BYREF
  int v82; // [rsp+58h] [rbp-50h]
  unsigned __int64 v83; // [rsp+68h] [rbp-40h]

  v3 = *(_DWORD *)(a1 + 48);
  v83 = __readfsqword(0x28u);
  for ( i = v3 - 1; ; i = *(_DWORD *)(a1 + 48) )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = *(_QWORD *)(a1 + 32);
          *(_DWORD *)(a1 + 48) = i + 1;
          if ( *(_DWORD *)v5 == 12 )
          {
            while ( 1 )
            {
              v9 = sub_11C8E0(v5, v79, 13);
              if ( !v9 || **(_BYTE **)v79 != 4 )
                break;
              v26 = *(_QWORD *)(*(_QWORD *)v79 + 8LL);
              if ( *(_DWORD *)v26 == 10 )
              {
                *(_QWORD *)v79 = v26 + 32;
                if ( *(_BYTE *)(v26 + 32) != 4 )
                  break;
                v26 = *(_QWORD *)(v26 + 40);
                if ( *(_DWORD *)v26 != 56 )
                  break;
              }
              else if ( *(_DWORD *)v26 != 56 )
              {
                break;
              }
              if ( *(_BYTE *)(v26 + 32) != 11 )
                break;
              v27 = "__readgs";
              if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 144LL) )
                v27 = "__readfs";
              s1 = (char *)v26;
              if ( strncmp(*(const char **)(v26 + 40), v27, 8u)
                || !(unsigned __int8)sub_11FD80(*(char **)(*((_QWORD *)s1 + 9) + 24LL), &v81, 0)
                || v81
                || !(unsigned __int8)sub_32A8E0(v80, v9) )
              {
                break;
              }
              *(_DWORD *)v5 = 4;
              sub_123A40((__int64)&v81, (unsigned __int8 *)(v9 + 32), v28, v29);
              sub_11CA10((char *)(v5 + 32), (char *)&v81);
              sub_11CDA0(v5 + 48);
              sub_11CDA0((__int64)&v81);
              v5 = *(_QWORD *)(a1 + 32);
              ++*(_DWORD *)(a1 + 48);
              if ( *(_DWORD *)v5 != 12 )
                goto LABEL_3;
            }
            v5 = *(_QWORD *)(a1 + 32);
          }
LABEL_3:
          v6 = sub_120560(v5, nullptr);
          v7 = *(_QWORD *)(a1 + 32);
          if ( !v6 )
            break;
          if ( (unsigned __int8)sub_3F5EE0(a1, (_QWORD *)v7, a2) )
            goto LABEL_25;
          v10 = *(_QWORD *)(a1 + 32);
          v11 = *(_QWORD *)(v10 + 72);
          if ( *(_DWORD *)(v11 + 8) == 2 )
          {
            v12 = *(_QWORD *)(v11 + 24);
            if ( *(_BYTE *)(v12 + 80) == 4 )
            {
              v54 = *(_DWORD **)(v12 + 88);
              if ( *v54 == 56 )
              {
                if ( v54 )
                {
                  if ( (unsigned __int8)sub_120560(*(_QWORD *)(v12 + 88), nullptr)
                    && ((unsigned __int8)sub_3EF160(*(_QWORD *)(a1 + 40), v10, (__int64)v54, -12, "_mm_cvtsi32_si64", 0)
                     || (unsigned __int8)sub_3EF160(
                                           *(_QWORD *)(a1 + 40),
                                           v10,
                                           (__int64)v54,
                                           -13,
                                           "_mm_cvtsi32_si128",
                                           1)) )
                  {
                    goto LABEL_25;
                  }
                  v10 = *(_QWORD *)(a1 + 32);
                }
              }
            }
          }
          v13 = *(_QWORD *)(a1 + 40);
          if ( *(_DWORD *)(*(_QWORD *)(v13 + 112) + 80LL) != 8 || !*(_BYTE *)(v13 + 144) )
          {
            if ( strncmp(*(const char **)(v10 + 40), "__readfs", 8u) )
              goto LABEL_14;
            if ( (unsigned __int8)getinf_flag() )
              v48 = sub_3EF570(v13, (__int64)"_KPCR", v10, (__int64)off_4EA280, 4, *(double *)a2.m128i_i64);
            else
              v48 = sub_3EF570(v13, (__int64)"_TEB", v10, (__int64)off_4EA240, 2, *(double *)a2.m128i_i64);
            goto LABEL_79;
          }
          v55 = *(_DWORD *)(*(_QWORD *)(v13 + 8) + 4LL);
          if ( v55 )
          {
            if ( v55 != 13 || strncmp(*(const char **)(v10 + 40), "__readx18", 9u) )
              goto LABEL_14;
            if ( (unsigned __int8)getinf_flag() )
            {
              v48 = sub_3EF570(v13, (__int64)"_KPCR", v10, (__int64)off_4EA180, 2, *(double *)a2.m128i_i64);
              goto LABEL_79;
            }
          }
          else
          {
            v56 = getinf_flag();
            v57 = *(const char **)(v10 + 40);
            if ( v56 && !strcmp(*(const char **)(v10 + 40), "__readcr8") )
            {
              qfree((__int64)v57);
              *(_QWORD *)(v10 + 40) = qstrdup();
              v68 = (_QWORD *)j__qalloc_or_throw(80, (__int64)"__readcr8", v66, v67);
              v69 = *(_QWORD *)(v10 + 24);
              v70 = (__int64)v68;
              v68[4] = 0xFFFFFFFF00000000LL;
              v68[5] = 0;
              v68[6] = 0xFFFFFFFF00000000LL;
              v68[7] = 0;
              v68[8] = 0xFFFFFFFF00000000LL;
              v68[9] = 0;
              sub_330970((__int64)v68, v69);
              sub_11D890(v70, v10);
              *(_DWORD *)v10 = 9;
              *(_BYTE *)(v10 + 32) = 4;
              *(_QWORD *)(v10 + 40) = v70;
              *(_DWORD *)(v10 + 36) = 1;
              *(_DWORD *)(v10 + 68) = *(_DWORD *)(v70 + 68);
              *(_DWORD *)(v70 + 68) = 1;
              v81 = 34;
              copy_tinfo_t();
              clear_tinfo_t();
              goto LABEL_25;
            }
            if ( strncmp(v57, "__readgs", 8u) )
              goto LABEL_80;
            if ( (unsigned __int8)getinf_flag() )
            {
              v48 = sub_3EF570(v13, (__int64)"_KPCR", v10, (__int64)off_4EA1C0, 4, *(double *)a2.m128i_i64);
              goto LABEL_79;
            }
          }
          v48 = sub_3EF570(v13, (__int64)"_TEB", v10, (__int64)off_4EA140, 2, *(double *)a2.m128i_i64);
LABEL_79:
          if ( v48 )
            goto LABEL_25;
LABEL_80:
          v10 = *(_QWORD *)(a1 + 32);
LABEL_14:
          if ( (unsigned __int8)sub_120560(v10, "_mm_cvtps_pd")
            && (v14 = *(_QWORD *)(*(_QWORD *)(v10 + 72) + 24LL), *(_BYTE *)v14 == 4)
            && (unsigned __int8)sub_120560(*(_QWORD *)(v14 + 8), "_mm_cvtsi32_si128") )
          {
            sub_123A40((__int64)v78, *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 72LL) + 24LL), v64, v65);
            *(_DWORD *)(v10 + 4) |= 0x10u;
            *(_DWORD *)v10 = 67;
            sub_11CA10((char *)(v10 + 32), v78);
            sub_11CDA0(v10 + 64);
            *(_DWORD *)(v10 + 68) = 8;
            if ( !(unsigned __int8)sub_12B6F0(v10, *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL), 9, 16, 1, a2) )
            {
              if ( !under_debugger )
                sub_383060(0xC7ABu, *(double *)a2.m128i_i64);
              goto LABEL_128;
            }
            sub_11CDA0((__int64)v78);
            i = *(_DWORD *)(a1 + 48);
          }
          else
          {
            if ( (unsigned __int8)sub_120560(v10, "_mm_cvtpd_ps") )
            {
              v15 = *(_QWORD *)(*(_QWORD *)(v10 + 72) + 24LL);
              if ( *(_BYTE *)v15 == 4 )
              {
                if ( (unsigned __int8)sub_120560(*(_QWORD *)(v15 + 8), "_mm_cvtsi32_si128") )
                {
                  sub_123A40(
                    (__int64)v79,
                    *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v15 + 8) + 72LL) + 24LL),
                    v60,
                    v61);
                  *(_DWORD *)(v10 + 4) |= 0x10u;
                  *(_DWORD *)v10 = 67;
                  sub_11CA10((char *)(v10 + 32), v79);
                  sub_11CDA0(v10 + 64);
                  *(_DWORD *)(v10 + 68) = 4;
                  if ( (unsigned __int8)sub_12B6F0(
                                          v10,
                                          *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL),
                                          9,
                                          16,
                                          1,
                                          a2) )
                  {
                    sub_11CDA0((__int64)v79);
                    goto LABEL_25;
                  }
                  if ( !under_debugger )
                    sub_383060(0xC7ABu, *(double *)a2.m128i_i64);
LABEL_128:
                  BUG();
                }
              }
            }
            v16 = *(_QWORD *)(a1 + 32);
            if ( (unsigned __int8)sub_120560(v16, "_mm_cvtepi32_pd") )
            {
              v17 = *(_QWORD *)(*(_QWORD *)(v16 + 72) + 24LL);
              if ( *(_BYTE *)v17 == 4 )
              {
                if ( (unsigned __int8)sub_120560(*(_QWORD *)(v17 + 8), "_mm_cvtsi32_si128") )
                {
                  sub_123A40(
                    (__int64)v80,
                    *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 72LL) + 24LL),
                    v58,
                    v59);
                  *(_DWORD *)(v16 + 4) |= 0x10u;
                  *(_DWORD *)v16 = 65;
                  sub_11CA10((char *)(v16 + 32), (char *)v80);
                  sub_11CDA0(v16 + 64);
                  *(_DWORD *)(v16 + 68) = 8;
                  if ( (unsigned __int8)sub_12B6F0(
                                          v16,
                                          *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL),
                                          9,
                                          16,
                                          1,
                                          a2) )
                  {
                    sub_11CDA0((__int64)v80);
                    goto LABEL_25;
                  }
                  if ( !under_debugger )
                    sub_383060(0xC7ABu, *(double *)a2.m128i_i64);
                  goto LABEL_128;
                }
              }
            }
            if ( (unsigned __int8)sub_120560(v16, "_mm_cvtepi32_ps") )
            {
              v18 = *(_QWORD *)(*(_QWORD *)(v16 + 72) + 24LL);
              if ( *(_BYTE *)v18 == 4 )
              {
                if ( (unsigned __int8)sub_120560(*(_QWORD *)(v18 + 8), "_mm_cvtsi32_si128") )
                {
                  sub_123A40(
                    (__int64)&v81,
                    *(unsigned __int8 **)(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 72LL) + 24LL),
                    v62,
                    v63);
                  *(_DWORD *)(v16 + 4) |= 0x10u;
                  *(_DWORD *)v16 = 65;
                  sub_11CA10((char *)(v16 + 32), (char *)&v81);
                  sub_11CDA0(v16 + 64);
                  *(_DWORD *)(v16 + 68) = 4;
                  if ( !(unsigned __int8)sub_12B6F0(
                                           v16,
                                           *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL),
                                           9,
                                           16,
                                           1,
                                           a2) )
                  {
                    if ( !under_debugger )
                      sub_383060(0xC7ABu, *(double *)a2.m128i_i64);
                    goto LABEL_128;
                  }
LABEL_110:
                  sub_11CDA0((__int64)&v81);
                  goto LABEL_25;
                }
              }
            }
            if ( !(unsigned __int8)sub_3F66B0(a1, *(_QWORD *)(a1 + 32), a2)
              && !(unsigned __int8)sub_3F68A0(a1, *(_QWORD *)(a1 + 32))
              && !(unsigned __int8)sub_3F6BA0(a1, *(_QWORD *)(a1 + 32), a2) )
            {
              return 0;
            }
LABEL_25:
            i = *(_DWORD *)(a1 + 48);
          }
        }
        if ( *(_BYTE *)(v7 + 32) != 4 )
          return 0;
        v19 = *(_QWORD *)(v7 + 40);
        if ( *(_DWORD *)v19 == 19 )
        {
          if ( *(_BYTE *)(v19 + 32) != 4 )
            return 0;
          if ( !(unsigned __int8)sub_120560(*(_QWORD *)(v19 + 40), nullptr) )
            return 0;
          if ( *(_BYTE *)(v19 + 48) != 4 )
            return 0;
          if ( !(unsigned __int8)sub_120560(*(_QWORD *)(v19 + 56), nullptr) )
            return 0;
          v39 = *(_QWORD *)(v19 + 40);
          v40 = *(_QWORD *)(v19 + 56);
          v76 = v39;
          if ( !sub_125B60((unsigned __int8 *)(v39 + 64), v40 + 64, 0, *(double *)a2.m128i_i64) )
            return 0;
          v41 = off_4EA040;
          s1a = *(char **)(v39 + 40);
          v42 = *(char **)(v40 + 40);
          v43 = 0;
          v75 = v42;
          while ( 1 )
          {
            v44 = *v41;
            v45 = strcmp(s1a, *v41);
            v46 = v41[1];
            if ( !v45 )
            {
              s2 = v41[1];
              v47 = strcmp(v75, v46);
              v46 = s2;
              if ( !v47 )
                break;
            }
            if ( !strcmp(s1a, v46) && !strcmp(v75, v44) )
              break;
            ++v43;
            v41 += 3;
            if ( v43 == 3 )
              return 0;
          }
          *(_DWORD *)v19 = 6;
          sub_11D4A0(v76 + 32);
          sub_11CDA0(v19 + 48);
          goto LABEL_25;
        }
        if ( !(unsigned __int8)sub_120560(v19, nullptr) )
          return 0;
        v20 = *(_QWORD *)(a1 + 32);
        if ( (unsigned int)(*(_DWORD *)v20 - 12) > 1 )
          break;
        if ( !(unsigned __int8)sub_11FD80((char *)(v20 + 48), &v81, 1)
          || v81 != 1
          || !(unsigned __int8)sub_40C0E0(*(_QWORD *)(a1 + 32)) )
        {
          return 0;
        }
        i = *(_DWORD *)(a1 + 48);
      }
      if ( *(_DWORD *)v20 != 10 || ((*(_DWORD *)(v20 + 68) - 4) & 0xFFFFFFFB) != 0 )
        return 0;
      if ( (unsigned __int8)sub_3F6370(a1, v20, a2, a3) )
        goto LABEL_25;
      v21 = *(_QWORD *)(a1 + 32);
      v22 = *(_QWORD *)(v21 + 40);
      v23 = *(char **)(v22 + 40);
      if ( strcmp(v23, "_mm_cvtps_pd") )
        break;
      sub_123A40((__int64)&v81, *(unsigned __int8 **)(*(_QWORD *)(v22 + 72) + 24LL), v24, v25);
      sub_12B320((__int64)&v81, *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v22 + 24), 4, a2);
      *(_DWORD *)(v21 + 4) |= 0x10u;
      *(_DWORD *)v21 = 67;
      sub_11CA10((char *)(v21 + 32), (char *)&v81);
      sub_11CDA0((__int64)&v81);
      i = *(_DWORD *)(a1 + 48);
    }
    if ( strcmp(v23, "_mm_cvtpd_ps") )
      break;
    sub_123A40((__int64)&v81, *(unsigned __int8 **)(*(_QWORD *)(v22 + 72) + 24LL), v30, v31);
    sub_12B320((__int64)&v81, *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v22 + 24), 8, a2);
    *(_DWORD *)(v21 + 4) |= 0x10u;
    *(_DWORD *)v21 = 67;
    sub_11CA10((char *)(v21 + 32), (char *)&v81);
    sub_11CDA0((__int64)&v81);
  }
  v33 = sub_3EA900(v23, (int *)v80, 1);
  v34 = *(_DWORD *)(v21 + 68);
  if ( v33 && LODWORD(v80[0]) == v34 )
  {
    v74 = v80[0];
    s1b = *(char **)(v22 + 72);
    sub_123A40((__int64)&v81, *((unsigned __int8 **)s1b + 3), v32, LODWORD(v80[0]));
    sub_12B320((__int64)&v81, *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v22 + 24), v74, a2);
    *(_DWORD *)v21 = v33;
    sub_11CA10((char *)(v21 + 48), (char *)(*((_QWORD *)s1b + 3) + 80LL));
    sub_12B320(v21 + 48, *(unsigned __int64 **)(*(_QWORD *)(a1 + 40) + 112LL), *(_QWORD *)(v22 + 24), 1, a2);
    sub_11CA10((char *)(v21 + 32), (char *)&v81);
    sub_11CDA0((__int64)&v81);
    goto LABEL_25;
  }
  if ( v34 != 8 )
  {
    if ( v34 != 4 || strcmp(v23, "_mm_cvtsi32_si128") )
      return 0;
    sub_123A40((__int64)&v81, *(unsigned __int8 **)(*(_QWORD *)(v22 + 72) + 24LL), v35, v36);
    if ( HIDWORD(v81) != 4 )
    {
      sub_11CDA0((__int64)&v81);
      v21 = *(_QWORD *)(a1 + 32);
      v22 = *(_QWORD *)(v21 + 40);
      if ( *(_DWORD *)(v21 + 68) != 8 )
        return 0;
      goto LABEL_62;
    }
    goto LABEL_117;
  }
  if ( !strcmp(v23, "_mm_loadl_epi64") )
  {
    v50 = *(_QWORD *)(v22 + 72);
    v51 = *(_BYTE **)(v50 + 24);
    if ( *v51 == 10 )
    {
      *(_DWORD *)v21 = 4;
      sub_123A40((__int64)&v81, *(unsigned __int8 **)(*(_QWORD *)(v50 + 24) + 8LL), (__int64)v51, v49);
      HIDWORD(v81) = 8;
      sub_11CA10((char *)(v21 + 32), (char *)&v81);
    }
    else
    {
      v52 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      *(_DWORD *)v21 = 2;
      sub_11CA10((char *)(v21 + 48), *(char **)(v50 + 24));
      v53 = *(_DWORD *)(v52 + 52);
      v81 = 0x200000001LL;
      v82 = v53;
      sub_125180((unsigned __int8 *)(v21 + 32), (unsigned __int8 *)&v81);
    }
    goto LABEL_110;
  }
LABEL_62:
  if ( strcmp(*(const char **)(v22 + 40), "_mm_cvtsi64_si128") )
    return 0;
  sub_123A40((__int64)&v81, *(unsigned __int8 **)(*(_QWORD *)(v22 + 72) + 24LL), v37, v38);
  if ( HIDWORD(v81) == 8 )
  {
LABEL_117:
    *(_DWORD *)v21 = 4;
    sub_11CA10((char *)(v21 + 32), (char *)&v81);
    sub_11CDA0((__int64)&v81);
    goto LABEL_25;
  }
  sub_11CDA0((__int64)&v81);
  return 0;
}

