unsigned __int64 __fastcall sub_3B96D0(__int64 a1, __int64 a2, __int64 a3, double a4, __m128 a5, __m128 a6)
{
  __int64 v9; // rax
  unsigned __int64 *v10; // r14
  unsigned __int64 v11; // rax
  const char *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  int v21; // eax
  __int64 v22; // rax
  __int64 *v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  char v27; // al
  char v28; // r14
  char v29; // r10
  __int64 v30; // r8
  __int64 v31; // r9
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // rdx
  int v36; // eax
  char v37; // al
  const char *v38; // rcx
  const char *v39; // rcx
  __int64 v40; // rdi
  _QWORD *v41; // rax
  const char *v42; // rcx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  char v47; // r14
  __int64 v48; // r8
  __int64 v49; // r9
  _DWORD *v50; // r10
  int v51; // r14d
  const char *v52; // rcx
  const char *v53; // rcx
  __int64 v54; // rsi
  __int64 v55; // r8
  __int64 v56; // r9
  char v57; // al
  const char *v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // [rsp+0h] [rbp-128h]
  __int64 v72; // [rsp+0h] [rbp-128h]
  __int64 v73; // [rsp+0h] [rbp-128h]
  __int64 v74; // [rsp+0h] [rbp-128h]
  __int64 v75; // [rsp+0h] [rbp-128h]
  __int64 v76; // [rsp+0h] [rbp-128h]
  __int64 v77; // [rsp+0h] [rbp-128h]
  __int64 v78; // [rsp+0h] [rbp-128h]
  __int64 v79; // [rsp+0h] [rbp-128h]
  __int64 v80; // [rsp+0h] [rbp-128h]
  __int64 v81; // [rsp+0h] [rbp-128h]
  __int64 v82; // [rsp+0h] [rbp-128h]
  __int64 v83; // [rsp+0h] [rbp-128h]
  __int64 v84; // [rsp+0h] [rbp-128h]
  __int64 v85; // [rsp+0h] [rbp-128h]
  __int64 v86; // [rsp+0h] [rbp-128h]
  __int64 v87; // [rsp+8h] [rbp-120h]
  __int128 *v88; // [rsp+8h] [rbp-120h]
  __int64 v89; // [rsp+8h] [rbp-120h]
  __int64 v90; // [rsp+8h] [rbp-120h]
  __int128 *v91; // [rsp+8h] [rbp-120h]
  __int64 v92; // [rsp+8h] [rbp-120h]
  __int64 v93; // [rsp+8h] [rbp-120h]
  __int64 v94; // [rsp+8h] [rbp-120h]
  __int64 v95; // [rsp+8h] [rbp-120h]
  __int64 v96; // [rsp+8h] [rbp-120h]
  __int64 v97; // [rsp+8h] [rbp-120h]
  __int64 v98; // [rsp+8h] [rbp-120h]
  __int64 v99; // [rsp+8h] [rbp-120h]
  __int64 v100; // [rsp+8h] [rbp-120h]
  __int64 v101; // [rsp+8h] [rbp-120h]
  __int64 v102; // [rsp+8h] [rbp-120h]
  __int64 v103; // [rsp+8h] [rbp-120h]
  __int64 v104; // [rsp+10h] [rbp-118h]
  __int64 tinfo_property; // [rsp+10h] [rbp-118h]
  __int64 v106; // [rsp+10h] [rbp-118h]
  __int64 v107; // [rsp+10h] [rbp-118h]
  __int64 v108; // [rsp+10h] [rbp-118h]
  __int64 v109; // [rsp+10h] [rbp-118h]
  __int64 v110; // [rsp+10h] [rbp-118h]
  __int64 v111; // [rsp+10h] [rbp-118h]
  __int64 v112; // [rsp+10h] [rbp-118h]
  __int64 v113; // [rsp+10h] [rbp-118h]
  __int64 v114; // [rsp+10h] [rbp-118h]
  __int64 v115; // [rsp+10h] [rbp-118h]
  __int64 v116; // [rsp+10h] [rbp-118h]
  __int64 v117; // [rsp+10h] [rbp-118h]
  __int64 v118; // [rsp+10h] [rbp-118h]
  __int64 v119; // [rsp+10h] [rbp-118h]
  __int64 v120; // [rsp+18h] [rbp-110h]
  __int64 v121; // [rsp+18h] [rbp-110h]
  __int64 v122; // [rsp+18h] [rbp-110h]
  __int64 v123; // [rsp+18h] [rbp-110h]
  __int64 v124; // [rsp+18h] [rbp-110h]
  __int64 v125; // [rsp+18h] [rbp-110h]
  __int64 v126; // [rsp+18h] [rbp-110h]
  __int64 v127; // [rsp+18h] [rbp-110h]
  __int64 v128; // [rsp+18h] [rbp-110h]
  __int64 v129; // [rsp+18h] [rbp-110h]
  __int64 v130; // [rsp+18h] [rbp-110h]
  __int64 v131; // [rsp+18h] [rbp-110h]
  __int64 v132; // [rsp+18h] [rbp-110h]
  __int64 v133; // [rsp+18h] [rbp-110h]
  __int64 v134; // [rsp+18h] [rbp-110h]
  __int64 v135; // [rsp+20h] [rbp-108h] BYREF
  int v136; // [rsp+28h] [rbp-100h]
  __int64 v137; // [rsp+30h] [rbp-F8h] BYREF
  int v138; // [rsp+38h] [rbp-F0h]
  __int64 v139; // [rsp+40h] [rbp-E8h] BYREF
  int v140; // [rsp+48h] [rbp-E0h]
  __int128 v141; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v142; // [rsp+60h] [rbp-C8h]
  __int128 v143; // [rsp+68h] [rbp-C0h]
  __int64 v144; // [rsp+78h] [rbp-B0h]
  __int128 v145; // [rsp+80h] [rbp-A8h]
  __int128 v146; // [rsp+90h] [rbp-98h]
  __int64 v147; // [rsp+C0h] [rbp-68h]
  int v148; // [rsp+C8h] [rbp-60h]
  __int64 v149; // [rsp+D0h] [rbp-58h]
  char v150; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v151; // [rsp+E8h] [rbp-40h]

  v151 = __readfsqword(0x28u);
  ((void (__fastcall *)(__int64, __int64, __int64, const char *, _QWORD, _QWORD))callui)(131, a1, a2, "EditCopy", 0, 0);
  callui(131, a1, a2, 0, 0, 0, v71, v87, v104, v120);
  v72 = *(_QWORD *)(*(_QWORD *)(a3 + 32) + 216LL);
  sub_382260((_QWORD *)a3);
  v9 = sub_384FB0(a3);
  if ( v9 )
  {
    v10 = (unsigned __int64 *)v9;
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
            callui(131, a1, a2, "hx:Dec", 0, 0, v72, v88, tinfo_property, v121);
          v11 = *v10;
          goto LABEL_9;
        }
LABEL_4:
        if ( *v10 > 9 )
          callui(131, a1, a2, "hx:Hex", 0, 0, v72, v88, tinfo_property, v121);
        goto LABEL_6;
      }
      if ( (unsigned __int8)is_numop() && (unsigned int)get_radix() == 8 )
      {
        if ( *v10 <= 7 )
        {
LABEL_10:
          if ( !(unsigned __int8)is_char() )
            callui(131, a1, a2, "hx:Char", 0, 0, v72, v88, tinfo_property, v121);
          callui(131, a1, a2, "hx:Enum", 0, 0, v72, v88, tinfo_property, v121);
          if ( *v10 )
            callui(131, a1, a2, "hx:InvertSign", 0, 0, v73, v89, v106, v122);
          callui(131, a1, a2, "hx:BitwiseNegate", 0, 0, v73, v89, v106, v122);
          v12 = "hx:StrucOffset";
          goto LABEL_15;
        }
      }
      else
      {
        v11 = *v10;
        if ( *v10 <= 9 )
        {
LABEL_9:
          if ( v11 > 7
            && (!(unsigned __int8)is_numop()
             || (unsigned int)get_radix() != 8
             || (unsigned __int8)is_enum()
             || (unsigned __int8)is_char()
             || (unsigned __int8)is_stroff()) )
          {
            callui(131, a1, a2, "hx:Oct", 0, 0, v72, v88, tinfo_property, v121);
          }
          goto LABEL_10;
        }
      }
    }
    if ( !(unsigned __int8)is_numop() )
      goto LABEL_4;
    goto LABEL_135;
  }
  if ( *(int *)(*(_QWORD *)(v72 + 880) + 368LL) > 3 )
    goto LABEL_16;
  v12 = "hx:DelContainingRecord";
