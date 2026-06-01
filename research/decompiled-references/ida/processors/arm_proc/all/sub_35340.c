unsigned __int64 __fastcall sub_35340(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rdx
  int v4; // eax
  int v5; // ecx
  bool v6; // al
  int v7; // r13d
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int16 v10; // ax
  __int64 v11; // rbp
  _DWORD *v12; // rcx
  _QWORD *v13; // r14
  __int64 v14; // r15
  _DWORD *v15; // r15
  __int64 v16; // rdi
  int v18; // eax
  __int64 v19; // rbp
  _BYTE *v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r13
  __int64 v23; // rdi
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r13
  char v28; // al
  __int16 v29; // ax
  int v30; // eax
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rdi
  __int64 v38; // rdi
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  unsigned __int16 v41; // ax
  __int64 v42; // rdi
  char v43; // al
  __int64 v44; // rdi
  const void *v45; // rbp
  __int64 v46; // rax
  __int64 v47; // rbp
  int v48; // r10d
  unsigned __int64 auto_state; // rax
  __int64 v50; // rdx
  char v51; // al
  unsigned int v52; // edx
  __int64 v53; // rcx
  __int64 v54; // rbp
  char v55; // dl
  __int16 v56; // ax
  int v57; // eax
  __int16 v58; // r15
  int v59; // eax
  __int16 v60; // r15
  char v61; // dl
  __int16 v62; // ax
  char v63; // dl
  __int16 v64; // ax
  __int64 v65; // rax
  __int64 v66; // r8
  _BYTE *v67; // rax
  int v68; // eax
  __int64 v69; // rcx
  _QWORD *v70; // rdx
  unsigned __int8 v71; // al
  __int64 v72; // rdi
  char v73; // al
  bool v74; // cl
  __int16 v75; // ax
  unsigned __int16 v76; // ax
  unsigned int v77; // edx
  __int64 v78; // r14
  _DWORD *v79; // [rsp+8h] [rbp-220h]
  __int64 *func; // [rsp+10h] [rbp-218h]
  __int64 flags; // [rsp+18h] [rbp-210h]
  __int64 v82; // [rsp+28h] [rbp-200h] BYREF
  __int64 v83; // [rsp+30h] [rbp-1F8h]
  __int128 v84; // [rsp+38h] [rbp-1F0h]
  __int64 v85; // [rsp+50h] [rbp-1D8h] BYREF
  __int128 v86; // [rsp+58h] [rbp-1D0h]
  int v87; // [rsp+68h] [rbp-1C0h]
  _BYTE v88[368]; // [rsp+70h] [rbp-1B8h] BYREF
  char v89; // [rsp+1E0h] [rbp-48h]
  unsigned __int64 v90; // [rsp+1E8h] [rbp-40h]

  v1 = *a1;
  v90 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(v1 + 16);
  v4 = *((unsigned __int16 *)a1 + 16);
  v5 = *(_DWORD *)(v3 + 104);
  if ( v5 <= v4 && *(_DWORD *)(v3 + 108) > v4 )
  {
    v7 = *(_DWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v4 - v5) + 8);
    v6 = (v7 & 1) == 0;
  }
  else
  {
    v6 = 1;
    v7 = 0;
  }
  v8 = a1[3];
  *((_BYTE *)a1 + 368) = v6;
  v9 = 0;
  v82 = -1;
  flags = get_flags_ex();
  v10 = *((_WORD *)a1 + 16);
  if ( v10 <= 0x50u )
  {
    if ( v10 )
    {
      switch ( v10 )
      {
        case 1u:
          goto LABEL_10;
        case 4u:
          v46 = a1[8] + 16LL * a1[1];
          v47 = *(_QWORD *)(*(_QWORD *)(*a1 + 32LL) + 16LL);
          if ( v46 != v47 )
          {
            v47 &= v46;
            if ( v46 == -1 )
              v47 = -1;
          }
          v48 = *(_DWORD *)(*a1 + 212LL);
          v82 = v47;
          if ( v48 )
          {
            v9 = 20;
            if ( (unsigned __int64)(get_sreg() - 1) > 0xFFFFFFFFFFFFFFFDLL )
              goto LABEL_12;
          }
          if ( !(unsigned __int8)sub_22650(v47) )
            goto LABEL_12;
          goto LABEL_13;
        case 0xCu:
          v54 = sub_267A0(*a1, v8);
          if ( v54 != -1 )
          {
            create_data();
            op_offset();
            sub_25A70(*a1, v8, v54, 1);
            remember_problem();
            add_cref();
          }
          if ( *((_BYTE *)a1 + 368) && (a1[5] & 0xF) == 0xE && *((_BYTE *)a1 + 49) == 1 && *((_WORD *)a1 + 27) == 15 )
            goto LABEL_140;
          goto LABEL_13;
        case 0xEu:
          sub_73590(a1, 0);
          if ( *((_BYTE *)a1 + 368)
            && (a1[5] & 0xF) == 0xE
            && *((_BYTE *)a1 + 49) == 1
            && *((_WORD *)a1 + 27) == 15
            && !(unsigned __int8)sub_2B170(*a1, (__int64)(a1 + 1)) )
          {
            *((_BYTE *)a1 + 368) = 0;
          }
          auto_state = get_auto_state();
          if ( (unsigned int)auto_state <= 0x19 )
          {
            v50 = 34603009;
            if ( _bittest64(&v50, auto_state) )
              goto LABEL_13;
          }
          v51 = *((_BYTE *)a1 + 89);
          if ( v51 != 1 )
            goto LABEL_130;
          v71 = *((_BYTE *)a1 + 129);
          if ( v71 > 1u )
            goto LABEL_212;
          if ( (unsigned __int8)netnode_charval() != 3 )
          {
            v76 = *((_WORD *)a1 + 47);
            if ( *((_BYTE *)a1 + 129) )
            {
              v77 = v76;
              v76 = *((_WORD *)a1 + 67);
            }
            else
            {
              v77 = *((unsigned __int16 *)a1 + 27);
            }
            if ( (unsigned __int8)sub_2E450(*a1, (__int64)(a1 + 1), v77, v76) )
              goto LABEL_13;
          }
          v51 = *((_BYTE *)a1 + 89);
          if ( v51 == 1 )
          {
            v71 = *((_BYTE *)a1 + 129);
LABEL_212:
            if ( v71 == 5 )
            {
              v52 = *((unsigned __int16 *)a1 + 47);
              v53 = (__int64)(a1 + 16);
              goto LABEL_133;
            }
          }
          else
          {
LABEL_130:
            if ( v51 == 5 && !*((_BYTE *)a1 + 129) )
            {
              v52 = *((unsigned __int16 *)a1 + 27);
              v53 = (__int64)(a1 + 11);
LABEL_133:
              sub_2E6C0(*a1, (__int64)(a1 + 1), v52, v53);
              goto LABEL_13;
            }
          }
          break;
        case 0x17u:
        case 0x19u:
          goto LABEL_96;
        case 0x1Eu:
        case 0x2Cu:
          sub_28DF0(*a1, (__int64)(a1 + 1));
          goto LABEL_13;
        case 0x1Fu:
          v45 = a1 + 1;
          if ( (unsigned __int8)sub_2B170(*a1, (__int64)(a1 + 1)) )
          {
            *(_QWORD *)v88 = *a1;
            qmemcpy(&v88[8], v45, 0x168u);
            v89 = 1;
            if ( !(unsigned int)sub_269F0((__int64)v88, 3, nullptr, nullptr, nullptr) )
LABEL_181:
              sub_2D280(a1, (__int64)(a1 + 11), 1);
            goto LABEL_13;
          }
          if ( (unsigned __int8)sub_73590(a1, a1 + 1) )
          {
            if ( (a1[5] & 0xF) != 0xE )
              *((_BYTE *)a1 + 368) = 1;
            netnode_supdel();
            goto LABEL_13;
          }
          *(_QWORD *)v88 = *a1;
          qmemcpy(&v88[8], v45, 0x168u);
          v89 = 1;
          if ( !(unsigned int)sub_269F0((__int64)v88, 3, nullptr, nullptr, nullptr) )
LABEL_100:
            sub_2D280(a1, (__int64)(a1 + 11), 0);
          if ( (a1[5] & 0xF) == 0xE )
            goto LABEL_102;
          goto LABEL_13;
        case 0x21u:
          if ( (a1[5] & 0xF) == 0xE && *((char *)a1 + 113) < 0 )
            *((_BYTE *)a1 + 368) = 0;
          goto LABEL_104;
        case 0x22u:
LABEL_104:
          v39 = get_auto_state();
          if ( (unsigned int)v39 <= 0x19 )
          {
            v40 = 34603009;
            if ( _bittest64(&v40, v39) )
              goto LABEL_13;
          }
          v41 = *((_WORD *)a1 + 27);
          if ( v41 == 13 )
            goto LABEL_13;
          v42 = *a1;
          v85 = 0;
          LOBYTE(v87) = 0;
          v86 = 0;
          v43 = sub_81F70(v42, &v85, v8, v41, 0, 0);
          v44 = v85;
          if ( !v43 || (unsigned __int8)(v87 - 10) > 1u )
            goto LABEL_108;
          v69 = *(_QWORD *)v85;
          if ( (_QWORD)v86 == 1 )
            goto LABEL_207;
          v70 = (_QWORD *)(v85 + 24);
          if ( 24LL * (_QWORD)v86 == 24 )
            goto LABEL_207;
          while ( *v70 == v69 )
          {
            v70 += 3;
            if ( v70 == (_QWORD *)(v85 + 24 * v86) )
            {
LABEL_207:
              if ( v69 != -1 )
              {
                if ( (unsigned __int8)is_mapped() )
                {
                  sub_2A700(*a1, (__int64)&v85);
                  insn_add_dref();
                }
                v44 = v85;
              }
              break;
            }
          }
LABEL_108:
          if ( v44 )
            goto LABEL_93;
          goto LABEL_13;
        case 0x29u:
          goto LABEL_75;
        case 0x2Au:
          if ( (a1[5] & 0xF) != 0xE || *((char *)a1 + 73) >= 0 )
            goto LABEL_13;
LABEL_140:
          if ( !(unsigned __int8)sub_2B170(*a1, (__int64)(a1 + 1)) )
            goto LABEL_102;
          goto LABEL_13;
        case 0x2Du:
          goto LABEL_145;
        case 0x2Eu:
          goto LABEL_12;
        case 0x2Fu:
          goto LABEL_142;
        case 0x50u:
          if ( (flags & 0xF000000) == 0
            && (*(_BYTE *)(*a1 + 185LL) & 0xF) != 0
            && *((_BYTE *)a1 + 89) == 5
            && *((_WORD *)a1 + 17) == 8
            && !(unsigned __int8)get_fixup() )
          {
            *(_QWORD *)&v88[24] = 0;
            v67 = &v88[40];
            *(_QWORD *)&v88[32] = 0;
            memset(v88, 255, 24);
            do
            {
              *(_WORD *)v67 = 0;
              v67 += 40;
              *((_WORD *)v67 - 19) = 0;
              *((_WORD *)v67 - 18) = 0;
              *((_DWORD *)v67 - 2) = 0;
              *((_WORD *)v67 - 17) = 0;
              *((_OWORD *)v67 - 2) = 0;
              *((_QWORD *)v67 - 2) = 0;
            }
            while ( v67 != &v88[360] );
            if ( (unsigned int)decode_insn()
              && *(_WORD *)&v88[24] == 269
              && (unsigned __int8)sub_341F0(*a1, v8, a1[12], 0) )
            {
              v68 = get_auto_state();
              if ( v68 == 45 )
              {
                get_default_reftype();
                op_offset();
              }
              else if ( v68 == 40 )
              {
                auto_mark_range();
              }
            }
          }
LABEL_96:
          if ( *((_BYTE *)a1 + 49) != 1 || *((_WORD *)a1 + 27) != 15 )
            goto LABEL_13;
          if ( (unsigned __int8)sub_2B170(*a1, (__int64)(a1 + 1)) )
            goto LABEL_181;
          if ( !(unsigned __int8)sub_73590(a1, a1 + 1) )
            goto LABEL_100;
          goto LABEL_13;
        default:
          goto LABEL_13;
      }
    }
    goto LABEL_13;
  }
  if ( v10 == 288 )
    goto LABEL_10;
  if ( v10 <= 0x120u )
  {
    if ( v10 != 269 )
    {
      if ( v10 > 0x10Du )
      {
        if ( (unsigned __int16)(v10 - 274) > 1u )
          goto LABEL_13;
      }
      else if ( v10 != 166 && v10 != 184 )
      {
        goto LABEL_13;
      }
      goto LABEL_10;
    }
    if ( (flags & 0xF000000) != 0 )
      goto LABEL_13;
    v34 = get_auto_state();
    if ( (unsigned int)v34 <= 0x19 )
    {
      v35 = 34603009;
      if ( _bittest64(&v35, v34) )
        goto LABEL_13;
    }
    if ( (*(_BYTE *)(*a1 + 185LL) & 0xF) == 0 || (unsigned __int8)get_fixup() )
      goto LABEL_13;
    v36 = *((unsigned __int16 *)a1 + 27);
    v37 = *a1;
    v85 = 0;
    LOBYTE(v87) = 0;
    v86 = 0;
    if ( (unsigned __int8)sub_81F70(v37, &v85, v8, v36, 0, 0) )
    {
      v38 = v85;
      if ( (_QWORD)v86 != 1 || *(_WORD *)(v85 + 16) != 23 )
      {
LABEL_92:
        if ( v38 )
        {
LABEL_93:
          *(_QWORD *)&v86 = 0;
          qfree();
        }
        goto LABEL_13;
      }
      sub_2A240(*a1, a1 + 1, *(_QWORD *)(v85 + 8));
    }
    v38 = v85;
    goto LABEL_92;
  }
  if ( v10 == 471 )
  {
LABEL_142:
    v55 = v10 == 47 || v10 == 471;
    goto LABEL_143;
  }
  if ( v10 <= 0x1D7u )
  {
    if ( v10 != 429 )
    {
      if ( v10 != 470 )
        goto LABEL_13;
LABEL_75:
      if ( (unsigned __int8)sub_73590(a1, 0) )
        goto LABEL_13;
      *(_QWORD *)v88 = *a1;
      qmemcpy(&v88[8], a1 + 1, 0x168u);
      v89 = 1;
      v31 = sub_269F0((__int64)v88, 3, (unsigned __int64 *)&v82, nullptr, nullptr);
      v32 = *a1;
      v33 = (__int64)(a1 + 1);
      if ( v31 )
      {
        if ( (unsigned __int8)sub_2EB40(v32, v33) )
          goto LABEL_13;
        goto LABEL_102;
      }
      sub_28DF0(v32, v33);
      v72 = *a1;
      if ( *((_BYTE *)a1 + 49) == 1 && *((_WORD *)a1 + 27) == 15 )
      {
        if ( *(_DWORD *)(v72 + 212) )
        {
          if ( (unsigned __int64)(get_sreg() - 1) > 0xFFFFFFFFFFFFFFFDLL )
          {
            v72 = *a1;
            v78 = 8;
            goto LABEL_239;
          }
          v72 = *a1;
        }
        v78 = 4;
LABEL_239:
        v82 = v8 + v78;
        sub_25A70(v72, v8, v8 + v78, 0);
        *((_BYTE *)a1 + 368) = 0;
        insn_add_cref();
        goto LABEL_13;
      }
      v73 = sub_2EB40(v72, (__int64)(a1 + 1));
      v74 = *((_WORD *)a1 + 16) == 471 || *((_WORD *)a1 + 16) == 47;
      if ( (a1[5] & 0xF) == 0xE )
      {
        v55 = 1;
        if ( !v73 )
        {
          *((_BYTE *)a1 + 368) = 0;
          v55 = v74;
        }
      }
      else
      {
        v55 = v74 | v73;
      }
LABEL_143:
      sub_2D280(a1, (__int64)(a1 + 6), v55);
      goto LABEL_13;
    }
LABEL_10:
    if ( (a1[5] & 0xF) == 0xE )
      *((_BYTE *)a1 + 368) = 0;
LABEL_12:
    sub_73590(a1, v9);
    goto LABEL_13;
  }
  if ( v10 != 542 )
    goto LABEL_13;
