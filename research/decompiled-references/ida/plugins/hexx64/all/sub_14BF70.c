__int64 *__fastcall sub_14BF70(
        __int64 *a1,
        __int64 a2,
        __int64 **a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        double a10,
        int a11,
        __int64 a12)
{
  _QWORD *v13; // r12
  __int64 **v14; // rbp
  bool v16; // zf
  int v17; // eax
  __int64 v18; // r9
  int v19; // r9d
  __int64 *v20; // r8
  int v21; // eax
  __int64 v22; // rdi
  __int64 v24; // rax
  const void *v25; // r14
  size_t v26; // rax
  size_t v27; // rbx
  unsigned __int64 *v28; // rax
  unsigned __int64 *v29; // rsi
  __int64 *v30; // r14
  __int64 *v31; // r15
  __int64 v32; // r8
  int v33; // r9d
  __int64 v34; // rcx
  __m128i *v35; // rdi
  int v36; // eax
  char v37; // r15
  int v38; // eax
  int v39; // r14d
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // r8d
  int v44; // r9d
  int v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  int v48; // eax
  __m128i *v49; // rdi
  char v50; // r8
  __int64 *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rbp
  __int64 i; // rbx
  __int64 *v55; // rax
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // rdx
  __int64 v59; // rbp
  __int64 j; // rbx
  __int64 *v61; // rax
  __int64 v62; // rdi
  int *v63; // rsi
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 *v66; // r14
  __int64 v67; // rdx
  __int64 *v68; // r15
  __int64 v69; // rax
  __m128i *v70; // rax
  unsigned __int64 *v71; // rax
  unsigned __int64 *v72; // r14
  __int64 v73; // rax
  void *v74; // rdi
  __int64 v75; // r15
  int *v76; // r14
  __int64 *v77; // rax
  __int64 v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 *v81; // rax
  int *v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rax
  unsigned __int64 v86; // rax
  const char *v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rax
  __int64 v90; // [rsp+0h] [rbp-128h]
  __int64 *v91; // [rsp+8h] [rbp-120h]
  __int64 v92; // [rsp+10h] [rbp-118h]
  __int64 *v93; // [rsp+18h] [rbp-110h]
  void *exception; // [rsp+20h] [rbp-108h]
  __int64 *v95; // [rsp+20h] [rbp-108h]
  int v96; // [rsp+30h] [rbp-F8h]
  void *v97; // [rsp+38h] [rbp-F0h]
  bool v98; // [rsp+41h] [rbp-E7h]
  char v99; // [rsp+42h] [rbp-E6h]
  char v100; // [rsp+43h] [rbp-E5h]
  __int64 *v101; // [rsp+50h] [rbp-D8h] BYREF
  int *v102; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v103; // [rsp+60h] [rbp-C8h] BYREF
  __int64 *v104; // [rsp+68h] [rbp-C0h] BYREF
  __int64 *v105; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v106; // [rsp+78h] [rbp-B0h]
  _QWORD v107[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v108; // [rsp+A0h] [rbp-88h]
  __int128 v109; // [rsp+A8h] [rbp-80h]
  __int64 *v110; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v111; // [rsp+C8h] [rbp-60h]
  __int64 v112; // [rsp+D8h] [rbp-50h]
  __int64 v113; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v114; // [rsp+E8h] [rbp-40h]

  v13 = a4;
  v14 = a3;
  v16 = *(_BYTE *)(a2 + 715) == 0;
  v91 = a5;
  v114 = __readfsqword(0x28u);
  v17 = a11;
  if ( v16 )
    v17 = a11 | 1;
  *(_DWORD *)(a2 + 452) = v17;
  if ( !*a3 && !a3[2] )
  {
    if ( a4 )
      *a4 = -30;
    goto LABEL_24;
  }
  if ( (unsigned __int8)sub_33F080(a2, nullptr)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                          100,
                          "LicenseManagerAutoSwitchDecompiler",
                          0,
                          0,
                          &callui,
                          v18)
    && (unsigned __int8)sub_33F080(a2, nullptr) )
  {
    v19 = *(_DWORD *)(a2 + 452);
    v107[0] = 0;
    v107[1] = -1;
    v20 = *v14;
    v108 = 0;
    v109 = 0;
    if ( (v19 & 2) == 0 && (int)a12 > 7 && (v98 = v91 == nullptr && v20 != nullptr) )
    {
      v71 = sub_13DC40(*(_QWORD ***)(a2 + 792), (unsigned __int64 **)v14);
      v72 = v71;
      if ( v71 )
      {
        v73 = *v71;
        if ( !v13 || v73 )
        {
          *a1 = v73;
          if ( v73 )
            ++*(_DWORD *)(v73 + 104);
          return a1;
        }
        *(_DWORD *)v13 = *((_DWORD *)v72 + 2);
        v13[1] = v72[2];
        sub_1365A0((__int64)(v13 + 2), (__int64)(v72 + 3));
        v89 = *v72;
        v22 = v108;
        *a1 = *v72;
        if ( v89 )
          ++*(_DWORD *)(v89 + 104);
LABEL_18:
        if ( v22 )
        {
          *(_QWORD *)&v109 = 0;
          qfree(v22);
        }
        return a1;
      }
      if ( !v13 )
        v13 = v107;
    }
    else
    {
      if ( !v20 )
        v20 = v14[1];
      v98 = 0;
    }
    v92 = *v20;
    if ( (v19 & 0x200) == 0 )
      sub_81960(a2, *v20);
    v101 = nullptr;
    v21 = *(_DWORD *)(a2 + 1416);
    if ( (v21 & 0x40) != 0 )
    {
      if ( v13 )
      {
        *(_DWORD *)v13 = -26;
        v13[1] = v92;
        if ( !v98 )
        {
LABEL_16:
          *a1 = 0;
LABEL_17:
          v22 = v108;
          goto LABEL_18;
        }
      }
      else if ( !v98 )
      {
        goto LABEL_16;
      }
      v49 = *(__m128i **)(a2 + 792);
      v50 = 0;
      v93 = (__int64 *)&v110;
      goto LABEL_63;
    }
    v110 = nullptr;
    *(_DWORD *)(a2 + 1416) = v21 | 0x40;
    v29 = (unsigned __int64 *)*v14;
    v113 = 0xFFFFFFFFLL;
    v93 = (__int64 *)&v110;
    v112 = 0;
    v111 = 0;
    get_func_ranges();
    v30 = &v110[2 * v111];
    if ( v110 != v30 )
    {
      v31 = v110;
      do
      {
        get_fchunk();
        v29 = (_QWORD *)&byte_1;
        lock_func_range();
        v31 += 2;
      }
      while ( v30 != v31 );
    }
    v99 = 0;
    if ( (*(_BYTE *)(a2 + 452) & 1) == 0 && (*(_BYTE *)(a2 + 1416) & 2) == 0 )
    {
      sub_137260((__int64)"Decompiling...", v29);
      v99 = 1;
    }
    v96 = time(nullptr);
    v100 = 0;
    v102 = nullptr;
    *(_OWORD *)(a2 + 976) = 0;
    *(_OWORD *)(a2 + 992) = 0;
    sub_374280(a2);
    v34 = *(unsigned int *)(a2 + 452);
    if ( (v34 & 0x200) != 0 )
    {
      BYTE1(v34) &= ~2u;
      v29 = (unsigned __int64 *)v14;
      *(_DWORD *)(a2 + 452) = v34;
      v70 = (__m128i *)sub_81950();
      v102 = (int *)v70;
      v35 = v70;
      if ( v70 )
      {
        v36 = v70->m128i_i32[0];
        v37 = v98;
        if ( (v36 & 0x200) != 0 )
          goto LABEL_42;
        v37 = v98;
        v39 = sub_1382E0((__int64)v35, 0.0, (__m128)0LL);
        if ( v102 )
          goto LABEL_104;
        if ( v98 )
        {
LABEL_115:
          v29 = (unsigned __int64 *)v14;
          v102 = (int *)sub_1472C0((_QWORD *)a2, (unsigned __int64 **)v14);
          v37 = 1;
          if ( v102 )
            goto LABEL_104;
        }
      }
      else if ( v98 )
      {
LABEL_114:
        v39 = 0;
        goto LABEL_115;
      }
    }
    else
    {
      v35 = (__m128i *)v102;
      if ( v102 )
      {
        v36 = *v102;
        v37 = v98;
        goto LABEL_42;
      }
      if ( v98 )
        goto LABEL_114;
    }
    v29 = (unsigned __int64 *)&v102;
    v39 = sub_13D650((_QWORD *)a2, (__int64)&v102, v14);
    v37 = 0;
LABEL_104:
    if ( v39 )
      goto LABEL_49;
    v35 = (__m128i *)v102;
    v36 = *v102;
LABEL_42:
    if ( (v36 & 0x10000) == 0 )
    {
      v29 = nullptr;
      sub_144130(v35->m128i_i64, nullptr, nullptr, v34, v32, v33, 0.0, (__m128)0LL);
      v35 = (__m128i *)v102;
    }
    if ( v35[19].m128i_i32[2] > 4 )
      goto LABEL_45;
    v29 = (_QWORD *)&byte_5;
    v39 = sub_33E140(a2, 5u, v35);
    if ( !v39 )
    {
      v35 = (__m128i *)v102;
LABEL_45:
      if ( (v35->m128i_i8[2] & 1) == 0 )
        goto LABEL_52;
      if ( v35[19].m128i_i32[2] > 6 )
        goto LABEL_54;
LABEL_47:
      v29 = (_QWORD *)&byte_7;
      v38 = sub_33E140(a2, 7u, v35);
      v39 = v38;
      if ( v38 )
      {
        if ( v38 == -36 )
          goto LABEL_55;
        goto LABEL_49;
      }
      v35 = (__m128i *)v102;
LABEL_54:
      while ( 1 )
      {
        sub_321ED0((__int64)v35, 1, 0.0, (__m128)0LL);
        v29 = (_QWORD *)&byte_7;
        v45 = sub_330F20((__int64)v102, 7, v41, v42, v43, v44);
        v39 = v45;
        if ( v45 != -36 )
          break;
LABEL_55:
        v35 = (__m128i *)v102;
        v48 = *v102;
        while ( 1 )
        {
          v35->m128i_i32[0] = v48 & 0xFFEAF7FF;
          v35 = (__m128i *)v102;
          v48 = *v102;
          if ( (*v102 & 0x10000) == 0 )
            break;
          if ( v102[78] <= 6 )
            goto LABEL_47;
        }
LABEL_52:
        v39 = sub_14B8B0(v35, (__int64)v29, (__m128)0LL, (__m128)0LL, a9, a10);
        if ( v39 )
          goto LABEL_49;
        v35 = (__m128i *)v102;
        if ( v102[78] <= 6 )
          goto LABEL_47;
      }
      if ( v45 )
        goto LABEL_49;
      if ( (*((_BYTE *)v102 + 2) & 8) == 0 )
      {
        sub_1FAD30();
        if ( v91 )
        {
LABEL_85:
          v63 = v102;
          *v91 = (__int64)v102;
          goto LABEL_86;
        }
      }
      if ( v37 )
      {
        v76 = v102;
        v77 = *((__int64 **)v102 + 1);
        if ( v77 )
        {
          v78 = *((_QWORD *)v102 + 187);
          v103 = *v77;
          sub_2B61B0(v78, v103, 0);
          v105 = nullptr;
          v106 = 0;
          v79 = netnode_qgetblob();
          v29 = (unsigned __int64 *)v105;
          if ( v79 <= 0 )
          {
            if ( !v105 )
              goto LABEL_138;
            goto LABEL_137;
          }
          v80 = sub_86880((__int64)v76, (__int64)v105, v106, v47, 0.0);
          v95 = (__int64 *)v80;
          if ( v80 && *(int *)(v80 + 56) > 7 )
          {
            *(_QWORD *)(*((_QWORD *)v76 + 187) + 1352LL) = v80;
            sub_6D0A0((__int64)"%a: restored pseudocode from idb\n", 0.0);
            if ( v105 )
            {
              *(_QWORD *)&v106 = 0;
              qfree((__int64)v105);
            }
            if ( v91 )
              goto LABEL_134;
            v100 = v37;
            goto LABEL_140;
          }
          netnode_delblob();
          v85 = *((_QWORD *)v76 + 187);
          v104 = &v103;
          v86 = sub_146480((__m128i *)(*(_QWORD *)(v85 + 792) + 16LL), (unsigned __int64 *)&v103, &v104);
          *(_DWORD *)(v86 + 32) |= 2u;
          v87 = "incomplete";
          v29 = (unsigned __int64 *)v103;
          if ( !v95 )
            v87 = "stale";
          sub_6D0A0((__int64)"%a: deleted %s pseudocode from idb\n", v103, v87);
          if ( v105 )
          {
LABEL_137:
            *(_QWORD *)&v106 = 0;
            qfree((__int64)v105);
          }
        }
      }
LABEL_138:
      v81 = (__int64 *)j__qalloc_or_throw(224, (__int64)v29, v46, v47);
      v82 = v102;
      v95 = v81;
      sub_256FC0(v81, (__int64)v102);
      sub_2523C0((__int64)v95, (__int64)v82, v83, v84);
      if ( v91 )
      {
        if ( !v95 )
          goto LABEL_85;
LABEL_134:
        if ( !under_debugger )
          sub_383060(0xC9DEu, 0.0);
        goto LABEL_169;
      }
      if ( !v95 )
      {
        v63 = v102;
        goto LABEL_86;
      }
LABEL_140:
      v105 = v95;
      sub_140140(&v101);
      v101 = v105;
      if ( v105 )
        ++*((_DWORD *)v105 + 26);
      sub_140140(&v105);
      if ( *(_BYTE *)(a2 + 716) )
        *((_DWORD *)v101 + 27) |= 4u;
      if ( *(char *)(a2 + 452) < 0 )
        sub_3B5320(a2, (unsigned __int64 *)v101);
      if ( (*(_BYTE *)(a2 + 607) & 4) != 0 )
        sub_3AD910(a2, (__int64)v101);
      v63 = v102;
LABEL_86:
      sub_374360(a2, v63);
      *(_DWORD *)(a2 + 1416) &= ~0x40u;
      *(_DWORD *)(a2 + 996) = v96;
      *(_DWORD *)(a2 + 1004) = time(nullptr);
      if ( v99 )
      {
        if ( (*(_BYTE *)(a2 + 452) & 0x20) != 0 )
          *(_DWORD *)(a2 + 1416) |= 2u;
        else
          callui(24, 10, 0, &callui, v64, v65, v90, v91, v92, &v110);
      }
      if ( v102 && (*(_BYTE *)(a2 + 452) & 8) != 0 )
        sub_331600((__int64)v102, 0.0);
      v66 = v110;
      v67 = (__int64)&v110[2 * v111];
      if ( v110 != (__int64 *)v67 )
      {
        v68 = &v110[2 * v111];
        do
        {
          v66 += 2;
          get_fchunk();
          lock_func_range();
        }
        while ( v68 != v66 );
        v67 = (__int64)v110;
      }
      if ( v67 )
      {
        *(_QWORD *)&v111 = 0;
        qfree(v67);
      }
      v51 = v101;
      if ( !v98 )
        goto LABEL_65;
      v50 = v100;
      v49 = *(__m128i **)(a2 + 792);
      if ( v101 )
      {
        v69 = v101[1];
        v110 = v101;
        ++*((_DWORD *)v101 + 26);
        v14 = (__int64 **)(v69 + 8);
        goto LABEL_64;
      }
LABEL_63:
      v110 = nullptr;
LABEL_64:
      sub_1469D0(v49, (unsigned __int64 **)v14, (__int64)v13, v93, v50, 0.0);
      sub_140140((__int64 **)v93);
      v51 = v101;
LABEL_65:
      *a1 = (__int64)v51;
      if ( v51 && !*((_DWORD *)v51 + 26) )
      {
        sub_258970(v51);
        v52 = v51[23];
        if ( v52 )
        {
          v53 = v51[24];
          if ( v53 )
          {
            for ( i = 0; i != v53; ++i )
            {
              v55 = (__int64 *)(v52 + 24 * i);
              v56 = *v55;
              if ( *v55 )
              {
                v55[1] = 0;
                qfree(v56);
                v52 = v51[23];
              }
            }
          }
          v51[24] = 0;
          qfree(v52);
        }
        v57 = v51[20];
        if ( v57 )
        {
          v51[21] = 0;
          qfree(v57);
        }
        v58 = v51[16];
        if ( v58 )
        {
          v59 = v51[17];
          if ( v59 )
          {
            for ( j = 0; j != v59; ++j )
            {
              v61 = (__int64 *)(v58 + 32 * j);
              v62 = *v61;
              if ( *v61 )
              {
                v61[1] = 0;
                qfree(v62);
                v58 = v51[16];
              }
            }
          }
          v51[17] = 0;
          qfree(v58);
        }
        sub_255050((__int64)(v51 + 2));
        j__qfree((__int64)v51);
      }
      goto LABEL_17;
    }
LABEL_49:
    if ( v39 != -33 )
    {
      v40 = sub_331040((const char **)&v105, v102);
      if ( v40 == -1 )
        v40 = v92;
      v97 = (void *)v40;
      exception = __cxa_allocate_exception(0x30u);
      sub_137330((__int64)exception, v39, (__int64)v97, (const char *)v105);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
    }
    if ( v91 )
      goto LABEL_85;
    if ( !under_debugger )
      sub_383060(0xCA58u, 0.0);
LABEL_169:
    BUG();
  }
  if ( !v13 )
  {
LABEL_24:
    *a1 = 0;
    return a1;
  }
  *(_DWORD *)v13 = -23;
  v24 = *(_QWORD *)(a2 + 112);
  v25 = *(const void **)(v24 + 24);
  if ( v25 && (v26 = strlen(*(const char **)(v24 + 24)), (v27 = v26) != 0) )
  {
    v74 = (void *)v13[2];
    v75 = v26 + 1;
    if ( v13[4] < v26 + 1 )
    {
      v88 = qvector_reserve((__int64)(v13 + 2), v13[2], v75, 1);
      v13[2] = v88;
      v74 = (void *)v88;
    }
    v13[3] = v75;
    memmove(v74, v25, v27);
    *(_BYTE *)(v13[2] + v27) = 0;
  }
  else
  {
    v13[3] = 0;
  }
  v28 = (unsigned __int64 *)*v14;
  if ( !*v14 )
    v28 = (unsigned __int64 *)v14[1];
  v13[1] = *v28;
  *a1 = 0;
  return a1;
}

