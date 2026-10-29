__int64 __fastcall sub_73300(__int64 *a1, unsigned __int64 a2, signed int a3, __int64 a4, int a5, char a6)
{
  unsigned int insn; // ebp
  _QWORD *v11; // rbx
  _QWORD *v12; // rax
  _QWORD *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned __int64 *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  _QWORD *v19; // rax
  unsigned __int64 v20; // r15
  _QWORD *v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // rdx
  unsigned __int64 v24; // r15
  __int64 v25; // r12
  char v26; // dl
  unsigned __int64 v27; // rax
  void *v28; // rax
  unsigned __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rax
  void *v35; // rax
  unsigned __int64 v36; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rsi
  __int64 spd; // r15
  unsigned int v45; // eax
  unsigned int v46; // eax
  __int16 v47; // r8
  __int64 v48; // rax
  __int64 v49; // rdi
  char v50; // dl
  char v51; // al
  __int64 v52; // r15
  void *v53; // rdi
  __int64 v54; // rax
  unsigned int v55; // eax
  char v56; // al
  char v57; // [rsp+0h] [rbp-2A8h]
  unsigned __int64 v59; // [rsp+18h] [rbp-290h]
  __int64 v60; // [rsp+28h] [rbp-280h]
  __int64 *func; // [rsp+40h] [rbp-268h]
  char v64; // [rsp+5Bh] [rbp-24Dh]
  int v65; // [rsp+5Ch] [rbp-24Ch] BYREF
  unsigned __int64 v66; // [rsp+60h] [rbp-248h] BYREF
  unsigned __int64 *v67; // [rsp+68h] [rbp-240h] BYREF
  unsigned __int64 v68; // [rsp+70h] [rbp-238h] BYREF
  unsigned __int64 *v69; // [rsp+78h] [rbp-230h] BYREF
  __int64 v70; // [rsp+80h] [rbp-228h] BYREF
  char v71; // [rsp+88h] [rbp-220h]
  __int64 v72; // [rsp+90h] [rbp-218h]
  __int128 v73; // [rsp+98h] [rbp-210h]
  __int64 v74; // [rsp+B0h] [rbp-1F8h]
  __int128 v75; // [rsp+B8h] [rbp-1F0h]
  __int64 v76; // [rsp+D0h] [rbp-1D8h]
  int v77; // [rsp+D8h] [rbp-1D0h]
  __int128 v78; // [rsp+E0h] [rbp-1C8h]
  unsigned __int64 v79; // [rsp+F0h] [rbp-1B8h]
  __int128 v80; // [rsp+100h] [rbp-1A8h] BYREF
  unsigned __int64 v81; // [rsp+110h] [rbp-198h]
  __int64 v82; // [rsp+118h] [rbp-190h]
  __int64 v83; // [rsp+120h] [rbp-188h]
  char v84; // [rsp+128h] [rbp-180h] BYREF
  char v85; // [rsp+129h] [rbp-17Fh]
  unsigned __int16 v86; // [rsp+12Eh] [rbp-17Ah]
  __int64 v87; // [rsp+130h] [rbp-178h]
  __int64 v88; // [rsp+150h] [rbp-158h] BYREF
  __int64 v89; // [rsp+158h] [rbp-150h]
  __int64 v90; // [rsp+160h] [rbp-148h]
  char v91; // [rsp+170h] [rbp-138h]
  unsigned __int64 v92; // [rsp+268h] [rbp-40h] BYREF

  v92 = __readfsqword(0x28u);
  if ( a5 > 200 || (unsigned int)a3 > 0x1B )
    return 0;
  v11 = a1 + 2;
  func = (__int64 *)get_func();
  v12 = (_QWORD *)a1[3];
  if ( v12 )
  {
    v13 = a1 + 2;
    do
    {
      while ( 1 )
      {
        v14 = v12[2];
        v15 = v12[3];
        if ( v12[4] < a2 )
          break;
        v13 = v12;
        v12 = (_QWORD *)v12[2];
        if ( !v14 )
          goto LABEL_10;
      }
      v12 = (_QWORD *)v12[3];
    }
    while ( v15 );
LABEL_10:
    if ( v13 != v11 && a2 >= v13[4] )
    {
      v39 = 2LL * a3;
      if ( (v13[v39 + 6] & 3) != 0 )
      {
        if ( (v13[v39 + 6] & 3) == 1 )
        {
          v40 = (__int64)&v13[v39 + 5];
          v25 = *(_QWORD *)v40;
          v57 = *(_BYTE *)(v40 + 8);
          LOBYTE(insn) = (v57 & 3) == 1;
          v41 = (unsigned __int8)insn & (a4 != 0);
          goto LABEL_59;
        }
        return 0;
      }
    }
  }
  v72 = 0;
  v16 = (unsigned __int64 *)&v84;
  v81 = -1;
  v82 = 0;
  v83 = 0;
  v73 = 0;
  v80 = -1;
  do
  {
    *(_WORD *)v16 = 0;
    v16 += 5;
    *((_WORD *)v16 - 19) = 0;
    *((_WORD *)v16 - 18) = 0;
    *((_DWORD *)v16 - 2) = 0;
    *((_WORD *)v16 - 17) = 0;
    *((_OWORD *)v16 - 2) = 0;
    *(v16 - 2) = 0;
  }
  while ( v16 != &v92 );
  v76 = 0;
  v77 = -1;
  v78 = 0;
  if ( a2 == -1 && func )
    v17 = *func;
  else
    v17 = a2;
  v79 = v17;
  func_tail_iterator_set();
  v74 = 0;
  v60 = 2LL * a3;
  v75 = 0;
  while ( 1 )
  {
    do
    {
      insn = func_item_iterator_decode_preceding_insn();
      if ( !(_BYTE)insn )
        goto LABEL_32;
    }
    while ( v64 );
    if ( (_WORD)v82 != 134 )
      break;
    if ( v85 == 1 && a3 == v86 )
    {
      spd = get_spd();
      while ( 1 )
      {
        insn = func_item_iterator_decode_prev_insn();
        if ( !(_BYTE)insn || (unsigned __int16)(v82 - 16) <= 2u )
          goto LABEL_32;
        if ( (_WORD)v82 == 143 && v85 == 5 )
        {
          v25 = v87;
          if ( (v82 & 0x1800000000LL) != 0 )
          {
            if ( (v82 & 0x800000000LL) != 0 )
              v25 = (int)v87;
          }
          else
          {
            v25 = (__int16)v87;
          }
          v57 = 1;
          v24 = v73;
          goto LABEL_34;
        }
        v45 = get_flags_ex() & 0x10000;
        v25 = v45;
        if ( !v45 )
        {
          v24 = v73;
          v26 = 0;
          goto LABEL_33;
        }
        if ( spd != get_spd() )
          goto LABEL_32;
      }
    }
LABEL_22:
    v18 = *a1;
    v65 = a3;
    if ( (unsigned int)sub_72130(v18, (__int64)&v80, &v65, 1) != -1 )
      goto LABEL_32;
    v19 = (_QWORD *)a1[3];
    v20 = v81;
    if ( v19 )
    {
      v21 = a1 + 2;
      do
      {
        while ( 1 )
        {
          v22 = v19[2];
          v23 = v19[3];
          if ( v19[4] < v81 )
            break;
          v21 = v19;
          v19 = (_QWORD *)v19[2];
          if ( !v22 )
            goto LABEL_28;
        }
        v19 = (_QWORD *)v19[3];
      }
      while ( v23 );
LABEL_28:
      if ( v11 != v21 && v81 >= v21[4] && (v21[2 * a3 + 6] & 3) != 0 )
      {
        if ( (v21[2 * a3 + 6] & 3) != 1 )
        {
LABEL_32:
          v24 = v73;
          v25 = 0;
          v26 = 0;
LABEL_33:
          insn = 0;
          v57 = v26 | 2;
          goto LABEL_34;
        }
        v24 = v73;
        v25 = v21[v60 + 5];
        v50 = v21[v60 + 6];
        v51 = v50 & 3;
        v26 = v50 & 0xFC;
        if ( v51 != 1 )
          goto LABEL_33;
LABEL_95:
        v57 = v26 | 1;
        goto LABEL_34;
      }
    }
    v42 = v73;
    v43 = v72;
    if ( *((_QWORD *)&v73 + 1) < (unsigned __int64)(v73 + 1) )
    {
      v72 = qvector_reserve();
      v43 = v72;
      v42 = v73;
    }
    *(_QWORD *)(v43 + 8 * v42) = v20;
    v24 = v73 + 1;
    *(_QWORD *)&v73 = v24;
    if ( v24 > 0x3E8 )
    {
      v25 = 0;
      v26 = 0;
      goto LABEL_33;
    }
  }
  if ( v85 != 1 || a3 != v86 )
    goto LABEL_22;
  if ( (_WORD)v82 == 92 )
  {
    if ( !v91 )
    {
      if ( BYTE1(v88) == 2 )
      {
        v54 = v90;
        if ( (v82 & 0x1800000000LL) != 0 )
        {
          if ( (v82 & 0x800000000LL) != 0 )
            v54 = (int)v90;
        }
        else
        {
          v54 = (__int16)v90;
        }
        goto LABEL_119;
      }
      if ( (v88 & 0xFFFF00000000FF00LL) == 0x1C000000000400LL )
      {
        v54 = sub_7F350(*a1, &v80, &v88);
LABEL_119:
        v70 = v54;
        v71 = 0;
        sub_6E1F0();
        v25 = v70;
        v24 = v73;
        v57 = v71 & 0xFC | 1;
        goto LABEL_34;
      }
    }
LABEL_114:
    v57 = 2;
    v24 = v73;
    insn = 0;
    v25 = 0;
    goto LABEL_34;
  }
  if ( a6 )
    goto LABEL_32;
  if ( !sub_6B2B0((__int64)&v80, 1u) )
  {
    if ( v47 == 209 || v47 == 216 )
    {
      v24 = v73;
      if ( BYTE1(v88) == 1 && a3 == HIWORD(v88) )
      {
        v57 = 1;
        LOBYTE(v46) = v47 == 209 || v47 == 216;
        insn = v46;
        v25 = 0;
        goto LABEL_34;
      }
      goto LABEL_82;
    }
    if ( v47 == 131 )
    {
      v24 = v73;
      if ( BYTE1(v88) == 5 )
      {
        v25 = v89;
        if ( v89 == -1 )
          goto LABEL_104;
      }
LABEL_82:
      insn = 0;
LABEL_83:
      v57 = 2;
      v25 = 0;
      goto LABEL_34;
    }
    goto LABEL_22;
  }
  if ( BYTE1(v88) == 1 )
  {
    v70 = 0;
    v71 = 0;
    v56 = sub_73300(a1, v81, HIWORD(v88), &v70, (unsigned int)(a5 + 1), 0);
    v25 = v70;
    v24 = v73;
    v26 = v71 & 0xFC;
    if ( !v56 )
      goto LABEL_33;
    goto LABEL_95;
  }
  if ( BYTE1(v88) != 5 )
    goto LABEL_114;
  LOBYTE(v55) = sub_697C0();
  v24 = v73;
  insn = v55;
  if ( !(_BYTE)v55 )
    goto LABEL_83;
  v25 = v89;
  if ( (v82 & 0x1800000000LL) != 0 )
  {
    if ( (v82 & 0x800000000LL) != 0 )
      v25 = (int)v89;
  }
  else
  {
    v25 = (__int16)v89;
  }
LABEL_104:
  v57 = 1;
LABEL_34:
  v27 = a1[6];
  if ( v27 + v24 <= 0x3E8 )
  {
    v59 = 0;
LABEL_36:
    if ( v59 < v24 )
      goto LABEL_37;
  }
  else
  {
    v59 = v27 + v24 - 999;
    if ( v24 <= 0x3E8 )
      goto LABEL_36;
    if ( a1[3] )
    {
      v52 = a1[3];
      do
      {
        sub_69AA0(*(_QWORD **)(v52 + 24));
        v53 = (void *)v52;
        v52 = *(_QWORD *)(v52 + 16);
        operator delete(v53, 0x1E8u);
      }
      while ( v52 );
      v24 = v73;
      a1[3] = 0;
      a1[4] = (__int64)v11;
      a1[5] = (__int64)v11;
      a1[6] = 0;
      v59 = v24 - 999;
      v27 = 0;
      if ( v24 < 0x3E7 )
      {
        v68 = a2;
        goto LABEL_50;
      }
    }
    else
    {
      a1[4] = (__int64)v11;
      v59 = v24 - 999;
      v27 = 0;
      a1[5] = (__int64)v11;
      a1[6] = 0;
    }
    do
    {
LABEL_37:
      --v24;
      v66 = *(_QWORD *)(v72 + 8 * v24);
      if ( v27 > 0x3E7 )
      {
        do
        {
          v28 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v28, 0x1E8u);
          v29 = a1[6] - 1;
          a1[6] = v29;
        }
        while ( v29 > 0x3E7 );
      }
      v30 = (_QWORD *)a1[3];
      v31 = a1 + 2;
      if ( !v30 )
        goto LABEL_46;
      do
      {
        while ( 1 )
        {
          v32 = v30[2];
          v33 = v30[3];
          if ( v30[4] < v66 )
            break;
          v31 = v30;
          v30 = (_QWORD *)v30[2];
          if ( !v32 )
            goto LABEL_44;
        }
        v30 = (_QWORD *)v30[3];
      }
      while ( v33 );
LABEL_44:
      if ( v11 == v31 || v66 < v31[4] )
      {
LABEL_46:
        v67 = &v66;
        v31 = sub_69380(a1 + 1, v31, &v67);
      }
      v34 = (__int64)&v31[v60 + 5];
      *(_BYTE *)(v34 + 8) = v57;
      *(_QWORD *)v34 = v25;
      v27 = a1[6];
    }
    while ( v24 != v59 );
  }
  v68 = a2;
  if ( v27 > 0x3E7 )
  {
    do
    {
      v35 = (void *)std::_Rb_tree_rebalance_for_erase();
      operator delete(v35, 0x1E8u);
      v36 = a1[6] - 1;
      a1[6] = v36;
    }
    while ( v36 > 0x3E7 );
  }
