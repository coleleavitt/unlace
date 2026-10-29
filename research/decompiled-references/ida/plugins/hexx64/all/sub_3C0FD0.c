unsigned __int64 __fastcall sub_3C0FD0(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5, __m128 a6)
{
  double v9; // xmm0_8
  __int64 v10; // rax
  unsigned __int64 *v11; // r14
  unsigned __int64 v12; // rax
  const char *v13; // rcx
  unsigned __int64 *v14; // rax
  __int64 v15; // r15
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // r15
  double v19; // xmm0_8
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  int v23; // eax
  double v24; // xmm0_8
  double v25; // xmm0_8
  __int64 v26; // rax
  __int64 *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  char v32; // al
  char v33; // r14
  char v34; // r10
  __int64 v35; // r8
  __int64 v36; // r9
  bool v37; // zf
  char v38; // al
  double v39; // xmm0_8
  __int64 v40; // rax
  __int64 v41; // rdi
  unsigned __int64 v42; // rdx
  int v43; // eax
  char v44; // al
  const char *v45; // rcx
  const char *v46; // rcx
  __int64 v47; // rdi
  _QWORD *v48; // rax
  const char *v49; // rcx
  double v50; // xmm0_8
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  char v55; // r14
  __int64 v56; // r8
  __int64 v57; // r9
  _DWORD *v58; // r10
  int v59; // r14d
  const char *v60; // rcx
  const char *v61; // rcx
  __int64 v62; // rsi
  __int64 v63; // r8
  __int64 v64; // r9
  char v65; // al
  const char *v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rcx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // [rsp+0h] [rbp-128h]
  __int64 v80; // [rsp+0h] [rbp-128h]
  __int64 v81; // [rsp+0h] [rbp-128h]
  __int64 v82; // [rsp+0h] [rbp-128h]
  __int64 v83; // [rsp+0h] [rbp-128h]
  __int64 v84; // [rsp+0h] [rbp-128h]
  __int64 v85; // [rsp+0h] [rbp-128h]
  __int64 v86; // [rsp+0h] [rbp-128h]
  __int64 v87; // [rsp+0h] [rbp-128h]
  __int64 v88; // [rsp+0h] [rbp-128h]
  __int64 v89; // [rsp+0h] [rbp-128h]
  __int64 v90; // [rsp+0h] [rbp-128h]
  __int64 v91; // [rsp+0h] [rbp-128h]
  __int64 v92; // [rsp+0h] [rbp-128h]
  __int64 v93; // [rsp+0h] [rbp-128h]
  __int64 v94; // [rsp+0h] [rbp-128h]
  __int64 v95; // [rsp+8h] [rbp-120h]
  __int128 *v96; // [rsp+8h] [rbp-120h]
  __int64 v97; // [rsp+8h] [rbp-120h]
  __int64 v98; // [rsp+8h] [rbp-120h]
  __int128 *v99; // [rsp+8h] [rbp-120h]
  __int64 v100; // [rsp+8h] [rbp-120h]
  __int64 v101; // [rsp+8h] [rbp-120h]
  __int64 v102; // [rsp+8h] [rbp-120h]
  __int64 v103; // [rsp+8h] [rbp-120h]
  __int64 v104; // [rsp+8h] [rbp-120h]
  __int64 v105; // [rsp+8h] [rbp-120h]
  __int64 v106; // [rsp+8h] [rbp-120h]
  __int64 v107; // [rsp+8h] [rbp-120h]
  __int64 v108; // [rsp+8h] [rbp-120h]
  __int64 v109; // [rsp+8h] [rbp-120h]
  __int64 v110; // [rsp+8h] [rbp-120h]
  __int64 v111; // [rsp+8h] [rbp-120h]
  __int64 v112; // [rsp+10h] [rbp-118h]
  __int64 tinfo_property; // [rsp+10h] [rbp-118h]
  __int64 v114; // [rsp+10h] [rbp-118h]
  __int64 v115; // [rsp+10h] [rbp-118h]
  __int64 v116; // [rsp+10h] [rbp-118h]
  __int64 v117; // [rsp+10h] [rbp-118h]
  __int64 v118; // [rsp+10h] [rbp-118h]
  __int64 v119; // [rsp+10h] [rbp-118h]
  __int64 v120; // [rsp+10h] [rbp-118h]
  __int64 v121; // [rsp+10h] [rbp-118h]
  __int64 v122; // [rsp+10h] [rbp-118h]
  __int64 v123; // [rsp+10h] [rbp-118h]
  __int64 v124; // [rsp+10h] [rbp-118h]
  __int64 v125; // [rsp+10h] [rbp-118h]
  __int64 v126; // [rsp+10h] [rbp-118h]
  __int64 v127; // [rsp+10h] [rbp-118h]
  __int64 v128; // [rsp+18h] [rbp-110h]
  __int64 v129; // [rsp+18h] [rbp-110h]
  __int64 v130; // [rsp+18h] [rbp-110h]
  __int64 v131; // [rsp+18h] [rbp-110h]
  __int64 v132; // [rsp+18h] [rbp-110h]
  __int64 v133; // [rsp+18h] [rbp-110h]
  __int64 v134; // [rsp+18h] [rbp-110h]
  __int64 v135; // [rsp+18h] [rbp-110h]
  __int64 v136; // [rsp+18h] [rbp-110h]
  __int64 v137; // [rsp+18h] [rbp-110h]
  __int64 v138; // [rsp+18h] [rbp-110h]
  __int64 v139; // [rsp+18h] [rbp-110h]
  __int64 v140; // [rsp+18h] [rbp-110h]
  __int64 v141; // [rsp+18h] [rbp-110h]
  __int64 v142; // [rsp+18h] [rbp-110h]
  __int64 v143; // [rsp+20h] [rbp-108h] BYREF
  int v144; // [rsp+28h] [rbp-100h]
  __int64 v145; // [rsp+30h] [rbp-F8h] BYREF
  int v146; // [rsp+38h] [rbp-F0h]
  __int64 v147; // [rsp+40h] [rbp-E8h] BYREF
  int v148; // [rsp+48h] [rbp-E0h]
  __int128 v149; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v150; // [rsp+60h] [rbp-C8h]
  __int128 v151; // [rsp+68h] [rbp-C0h]
  __int64 v152; // [rsp+78h] [rbp-B0h]
  __int128 v153; // [rsp+80h] [rbp-A8h]
  __int128 v154; // [rsp+90h] [rbp-98h]
  __int64 v155; // [rsp+C0h] [rbp-68h]
  int v156; // [rsp+C8h] [rbp-60h]
  __int64 v157; // [rsp+D0h] [rbp-58h]
  char v158; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v159; // [rsp+E8h] [rbp-40h]

  v159 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __int64, __int64, const char *, _QWORD, _QWORD))callui)(131, a1, a2, "EditCopy", 0, 0);
  v9 = callui(131, a1, a2, 0, 0, 0, v79, v95, v112, v128);
  v80 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 216LL);
  sub_389B60((_QWORD *)a3);
  v10 = sub_38C8B0(a3);
  if ( v10 )
  {
    v11 = (unsigned __int64 *)v10;
    if ( (unsigned __int8)is_enum() )
      goto LABEL_3;
    if ( !(unsigned __int8)is_char() )
    {
      if ( (unsigned __int8)is_stroff() )
      {
LABEL_3:
        if ( !(unsigned __int8)is_numop() )
          goto LABEL_4;
LABEL_135:
        if ( (unsigned int)get_radix() == 16 )
        {
LABEL_6:
          if ( !(unsigned __int8)is_numop() || (unsigned int)get_radix() != 10 )
            callui(131, a1, a2, "hx:Dec", 0, 0, v80, v96, tinfo_property, v129);
          v12 = *v11;
          goto LABEL_9;
        }
LABEL_4:
        if ( *v11 > 9 )
          callui(131, a1, a2, "hx:Hex", 0, 0, v80, v96, tinfo_property, v129);
        goto LABEL_6;
      }
      if ( (unsigned __int8)is_numop() && (unsigned int)get_radix() == 8 )
      {
        if ( *v11 <= 7 )
        {
LABEL_10:
          if ( !(unsigned __int8)is_char() )
            callui(131, a1, a2, "hx:Char", 0, 0, v80, v96, tinfo_property, v129);
          callui(131, a1, a2, "hx:Enum", 0, 0, v80, v96, tinfo_property, v129);
          if ( *v11 )
            callui(131, a1, a2, "hx:InvertSign", 0, 0, v81, v97, v114, v130);
          callui(131, a1, a2, "hx:BitwiseNegate", 0, 0, v81, v97, v114, v130);
          v13 = "hx:StrucOffset";
          goto LABEL_15;
        }
      }
      else
      {
        v12 = *v11;
        if ( *v11 <= 9 )
        {
LABEL_9:
          if ( v12 > 7
            && (!(unsigned __int8)is_numop()
             || (unsigned int)get_radix() != 8
             || (unsigned __int8)is_enum()
             || (unsigned __int8)is_char()
             || (unsigned __int8)is_stroff()) )
          {
            callui(131, a1, a2, "hx:Oct", 0, 0, v80, v96, tinfo_property, v129);
          }
          goto LABEL_10;
        }
      }
    }
    if ( !(unsigned __int8)is_numop() )
      goto LABEL_4;
    goto LABEL_135;
  }
  if ( *(int *)(*(_QWORD *)(v80 + 880) + 368LL) > 3 )
    goto LABEL_16;
  v13 = "hx:DelContainingRecord";