LABEL_15:
  callui(131, a1, a2, v12, 0, 0, v72, v88, tinfo_property, v121);
LABEL_16:
  v13 = (_QWORD *)sub_3863C0(*(_QWORD *)(a3 + 32), a3 + 80, a4);
  v14 = (__int64)v13;
  if ( !v13 || *v13 == -1 )
    goto LABEL_23;
  if ( *(_DWORD *)(v13[3] + 8LL) != 68 )
  {
    if ( !sub_3BE030(*(_QWORD *)(a3 + 24) + 1312LL) )
    {
      callui(131, a1, a2, "hx:SetCallType", 0, 0, v72, v88, tinfo_property, v121);
      if ( (unsigned int)sub_383EC0(a3, *(_QWORD **)(v14 + 32)) == -1 )
      {
        v60 = *(_QWORD *)(v14 + 24);
        if ( v60 == *(_QWORD *)(a3 + 88) )
        {
          *(_QWORD *)&v141 = get_tinfo_property();
          if ( (get_tinfo_property() & 0x3F) == 1 )
          {
            v88 = &v141;
            clear_tinfo_t();
          }
          else
          {
            clear_tinfo_t();
            sub_3B3E40(a1, a2, 1, v68, v69, v70, v72, (__int64)&v141, tinfo_property, v121);
          }
          v60 = *(_QWORD *)(v14 + 24);
LABEL_131:
          if ( *(_DWORD *)(v60 + 8) == 48 )
          {
            *(_QWORD *)&v141 = 0;
            *(_QWORD *)&v141 = get_tinfo_property();
            tinfo_property = get_tinfo_property();
            clear_tinfo_t();
            if ( (tinfo_property & 0xF) == 0xC )
              callui(131, a1, a2, "hx:ForceCallType", 0, 0, v72, v88, tinfo_property, v121);
          }
          goto LABEL_20;
        }
LABEL_130:
        v88 = &v141;
        goto LABEL_131;
      }
      sub_3B3E40(a1, a2, 0, v61, v62, v63, v72, v103, tinfo_property, v121);
    }
    v60 = *(_QWORD *)(v14 + 24);
    goto LABEL_130;
  }
  v88 = &v141;