LABEL_145:
  if ( (unsigned int)getinf() == 11 || (unsigned int)getinf() == 10 )
  {
    v56 = *((_WORD *)a1 + 16);
    if ( v56 == 45 )
    {
      if ( a1[7] != 57083 )
        goto LABEL_13;
    }
    else if ( v56 != 542 || (unsigned __int64)(a1[7] - 61440LL) > 4 )
    {
      goto LABEL_13;
    }
LABEL_102:
    *((_BYTE *)a1 + 368) = 0;
  }
LABEL_13:
  func = (__int64 *)get_func();
  if ( (unsigned __int8)getinf_flag()
    && (unsigned int)get_auto_state() == 40
    && func
    && !(unsigned __int8)recalc_spd_for_basic_block()
    && !(unsigned __int8)sub_32E40(*a1, (__int64)func, (__int64)(a1 + 1)) )
  {
    sub_2FEC0(*a1, func, (__int64)(a1 + 1));
  }
  v11 = (__int64)(a1 + 6);
  v12 = &unk_8B1A0;
  v13 = a1 + 31;
  v14 = (__int64)(a1 + 6);
  do
  {
    if ( (*v12 & v7) != 0 )
    {
      v79 = v12;
      sub_34B20((_QWORD **)a1, v14, 1);
      v12 = v79;
    }
    v14 += 40;
    ++v12;
  }
  while ( v13 != (_QWORD *)v14 );
  if ( (v7 & 0x4000) != 0 && v82 == -1 )
    remember_problem();
  v15 = dword_8B1C0;
  do
  {
    if ( (*v15 & v7) != 0 )
      sub_34B20((_QWORD **)a1, v11, 0);
    v11 += 40;
    ++v15;
  }
  while ( (_QWORD *)v11 != v13 );
  if ( *((_WORD *)a1 + 16) == 80 && *((_WORD *)a1 + 17) > 4u )
  {
    get_flags_ex();
    if ( (unsigned __int8)is_off() )
    {
      if ( (unsigned __int8)get_refinfo() && (v87 & 0x40) != 0 )
      {
        v18 = v87 & 0xF;
        if ( *(_DWORD *)(*a1 + 704LL) == v18 )
        {
          v75 = *((_WORD *)a1 + 17);
          if ( v75 == 8 )
          {
            v87 = 11;
            op_offset_ex();
          }
          else if ( v75 == 16 )
          {
            v87 = 9;
            v85 = -1;
            op_offset_ex();
          }
        }
        else if ( *(_DWORD *)(*a1 + 712LL) == v18 && *((_WORD *)a1 + 17) == 8 )
        {
          v87 = 12;
          op_offset_ex();
        }
      }
    }
  }
  if ( *((_BYTE *)a1 + 368) )
  {
    v19 = getseg();
    if ( v19 == getseg() )
      add_cref();
  }
  if ( !(unsigned __int8)getinf_flag() || (unsigned int)get_auto_state() != 40 )
    goto LABEL_26;
  v28 = is_defarg();
  v16 = *a1;
  if ( v28 )
    goto LABEL_27;
  v29 = *((_WORD *)a1 + 16);
  if ( v29 == 14 )
  {
    v57 = *((unsigned __int16 *)a1 + 27);
    v58 = *((_WORD *)a1 + 27);
    if ( (_WORD)v57 == 13 || v57 == 161 || *((_BYTE *)a1 + 89) != 1 )
      goto LABEL_27;
    v59 = *((unsigned __int16 *)a1 + 47);
    if ( (v59 == 161 || v59 == 13) && *((_BYTE *)a1 + 129) == 5 )
    {
      if ( !func )
      {
LABEL_172:
        if ( (unsigned __int8)insn_create_stkvar() )
          op_stkvar();
        get_flags_ex();
        if ( (unsigned __int8)op_adds_xrefs() )
          insn_add_off_drefs();
LABEL_26:
        v16 = *a1;
        goto LABEL_27;
      }
      goto LABEL_164;
    }
  }
  else
  {
    if ( v29 != 12 )
      goto LABEL_27;
    v30 = *((unsigned __int16 *)a1 + 27);
    if ( v30 == 13 || v30 == 161 || *((_BYTE *)a1 + 89) != 1 )
      goto LABEL_27;
  }
  if ( !func )
    goto LABEL_27;
  v60 = *((_WORD *)a1 + 47);
  v61 = sub_2F860(v16, (__int64)&v85, *func);
  v62 = -1;
  if ( v61 )
    v62 = v86;
  v16 = *a1;
  if ( v60 != v62 || *((_BYTE *)a1 + 129) != 5 )
    goto LABEL_27;
  v58 = *((_WORD *)a1 + 27);