LABEL_15:
  v9 = callui(131, a1, a2, v13, 0, 0, v80, v96, tinfo_property, v129);
LABEL_16:
  v14 = (unsigned __int64 *)sub_38DCC0(*(_QWORD *)(a3 + 32), a3 + 80, v9);
  v15 = (__int64)v14;
  if ( !v14 || *v14 == -1 )
    goto LABEL_23;
  if ( *(_DWORD *)(v14[3] + 8) != 68 )
  {
    if ( !sub_3C5930((_QWORD **)(*(_QWORD *)(a3 + 24) + 1312LL), *v14) )
    {
      v9 = callui(131, a1, a2, "hx:SetCallType", 0, 0, v80, v96, tinfo_property, v129);
      if ( (unsigned int)sub_38B7C0(a3, *(_QWORD **)(v15 + 32)) == -1 )
      {
        v68 = *(_QWORD *)(v15 + 24);
        if ( v68 == *(_QWORD *)(a3 + 88) )
        {
          *(_QWORD *)&v149 = get_tinfo_property();
          if ( (get_tinfo_property() & 0x3F) == 1 )
          {
            v96 = &v149;
            clear_tinfo_t();
          }
          else
          {
            clear_tinfo_t();
            v9 = sub_3BB740(a1, a2, 1, v76, v77, v78, v80, (__int64)&v149, tinfo_property, v129);
          }
          v68 = *(_QWORD *)(v15 + 24);
LABEL_131:
          if ( *(_DWORD *)(v68 + 8) == 48 )
          {
            *(_QWORD *)&v149 = 0;
            *(_QWORD *)&v149 = get_tinfo_property();
            tinfo_property = get_tinfo_property();
            clear_tinfo_t();
            if ( (tinfo_property & 0xF) == 0xC )
              v9 = callui(131, a1, a2, "hx:ForceCallType", 0, 0, v80, v96, tinfo_property, v129);
          }
          goto LABEL_20;
        }
LABEL_130:
        v96 = &v149;
        goto LABEL_131;
      }
      v9 = sub_3BB740(a1, a2, 0, v69, v70, v71, v80, v111, tinfo_property, v129);
    }
    v68 = *(_QWORD *)(v15 + 24);
    goto LABEL_130;
  }
  v96 = &v149;