LABEL_20:
  sub_23D840(v88, v14);
  v15 = get_tinfo_property();
  LOBYTE(tinfo_property) = (v15 & 0xFFFFFFF0) == 208 || (v15 & 0xFFFFFFF0) == 64;
  clear_tinfo_t();
  if ( (_BYTE)tinfo_property )
  {
    callui(131, a1, a2, "hx:AddVarArg", 0, 0, v72, v88, tinfo_property, v121);
    if ( (unsigned __int64)(int)get_tinfo_property() < *(_QWORD *)(*(_QWORD *)(v14 + 32) + 8LL) )
      callui(131, a1, a2, "hx:DelVarArg", 0, 0, v72, v88, tinfo_property, v121);
  }
LABEL_23:
  v16 = sub_385E20(a3 + 80);
  v17 = v16;
  if ( v16 )
  {
    if ( (*(_BYTE *)(v16 + 26) & 2) == 0 )
      callui(131, a1, a2, "hx:Rename", 0, 0, v72, v88, tinfo_property, v121);
    callui(131, a1, a2, "hx:SetType", 0, 0, v72, v88, tinfo_property, v121);
    if ( (get_tinfo_property() & 0xF) == 0xA )
      callui(131, a1, a2, "hx:ResetPtrType", 0, 0, v74, v90, v107, v123);
    if ( *(_DWORD *)(v17 + 88) == *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 128) + 112LL) + 80LL) )
      callui(131, a1, a2, "hx:Cvt2StrucPtr", 0, 0, v74, v90, v107, v123);
    if ( (unsigned __int8)sub_250140(*(_QWORD *)(a3 + 32), a3 + 80, 0) )
      callui(131, a1, a2, "hx:NewStruc", 0, 0, v74, v90, v107, v123);
    if ( (unsigned __int8)sub_20FBA0(*(_QWORD *)(a3 + 24), v17, nullptr, nullptr) )
      callui(131, a1, a2, "hx:Map2OtherVar", 0, 0, v74, v90, v107, v123);
    v20 = *(_DWORD *)(v17 + 24);
    if ( (v20 & 0x2000) != 0 )
    {
      callui(131, a1, a2, "hx:UnmapVar", 0, 0, v74, v90, v107, v123);
      v20 = *(_DWORD *)(v17 + 24);
    }
    if ( (v20 & 0x8000000) == 0 )
      callui(131, a1, a2, "hx:NopropVar", 0, 0, v74, v90, v107, v123);
    if ( *(_DWORD *)(a3 + 80) == 2 && (*(_BYTE *)(sub_385E20(a3 + 80) + 25) & 1) != 0 )
      sub_3B3E40(a1, a2, 0, v64, v18, v19, v74, v90, v107, v123);
    sub_3B5060(a1, a2, a3, v17, a4, a5, a6, v18, v19, v74, v90, v107, v123);
    v21 = *(_DWORD *)(a3 + 80);
    v91 = &v141;
  }
  else
  {
    v21 = *(_DWORD *)(a3 + 80);
    v91 = &v141;
    if ( v21 == 3 )
    {
      v59 = *(_QWORD *)(a3 + 24);
      v139 = 0;
      tinfo_property = (__int64)&v139;
      if ( (unsigned __int8)sub_3797A0(v72, *(_QWORD *)(v59 + 40), (__int64)&v139, 2) )
      {
        *(_QWORD *)&v141 = 0;
        *(_QWORD *)&v141 = get_tinfo_property();
        if ( (get_tinfo_property() & 0x3F) == 1 )
        {
          v91 = &v141;
          clear_tinfo_t();
        }
        else
        {
          clear_tinfo_t();
          sub_3B3E40(a1, a2, 1, v65, v66, v67, v72, (__int64)&v141, (__int64)&v139, v121);
        }
      }
      else
      {
        v91 = &v141;
      }
      clear_tinfo_t();
      v21 = *(_DWORD *)(a3 + 80);
    }
  }
  if ( v21 == 1 )
  {
    v54 = *(_QWORD *)(a3 + 88);
    if ( *(int *)(v54 + 8) <= 69 )
    {
      if ( (unsigned __int8)sub_20A4D0(*(_QWORD *)(a3 + 32), v54) )
      {
        v58 = "Quick rename variable";
      }
      else
      {
        v57 = sub_20A520(*(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 88));
        v58 = "Quick rename formal function argument";
        if ( !v57 )
          goto LABEL_41;
      }
      callui(140, "hx:QuickRename", 1, v58, v55, v56, v72, v91, tinfo_property, v121);
      callui(131, a1, a2, "hx:QuickRename", 0, 0, v86, v102, v119, v134);
    }
  }