LABEL_164:
  v63 = sub_2F860(v16, (__int64)&v85, *func);
  v64 = -1;
  if ( v63 )
    v64 = v86;
  v16 = *a1;
  if ( v64 != v58 )
  {
    v65 = a1[17];
    if ( *((_WORD *)a1 + 16) == 12 )
      v65 = -v65;
    v66 = (int)v65;
    if ( *(_DWORD *)(*(_QWORD *)(v16 + 32) + 24LL) == 8 )
      v66 = v65;
    sub_266E0(v16, (__int64)func, (__int64)(a1 + 1), *((unsigned __int16 *)a1 + 47), v66);
    goto LABEL_172;
  }
LABEL_27:
  if ( (*(_BYTE *)(v16 + 184) & 0x20) == 0 )
  {
    v84 = 0;
    v83 = 0;
    if ( (unsigned __int8)xrefblk_t_first_to() )
    {
      do
      {
        v20 = &v88[40];
        *(_QWORD *)&v88[24] = 0;
        *(_QWORD *)&v88[32] = 0;
        memset(v88, 255, 24);
        do
        {
          *(_WORD *)v20 = 0;
          v20 += 40;
          *((_WORD *)v20 - 19) = 0;
          *((_WORD *)v20 - 18) = 0;
          *((_DWORD *)v20 - 2) = 0;
          *((_WORD *)v20 - 17) = 0;
          *((_OWORD *)v20 - 2) = 0;
          *((_QWORD *)v20 - 2) = 0;
        }
        while ( &v88[360] != v20 );
        if ( BYTE9(v86) == 17 && (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 && (int)decode_insn() > 0 )
        {
          if ( *(_WORD *)&v88[24] != 4 )
            goto LABEL_51;
          v24 = sub_2C710(*a1, (__int64)v88, v8);
          v23 = v83;
          v25 = v83;
          if ( v24 )
            goto LABEL_52;
          v26 = v84;
          v27 = v85;
          if ( *((_QWORD *)&v84 + 1) < (unsigned __int64)(v84 + 1) )
          {
            v83 = qvector_reserve();
            v25 = v83;
            v26 = v84;
          }
          *(_QWORD *)(v25 + 8 * v26) = v27;
          *(_QWORD *)&v84 = v84 + 1;
        }
      }
      while ( (unsigned __int8)xrefblk_t_next_to() );
    }
    if ( (_QWORD)v84 )
    {
      v21 = v83;
      v22 = v83 + 8 * v84;
      if ( v22 != v83 )
      {
        do
        {
          del_cref();
          add_cref();
          v21 += 8;
        }
        while ( v22 != v21 );
      }
      auto_unmark();
    }
LABEL_51:
    v23 = v83;
LABEL_52:
    if ( v23 )
    {
      *(_QWORD *)&v84 = 0;
      qfree();
    }
  }
  return v90 - __readfsqword(0x28u);
}

