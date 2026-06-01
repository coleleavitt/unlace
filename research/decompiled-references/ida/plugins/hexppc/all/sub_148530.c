_QWORD *__fastcall sub_148530(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  _QWORD *v9; // r12
  __int64 v10; // rbp
  bool v12; // zf
  int v13; // eax
  __int64 v14; // r9
  int v15; // r9d
  __int64 *v16; // r8
  int v17; // eax
  __int64 v18; // rdi
  __int64 v20; // rax
  const void *v21; // r14
  size_t v22; // rax
  size_t v23; // rbx
  unsigned __int64 *v24; // rax
  unsigned __int64 *v25; // rsi
  const char *v26; // r14
  const char *v27; // r15
  int v28; // edx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // eax
  char v34; // r15
  int v35; // eax
  int v36; // r14d
  __int64 v37; // rdx
  int v38; // eax
  int v39; // eax
  __m128i *v40; // rdi
  char v41; // r8
  __int64 v42; // rsi
  const char *v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rbp
  __int64 i; // rbx
  _QWORD *v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rbp
  __int64 j; // rbx
  _QWORD *v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  const char *v54; // r14
  const char *v55; // rdx
  const char *v56; // r15
  __int64 v57; // rax
  int *v58; // rax
  unsigned __int64 *v59; // rax
  unsigned __int64 *v60; // r14
  unsigned __int64 v61; // rax
  void *v62; // rdi
  size_t v63; // r15
  __int64 v64; // r14
  unsigned __int64 *v65; // rax
  __int64 v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rax
  unsigned __int64 v71; // rax
  const char *v72; // rdx
  __int64 v73; // rax
  unsigned __int64 v74; // rax
  int v75; // [rsp+0h] [rbp-128h]
  __int64 v76; // [rsp+0h] [rbp-128h]
  __int64 *v77; // [rsp+8h] [rbp-120h]
  __int64 v78; // [rsp+8h] [rbp-120h]
  __int64 v79; // [rsp+10h] [rbp-118h]
  __int64 v80; // [rsp+10h] [rbp-118h]
  const char **v81; // [rsp+18h] [rbp-110h]
  __int64 *v82; // [rsp+18h] [rbp-110h]
  void *exception; // [rsp+20h] [rbp-108h]
  const char *v84; // [rsp+20h] [rbp-108h]
  int v85; // [rsp+30h] [rbp-F8h]
  int v86; // [rsp+30h] [rbp-F8h]
  void *v87; // [rsp+38h] [rbp-F0h]
  const char **v88; // [rsp+38h] [rbp-F0h]
  bool v89; // [rsp+41h] [rbp-E7h]
  char v90; // [rsp+42h] [rbp-E6h]
  char v91; // [rsp+43h] [rbp-E5h]
  const char *v92; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v93; // [rsp+58h] [rbp-D0h] BYREF
  unsigned __int64 v94; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 *v95; // [rsp+68h] [rbp-C0h] BYREF
  const char *v96; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v97; // [rsp+78h] [rbp-B0h]
  _QWORD v98[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v99; // [rsp+A0h] [rbp-88h]
  __int128 v100; // [rsp+A8h] [rbp-80h]
  const char *v101; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v102; // [rsp+C8h] [rbp-60h]
  __int64 v103; // [rsp+D8h] [rbp-50h]
  __int64 v104; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v105; // [rsp+E8h] [rbp-40h]

  v9 = a4;
  v10 = (__int64)a3;
  v12 = *(_BYTE *)(a2 + 715) == 0;
  v77 = a5;
  v105 = __readfsqword(0x28u);
  v13 = a7;
  if ( v12 )
    v13 = a7 | 1;
  *(_DWORD *)(a2 + 452) = v13;
  if ( !*a3 && !a3[2] )
  {
    if ( a4 )
      *a4 = -30;
    goto LABEL_24;
  }
  if ( (unsigned __int8)sub_33AEE0(a2, 0)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                          100,
                          "LicenseManagerAutoSwitchDecompiler",
                          0,
                          0,
                          &callui,
                          v14)
    && (unsigned __int8)sub_33AEE0(a2, 0) )
  {
    v15 = *(_DWORD *)(a2 + 452);
    v98[0] = 0;
    v98[1] = -1;
    v16 = *(__int64 **)v10;
    v99 = 0;
    v100 = 0;
    if ( (v15 & 2) == 0 && (int)a8 > 7 && (v89 = v77 == nullptr && v16 != nullptr) )
    {
      v59 = sub_13A200(*(_QWORD ***)(a2 + 792), (unsigned __int64 **)v10);
      v60 = v59;
      if ( v59 )
      {
        v61 = *v59;
        if ( !v9 || v61 )
        {
          *a1 = v61;
          if ( v61 )
            ++*(_DWORD *)(v61 + 104);
          return a1;
        }
        *(_DWORD *)v9 = *((_DWORD *)v60 + 2);
        v9[1] = v60[2];
        sub_132B60((__int64)(v9 + 2), (__int64)(v60 + 3));
        v74 = *v60;
        v18 = v99;
        *a1 = *v60;
        if ( v74 )
          ++*(_DWORD *)(v74 + 104);
LABEL_18:
        if ( v18 )
        {
          *(_QWORD *)&v100 = 0;
          qfree();
        }
        return a1;
      }
      if ( !v9 )
        v9 = v98;
    }
    else
    {
      if ( !v16 )
        v16 = *(__int64 **)(v10 + 8);
      v89 = 0;
    }
    v79 = *v16;
    if ( (v15 & 0x200) == 0 )
      sub_7DF20(a2, *v16);
    v92 = nullptr;
    v17 = *(_DWORD *)(a2 + 1416);
    if ( (v17 & 0x40) != 0 )
    {
      if ( v9 )
      {
        *(_DWORD *)v9 = -26;
        v9[1] = v79;
        if ( !v89 )
        {
LABEL_16:
          *a1 = 0;
LABEL_17:
          v18 = v99;
          goto LABEL_18;
        }
      }
      else if ( !v89 )
      {
        goto LABEL_16;
      }
      v40 = *(__m128i **)(a2 + 792);
      v41 = 0;
      v82 = (__int64 *)&v101;
      goto LABEL_63;
    }
    v101 = nullptr;
    *(_DWORD *)(a2 + 1416) = v17 | 0x40;
    v25 = *(unsigned __int64 **)v10;
    v104 = 0xFFFFFFFFLL;
    v81 = &v101;
    v103 = 0;
    v102 = 0;
    get_func_ranges();
    v26 = &v101[16 * v102];
    if ( v101 != v26 )
    {
      v27 = v101;
      do
      {
        get_fchunk();
        v25 = (_QWORD *)&byte_1;
        lock_func_range();
        v27 += 16;
      }
      while ( v26 != v27 );
    }
    v90 = 0;
    if ( (*(_BYTE *)(a2 + 452) & 1) == 0 && (*(_BYTE *)(a2 + 1416) & 2) == 0 )
    {
      sub_133820((__int64)"Decompiling...", v25);
      v90 = 1;
    }
    v85 = time(nullptr);
    v91 = 0;
    v93 = 0;
    *(_OWORD *)(a2 + 976) = 0;
    *(_OWORD *)(a2 + 992) = 0;
    sub_370100(a2, v25);
    v31 = *(unsigned int *)(a2 + 452);
    if ( (v31 & 0x200) != 0 )
    {
      BYTE1(v31) &= ~2u;
      v25 = (unsigned __int64 *)v10;
      *(_DWORD *)(a2 + 452) = v31;
      v58 = (int *)sub_7DF10(a2, v10);
      v93 = (__int64)v58;
      v32 = (__int64)v58;
      if ( v58 )
      {
        v33 = *v58;
        v34 = v89;
        if ( (v33 & 0x200) != 0 )
          goto LABEL_42;
        v34 = v89;
        v36 = sub_1348A0(v32);
        if ( v93 )
          goto LABEL_104;
        if ( v89 )
        {
LABEL_115:
          v25 = (unsigned __int64 *)v10;
          v93 = sub_143880((_QWORD *)a2, (unsigned __int64 **)v10);
          v34 = 1;
          if ( v93 )
            goto LABEL_104;
        }
      }
      else if ( v89 )
      {
LABEL_114:
        v36 = 0;
        goto LABEL_115;
      }
    }
    else
    {
      v32 = v93;
      if ( v93 )
      {
        v33 = *(_DWORD *)v93;
        v34 = v89;
        goto LABEL_42;
      }
      if ( v89 )
        goto LABEL_114;
    }
    v25 = (unsigned __int64 *)&v93;
    v36 = sub_139C10((_QWORD *)a2, (__int64)&v93, (_QWORD *)v10);
    v34 = 0;
LABEL_104:
    if ( v36 )
      goto LABEL_49;
    v32 = v93;
    v33 = *(_DWORD *)v93;
LABEL_42:
    if ( (v33 & 0x10000) == 0 )
    {
      v25 = nullptr;
      sub_1406F0((__int64 *)v32, nullptr, 0, v31, v29, v30);
      v32 = v93;
    }
    if ( *(int *)(v32 + 312) > 4 )
      goto LABEL_45;
    v25 = (_QWORD *)&byte_5;
    v36 = sub_339EC0(a2, 5, v32, v31, v29, v30, v75);
    if ( !v36 )
    {
      v32 = v93;
LABEL_45:
      if ( (*(_BYTE *)(v32 + 2) & 1) == 0 )
        goto LABEL_52;
      if ( *(int *)(v32 + 312) > 6 )
        goto LABEL_54;
LABEL_47:
      v25 = (_QWORD *)&byte_7;
      v35 = sub_339EC0(a2, 7, v32, v31, v29, v30, v75);
      v36 = v35;
      if ( v35 )
      {
        if ( v35 == -36 )
          goto LABEL_55;
        goto LABEL_49;
      }
      LODWORD(v32) = v93;
LABEL_54:
      while ( 1 )
      {
        sub_31DD50(v32, 1, v28, v31, v29, v30, v75, (_DWORD)v77, v79, (__int64)v81);
        v25 = (_QWORD *)&byte_7;
        v38 = sub_32CAC0(v93, 7);
        v36 = v38;
        if ( v38 != -36 )
          break;
LABEL_55:
        v32 = v93;
        v39 = *(_DWORD *)v93;
        while ( 1 )
        {
          *(_DWORD *)v32 = v39 & 0xFFEAF7FF;
          v32 = v93;
          v39 = *(_DWORD *)v93;
          if ( (*(_DWORD *)v93 & 0x10000) == 0 )
            break;
          if ( *(int *)(v93 + 312) <= 6 )
            goto LABEL_47;
        }
LABEL_52:
        v36 = sub_147E70(v32, (__int64)v25);
        if ( v36 )
          goto LABEL_49;
        LODWORD(v32) = v93;
        if ( *(int *)(v93 + 312) <= 6 )
          goto LABEL_47;
      }
      if ( v38 )
        goto LABEL_49;
      if ( (*(_BYTE *)(v93 + 2) & 8) == 0 )
      {
        sub_1F70B0();
        if ( v77 )
        {
LABEL_85:
          v42 = v93;
          *v77 = v93;
          goto LABEL_86;
        }
      }
      if ( !v34 )
        goto LABEL_138;
      v64 = v93;
      v65 = *(unsigned __int64 **)(v93 + 8);
      if ( !v65 )
        goto LABEL_138;
      v66 = *(_QWORD *)(v93 + 1496);
      v94 = *v65;
      v88 = &v96;
      sub_2B2530(v66, v94, 0);
      v96 = nullptr;
      v97 = 0;
      if ( netnode_qgetblob() <= 0 )
      {
        if ( v96 )
        {
LABEL_137:
          *(_QWORD *)&v97 = 0;
          qfree();
        }
      }
      else
      {
        v67 = sub_82E40(v64, (__int64)v96, v97);
        v84 = (const char *)v67;
        if ( v67 && *(int *)(v67 + 56) > 7 )
        {
          v68 = v94;
          *(_QWORD *)(*(_QWORD *)(v64 + 1496) + 1352LL) = v67;
          sub_69660((__int64)"%a: restored pseudocode from idb\n", 0.0);
          if ( v96 )
          {
            *(_QWORD *)&v97 = 0;
            qfree();
          }
          if ( v77 )
            goto LABEL_134;
          v91 = v34;
          goto LABEL_141;
        }
        netnode_delblob();
        v70 = *(_QWORD *)(v64 + 1496);
        v95 = &v94;
        v71 = sub_142A40((__m128i *)(*(_QWORD *)(v70 + 792) + 16LL), &v94, &v95);
        *(_DWORD *)(v71 + 32) |= 2u;
        v72 = "incomplete";
        if ( !v84 )
          v72 = "stale";
        sub_69660((__int64)"%a: deleted %s pseudocode from idb\n", v94, v72);
        if ( v96 )
          goto LABEL_137;
      }
LABEL_138:
      v69 = j__qalloc_or_throw();
      v68 = v93;
      v84 = (const char *)v69;
      sub_253340(v69, v93);
      sub_24E740(v84);
      if ( v77 )
      {
        if ( !v84 )
          goto LABEL_85;
LABEL_134:
        if ( !under_debugger )
          sub_37EEE0(51678);
        goto LABEL_170;
      }
      if ( !v84 )
      {
        v42 = v93;
        goto LABEL_86;
      }
      v88 = &v96;
LABEL_141:
      v96 = v84;
      sub_13C700(&v92, v68);
      v92 = v96;
      if ( v96 )
        ++*((_DWORD *)v96 + 26);
      sub_13C700(&v96, v68);
      if ( *(_BYTE *)(a2 + 716) )
        *((_DWORD *)v92 + 27) |= 4u;
      if ( *(char *)(a2 + 452) < 0 )
        sub_3B11A0(a2, v92);
      if ( (*(_BYTE *)(a2 + 607) & 4) != 0 )
        sub_3A9790(a2, v92);
      v42 = v93;
LABEL_86:
      sub_3701E0(
        a2,
        v42,
        v28,
        v31,
        v29,
        v30,
        v75,
        (_DWORD)v77,
        v79,
        (_DWORD)v81,
        (_DWORD)v84,
        a2 + 976,
        v85,
        (__int64)v88);
      *(_DWORD *)(a2 + 1416) &= ~0x40u;
      *(_DWORD *)(a2 + 996) = v86;
      *(_DWORD *)(a2 + 1004) = time(nullptr);
      if ( v90 )
      {
        if ( (*(_BYTE *)(a2 + 452) & 0x20) != 0 )
        {
          *(_DWORD *)(a2 + 1416) |= 2u;
        }
        else
        {
          v42 = 10;
          callui(24, 10, 0, &callui, v52, v53, v76, v78, v80, v82);
        }
      }
      if ( v93 && (*(_BYTE *)(a2 + 452) & 8) != 0 )
        sub_32D1A0();
      v54 = v101;
      v55 = &v101[16 * v102];
      if ( v101 != v55 )
      {
        v56 = &v101[16 * v102];
        do
        {
          v54 += 16;
          get_fchunk();
          v42 = 0;
          lock_func_range();
        }
        while ( v56 != v54 );
        v55 = v101;
      }
      if ( v55 )
      {
        *(_QWORD *)&v102 = 0;
        qfree();
      }
      v43 = v92;
      if ( !v89 )
        goto LABEL_65;
      v41 = v91;
      v40 = *(__m128i **)(a2 + 792);
      if ( v92 )
      {
        v57 = *((_QWORD *)v92 + 1);
        v101 = v92;
        ++*((_DWORD *)v92 + 26);
        v10 = v57 + 8;
        goto LABEL_64;
      }
LABEL_63:
      v101 = nullptr;
LABEL_64:
      v42 = v10;
      sub_142F90(v40, (unsigned __int64 **)v10, (__int64)v9, v82, v41);
      sub_13C700(v82, v10);
      v43 = v92;
LABEL_65:
      *a1 = v43;
      if ( v43 && !*((_DWORD *)v43 + 26) )
      {
        sub_254CF0(v43, v42);
        v44 = *((_QWORD *)v43 + 23);
        if ( v44 )
        {
          v45 = *((_QWORD *)v43 + 24);
          if ( v45 )
          {
            for ( i = 0; i != v45; ++i )
            {
              v47 = (_QWORD *)(v44 + 24 * i);
              if ( *v47 )
              {
                v47[1] = 0;
                qfree();
                v44 = *((_QWORD *)v43 + 23);
              }
            }
          }
          *((_QWORD *)v43 + 24) = 0;
          qfree();
        }
        if ( *((_QWORD *)v43 + 20) )
        {
          *((_QWORD *)v43 + 21) = 0;
          qfree();
        }
        v48 = *((_QWORD *)v43 + 16);
        if ( v48 )
        {
          v49 = *((_QWORD *)v43 + 17);
          if ( v49 )
          {
            for ( j = 0; j != v49; ++j )
            {
              v51 = (_QWORD *)(v48 + 32 * j);
              if ( *v51 )
              {
                v51[1] = 0;
                qfree();
                v48 = *((_QWORD *)v43 + 16);
              }
            }
          }
          *((_QWORD *)v43 + 17) = 0;
          qfree();
        }
        sub_2513D0(v43 + 16);
        j__qfree();
      }
      goto LABEL_17;
    }
LABEL_49:
    if ( v36 != -33 )
    {
      v37 = sub_32CBE0(&v96, v93);
      if ( v37 == -1 )
        v37 = v79;
      v87 = (void *)v37;
      exception = __cxa_allocate_exception(0x30u);
      sub_1338F0((__int64)exception, v36, (__int64)v87, v96);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_76A80);
    }
    if ( v77 )
      goto LABEL_85;
    if ( !under_debugger )
      sub_37EEE0(51800);
LABEL_170:
    BUG();
  }
  if ( !v9 )
  {
LABEL_24:
    *a1 = 0;
    return a1;
  }
  *(_DWORD *)v9 = -23;
  v20 = *(_QWORD *)(a2 + 112);
  v21 = *(const void **)(v20 + 24);
  if ( v21 && (v22 = strlen(*(const char **)(v20 + 24)), (v23 = v22) != 0) )
  {
    v62 = (void *)v9[2];
    v63 = v22 + 1;
    if ( v9[4] < v22 + 1 )
    {
      v73 = qvector_reserve();
      v9[2] = v73;
      v62 = (void *)v73;
    }
    v9[3] = v63;
    memmove(v62, v21, v23);
    *(_BYTE *)(v9[2] + v23) = 0;
  }
  else
  {
    v9[3] = 0;
  }
  v24 = *(unsigned __int64 **)v10;
  if ( !*(_QWORD *)v10 )
    v24 = *(unsigned __int64 **)(v10 + 8);
  v9[1] = *v24;
  *a1 = 0;
  return a1;
}