LABEL_41:
  v142 = 0;
  v144 = 0;
  v147 = 1;
  v148 = -1;
  v149 = 0;
  v150 = 0;
  v141 = 0;
  v143 = 0;
  v145 = 0;
  v146 = 0;
  if ( (unsigned int)sub_385AD0(a3 + 80, v91, nullptr, nullptr) != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v72, v91, tinfo_property, v121);
    callui(131, a1, a2, "hx:SetType", 0, 0, v75, v92, v108, v124);
    if ( (unsigned __int8)sub_250140(*(_QWORD *)(a3 + 32), a3 + 80, 0) )
      callui(131, a1, a2, "hx:NewStruc", 0, 0, v76, v93, v109, v125);
    if ( (unsigned __int8)sub_3863B0(a3 + 80, *(_QWORD *)(a3 + 32)) )
      callui(131, a1, a2, "hx:SelUnionField", 0, 0, v76, v93, v109, v125);
    v22 = *(_QWORD *)(v76 + 112);
    if ( *((_QWORD *)&v141 + 1) == 8 * *(_DWORD *)(v22 + 84) )
    {
      v109 = 8 * *(_DWORD *)(v22 + 84);
      v139 = 0;
      v139 = get_tinfo_property();
      if ( v109 == get_tinfo_size() )
      {
        clear_tinfo_t();
        callui(131, a1, a2, "hx:Cvt2StrucPtr", 0, 0, v76, v93, v109, v125);
      }
      else
      {
        clear_tinfo_t();
      }
    }
    callui(131, a1, a2, "hx:JmpStrucDef", 0, 0, v76, v93, v109, v125);
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v77, v94, v110, v126);
  }
  if ( (unsigned __int8)sub_3A5CA0(a3, 0, nullptr) )
    callui(131, a1, a2, "hx:JumpGlobalXref", 0, 0, v72, v91, tinfo_property, v121);
  v111 = sub_385E60(a3 + 80);
  if ( v111 != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v72, v91, v111, v121);
    callui(131, a1, a2, "hx:SetType", 0, 0, v78, v95, v112, v127);
    if ( (unsigned __int8)sub_250140(*(_QWORD *)(a3 + 32), a3 + 80, 0) )
      callui(131, a1, a2, "hx:NewStruc", 0, 0, v72, v91, v111, v121);
  }
  if ( (int)sub_3B6CE0(v72, a3 + 80) > 0 )
    callui(131, a1, a2, "hx:JmpLocalType", 0, 0, v72, v91, v111, v121);
  v23 = *(__int64 **)(a3 + 32);
  if ( *(_DWORD *)(a3 + 80) == 3 )
  {
    v24 = *v23;
  }
  else
  {
    v44 = sub_3863C0((__int64)v23, a3 + 80, 0.0);
    if ( !v44 )
      goto LABEL_59;
    v45 = *(_QWORD *)(v44 + 24);
    if ( *(_DWORD *)(v45 + 8) != 64 )
      goto LABEL_59;
    v24 = *(_QWORD *)(v45 + 24);
    if ( v24 == -1 )
      goto LABEL_59;
  }
  if ( sub_3A6100(nullptr, v24, 1) )
    callui(131, a1, a2, "hx:CallDecomp", 0, 0, v72, v91, v111, v121);
