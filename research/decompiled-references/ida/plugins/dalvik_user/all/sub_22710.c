__int64 __fastcall sub_22710(int *a1, __int64 a2)
{
  char *v2; // rax
  char *v4; // rax
  char *v5; // rax
  char *v6; // rdi
  char v7; // r14
  int v8; // eax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  __int64 p_needle; // rsi
  char v13; // al
  char v14; // dl
  char *v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  __int64 v18; // rbx
  _QWORD *v19; // rax
  unsigned __int64 v20; // rbx
  __int64 v21; // r12
  size_t v22; // r14
  size_t v23; // r13
  char v25; // al
  __int64 v26; // rdi
  __m128 v27; // xmm0
  char *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // al
  char v33; // dl
  char *v34; // rsi
  char v35; // al
  char v36; // r14
  int v37; // r15d
  int v38; // eax
  int v39; // ecx
  int v40; // r8d
  int v41; // r9d
  __int64 v42; // r15
  const char *v43; // rdx
  const char *v44; // rdi
  const char *v45; // rdi
  __int64 v46; // r14
  __int64 v47; // rdi
  __int64 v48; // r14
  char *v49; // r9
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r15
  void *v53; // r15
  unsigned __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rbx
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rbx
  __int64 v59; // rdx
  char *v60; // rsi
  unsigned __int64 v61; // rax
  __int64 v62; // rbx
  unsigned __int64 v63; // rbp
  __int64 v64; // r15
  unsigned __int64 v65; // rbp
  size_t v66; // r15
  char *v67; // r8
  char *v68; // rsi
  char *v69; // rsi
  __int64 v70; // rdx
  unsigned __int64 v71; // rbp
  __int64 v72; // rbx
  _QWORD *v73; // rax
  _QWORD *v74; // rax
  char *v75; // rsi
  __m128i si128; // xmm0
  const char *v77; // rcx
  const char *v78; // rdx
  const char *v79; // rsi
  char *s2; // [rsp+0h] [rbp-8E8h]
  char *s2a; // [rsp+0h] [rbp-8E8h]
  __int64 v82; // [rsp+8h] [rbp-8E0h]
  __int64 *v83; // [rsp+10h] [rbp-8D8h]
  char *v84; // [rsp+18h] [rbp-8D0h]
  unsigned __int64 v85; // [rsp+20h] [rbp-8C8h]
  unsigned __int8 v86; // [rsp+2Fh] [rbp-8B9h]
  __int64 v88; // [rsp+40h] [rbp-8A8h] BYREF
  __m128 v89; // [rsp+48h] [rbp-8A0h] BYREF
  __int64 v90; // [rsp+60h] [rbp-888h] BYREF
  __m128 v91; // [rsp+68h] [rbp-880h] BYREF
  char *needle; // [rsp+80h] [rbp-868h] BYREF
  __int128 v93; // [rsp+88h] [rbp-860h]
  char v94[1024]; // [rsp+A0h] [rbp-848h] BYREF
  char v95[1032]; // [rsp+4A0h] [rbp-448h] BYREF
  unsigned __int64 v96; // [rsp+8A8h] [rbp-40h]

  v2 = haystack;
  v96 = __readfsqword(0x28u);
  if ( !n )
    v2 = &byte_7FAF1;
  if ( !*v2 )
  {
    sub_11270((__int64)"No package has been specified.\nPlease go to the Debugger Options and set specific options.");
    return 0;
  }
  v4 = &byte_7FAF1;
  if ( (_QWORD)xmmword_7FB78 )
    v4 = src;
  if ( !*v4 )
  {
    v5 = &byte_7FAF1;
    if ( (_QWORD)xmmword_7FB58 )
      v5 = (char *)qword_7FB50;
    if ( !*v5 )
    {
      sub_11270((__int64)"No activity has been specified.\nPlease go to the Debugger Options and set specific options.");
      return 0;
    }
  }
  if ( !byte_7FB4D
    && !(unsigned int)sub_114E0(
                        0,
                        (__int64)"HIDECANCEL\n"
                                 "AUTOHIDE DATABASE\n"
                                 "The debuggable flag was either not found in the manifest or is set to false.\n"
                                 "If the debugger does not work properly, please install a debuggable APK\n"
                                 "or modify the target host to accept APKs that are not marked as debuggable.\n"
                                 "\n"
                                 "Do you want to launch a debug session anyway?") )
  {
    return 0;
  }
  sub_1A000((__int64)"HIDECANCEL\nStarting application...");
  v88 = 0;
  v89 = 0;
  if ( (_QWORD)xmmword_7FB58 )
  {
    if ( *(_BYTE *)qword_7FB50 )
    {
LABEL_14:
      v6 = v94;
      qsnprintf();
      v7 = 1;
      goto LABEL_15;
    }
  }
  else if ( byte_7FAF1 )
  {
    goto LABEL_14;
  }
  v20 = xmmword_7FB78;
  needle = nullptr;
  v93 = 0;
  if ( !(_QWORD)xmmword_7FB78 || !strchr(src, 46) )
  {
    needle = (char *)qvector_reserve();
    *(_QWORD *)&v93 = 2;
    *needle = 46;
    needle[1] = 0;
    v20 = xmmword_7FB78;
    v21 = v93;
    if ( !(_QWORD)xmmword_7FB78 )
      goto LABEL_42;
    v22 = xmmword_7FB78 - 1;
    if ( (_QWORD)xmmword_7FB78 == 1 )
      goto LABEL_42;
    v23 = xmmword_7FB78 - 1;
    if ( (_QWORD)v93 )
    {
      v21 = v93 - 1;
      v23 = v22 + v93 - 1;
      v20 = xmmword_7FB78 + v93 - 1;
    }
LABEL_74:
    v34 = needle;
    if ( *((_QWORD *)&v93 + 1) < v20 )
    {
      needle = (char *)qvector_reserve();
      v34 = needle;
    }
    *(_QWORD *)&v93 = v20;
    v34[v23] = 0;
    memcpy(&needle[v21], src, v22);
    goto LABEL_42;
  }
  v23 = v20 - 1;
  if ( v20 != 1 )
  {
    v22 = v20 - 1;
    v21 = 0;
    goto LABEL_74;
  }
LABEL_42:
  qsnprintf();
  v6 = needle;
  if ( needle )
  {
    *(_QWORD *)&v93 = 0;
    qfree();
  }
  v7 = 0;
LABEL_15:
  v8 = sub_135E0(v6, 1024);
  sub_58110(v8, (unsigned int)"DBG: start application '%s'\n", (unsigned int)v94, v9, v10, v11);
  qsnprintf();
  v90 = 0;
  v91.m128_u64[0] = 0;
  needle = nullptr;
  v93 = 0;
  v86 = sub_1D840((unsigned __int8 *)&v90, a2);
  if ( !v86 )
  {
    if ( byte_7FAF8 )
    {
      if ( !(_BYTE)v90 )
      {
LABEL_22:
        v15 = needle;
        if ( (unsigned __int64)v93 > 1 )
        {
          sub_11270((__int64)"ADB %s", needle);
          if ( !needle )
            goto LABEL_25;
        }
        else if ( !needle )
        {
LABEL_25:
          sub_11270((__int64)"Start command failed. Please check your ADB connection.", v15);
          goto LABEL_26;
        }
        *(_QWORD *)&v93 = 0;
        qfree();
        goto LABEL_25;
      }
      sub_5D660(&v91, 0xFFFFFFFFLL);
    }
LABEL_21:
    LOWORD(v90) = 0;
    goto LABEL_22;
  }
  if ( byte_7FAF8 )
  {
    p_needle = (__int64)&v88;
    v83 = &v88;
    v25 = sub_20460((__int64)&v90, &v88, (__int64 *)&needle, v95);
    v14 = byte_7FAF8;
    if ( !v25 )
    {
LABEL_18:
      if ( v14 )
      {
        if ( !(_BYTE)v90 )
          goto LABEL_22;
        sub_5D660(&v91, 0xFFFFFFFFLL);
      }
      goto LABEL_21;
    }
  }
  else
  {
    p_needle = (__int64)&needle;
    v83 = &v88;
    v13 = sub_1E130(&v88, (__int64)&needle, (__int64)"%s", v95);
    v14 = byte_7FAF8;
    if ( !v13 )
      goto LABEL_18;
  }
  if ( v14 )
  {
    if ( !(_BYTE)v90 )
      goto LABEL_54;
    p_needle = 0xFFFFFFFFLL;
    sub_5D660(&v91, 0xFFFFFFFFLL);
  }
  LOWORD(v90) = 0;
LABEL_54:
  if ( needle )
  {
    *(_QWORD *)&v93 = 0;
    qfree();
  }
  if ( !v7 )
  {
    v90 = 0;
    v91 = 0;
    if ( !v89.m128_u64[0] )
    {
      v89 = 0u;
      v26 = v88;
      v88 = 0;
      v27 = _mm_loadh_ps((const double *)&v89.m128_u64[1]);
      v90 = v26;
      v91 = v27;
      if ( !v26 )
        goto LABEL_59;
LABEL_173:
      v91.m128_u64[0] = 0;
      qfree();
      goto LABEL_59;
    }
    p_needle = 0;
    v90 = qvector_reserve();
    v46 = v90;
    v47 = v88;
    v85 = v89.m128_u64[0];
    if ( v89.m128_u64[0] )
    {
      v48 = 0;
LABEL_131:
      while ( 2 )
      {
        v82 = v47;
        v52 = 0;
        v56 = v47 + 24 * v48;
        while ( 1 )
        {
          p_needle = (__int64)off_7D4C0[v52];
          if ( !p_needle )
            break;
          s2 = off_7D4C0[v52];
          v57 = strlen(s2);
          if ( !v57 )
            break;
          v49 = *(char **)(v56 + 8);
          if ( v49 )
          {
            if ( (unsigned __int64)(v49 - 1) >= v57 )
            {
              p_needle = (__int64)s2;
              v84 = *(char **)(v56 + 8);
              v50 = strncmp(*(const char **)v56, s2, v57);
              v49 = v84;
              if ( !v50 )
                break;
            }
          }
          v51 = v52 + 1;
          v52 = 1;
          if ( v51 == 2 )
          {
            v53 = nullptr;
            if ( v49 )
            {
              s2 = v49;
              v53 = (void *)qalloc_or_throw();
              memcpy(v53, *(const void **)v56, (size_t)s2);
              v49 = s2;
            }
            v54 = v91.m128_u64[0];
            p_needle = v90;
            if ( v91.m128_u64[1] < v91.m128_u64[0] + 1 )
            {
              s2 = v49;
              v90 = qvector_reserve();
              v54 = v91.m128_u64[0];
              p_needle = v90;
              v49 = s2;
            }
            ++v48;
            v55 = p_needle + 24 * v54;
            *(_QWORD *)v55 = v53;
            v47 = v88;
            *(__m128i *)(v55 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v49, (__m128i)(unsigned __int64)v49);
            ++v91.m128_u64[0];
            if ( v48 == v85 )
              goto LABEL_135;
            goto LABEL_131;
          }
        }
        if ( ++v48 != v85 )
          continue;
        break;
      }
LABEL_135:
      v46 = v90;
      v85 = v89.m128_u64[0];
    }
    v58 = v91.m128_u64[0];
    v88 = v46;
    v90 = v47;
    v89 = v91;
    v91 = _mm_loadh_ps((const double *)&v89.m128_u64[1]);
    if ( !v89.m128_u64[0] )
    {
      if ( !v47 )
        goto LABEL_59;
      if ( v85 )
      {
        do
        {
          v74 = (_QWORD *)(v47 + 24 * v58);
          if ( *v74 )
          {
            v74[1] = 0;
            qfree();
          }
          ++v58;
          v47 = v90;
        }
        while ( v85 != v58 );
      }
      goto LABEL_173;
    }
    v59 = 3 * v58;
    v60 = nullptr;
    v61 = 0;
    v62 = 0;
    needle = nullptr;
    v93 = 0;
    if ( !(8 * v59) )
      goto LABEL_165;
    while ( 1 )
    {
      v65 = *(_QWORD *)(v46 + 8);
      if ( v65 )
      {
        v66 = v65 - 1;
        if ( v65 != 1 )
        {
          v67 = (char *)(v65 - 1);
          if ( v62 )
          {
            --v62;
            v67 = (char *)(v66 + v62);
            v65 += v62;
          }
          if ( v61 < v65 )
          {
            s2a = v67;
            needle = (char *)qvector_reserve();
            v67 = s2a;
            v60 = needle;
          }
          *(_QWORD *)&v93 = v65;
          v67[(_QWORD)v60] = 0;
          memcpy(&needle[v62], *(const void **)v46, v66);
          v61 = *((_QWORD *)&v93 + 1);
          v62 = v93;
          v60 = needle;
        }
      }
      if ( v62 )
      {
        v63 = v62 + 1;
        v64 = v62--;
        if ( v61 >= v63 )
          goto LABEL_140;
      }
      else
      {
        v63 = 2;
        v64 = 1;
        if ( v61 >= 2 )
          goto LABEL_140;
      }
      needle = (char *)qvector_reserve();
      v60 = needle;
LABEL_140:
      *(_QWORD *)&v93 = v63;
      v46 += 24;
      v60[v64] = 0;
      needle[v62] = 10;
      v62 = v93;
      if ( v46 == v88 + 24 * v89.m128_u64[0] )
      {
        if ( (_QWORD)v93 )
        {
          v68 = needle;
LABEL_154:
          sub_11340((__int64)"Launch error: %s", v68);
          sub_11340((__int64)"Command line was: '%s'\n", v94);
          if ( (unsigned __int64)v93 > 1 )
            goto LABEL_155;
          v75 = needle;
          if ( *((_QWORD *)&v93 + 1) <= 0x74u )
          {
            needle = (char *)qvector_reserve();
            v75 = needle;
          }
          si128 = _mm_load_si128((const __m128i *)&xmmword_6A490);
          *(_QWORD *)&v93 = 117;
          *((_DWORD *)v75 + 28) = 170803780;
          *(__m128i *)v75 = si128;
          *((__m128i *)v75 + 1) = _mm_load_si128((const __m128i *)&xmmword_6A4A0);
          *((__m128i *)v75 + 2) = _mm_load_si128((const __m128i *)&xmmword_6A4B0);
          *((__m128i *)v75 + 3) = _mm_load_si128((const __m128i *)&xmmword_6A4C0);
          *((__m128i *)v75 + 4) = _mm_load_si128((const __m128i *)&xmmword_6A4D0);
          *((__m128i *)v75 + 5) = _mm_load_si128((const __m128i *)&xmmword_6A4E0);
          *((__m128i *)v75 + 6) = _mm_load_si128((const __m128i *)&xmmword_6A4F0);
          needle[116] = 0;
          if ( (_QWORD)v93 )
LABEL_155:
            v69 = needle;
          else
            v69 = (char *)nptr;
          sub_11270((__int64)"%s", v69);
          if ( needle )
          {
            *(_QWORD *)&v93 = 0;
            qfree();
          }
          v70 = v90;
          if ( v90 )
          {
            v71 = v91.m128_u64[0];
            if ( v91.m128_u64[0] )
            {
              v72 = 0;
              do
              {
                v73 = (_QWORD *)(v70 + 24 * v72);
                if ( *v73 )
                {
                  v73[1] = 0;
                  qfree();
                  v70 = v90;
                }
                ++v72;
              }
              while ( v71 != v72 );
            }
            v91.m128_u64[0] = 0;
            qfree();
          }
LABEL_26:
          v86 = 0;
          goto LABEL_27;
        }
LABEL_165:
        v68 = (char *)nptr;
        goto LABEL_154;
      }
      v61 = *((_QWORD *)&v93 + 1);
      v60 = needle;
    }
  }
LABEL_59:
  v28 = "Waiting for application to become ready...";
  sub_1A000((__int64)"Waiting for application to become ready...");
  LODWORD(s2) = 0;
  if ( dword_7F760 <= 0 )
  {
    v37 = -1;
    goto LABEL_90;
  }
  do
  {
    qsleep();
    if ( (unsigned __int8)callui(27, p_needle, &callui, v29, v30, v31, s2, v82, v83, v84) )
      goto LABEL_26;
    v90 = 0;
    v91.m128_u64[0] = 0;
    needle = nullptr;
    v93 = 0;
    LOBYTE(v82) = sub_1D840((unsigned __int8 *)&v90, a2);
    if ( !(_BYTE)v82 )
    {
      if ( !byte_7FAF8 )
        goto LABEL_79;
      goto LABEL_65;
    }
    if ( !byte_7FAF8 )
    {
      p_needle = (__int64)&needle;
      v35 = sub_1E130(v83, (__int64)&needle, (__int64)"%s", "jdwp");
      v33 = byte_7FAF8;
      if ( v35 )
        goto LABEL_81;
LABEL_64:
      if ( !v33 )
        goto LABEL_79;
LABEL_65:
      if ( !(_BYTE)v90 )
        goto LABEL_66;
      sub_5D660(&v91, 0xFFFFFFFFLL);
LABEL_79:
      LOWORD(v90) = 0;
LABEL_66:
      p_needle = (__int64)needle;
      if ( (unsigned __int64)v93 > 1 )
      {
        sub_11270((__int64)"ADB %s", needle);
        if ( !needle )
          goto LABEL_69;
      }
      else if ( !needle )
      {
        goto LABEL_69;
      }
      *(_QWORD *)&v93 = 0;
      qfree();
      goto LABEL_69;
    }
    p_needle = (__int64)v83;
    v32 = sub_20460((__int64)&v90, v83, (__int64 *)&needle, "jdwp");
    v33 = byte_7FAF8;
    if ( !v32 )
      goto LABEL_64;
LABEL_81:
    if ( v33 )
    {
      if ( !(_BYTE)v90 )
        goto LABEL_83;
      p_needle = 0xFFFFFFFFLL;
      sub_5D660(&v91, 0xFFFFFFFFLL);
    }
    LOWORD(v90) = 0;
LABEL_83:
    v28 = needle;
    if ( needle )
    {
      *(_QWORD *)&v93 = 0;
      qfree();
    }
    if ( v89.m128_u64[0] && (v42 = v88, 24 * v89.m128_u64[0]) )
    {
      while ( 1 )
      {
        v43 = nptr;
        needle = nullptr;
        v93 = 0;
        if ( *(_QWORD *)(v42 + 8) )
          v43 = *(const char **)v42;
        p_needle = (__int64)&v90;
        v36 = sub_21B60((__int64 *)&needle, &v90, (__int64)v43, a2);
        if ( !v36 )
        {
          v37 = -1;
          goto LABEL_110;
        }
        if ( (_BYTE)v90 == 83 )
        {
          p_needle = (__int64)nptr;
          if ( (_QWORD)v93 )
            p_needle = (__int64)needle;
          v44 = nptr;
          if ( n )
            v44 = haystack;
          if ( strstr(v44, (const char *)p_needle) )
            break;
        }
        v28 = needle;
        if ( needle )
        {
          *(_QWORD *)&v93 = 0;
          qfree();
        }
        v42 += 24;
        if ( v42 == v88 + 24 * v89.m128_u64[0] )
          goto LABEL_86;
      }
      v45 = nptr;
      if ( *(_QWORD *)(v42 + 8) )
        v45 = *(const char **)v42;
      p_needle = 0;
      v37 = strtol(v45, nullptr, 10);
LABEL_110:
      v28 = needle;
      if ( needle )
      {
        *(_QWORD *)&v93 = 0;
        qfree();
      }
      if ( v37 != -1 )
        goto LABEL_89;
    }
    else
    {
LABEL_86:
      v36 = v82;
    }
    LODWORD(s2) = (_DWORD)s2 + 1;
  }
  while ( dword_7F760 > (int)s2 );
  v37 = -1;
LABEL_89:
  if ( !v36 )
  {
LABEL_69:
    sub_11270((__int64)"Could not find spawned process id after launch.", p_needle);
    goto LABEL_26;
  }
LABEL_90:
  v38 = sub_135E0(v28, p_needle);
  sub_58110(v38, (unsigned int)"launch application: wait for %d msec\n", (_DWORD)s2 * dword_7F764, v39, v40, v41);
  if ( dword_7F760 == (_DWORD)s2 )
  {
    if ( (_QWORD)xmmword_7FBB8 )
    {
      v77 = (const char *)qword_7FBB0;
      if ( !*(_BYTE *)qword_7FBB0 )
        v77 = "emulator/device";
    }
    else
    {
      v77 = nptr;
      if ( !byte_7FAF1 )
        v77 = "emulator/device";
    }
    v78 = nptr;
    if ( (_QWORD)xmmword_7FB78 )
      v78 = src;
    v79 = nptr;
    if ( n )
      v79 = haystack;
    sub_11270(
      (__int64)"IDA started %s/%s on %s but failed to connect to the application.\n"
               "We checked %d times with timeout %d but it did not start.\n"
               "Please check the process options and the ADB_... params in the confg file.",
      v79,
      v78,
      v77,
      (_DWORD)s2,
      dword_7F764);
    goto LABEL_26;
  }
  if ( a1 )
    *a1 = v37;
LABEL_27:
  v16 = v88;
  if ( v88 )
  {
    v17 = v89.m128_u64[0];
    if ( v89.m128_u64[0] )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + 24 * v18);
        if ( *v19 )
        {
          v19[1] = 0;
          qfree();
          v16 = v88;
        }
        ++v18;
      }
      while ( v17 != v18 );
    }
    v89.m128_u64[0] = 0;
    qfree();
  }
  return v86;
}

