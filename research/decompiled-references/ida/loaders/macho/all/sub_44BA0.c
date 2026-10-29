unsigned __int64 __fastcall sub_44BA0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v5; // rsi
  unsigned int v6; // ecx
  __int64 v7; // rdi
  __int64 v8; // r8
  int v9; // eax
  bool v10; // zf
  __int64 v11; // rcx
  __int64 (*v12)(); // rdx
  __int64 (*v13)(); // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  __int64 v18; // rax
  __m128i *v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 (*v22)(); // rcx
  __m128i v23; // xmm2
  char v24; // al
  int v25; // eax
  __int64 v26; // rax
  int v27; // eax
  __m128i v28; // xmm4
  __int64 v29; // rsi
  __int64 (__fastcall **v30)(); // rdi
  unsigned int v31; // r15d
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  const char *v36; // rcx
  __int64 v37; // rax
  const char *v38; // rsi
  __int64 (*v39)(); // rdx
  __int64 (*v40)(); // rcx
  int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // r15
  __int64 (*v45)(); // rcx
  __int64 v46; // rdx
  __int64 (*v47)(); // rcx
  __int64 v48; // rax
  int v49; // eax
  __int64 (*v50)(); // rdx
  __int64 (*v51)(); // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rax
  unsigned __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rsi
  __int64 v58; // r10
  __int64 v59; // r11
  _QWORD *v60; // rax
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 (*v63)(); // rdx
  __int64 (*v64)(); // rcx
  const char *v65; // rsi
  __int64 v66; // rdi
  char *v67; // rax
  __m128i v68; // [rsp+0h] [rbp-308h] BYREF
  __int64 v69; // [rsp+10h] [rbp-2F8h]
  __int64 v70; // [rsp+18h] [rbp-2F0h]
  __m128i v71; // [rsp+20h] [rbp-2E8h] BYREF
  _QWORD v72[2]; // [rsp+30h] [rbp-2D8h] BYREF
  __m128i v73; // [rsp+40h] [rbp-2C8h] BYREF
  char v74; // [rsp+50h] [rbp-2B8h]
  __int64 (__fastcall **v75)(); // [rsp+60h] [rbp-2A8h] BYREF
  __int128 v76; // [rsp+68h] [rbp-2A0h]
  _BYTE haystack[24]; // [rsp+80h] [rbp-288h] BYREF
  __int16 v78; // [rsp+98h] [rbp-270h]
  _QWORD v79[2]; // [rsp+A0h] [rbp-268h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-258h]
  __int64 v81; // [rsp+C0h] [rbp-248h]
  int v82; // [rsp+C8h] [rbp-240h]
  char v83; // [rsp+CCh] [rbp-23Ch]
  __int64 v84; // [rsp+D0h] [rbp-238h]
  char v85; // [rsp+D8h] [rbp-230h]
  __int64 v86; // [rsp+E8h] [rbp-220h]
  __int128 v87; // [rsp+F0h] [rbp-218h]
  __int64 v88; // [rsp+100h] [rbp-208h]
  __int64 v89; // [rsp+108h] [rbp-200h]
  char v90; // [rsp+110h] [rbp-1F8h]
  __m128i v91; // [rsp+118h] [rbp-1F0h]
  __int64 v92; // [rsp+128h] [rbp-1E0h]
  __int128 v93; // [rsp+130h] [rbp-1D8h]
  __int16 v94; // [rsp+140h] [rbp-1C8h]
  __m128i v95; // [rsp+144h] [rbp-1C4h] BYREF
  __m128i v96; // [rsp+154h] [rbp-1B4h] BYREF
  __int64 v97; // [rsp+168h] [rbp-1A0h]
  __int128 v98; // [rsp+170h] [rbp-198h]
  __int64 v99; // [rsp+180h] [rbp-188h]
  __int128 v100; // [rsp+188h] [rbp-180h]
  __int64 v101; // [rsp+198h] [rbp-170h]
  __int128 v102; // [rsp+1A0h] [rbp-168h]
  __int64 v103; // [rsp+1B0h] [rbp-158h]
  __int128 v104; // [rsp+1B8h] [rbp-150h]
  __int64 v105; // [rsp+1C8h] [rbp-140h]
  __int128 v106; // [rsp+1D0h] [rbp-138h]
  __int64 v107; // [rsp+1E0h] [rbp-128h]
  __int128 v108; // [rsp+1E8h] [rbp-120h]
  __int64 v109; // [rsp+1F8h] [rbp-110h]
  __int128 v110; // [rsp+200h] [rbp-108h]
  __int64 v111; // [rsp+210h] [rbp-F8h]
  __int128 v112; // [rsp+218h] [rbp-F0h]
  __int64 v113; // [rsp+228h] [rbp-E0h]
  __int128 v114; // [rsp+230h] [rbp-D8h]
  __int64 v115; // [rsp+240h] [rbp-C8h]
  __int128 v116; // [rsp+248h] [rbp-C0h]
  __int16 v117; // [rsp+258h] [rbp-B0h]
  char v118; // [rsp+25Ah] [rbp-AEh]
  int v119; // [rsp+25Ch] [rbp-ACh]
  __int128 v120; // [rsp+260h] [rbp-A8h]
  __int64 v121; // [rsp+270h] [rbp-98h]
  __int64 v122; // [rsp+278h] [rbp-90h]
  int v123; // [rsp+280h] [rbp-88h]
  __int64 v124; // [rsp+288h] [rbp-80h]
  __int128 v125; // [rsp+290h] [rbp-78h]
  __int64 v126; // [rsp+2A0h] [rbp-68h]
  __int128 v127; // [rsp+2B0h] [rbp-58h] BYREF
  unsigned __int64 v128; // [rsp+2C8h] [rbp-40h]

  v128 = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 16);
  if ( !v2 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v5 = 0;
  if ( *(_DWORD *)(a2 + 232) )
  {
    v18 = *(_QWORD *)(a2 + 32);
    if ( v18 )
      v5 = *(_QWORD *)(v18 + 32);
  }
  v6 = *(_DWORD *)(a2 + 364);
  v7 = *(_QWORD *)(a2 + 120);
  v79[0] = &off_62AA0;
  v8 = *(_QWORD *)(a2 + 216);
  v81 = -1;
  si128 = _mm_load_si128((const __m128i *)&xmmword_574B0);
  v9 = (v6 >> 3) & 2;
  v91 = _mm_load_si128((const __m128i *)&xmmword_574C0);
  v83 = 1;
  v10 = (v6 & 0x80) == 0;
  v11 = *(_QWORD *)(a1 + 8);
  v82 = 8;
  if ( !v10 )
    v9 |= 4u;
  v84 = v2;
  v79[1] = v11;
  v85 = 0;
  v86 = 0;
  v88 = v5;
  v89 = -1;
  v90 = 0;
  v92 = 0;
  v94 = 0;
  v97 = 0;
  v99 = 0;
  v101 = 0;
  v103 = 0;
  v105 = 0;
  v87 = 0;
  v93 = 0;
  v98 = 0;
  v100 = 0;
  v102 = 0;
  v104 = 0;
  v106 = 0;
  v126 = v7;
  v107 = 0;
  v109 = 0;
  v111 = 0;
  v113 = 0;
  v115 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v121 = a1 + 16;
  v122 = v8;
  v123 = v9;
  v124 = 0;
  v108 = 0;
  v110 = 0;
  v112 = 0;
  v114 = 0;
  v116 = 0;
  v120 = -1;
  v125 = 0;
  if ( sub_25BB0((__int64)v79)
    && (v5 = *(unsigned int *)(a2 + 360), sub_25EF0((__int64)v79, v5, *(_QWORD *)(a2 + 24), *(_BYTE *)(a2 + 364) & 1)) )
  {
    v19 = &v71;
    v20 = v79;
    v71.m128i_i32[2] = 0;
    *(_QWORD *)(a2 + 16) = v84;
    v71.m128i_i64[0] = (__int64)off_62AE8;
    sub_27280((__int64)v79, &v71, v12, v13);
    if ( v71.m128i_i32[2] == 1 )
    {
      if ( !*(_BYTE *)(a1 + 4128) )
      {
        v19 = (__m128i *)"HIDECANCEL\n"
                         "The file is apple-protected.\n"
                         "You have to define 'SMC_DEVICE_KEY' in macho.cfg to decrypt it.\n"
                         "Do you still want to continue?";
        v20 = nullptr;
        if ( (unsigned int)sub_19F30() != 1 )
          sub_1A260(
            0,
            (__int64)"HIDECANCEL\n"
                     "The file is apple-protected.\n"
                     "You have to define 'SMC_DEVICE_KEY' in macho.cfg to decrypt it.\n"
                     "Do you still want to continue?",
            v21,
            (__int64)v22,
            v61,
            v62,
            v68.m128i_i8[0]);
      }
    }
    else if ( v71.m128i_i32[2] == 2 )
    {
      v19 = (__m128i *)"HIDECANCEL\n"
                       "The file is iOS-encrypted.\n"
                       "Its disassembly will likely be useless.\n"
                       "Do you still want to continue?";
      v20 = nullptr;
      if ( (unsigned int)sub_19F30() != 1 )
        sub_1A260(
          0,
          (__int64)"HIDECANCEL\n"
                   "The file is iOS-encrypted.\n"
                   "Its disassembly will likely be useless.\n"
                   "Do you still want to continue?",
          v21,
          (__int64)v22,
          v52,
          v53,
          v68.m128i_i8[0]);
    }
    v23 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_633A8, (__m128i)(unsigned __int64)v79);
    v68 = v23;
    if ( (*(_BYTE *)(a1 + 5200) & 1) != 0 )
      *(_DWORD *)(a2 + 364) |= 4u;
    if ( v91.m128i_i64[0] == -1 )
      sub_11CF0(v20, v19, v21, v22);
    v24 = HIBYTE(v94);
    *(__m128i *)(a2 + 328) = _mm_loadu_si128(&v95);
    *(__m128i *)(a2 + 344) = _mm_loadu_si128(&v96);
    *(_BYTE *)(a1 + 13692) = v24;
    v25 = *(_DWORD *)(a2 + 364);
    if ( (v25 & 0x40) == 0
      || (v25 & 0x10) != 0
      || (v21 = *(_QWORD *)(a2 + 8), v26 = *(_QWORD *)(a2 + 240), *(_QWORD *)(v21 + 16) != v26) && v26 != -1 )
    {
      if ( !*(_BYTE *)(a1 + 13691) )
        sub_1D2B0(a1, (int *)(a2 + 328));
    }
    if ( !*(_BYTE *)(a1 + 13690) )
      sub_3A180((_BYTE *)a1, (__int64)v79, v21, v22);
    v27 = *(_DWORD *)(a2 + 364);
    if ( (v27 & 0x50) == 0 )
      goto LABEL_61;
    if ( (v27 & 0x80u) == 0 )
    {
      v75 = nullptr;
      v76 = 0;
      haystack[16] = 0;
      *(__m128i *)haystack = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63B78, (__m128i)(unsigned __int64)&v75);
      sub_27280((__int64)v79, (__m128i *)haystack, (__int64 (*)())v21, v22);
      if ( haystack[16]
        || (*(__m128i *)haystack = _mm_unpacklo_epi64(
                                     (__m128i)(unsigned __int64)off_63CB8,
                                     (__m128i)(unsigned __int64)&v75),
            sub_27280((__int64)v79, (__m128i *)haystack, v63, v64),
            haystack[16]) )
      {
        v65 = s1;
        if ( (_QWORD)v76 )
          v65 = (const char *)v75;
        sub_1CC90((_QWORD *)a2, v65);
      }
      if ( v75 )
      {
        *(_QWORD *)&v76 = 0;
        qfree();
      }
      v27 = *(_DWORD *)(a2 + 364);
    }
    if ( (v27 & 0x40) == 0 || (v27 & 0x10) != 0 )
    {
LABEL_61:
      netnode_supset();
      v74 = 0;
      v127 = 0;
      v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_63268, (__m128i)(unsigned __int64)&v127);
      sub_27280((__int64)v79, &v73, v50, v51);
      if ( v74 )
        netnode_supset();
    }
    v28 = _mm_load_si128(&v68);
    v29 = (__int64)haystack;
    v75 = nullptr;
    *(_QWORD *)&haystack[16] = &v75;
    v78 = 256;
    v76 = 0;
    *(__m128i *)haystack = v28;
    sub_27280((__int64)v79, (__m128i *)haystack, (__int64 (*)())v21, v22);
    v30 = v75;
    if ( 16LL * (_QWORD)v76 )
    {
      v31 = *(_DWORD *)v75;
      v32 = netnode_altval();
      v33 = v32;
      v34 = v31;
      if ( v32 && v32 != v31 )
      {
        v35 = (unsigned int)(v32 - 1);
        v36 = "<unknown>";
        if ( (unsigned int)v35 <= 9 )
          v36 = off_65240[v35];
        v37 = v31 - 1;
        v38 = "<unknown>";
        if ( (unsigned int)v37 <= 9 )
          v38 = off_65240[v37];
        v68.m128i_i64[0] = v31;
        sub_112F0((__int64)"new platform \"%s\" (%u) doesn't match previous one \"%s\" (%llu)\n", v38, v31, v36, v33);
        v34 = v68.m128i_i64[0];
      }
      v29 = -3;
      v69 = v34;
      netnode_supset();
      v30 = v75;
    }
    if ( v30 )
    {
      *(_QWORD *)&v76 = 0;
      qfree();
    }
    sub_1A010();
    if ( (*(_BYTE *)(a2 + 364) & 0x50) == 0 && sub_28AA0((__int64)v79, v29, v39, v40) != -1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)a1 + 12LL) & 8) != 0 )
        sub_1A010();
      setinf();
    }
    if ( (unsigned __int8)sub_2B5C0(a1, a2, (__int64)v79, v40) )
    {
      v41 = *(_DWORD *)(a2 + 364);
      if ( (v41 & 0x40) == 0 )
      {
        v42 = *(_QWORD *)(a2 + 248);
        if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) != v42 && v42 != -1 )
        {
          v43 = *(_QWORD *)(a2 + 240);
          if ( (*(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) == v43 || v43 == -1)
            && ((v41 & 0x10) == 0 || (v41 & 0x200) != 0) )
          {
            setinf();
            v70 = *(_QWORD *)(a2 + 248);
            netnode_supset();
          }
        }
      }
      v44 = *(_QWORD *)(a2 + 120);
      if ( v44 && (*(_BYTE *)(a2 + 365) & 8) != 0 )
      {
        v57 = *(_QWORD *)(a2 + 120);
        *(_QWORD *)haystack = 0;
        sub_40E20((unsigned __int64 *)haystack, v57);
        if ( *(int *)(v44 + 680) > 0 )
        {
          if ( !(_BYTE)v117 )
            sub_28840((__int64)v79);
          v58 = v99;
          v59 = v99 + 72 * v100;
          if ( v59 != v99 )
          {
            while ( 1 )
            {
              if ( (*(_BYTE *)(v58 + 60) & 4) == 0 )
              {
                v60 = sub_1C420((_QWORD *)v44, *(_QWORD *)(v58 + 24));
                if ( v60 )
                  break;
              }
              v58 += 72;
              if ( v58 == v59 )
                goto LABEL_80;
            }
            v44 = (__int64)v60;
          }
        }
LABEL_80:
        sub_23EC0(a1, v44, *(__int64 *)haystack, a2 + 176, *(_BYTE *)(a2 + 364) & 1);
      }
      if ( *(_DWORD *)(a2 + 232) )
        v88 = 0;
      sub_448E0(a1, a2, (__int64 (*)())v79, 0.0, NAN, *(double *)v23.m128i_i64);
      sub_2A960(a1, a2, (__int64)v79);
      sub_38590(a1, a2, (__int64)v79);
      sub_32090(a1, a2, (__int64 (*)())v79, v45);
      v72[1] = a1;
      v72[0] = &off_64660;
      sub_30290((__int64)v79, (__int64)v72);
      *(_QWORD *)&v76 = a1;
      v75 = off_64678;
      *((_QWORD *)&v76 + 1) = a2;
      sub_31350((__int64)v79, (__int64)&v75, v46, v47);
      v48 = *(_QWORD *)(a2 + 240);
      if ( *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v48 && v48 != -1 )
      {
        if ( !*(_QWORD *)(a2 + 184) )
          goto LABEL_58;
        if ( !rangeset_t_find_range() )
          goto LABEL_68;
      }
      v54 = (_QWORD *)getseg();
      memset(haystack, 0, sizeof(haystack));
      if ( !v54 || (v55 = *(_QWORD *)(a2 + 248), *v54 != v55) )
      {
LABEL_68:
        v49 = *(_DWORD *)(a2 + 364);
        if ( (v49 & 0x50) != 0
          || (v56 = *(_QWORD *)(a2 + 240), *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) != v56) && v56 != -1 )
        {
LABEL_59:
          if ( (v49 & 0x100) != 0 )
            sub_38640(a1, a2, (__int64 (*)())v79);
          goto LABEL_9;
        }
        if ( getinf() != -1 )
        {
          getinf();
          getseg();
          setinf();
        }