LABEL_59:
  if ( *(_DWORD *)(a3 + 80) == 1 )
  {
    v25 = *(_QWORD *)(a3 + 88);
    if ( *(int *)(v25 + 8) <= 69 )
    {
      v26 = sub_24DC40(v25);
      if ( *(_DWORD *)(v26 + 8) == 64 )
      {
        if ( sub_3A62D0(nullptr, *(_QWORD *)(v26 + 24), 1) )
          callui(131, a1, a2, "hx:XrefDecomp", 0, 0, v72, v91, v111, v121);
      }
    }
  }
  if ( v111 != -1 || v17 )
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v72, v91, v111, v121);
  if ( (unsigned int)sub_385EA0(a3 + 80, 3) != -1 )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v72, v91, v111, v121);
    callui(131, a1, a2, "hx:JmpXref", 0, 0, v79, v96, v113, v128);
  }
  sub_384830(a3);
  if ( sub_3BE030(*(_QWORD *)(a3 + 24) + 1312LL) )
  {
    callui(131, a1, a2, "hx:Rename", 0, 0, v72, v91, v111, v121);
    callui(131, a1, a2, "hx:SetType", 0, 0, v80, v97, v114, v129);
  }
  callui(131, a1, a2, "hx:JumpNextParen", 0, 0, v72, v91, v111, v121);
  v27 = sub_383D90(a3, *(int *)(a3 + 44), 31);
  v28 = v27;
  if ( (v27 & 0x10) != 0 )
    goto LABEL_102;
  if ( (v27 & 1) == 0 )
  {
    if ( (v27 & 8) == 0 )
      goto LABEL_72;
LABEL_102:
    callui(131, a1, a2, "hx:EditCmt", 0, 0, v81, v98, v115, v130);
    callui(131, a1, a2, "hx:StockComments", 0, 0, v85, v101, v118, v133);
    v29 = 1;
    goto LABEL_73;
  }
  callui(131, a1, a2, "hx:EditCmt", 0, 0, v81, v98, v115, v130);
LABEL_72:
  v29 = 0;
