unsigned __int64 __fastcall sub_2D480(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 *func; // rax
  unsigned __int64 *v6; // r15
  unsigned __int64 v7; // rdi
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned __int64 v13; // r12
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r12
  __int64 not_tail; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r13
  __int16 v24; // ax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // r8
  __int64 v29; // r9
  __int128 *v30; // rsi
  __int64 v31; // r13
  int v32; // eax
  __int64 v33; // rdx
  int v34; // eax
  __int16 v35; // ax
  char v36; // r12
  __int64 v37; // rdi
  __int16 v38; // ax
  __int64 v39; // rdx
  __int64 v40; // rcx
  unsigned __int64 v41; // r15
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int64 v46; // r12
  unsigned __int64 v47; // r12
  unsigned __int64 v48; // rax
  __int64 v49; // rdi
  unsigned __int64 v50; // r14
  unsigned __int64 sreg; // rax
  __int64 v52; // rax
  int v53; // eax
  __int16 v54; // ax
  __int64 v55; // r13
  __int64 v56; // rdx
  __int64 v57; // rcx
  char v58; // r12
  __int64 v59; // rsi
  __int64 v60; // rdi
  int v61; // edx
  bool v62; // [rsp+8h] [rbp-1F0h]
  unsigned __int8 v63; // [rsp+8h] [rbp-1F0h]
  __int128 *v64; // [rsp+10h] [rbp-1E8h]
  unsigned __int64 v65; // [rsp+18h] [rbp-1E0h]
  unsigned __int64 v66; // [rsp+20h] [rbp-1D8h] BYREF
  unsigned __int64 v67; // [rsp+28h] [rbp-1D0h] BYREF
  __int64 v68; // [rsp+30h] [rbp-1C8h] BYREF
  __int128 v69; // [rsp+38h] [rbp-1C0h]
  int v70; // [rsp+48h] [rbp-1B0h]
  __int128 v71; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v72; // [rsp+60h] [rbp-198h]
  __int64 v73; // [rsp+68h] [rbp-190h]
  __int64 v74; // [rsp+70h] [rbp-188h]
  char v75; // [rsp+78h] [rbp-180h] BYREF
  char v76; // [rsp+79h] [rbp-17Fh]
  __int16 v77; // [rsp+7Eh] [rbp-17Ah]
  unsigned __int64 v78; // [rsp+88h] [rbp-170h]
  char v79; // [rsp+A1h] [rbp-157h]
  unsigned __int16 v80; // [rsp+A6h] [rbp-152h]
  unsigned __int64 v81; // [rsp+A8h] [rbp-150h]
  unsigned __int64 v82; // [rsp+B0h] [rbp-148h]
  char v83; // [rsp+C9h] [rbp-12Fh]
  __int16 v84; // [rsp+CEh] [rbp-12Ah]
  _QWORD v85[8]; // [rsp+1B8h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a2 + 16);
  v85[0] = __readfsqword(0x28u);
  func = (unsigned __int64 *)get_func(v3);
  v6 = func;
  v7 = *(_QWORD *)(a2 + 16);
  if ( func && v7 >= *func + 32 )
    return v85[0] - __readfsqword(0x28u);
  v72 = -1;
  v8 = &v75;
  v73 = 0;
  v74 = 0;
  v71 = -1;
  do
  {
    v9 = 0;
    v10 = 0;
    v11 = 0;
    *(_WORD *)v8 = 0;
    v8 += 40;
    *((_WORD *)v8 - 19) = 0;
    *((_WORD *)v8 - 18) = 0;
    *((_DWORD *)v8 - 2) = 0;
    *((_WORD *)v8 - 17) = 0;
    *((_OWORD *)v8 - 2) = 0;
    *((_QWORD *)v8 - 2) = 0;
  }
  while ( v8 != (char *)v85 );
  v12 = *(unsigned __int16 *)(a2 + 24);
  v13 = v7 + *(unsigned __int16 *)(a2 + 26);
  if ( (_WORD)v12 == 135 )
  {
    if ( !(unsigned int)decode_insn(&v71, v7 + *(unsigned __int16 *)(a2 + 26), v85, 0, 0, 0, 0.0) )
      return v85[0] - __readfsqword(0x28u);
    v32 = (unsigned __int16)v73;
    LOBYTE(v9) = (_WORD)v73 == 5;
    LOBYTE(v14) = (_WORD)v73 == 5 || (_WORD)v73 == 2;
    if ( (_BYTE)v14 )
    {
      LOBYTE(v14) = v77 == 28;
      LOBYTE(v32) = v76 == 1;
      v33 = v32 & (unsigned int)v14;
      LOBYTE(v33) = (v79 == 1) & v33;
      if ( !(_BYTE)v33 )
        return v85[0] - __readfsqword(0x28u);
      if ( v80 == 28 )
      {
        if ( v84 != 25 || v83 != 1 )
          return v85[0] - __readfsqword(0x28u);
      }
      else if ( v80 != 25 || v83 )
      {
        return v85[0] - __readfsqword(0x28u);
      }
      v13 += 4LL;
      v63 = v33;
      if ( !(unsigned int)decode_insn(&v71, v13, v33, v80, v10, v11, 0.0) )
        return v85[0] - __readfsqword(0x28u);
      LOWORD(v32) = v73;
      v14 = v63;
    }
    if ( (((_WORD)v32 - 31) & 0xFFFD) != 0 || v76 != 1 || v77 != 28 || v79 != 5 )
      return v85[0] - __readfsqword(0x28u);
    v64 = (__int128 *)a2;
    v30 = &v71;
    v13 += WORD1(v73);
  }
  else
  {
    v14 = (unsigned int)(v12 - 31);
    if ( (((_WORD)v12 - 31) & 0xFFFD) != 0 )
    {
      LOBYTE(v9) = (_WORD)v12 == 204;
      LOBYTE(v14) = (_WORD)v12 == 204 || (_WORD)v12 == 838;
      if ( (_BYTE)v14 )
      {
        v64 = (__int128 *)a2;
        v15 = *(_QWORD *)(a2 + 88) & *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        goto LABEL_9;
      }
      v64 = (__int128 *)a2;
      goto LABEL_78;
    }
    not_tail = prev_not_tail(v7);
    v23 = not_tail;
    if ( not_tail == -1 || !(unsigned int)decode_insn(&v71, not_tail, v19, v20, v21, v22, 0.0) )
      return v85[0] - __readfsqword(0x28u);
    v24 = v73;
    LOBYTE(v9) = (_WORD)v73 == 5;
    LOBYTE(v14) = (_WORD)v73 == 5 || (_WORD)v73 == 2;
    if ( (_BYTE)v14 )
    {
      if ( v79 != 1 || v76 != 1 || v77 != 28 )
        return v85[0] - __readfsqword(0x28u);
      if ( v80 == 28 )
      {
        if ( v84 != 25 || v83 != 1 )
          return v85[0] - __readfsqword(0x28u);
      }
      else if ( v83 || v80 != 25 )
      {
        return v85[0] - __readfsqword(0x28u);
      }
      v62 = v79 == 1 && v76 == 1 && v77 == 28;
      v27 = prev_not_tail(v23);
      if ( v27 == -1 || !(unsigned int)decode_insn(&v71, v27, v25, v26, v28, v29, 0.0) )
        return v85[0] - __readfsqword(0x28u);
      v24 = v73;
      v14 = v62;
    }
    if ( v24 != 135 || v76 != 1 || v77 != 28 || v79 != 5 )
      return v85[0] - __readfsqword(0x28u);
    v64 = &v71;
    v30 = (__int128 *)a2;
  }
  v12 = *(unsigned __int16 *)(a2 + 24);
  if ( (_WORD)v12 == 204 || (_WORD)v12 == 838 )
  {
    v31 = *(_QWORD *)(a2 + 88);
    goto LABEL_81;
  }
  v9 = (unsigned int)(v12 - 31);
  if ( (((_WORD)v12 - 31) & 0xFFFD) == 0 || (_WORD)v12 == 135 )
  {
    v31 = *((_QWORD *)v30 + 11) + (*((_QWORD *)v64 + 11) << 16);
    goto LABEL_81;
  }
LABEL_78:
  if ( (_WORD)v12 != 205 && (_WORD)v12 != 495 )
    return v85[0] - __readfsqword(0x28u);
  v31 = *(_QWORD *)(a2 + 96);
LABEL_81:
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & v31;
  if ( (_BYTE)v14 )
    goto LABEL_82;
LABEL_9:
  if ( (int)decode_insn(&v71, v13, v14, v9, v10, v11, 0.0) <= 0
    || (_WORD)v73 != 2 && (_WORD)v73 != 5
    || v77 != 28
    || v76 != 1
    || v79 != 1 )
  {
    goto LABEL_12;
  }
  if ( v80 != 28 )
  {
    if ( !v83 && v80 == 25 )
      goto LABEL_82;
LABEL_12:
    if ( v6 )
      v16 = *v6;
    else
      v16 = *((_QWORD *)v64 + 2);
    if ( sub_3B4D0(a1) != v15 && get_sreg(v16, 68) != v15 )
    {
      if ( !(unsigned __int8)sub_2BF50(a1, v15) )
        return v85[0] - __readfsqword(0x28u);
      split_sreg_range(v16, 68, v15, 4, 0);
    }
    v34 = get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF000000;
    if ( v34 )
    {
      if ( v34 != 83886080 || !(unsigned __int8)get_refinfo(&v68, *(_QWORD *)(a2 + 16), 1) )
        return v85[0] - __readfsqword(0x28u);
      v35 = *(_WORD *)(a2 + 24);
      if ( v35 == 204 || v35 == 838 )
      {
        v36 = v70 & 0x4F;
        if ( (v70 & 0x4F) == 4 )
        {
          if ( v68 != -1 )
          {
            if ( v69 != __PAIR128__(32752, 0) )
              return v85[0] - __readfsqword(0x28u);
            goto LABEL_142;
          }
        }
        else if ( v68 != -1 )
        {
          return v85[0] - __readfsqword(0x28u);
        }
        v37 = *(_QWORD *)(a2 + 16);
        if ( (v70 & 0x80u) != 0 )
          return v85[0] - __readfsqword(0x28u);
      }
      else
      {
        if ( v35 == 135 )
        {
          if ( (v70 & 0x4F) != 2 || v68 != -1 || v69 != __PAIR128__(32752, 0) )
            return v85[0] - __readfsqword(0x28u);
          goto LABEL_146;
        }
        if ( ((v35 - 31) & 0xFFFD) != 0 )
          return v85[0] - __readfsqword(0x28u);
        v36 = v70 & 0x4F;
        if ( (v70 & 0x4F) == 2 )
        {
          if ( v68 != -1 )
            return v85[0] - __readfsqword(0x28u);
          if ( v69 == __PAIR128__(32752, 0) )
            goto LABEL_74;
          v37 = *(_QWORD *)(a2 + 16);
        }
        else
        {
          v37 = *(_QWORD *)(a2 + 16);
          if ( v68 != -1 )
            return v85[0] - __readfsqword(0x28u);
        }
        if ( (v70 & 0x80u) != 0 )
          return v85[0] - __readfsqword(0x28u);
      }
      if ( v69 != 0 || v36 != (unsigned __int8)get_default_reftype(v37) )
        return v85[0] - __readfsqword(0x28u);
    }
    v38 = *(_WORD *)(a2 + 24);
    if ( v38 != 204 && v38 != 838 )
    {
      if ( v38 != 135 )
      {
LABEL_74:
        v39 = 4;
LABEL_75:
        v40 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v15 - 32752);
LABEL_76:
        op_offset(*(_QWORD *)(a2 + 16), 1, v39, v40, 0, 32752);
        return v85[0] - __readfsqword(0x28u);
      }
LABEL_146:
      v39 = *(_BYTE *)(a1 + 608) | 0x40u;
      goto LABEL_75;
    }
LABEL_142:
    netnode_supdel(*(_QWORD *)(a1 + 152), *(_QWORD *)(a2 + 16), 367);
    v39 = 2;
    v40 = -1;
    goto LABEL_76;
  }
  if ( v84 != 25 || v83 != 1 )
    goto LABEL_12;