LABEL_20:
  sub_244BC0(v96, v15);
  v16 = get_tinfo_property();
  LOBYTE(tinfo_property) = (v16 & 0xFFFFFFF0) == 208 || (v16 & 0xFFFFFFF0) == 64;
  clear_tinfo_t();
  if ( (_BYTE)tinfo_property )
  {
    v9 = callui(131, a1, a2, "hx:AddVarArg", 0, 0, v80, v96, tinfo_property, v129);
    if ( (unsigned __int64)(int)get_tinfo_property() < *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8LL) )
      v9 = callui(131, a1, a2, "hx:DelVarArg", 0, 0, v80, v96, tinfo_property, v129);
  }
LABEL_23:
  v17 = sub_38D720(a3 + 80);
  v18 = v17;
  if ( v17 )
  {
    if ( (*(_BYTE *)(v17 + 26) & 2) == 0 )
      callui(131, a1, a2, "hx:Rename", 0, 0, v80, v96, tinfo_property, v129);
    v19 = callui(131, a1, a2, "hx:SetType", 0, 0, v80, v96, tinfo_property, v129);
    if ( (get_tinfo_property() & 0xF) == 0xA )
      v19 = callui(131, a1, a2, "hx:ResetPtrType", 0, 0, v82, v98, v115, v131);
    if ( *(_DWORD *)(v18 + 88) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 128) + 112LL) + 80LL) )
      v19 = callui(131, a1, a2, "hx:Cvt2StrucPtr", 0, 0, v82, v98, v115, v131);
    if ( (unsigned __int8)sub_2574C0(*(_QWORD *)(a3 + 32), a3 + 80, 0) )
      v19 = callui(131, a1, a2, "hx:NewStruc", 0, 0, v82, v98, v115, v131);
    if ( (unsigned __int8)sub_216F20(*(_QWORD *)(a3 + 24), v18, nullptr, nullptr) )
      v19 = callui(131, a1, a2, "hx:Map2OtherVar", 0, 0, v82, v98, v115, v131);
    v22 = *(_DWORD *)(v18 + 24);
    if ( (v22 & 0x2000) != 0 )
    {
      v19 = callui(131, a1, a2, "hx:UnmapVar", 0, 0, v82, v98, v115, v131);
      v22 = *(_DWORD *)(v18 + 24);
    }
    if ( (v22 & 0x8000000) == 0 )
      v19 = callui(131, a1, a2, "hx:NopropVar", 0, 0, v82, v98, v115, v131);
    if ( *(_DWORD *)(a3 + 80) == 2 && (*(_BYTE *)(sub_38D720(a3 + 80) + 25) & 1) != 0 )
      v19 = sub_3BB740(a1, a2, 0, v72, v20, v21, v82, v98, v115, v131);
    sub_3BC960(a1, a2, a3, v18, v19, a5, a6, v20, v21, v82, v98, v115, v131);
    v23 = *(_DWORD *)(a3 + 80);
    v99 = &v149;
  }
  else
  {
    v23 = *(_DWORD *)(a3 + 80);
    v99 = &v149;
    if ( v23 == 3 )
    {
      v67 = *(_QWORD *)(a3 + 24);
      v147 = 0;
      tinfo_property = (__int64)&v147;
      if ( (unsigned __int8)sub_3810A0(v80, *(_QWORD *)(v67 + 40), (__int64)&v147, 2, v9, a5) )
      {
        *(_QWORD *)&v149 = 0;
        *(_QWORD *)&v149 = get_tinfo_property();
        if ( (get_tinfo_property() & 0x3F) == 1 )
        {
          v99 = &v149;
          clear_tinfo_t();
        }
        else
        {
          clear_tinfo_t();
          sub_3BB740(a1, a2, 1, v73, v74, v75, v80, (__int64)&v149, (__int64)&v147, v129);
        }
      }
      else
      {
        v99 = &v149;
      }
      clear_tinfo_t();
      v23 = *(_DWORD *)(a3 + 80);
    }
  }
  if ( v23 == 1 )
  {
    v62 = *(_QWORD *)(a3 + 88);
    if ( *(int *)(v62 + 8) <= 69 )
    {
      if ( (unsigned __int8)sub_211850(*(_QWORD *)(a3 + 32), v62) )
      {
        v66 = "Quick rename variable";
      }
      else
      {
        v65 = sub_2118A0(*(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 88));
        v66 = "Quick rename formal function argument";
        if ( !v65 )
          goto LABEL_41;
      }
      callui(140, "hx:QuickRename", 1, v66, v63, v64, v80, v99, tinfo_property, v129);
      callui(131, a1, a2, "hx:QuickRename", 0, 0, v94, v110, v127, v142);
    }
  }