LABEL_73:
  LOBYTE(v115) = v29;
  if ( (v28 & 6) != 0 )
  {
    callui(131, a1, a2, "hx:EditBlockCmt", 0, 0, v81, v98, v115, v130);
    if ( !(_BYTE)v115 )
      callui(131, a1, a2, "hx:StockComments", 0, 0, v81, v98, v115, v130);
  }
  if ( (unsigned __int8)sub_24E5E0(*(_QWORD *)(a3 + 32)) )
    callui(131, a1, a2, "hx:DelOrphanCmts", 0, 0, v81, v98, v115, v130);
  v32 = *(_DWORD *)(a3 + 80) == 3;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  if ( v32 || (unsigned __int8)callui(8, *(_QWORD *)(a3 + 8), &v135, &v137, v30, v31, v81, v98, v115, v130) )
    callui(131, a1, a2, "hx:GenHtml", 0, 0, v81, v98, v115, v130);
  callui(131, a1, a2, "MoveFunctionToFolder", 0, 0, v81, v98, v115, v130);
  if ( sub_384C30(a3) )
  {
    v33 = *(_QWORD *)(a3 + 88);
    v34 = *(_QWORD *)(a3 + 32);
    if ( v33 )
    {
      v35 = *(_QWORD *)v33;
      v36 = *(_DWORD *)(v33 + 8);
    }
    else
    {
      v35 = -1;
      v36 = 0;
    }
    v139 = v35;
    v140 = v36;
    v37 = sub_250B20(v34, (unsigned __int64 *)&v139);
    v38 = "hx:ExpandItem";
    if ( (v37 & 1) == 0 )
      v38 = "hx:CollapseItem";
    callui(131, a1, a2, v38, 0, 0, v82, v99, v116, v131);
  }
  if ( sub_384C60(a3) )
  {
    v39 = "hx:ExpandDecls";
    if ( (*(_BYTE *)(*(_QWORD *)(a3 + 32) + 108LL) & 4) == 0 )
      v39 = "hx:CollapseDecls";
    callui(131, a1, a2, v39, 0, 0, v82, v99, v116, v131);
  }
  v40 = *(_QWORD *)(a3 + 24);
  if ( *(_DWORD *)(a3 + 80) != 1 )
  {
    v41 = sub_1C8060(v40);
    if ( !v41 || (v42 = "hx:UnmarkDecompiled", *((_DWORD *)v41 + 16) != *(_DWORD *)(*(_QWORD *)(a3 + 128) + 588LL)) )
      v42 = "hx:MarkDecompiled";
    callui(131, a1, a2, v42, 0, 0, v82, v99, v116, v131);
    callui(131, a1, a2, "hx:Copy2Asm", 0, 0, v83, v100, v117, v132);
    goto LABEL_96;
  }
  v46 = **(_QWORD **)(a3 + 88);
  v140 = 0;
  v139 = v46;
  v47 = sub_130FB0(v40, (__int64)&v139);
  v50 = (_DWORD *)sub_384C90(a3);
  v51 = v47 & 7;
  if ( !v50 )
  {
    if ( !v51 )
      goto LABEL_118;
    goto LABEL_112;
  }
  if ( *(_DWORD *)(*(_QWORD *)(a3 + 88) + 8LL) != 51 || (unsigned int)(*v50 - 1) > 1 )
  {
    if ( !v51 )
      goto LABEL_140;
LABEL_112:
    HIBYTE(v131) = 0;
    v52 = "hx:UnsplitExpr";
    goto LABEL_113;
  }
  if ( !v51 )
    goto LABEL_116;
  HIBYTE(v131) = 1;
  v52 = "hx:UnsplitMemAccess";
LABEL_113:
  callui(131, a1, a2, v52, 0, 0, v82, v99, v50, v131);
  if ( v51 != 1 && v116 )
  {
    if ( HIBYTE(v131) )
    {
LABEL_116:
      v53 = "hx:SplitMemAccess";
LABEL_117:
      callui(131, a1, a2, v53, 0, 0, v82, v99, v116, v131);
      goto LABEL_118;
    }
LABEL_140:
    v53 = "hx:SplitExpr";
    goto LABEL_117;
  }
LABEL_118:
  if ( !v17 )
    sub_3B5060(a1, a2, a3, 0, 0.0, a5, a6, v48, v49, v82, v99, v116, v131);
LABEL_96:
  callui(131, a1, a2, "hx:ToggleShowCasts", 0, 0, v82, v99, v116, v131);
  sub_3368C0(v84, 0x6Eu, a1, a2, a3);
  clear_tinfo_t();
  if ( v144 )
  {
    *(_QWORD *)&v145 = 0;
    qfree();
  }
  if ( v142 )
  {
    *(_QWORD *)&v143 = 0;
    qfree();
  }
  return v151 - __readfsqword(0x28u);
}