LABEL_50:
  v37 = (_QWORD *)a1[3];
  v38 = a1 + 2;
  if ( !v37 )
    goto LABEL_93;
  do
  {
    if ( v37[4] >= v68 )
    {
      v38 = v37;
      v37 = (_QWORD *)v37[2];
    }
    else
    {
      v37 = (_QWORD *)v37[3];
    }
  }
  while ( v37 );
  if ( v11 == v38 || v68 < v38[4] )
  {
LABEL_93:
    v69 = &v68;
    v38 = sub_69380(a1 + 1, v38, &v69);
  }
  v48 = (__int64)&v38[v60 + 5];
  *(_QWORD *)v48 = v25;
  v49 = v74;
  *(_BYTE *)(v48 + 8) = v57;
  if ( v49 )
  {
    *(_QWORD *)&v75 = 0;
    v48 = qfree();
  }
  if ( v76 )
    v48 = lock_func_range();
  if ( v72 )
  {
    *(_QWORD *)&v73 = 0;
    v48 = qfree();
  }
  LOBYTE(v48) = a4 != 0;
  v41 = insn & v48;
LABEL_59:
  if ( (_BYTE)v41 )
  {
    insn = v41;
    *(_QWORD *)a4 = v25;
    *(_BYTE *)(a4 + 8) = v57;
  }
  return insn;
}