LABEL_41:
  v24 = 0.0;
  v150 = 0;
  v152 = 0;
  v155 = 1;
  v156 = -1;
  v157 = 0;
  v158 = 0;
  v149 = 0;
  v151 = 0;
  v153 = 0;
  v154 = 0;
  if ( (unsigned int)sub_38D3D0(a3 + 80, v99, nullptr, nullptr, 0.0) != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v80, v99, tinfo_property, v129);
    v25 = callui(131, a1, a2, "hx:SetType", 0, 0, v83, v100, v116, v132);
    if ( (unsigned __int8)sub_2574C0(*(_QWORD *)(a3 + 32), a3 + 80, 0) )
      v25 = callui(131, a1, a2, "hx:NewStruc", 0, 0, v84, v101, v117, v133);
    if ( (unsigned __int8)sub_38DCB0(a3 + 80, *(_QWORD *)(a3 + 32), v25) )
      callui(131, a1, a2, "hx:SelUnionField", 0, 0, v84, v101, v117, v133);
    v26 = *(_QWORD *)(v84 + 112);
    if ( *((_QWORD *)&v149 + 1) == 8 * *(_DWORD *)(v26 + 84) )
    {
      v117 = 8 * *(_DWORD *)(v26 + 84);
      v147 = 0;
      v147 = get_tinfo_property();
      if ( v117 == get_tinfo_size() )
      {
        clear_tinfo_t();
        callui(131, a1, a2, "hx:Cvt2StrucPtr", 0, 0, v84, v101, v117, v133);
      }
      else
      {
        clear_tinfo_t();
      }
    }
    callui(131, a1, a2, "hx:JmpStrucDef", 0, 0, v84, v101, v117, v133);
    v24 = callui(131, a1, a2, "hx:JmpXref", 0, 0, v85, v102, v118, v134);
  }
  if ( (unsigned __int8)sub_3AD5A0(a3, 0, nullptr, v24) )
    v24 = callui(131, a1, a2, "hx:JumpGlobalXref", 0, 0, v80, v99, tinfo_property, v129);
  v119 = sub_38D760(a3 + 80);
  if ( v119 != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v80, v99, v119, v129);
    v24 = callui(131, a1, a2, "hx:SetType", 0, 0, v86, v103, v120, v135);
    if ( (unsigned __int8)sub_2574C0(*(_QWORD *)(a3 + 32), a3 + 80, 0) )
      v24 = callui(131, a1, a2, "hx:NewStruc", 0, 0, v80, v99, v119, v129);
  }
  if ( (int)sub_3BE5E0(v80, a3 + 80, v24, a5) > 0 )
    v24 = callui(131, a1, a2, "hx:JmpLocalType", 0, 0, v80, v99, v119, v129);
  v27 = *(__int64 **)(a3 + 32);
  if ( *(_DWORD *)(a3 + 80) == 3 )
  {
    v28 = *v27;
  }
  else
  {
    v52 = sub_38DCC0((__int64)v27, a3 + 80, v24);
    if ( !v52 )
      goto LABEL_59;
    v53 = *(_QWORD *)(v52 + 24);
    if ( *(_DWORD *)(v53 + 8) != 64 )
      goto LABEL_59;
    v28 = *(_QWORD *)(v53 + 24);
    if ( v28 == -1 )
      goto LABEL_59;
  }
  if ( sub_3ADA00(nullptr, v28, 1) )
    callui(131, a1, a2, "hx:CallDecomp", 0, 0, v80, v99, v119, v129);