LABEL_82:
  if ( v6 )
  {
    v41 = *v6;
    v65 = v41;
    if ( get_sreg(v41, 67) && *(_DWORD *)(a1 + 260) == 1 )
      v65 = v41 + 1;
    if ( v41 < *(_QWORD *)(a2 + 16) )
    {
      v46 = v41;
      do
      {
        if ( (int)decode_insn(&v71, v46, v42, v43, v44, v45, 0.0) <= 0 )
          break;
        v66 = 0;
        sub_2AAE0(a1, &v66, (__int64)&v71, -1);
        if ( (v66 & 0x2000000) != 0 )
          goto LABEL_100;
        if ( (_WORD)v73 != 202 )
        {
          if ( sub_2D360((unsigned __int16)v73) )
            return v85[0] - __readfsqword(0x28u);
          goto LABEL_92;
        }
        v48 = *(_QWORD *)(a2 + 16);
        if ( v78 >= v48 )
          return v85[0] - __readfsqword(0x28u);
        if ( v46 >= v78 )
          return v85[0] - __readfsqword(0x28u);
        v46 += WORD1(v73);
        if ( v48 == v46 || !(unsigned int)decode_insn(&v71, v46, WORD1(v73), v43, v44, v45, 0.0) )
          return v85[0] - __readfsqword(0x28u);
        v67 = 0;
        sub_2AAE0(a1, &v67, (__int64)&v71, -1);
        if ( (v67 & 0x2000000) != 0 )
        {
LABEL_100:
          if ( (_WORD)v73 == 204 || (_WORD)v73 == 838 )
          {
            v65 = v81;
          }
          else
          {
            if ( (_WORD)v73 != 205 && (_WORD)v73 != 495 )
              return v85[0] - __readfsqword(0x28u);
            v65 = v82;
          }
        }
LABEL_92:
        v46 += WORD1(v73);
      }
      while ( v46 < *(_QWORD *)(a2 + 16) );
    }
    v47 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v15 + v65);
  }
  else
  {
    v49 = *((_QWORD *)v64 + 2);
    v50 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v49 + v15);
    sreg = get_sreg(v49, 68);
    v47 = sreg;
    if ( sreg == -1 || v50 < sreg || v50 >= sreg + 32 )
    {
      if ( *(_WORD *)(a2 + 24) == 204 && (get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF000000) == 0x5000000 )
      {
        if ( (unsigned __int8)get_refinfo(&v68, *(_QWORD *)(a2 + 16), 1) )
        {
          if ( v68 == -1 && !(_QWORD)v69 )
          {
            v58 = v70;
            if ( (v70 & 0x80u) == 0
              && !*((_QWORD *)&v69 + 1)
              && (v58 & 0x4F) == (unsigned __int8)get_default_reftype(*(_QWORD *)(a2 + 16)) )
            {
              clr_op_type(*(_QWORD *)(a2 + 16), 1);
              v59 = *(_QWORD *)(a2 + 16);
              v60 = *(_QWORD *)(a1 + 152);
              LOBYTE(v67) = 1;
              netnode_supset(v60, v59, &v67, 1, 367);
            }
          }
        }
      }
      return v85[0] - __readfsqword(0x28u);
    }
    v65 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (sreg - v15);
    v52 = get_sreg(v65, 67);
    if ( v52 )
      v52 = *(_DWORD *)(a1 + 260) == 1;
    if ( (v65 & 3) != v52 )
      return v85[0] - __readfsqword(0x28u);
    v41 = v65 & 0xFFFFFFFFFFFFFFFELL;
    auto_mark_range(v65 & 0xFFFFFFFFFFFFFFFELL, v65 | 1, 20);
    auto_mark_range(v65 & 0xFFFFFFFFFFFFFFFELL, v65 | 1, 30);
  }
  if ( v47 != get_sreg(v41, 68) )
    split_sreg_range(v41, 68, v47, 4, 0);
  v53 = get_flags_ex(*(_QWORD *)(a2 + 16), 4) & 0xF000000;
  if ( !v53 )
  {
LABEL_127:
    v54 = *(_WORD *)(a2 + 24);
    if ( v54 != 838 && v54 != 204 )
    {
LABEL_128:
      v56 = 4;
      if ( v54 != 135 )
      {
LABEL_129:
        v57 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v47 - 32752);
LABEL_130:
        op_offset(*(_QWORD *)(a2 + 16), 1, v56, v57, v65, 32752);
        return v85[0] - __readfsqword(0x28u);
      }
      v61 = *(_DWORD *)(a1 + 608);
LABEL_156:
      v56 = (unsigned __int8)v61 | 0x40u;
      goto LABEL_129;
    }