LABEL_58:
        v49 = *(_DWORD *)(a2 + 364);
        goto LABEL_59;
      }
      if ( (*(_BYTE *)(a2 + 364) & 0x50) == 0 && (*(_BYTE *)(a1 + 13689) & 8) == 0 )
      {
        if ( get_segm_name() <= 0 )
          goto LABEL_99;
        v66 = *(_QWORD *)haystack;
        if ( !*(_QWORD *)&haystack[8]
          || (v68.m128i_i64[0] = *(_QWORD *)haystack,
              v67 = strstr(*(const char **)haystack, "HEADER"),
              v66 = v68.m128i_i64[0],
              !v67)
          || &v67[-v68.m128i_i64[0]] == (char *)-1LL )
        {
LABEL_100:
          if ( v66 )
          {
            *(_QWORD *)&haystack[8] = 0;
            qfree();
          }
          goto LABEL_68;
        }
        v55 = *(_QWORD *)(a2 + 248);
      }
      sub_3E200(a1, v55);
LABEL_99:
      v66 = *(_QWORD *)haystack;
      goto LABEL_100;
    }
  }
  else
  {
    v16 = *(_DWORD *)(a2 + 364);
    if ( (v16 & 1) == 0 && (v16 & 0x50) == 0 )
      sub_1A260((__int64)"The file is corrupt", v5, (__int64)v12, (__int64)v13, v14, v15, v68.m128i_i8[0]);
    sub_112F0((__int64)"skipping invalid subfile.\n", 0.0, NAN);
  }
LABEL_9:
  sub_162E0((__int64)v79);
  return v128 - __readfsqword(0x28u);
}