LABEL_59:
  if ( *(_DWORD *)(a3 + 80) == 1 )
  {
    v29 = *(_QWORD *)(a3 + 88);
    if ( *(int *)(v29 + 8) <= 69 )
    {
      v30 = sub_254FC0(v29);
      if ( *(_DWORD *)(v30 + 8) == 64 )
      {
        if ( sub_3ADBD0(nullptr, *(_QWORD *)(v30 + 24), 1) )
          callui(131, a1, a2, "hx:XrefDecomp", 0, 0, v80, v99, v119, v129);
      }
    }
  }
  if ( v119 != -1 || v18 )
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v80, v99, v119, v129);
  if ( (unsigned int)sub_38D7A0(a3 + 80, 3) != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v80, v99, v119, v129);
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v87, v104, v121, v136);
  }
  v31 = sub_38C130(a3);
  if ( sub_3C5930((_QWORD **)(*(_QWORD *)(a3 + 24) + 1312LL), v31) )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v80, v99, v119, v129);
    callui(131, a1, a2, "hx:SetType", 0, 0, v88, v105, v122, v137);
  }
  callui(131, a1, a2, "hx:JumpNextParen", 0, 0, v80, v99, v119, v129);
  v32 = sub_38B690(a3, *(int *)(a3 + 44), 31);
  v33 = v32;
  if ( (v32 & 0x10) != 0 )
    goto LABEL_102;
  if ( (v32 & 1) == 0 )
  {
    if ( (v32 & 8) == 0 )
      goto LABEL_72;
LABEL_102:
    callui(131, a1, a2, "hx:EditCmt", 0, 0, v89, v106, v123, v138);
    callui(131, a1, a2, "hx:StockComments", 0, 0, v93, v109, v126, v141);
    v34 = 1;
    goto LABEL_73;
  }
  callui(131, a1, a2, "hx:EditCmt", 0, 0, v89, v106, v123, v138);
LABEL_72:
  v34 = 0;
