__int64 __fastcall sub_39300(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int64 *next_fchunk; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rbp
  __m128i si128; // xmm1
  unsigned __int64 *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r14
  bool v14; // r15
  int v15; // eax
  __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  int *v18; // r15
  int *v19; // r13
  unsigned __int64 v20; // rax
  int *v21; // rcx
  bool v22; // al
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int *i; // rax
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r15
  void *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rcx
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // r12
  int *v37; // rdi
  char j; // al
  int *v39; // rdx
  unsigned __int64 v40; // rsi
  char v41; // di
  int *v42; // rax
  int v43; // eax
  __int64 v44; // rax
  unsigned __int64 v46; // [rsp+10h] [rbp-278h]
  unsigned __int64 v48; // [rsp+20h] [rbp-268h]
  unsigned __int8 v49; // [rsp+2Eh] [rbp-25Ah]
  char v50; // [rsp+2Fh] [rbp-259h]
  unsigned __int64 v51; // [rsp+48h] [rbp-240h]
  __int64 v52; // [rsp+58h] [rbp-230h] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-228h]
  char v54; // [rsp+71h] [rbp-217h]
  __int64 v55; // [rsp+80h] [rbp-208h]
  __m128i v56; // [rsp+88h] [rbp-200h]
  __int64 v57; // [rsp+98h] [rbp-1F0h]
  __int64 v58; // [rsp+A0h] [rbp-1E8h]
  int v59; // [rsp+B8h] [rbp-1D0h] BYREF
  int *v60; // [rsp+C0h] [rbp-1C8h]
  int *v61; // [rsp+C8h] [rbp-1C0h]
  int *v62; // [rsp+D0h] [rbp-1B8h]
  __int64 v63; // [rsp+D8h] [rbp-1B0h]
  __int128 v64; // [rsp+E0h] [rbp-1A8h] BYREF
  __int64 v65; // [rsp+F0h] [rbp-198h]
  __int64 v66; // [rsp+F8h] [rbp-190h]
  __int64 v67; // [rsp+100h] [rbp-188h]
  _QWORD v68[40]; // [rsp+108h] [rbp-180h] BYREF
  unsigned __int64 v69; // [rsp+248h] [rbp-40h] BYREF

  v69 = __readfsqword(0x28u);
  v2 = getseg();
  if ( !v2 )
    return 0;
  v3 = v2;
  if ( v2 != getseg() )
    return 0;
  v5 = *(_QWORD *)(v3 + 8);
  next_fchunk = (unsigned __int64 *)get_next_fchunk();
  if ( next_fchunk )
  {
    v7 = *next_fchunk;
    if ( v5 > v7 )
      v5 = v7;
  }
  v8 = peek_auto_queue();
  v9 = a2[1];
  if ( v5 <= v8 )
    v8 = v5;
  v48 = v8;
  if ( v9 >= v8 )
    return 0;
  v49 = 0;
  do
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_960A0);
    v55 = 0;
    v57 = 0;
    v58 = 0;
    v56 = si128;
    if ( (unsigned __int8)get_fixup() && (v55 & 0x400000000LL) == 0 )
      return v49;
    v11 = v68;
    v65 = -1;
    v66 = 0;
    v67 = 0;
    v64 = -1;
    do
    {
      *(_WORD *)v11 = 0;
      v11 += 5;
      *((_WORD *)v11 - 19) = 0;
      *((_WORD *)v11 - 18) = 0;
      *((_DWORD *)v11 - 2) = 0;
      *((_WORD *)v11 - 17) = 0;
      *((_OWORD *)v11 - 2) = 0;
      *(v11 - 2) = 0;
    }
    while ( &v69 != v11 );
    if ( (get_flags_ex() & 0x1000) == 0 )
    {
      if ( !(unsigned int)decode_insn() )
        return v49;
      if ( (_WORD)v66 != 86 )
        return v49;
      v12 = sub_80350(a1, &v64, v68);
      if ( v12 < *a2 + 5 )
        return v49;
      if ( v12 >= a2[1] )
        return v49;
      if ( (unsigned __int8)get_byte() != 104 )
        return v49;
      if ( (unsigned int)get_dword() != WORD1(v66) + *((_QWORD *)&v64 + 1) )
        return v49;
      v9 += WORD1(v66);
      if ( v48 < v9 || (get_flags_ex() & 0x1000) == 0 )
        return v49;
    }
    if ( (unsigned __int8)xrefblk_t_first_to() )
    {
      do
      {
        if ( v53 < *a2
          || v53 >= a2[1]
          || (~((unsigned __int16)get_flags_ex() >> 8) & 6) != 0
          || !(unsigned int)decode_insn() )
        {
          return v49;
        }
        if ( v54 == 19 )
        {
          if ( (_WORD)v66 != 159 )
            return v49;
        }
        else if ( v54 != 1
               || (_WORD)v66 != 143
               && ((_WORD)v66 != 122 && (_WORD)v66 != 92 || (v68[0] & 0xFF000000FF00LL) != 0x20000000100LL) )
        {
          return v49;
        }
      }
      while ( (unsigned __int8)xrefblk_t_next_to() );
    }
    v13 = v9;
    v59 = 0;
    v14 = 0;
    v60 = nullptr;
    v61 = &v59;
    v62 = &v59;
    v63 = 0;
    while ( 1 )
    {
      v15 = decode_insn();
      v16 = v15;
      if ( !v15
        || (v50 = sub_36B20(a1, (__int64)&v64, 0)) == 0
        || (_WORD)v66 == 48
        || (_WORD)v66 == 129
        || (unsigned __int16)(v66 - 87) <= 1u
        || (v17 = v13 + v16, next_that() != -1) )
      {
        if ( v14 )
          goto LABEL_82;
LABEL_91:
        sub_36190(v60);
        return v49;
      }
      if ( v60 )
      {
        v18 = v60;
        v19 = &v59;
        while ( 1 )
        {
          while ( 1 )
          {
            v20 = *((_QWORD *)v18 + 4);
            if ( v20 >= v13 )
              break;
            v18 = *((int **)v18 + 3);
            if ( !v18 )
              goto LABEL_49;
          }
          v21 = *((int **)v18 + 2);
          if ( v13 >= v20 )
            break;
          v19 = v18;
          v18 = *((int **)v18 + 2);
          if ( !v21 )
          {
LABEL_49:
            v22 = v19 == &v59;
            goto LABEL_50;
          }
        }
        for ( i = *((int **)v18 + 3); i; i = *((int **)i + 3) )
        {
          while ( 1 )
          {
            v28 = *((_QWORD *)i + 2);
            if ( v13 >= *((_QWORD *)i + 4) )
              break;
            v19 = i;
            i = *((int **)i + 2);
            if ( !v28 )
              goto LABEL_68;
          }
        }
LABEL_68:
        while ( v21 )
        {
          while ( 1 )
          {
            v29 = *((_QWORD *)v21 + 2);
            if ( *((_QWORD *)v21 + 4) < v13 )
              break;
            v18 = v21;
            v21 = *((int **)v21 + 2);
            if ( !v29 )
              goto LABEL_71;
          }
          v21 = *((int **)v21 + 3);
        }
LABEL_71:
        if ( v61 == v18 && v19 == &v59 )
        {
LABEL_52:
          sub_36190(v60);
          v61 = &v59;
          v60 = nullptr;
          v62 = &v59;
          v63 = 0;
          goto LABEL_53;
        }
        if ( v18 != v19 )
        {
          do
          {
            v30 = std::_Rb_tree_increment();
            v31 = (void *)std::_Rb_tree_rebalance_for_erase();
            operator delete(v31, 0x28u);
            --v63;
          }
          while ( (int *)v30 != v19 );
        }
      }
      else
      {
        v22 = v50;
        v19 = &v59;
LABEL_50:
        if ( v61 == v19 && v22 )
          goto LABEL_52;
      }
LABEL_53:
      v14 = (unsigned __int16)(v66 - 16) <= 2u;
      if ( (unsigned __int16)(v66 - 16) <= 2u || (unsigned __int8)(BYTE1(v68[0]) - 6) > 1u )
        goto LABEL_55;
      v32 = sub_80350(a1, &v64, v68);
      v33 = v32;
      if ( (_WORD)v66 == 86 )
      {
        v46 = v32;
        if ( (unsigned int)sub_35CD0(v32, &v64) > 1 )
          goto LABEL_55;
        v43 = sub_37980(a1, (__int64)&v64, 0);
        v33 = v46;
        if ( v43 == -1 )
        {
          if ( *a2 >= v46 || v46 >= v48 )
            goto LABEL_55;
        }
        else if ( v43 == 100 )
        {
          goto LABEL_55;
        }
      }
      if ( v13 >= v33 )
        goto LABEL_55;
      v39 = v60;
      if ( !v60 )
      {
        if ( v61 == &v59 )
        {
LABEL_111:
          *(_QWORD *)(operator new(0x28u) + 32) = v33;
          std::_Rb_tree_insert_and_rebalance();
          ++v63;
          goto LABEL_55;
        }
        goto LABEL_120;
      }
      while ( 1 )
      {
        v40 = *((_QWORD *)v39 + 4);
        v41 = 0;
        v42 = *((int **)v39 + 3);
        if ( v33 < v40 )
        {
          v42 = *((int **)v39 + 2);
          v41 = v50;
        }
        if ( !v42 )
          break;
        v39 = v42;
      }
      if ( v41 )
      {
        if ( v61 == v39 )
          goto LABEL_111;
LABEL_120:
        v51 = v33;
        v44 = std::_Rb_tree_decrement();
        v33 = v51;
        v40 = *(_QWORD *)(v44 + 32);
      }
      if ( v40 < v33 )
        goto LABEL_111;
LABEL_55:
      if ( ((unsigned __int8)has_insn_feature() || sub_30310(a1, (__int64)&v64, v23, v24, v25, v26))
        && (!v63 || v17 != *((_QWORD *)v61 + 4)) )
      {
        break;
      }
      if ( v17 >= v48 )
        goto LABEL_91;
      if ( v17 != v9 && (get_flags_ex() & 0x1000) != 0 )
      {
        for ( j = xrefblk_t_first_to(); j; j = xrefblk_t_next_to() )
        {
          if ( v54 != 19 || v53 < v9 || v53 >= v17 )
            goto LABEL_91;
        }
      }
      v13 = v17;
    }
    v13 = v17;
LABEL_82:
    v34 = v63;
    if ( v63 )
      goto LABEL_91;
    if ( (debug & 8) != 0 )
      sub_234B0((__int64)"move function end from %a to %a\n", 0.0, *(double *)si128.m128i_i64);
    v52 = 0;
    if ( v9 < v13 )
    {
      while ( 1 )
      {
        v35 = decode_insn();
        v36 = v35;
        if ( !v35 )
          goto LABEL_91;
        if ( (~(unsigned __int16)get_flags_ex() & 0x600) != 0 )
        {
          sub_529A0(v9, v36, &v52, 1);
          create_insn();
        }
        v9 += v36;
        if ( v9 >= v13 )
        {
          v34 = v52;
          break;
        }
      }
    }
    sub_52980(v13, v34, 0.0);
    v37 = v60;
    a2[1] = v13;
    sub_36190(v37);
    v9 = a2[1];
    v49 = 1;
  }
  while ( v9 < v48 );
  return v49;
}