LABEL_154:
    netnode_supdel(*(_QWORD *)(a1 + 152), *(_QWORD *)(a2 + 16), 367);
    v56 = 2;
    v57 = -1;
    goto LABEL_130;
  }
  if ( v53 != 83886080 || !(unsigned __int8)get_refinfo(&v68, *(_QWORD *)(a2 + 16), 1) )
    return v85[0] - __readfsqword(0x28u);
  v54 = *(_WORD *)(a2 + 24);
  if ( v54 == 204 || v54 == 838 )
  {
    if ( (v70 & 0x4F) == 2 )
    {
      if ( v68 == -1 && *((_QWORD *)&v69 + 1) == 32752 )
      {
        if ( v65 == (_QWORD)v69 )
          return v85[0] - __readfsqword(0x28u);
        goto LABEL_154;
      }
    }
    else if ( (*(_BYTE *)(a1 + 608) | 0x40) == (v70 & 0x4F)
           && v68 != -1
           && *((_QWORD *)&v69 + 1) == 32752
           && ((_QWORD)v69 == v65 || v65 == -1) )
    {
      goto LABEL_154;
    }
    if ( !sub_2B420(*(_QWORD *)(a2 + 16), (__int64)&v68) )
      return v85[0] - __readfsqword(0x28u);
    goto LABEL_127;
  }
  if ( v54 == 135 )
  {
    v61 = *(_DWORD *)(a1 + 608);
    if ( (*(_BYTE *)(a1 + 608) | 0x40) != (v70 & 0x4F) )
    {
      if ( (v70 & 0x4F) == 2 && v68 == -1 && *((_QWORD *)&v69 + 1) == 32752 && ((_QWORD)v69 == v65 || v65 == -1) )
        goto LABEL_156;
      return v85[0] - __readfsqword(0x28u);
    }
    goto LABEL_182;
  }
  if ( ((v54 - 31) & 0xFFFD) != 0 )
    return v85[0] - __readfsqword(0x28u);
  if ( (v70 & 0x4F) == 4 )
  {
LABEL_182:
    if ( v68 != -1 && *((_QWORD *)&v69 + 1) == 32752 && v65 != (_QWORD)v69 )
      goto LABEL_128;
    return v85[0] - __readfsqword(0x28u);
  }
  if ( (v70 & 0x4F) == 2 && (v70 & 0x80) != 0 && v68 == -1 )
  {
    v55 = v69;
    if ( v55 == get_sreg(*((_QWORD *)v64 + 2), 68) && !*((_QWORD *)&v69 + 1) )
      goto LABEL_127;
  }
  return v85[0] - __readfsqword(0x28u);
}