LABEL_73:
  LOBYTE(v123) = v34;
  if ( (v33 & 6) != 0 )
  {
    callui(131, a1, a2, "hx:EditBlockCmt", 0, 0, v89, v106, v123, v138);
    if ( !(_BYTE)v123 )
      callui(131, a1, a2, "hx:StockComments", 0, 0, v89, v106, v123, v138);
  }
  if ( (unsigned __int8)sub_255960(*(_QWORD *)(a3 + 32)) )
    callui(131, a1, a2, "hx:DelOrphanCmts", 0, 0, v89, v106, v123, v138);
  v37 = *(_DWORD *)(a3 + 80) == 3;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  if ( v37 || (callui(8, *(_QWORD *)(a3 + 8), &v143, &v145, v35, v36, v89, v106, v123, v138), v38) )
    callui(131, a1, a2, "hx:GenHtml", 0, 0, v89, v106, v123, v138);
  v39 = callui(131, a1, a2, "MoveFunctionToFolder", 0, 0, v89, v106, v123, v138);
  if ( sub_38C530(a3) )
  {
    v40 = *(_QWORD *)(a3 + 88);
    v41 = *(_QWORD *)(a3 + 32);
    if ( v40 )
    {
      v42 = *(_QWORD *)v40;
      v43 = *(_DWORD *)(v40 + 8);
    }
    else
    {
      v42 = -1;
      v43 = 0;
    }
    v147 = v42;
    v148 = v43;
    v44 = sub_257EA0(v41, (unsigned __int64 *)&v147);
    v45 = "hx:ExpandItem";
    if ( (v44 & 1) == 0 )
      v45 = "hx:CollapseItem";
    v39 = callui(131, a1, a2, v45, 0, 0, v90, v107, v124, v139);
  }
  if ( sub_38C560(a3) )
  {
    v46 = "hx:ExpandDecls";
    if ( (*(_BYTE *)(*(_QWORD *)(a3 + 32) + 108LL) & 4) == 0 )
      v46 = "hx:CollapseDecls";
    v39 = callui(131, a1, a2, v46, 0, 0, v90, v107, v124, v139);
  }
  v47 = *(_QWORD *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 80) != 1 )
  {
    v48 = sub_1CE9E0(v47);
    if ( !v48 || (v49 = "hx:UnmarkDecompiled", *((_DWORD *)v48 + 16) != *(_DWORD *)(*(_QWORD *)(a3 + 128) + 588LL)) )
      v49 = "hx:MarkDecompiled";
    callui(131, a1, a2, v49, 0, 0, v90, v107, v124, v139);
    callui(131, a1, a2, "hx:Copy2Asm", 0, 0, v91, v108, v125, v140);
    goto LABEL_96;
  }
  v54 = **(_QWORD **)(a3 + 88);
  v148 = 0;
  v147 = v54;
  v55 = sub_137670(v47, (__int64)&v147);
  v58 = (_DWORD *)sub_38C590(a3);
  v59 = v55 & 7;
  if ( !v58 )
  {
    if ( !v59 )
      goto LABEL_118;
    goto LABEL_112;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 8LL) != 51 || (unsigned int)(*v58 - 1) > 1 )
  {
    if ( !v59 )
      goto LABEL_140;
LABEL_112:
    HIBYTE(v139) = 0;
    v60 = "hx:UnsplitExpr";
    goto LABEL_113;
  }
  if ( !v59 )
    goto LABEL_116;
  HIBYTE(v139) = 1;
  v60 = "hx:UnsplitMemAccess";
LABEL_113:
  v39 = callui(131, a1, a2, v60, 0, 0, v90, v107, v58, v139);
  if ( v59 != 1 && v124 )
  {
    if ( HIBYTE(v139) )
    {
LABEL_116:
      v61 = "hx:SplitMemAccess";
LABEL_117:
      v39 = callui(131, a1, a2, v61, 0, 0, v90, v107, v124, v139);
      goto LABEL_118;
    }
LABEL_140:
    v61 = "hx:SplitExpr";
    goto LABEL_117;
  }
LABEL_118:
  if ( !v18 )
    sub_3BC960(a1, a2, a3, 0, v39, a5, a6, v56, v57, v90, v107, v124, v139);
LABEL_96:
  v50 = callui(131, a1, a2, "hx:ToggleShowCasts", 0, 0, v90, v107, v124, v139);
  sub_33E140(v92, 0x6Eu, a1, a2, a3, v50);
  clear_tinfo_t();
  if ( v152 )
  {
    *(_QWORD *)&v153 = 0;
    qfree(v152);
  }
  if ( v150 )
  {
    *(_QWORD *)&v151 = 0;
    qfree(v150);
  }
  return v159 - __readfsqword(0x28u);
}

