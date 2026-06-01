__int64 __fastcall sub_2A780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int8 a5)
{
  unsigned __int16 v7; // ax
  _QWORD *v10; // rax
  char v11; // al
  char *v12; // rax
  char v13; // al
  __int64 v14; // rdi
  _QWORD *v15; // rax
  char v16; // al
  _QWORD *v17; // rdi
  _QWORD *v18; // rax
  char v19; // al
  char *v20; // r13
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rbx
  int flags; // r14d
  __int64 v27; // r14
  int v28; // eax
  _QWORD *v29; // rax
  _QWORD *v30; // [rsp+10h] [rbp-358h] BYREF
  __int128 v31; // [rsp+18h] [rbp-350h]
  char v32; // [rsp+28h] [rbp-340h]
  __int64 v33; // [rsp+30h] [rbp-338h] BYREF
  __int128 v34; // [rsp+38h] [rbp-330h]
  char v35; // [rsp+48h] [rbp-320h]
  __int128 v36; // [rsp+50h] [rbp-318h]
  __int64 v37; // [rsp+60h] [rbp-308h]
  __int64 v38; // [rsp+68h] [rbp-300h]
  __int64 v39; // [rsp+70h] [rbp-2F8h]
  char v40; // [rsp+78h] [rbp-2F0h] BYREF
  unsigned __int16 v41; // [rsp+7Eh] [rbp-2EAh]
  char v42; // [rsp+1B8h] [rbp-1B0h] BYREF
  __int128 v43; // [rsp+1C0h] [rbp-1A8h] BYREF
  __int64 v44; // [rsp+1D0h] [rbp-198h]
  __int64 v45; // [rsp+1D8h] [rbp-190h]
  __int64 v46; // [rsp+1E0h] [rbp-188h]
  _BYTE v47[40]; // [rsp+1E8h] [rbp-180h] BYREF
  char v48; // [rsp+210h] [rbp-158h] BYREF
  char v49; // [rsp+211h] [rbp-157h]
  char v50; // [rsp+239h] [rbp-12Fh]
  _QWORD v51[8]; // [rsp+328h] [rbp-40h] BYREF

  v7 = *(_WORD *)(a2 + 16);
  v51[0] = __readfsqword(0x28u);
  if ( v7 == 44 )
  {
LABEL_17:
    v44 = -1;
    v10 = v47;
    v45 = 0;
    v46 = 0;
    v43 = -1;
    do
    {
      *(_WORD *)v10 = 0;
      v10 += 5;
      *((_WORD *)v10 - 19) = 0;
      *((_WORD *)v10 - 18) = 0;
      *((_DWORD *)v10 - 2) = 0;
      *((_WORD *)v10 - 17) = 0;
      *((_OWORD *)v10 - 2) = 0;
      *(v10 - 2) = 0;
    }
    while ( v51 != v10 );
    if ( (int)decode_insn() <= 0 )
      return 0;
    if ( v49 != 5 )
      return 0;
    get_flags_ex();
    if ( a4 == -1 )
      return 0;
    if ( (unsigned __int8)is_defarg() )
    {
      v11 = is_off();
      if ( !a4 || v11 != 1 || !(unsigned __int8)get_refinfo() || 16LL * (_QWORD)v43 != (_QWORD)v34 )
        return 0;
    }
    sub_55C30(v44);
    op_offset();
    return 1;
  }
  if ( v7 > 0x2Cu )
  {
    if ( v7 == 269 )
    {
      if ( (unsigned __int8)get_fixup() )
        return 0;
      v37 = -1;
      v12 = &v40;
      v38 = 0;
      v39 = 0;
      v36 = -1;
      do
      {
        *(_WORD *)v12 = 0;
        v12 += 40;
        *((_WORD *)v12 - 19) = 0;
        *((_WORD *)v12 - 18) = 0;
        *((_DWORD *)v12 - 2) = 0;
        *((_WORD *)v12 - 17) = 0;
        *((_OWORD *)v12 - 2) = 0;
        *((_QWORD *)v12 - 2) = 0;
      }
      while ( &v42 != v12 );
      if ( (int)decode_insn() <= 0 )
        return 0;
      v33 = 0;
      v35 = 0;
      v34 = 0;
      v13 = sub_81F70(a1, &v33, v37, v41, 0, 0);
      v14 = v33;
      if ( v13 && (_QWORD)v34 == 1 && *(_WORD *)(v33 + 16) == 23 )
      {
        if ( !(unsigned __int8)get_fixup() )
        {
          sub_23800((__int64)&v43);
          if ( (int)decode_insn() > 0 && v49 == 5 )
          {
            op_offset();
            op_offset();
            if ( !v33 )
              return 1;
            goto LABEL_89;
          }
        }
        v14 = v33;
      }
      if ( v14 )
      {
LABEL_35:
        *(_QWORD *)&v34 = 0;
        qfree();
      }
    }
    else
    {
      if ( v7 > 0x10Du )
      {
        if ( v7 != 497 || a3 == -1 || a4 )
          return 0;
        get_flags_ex();
        if ( !(unsigned __int8)is_defarg() )
          op_offset();
        return 1;
      }
      if ( (unsigned __int16)(v7 - 80) <= 1u )
        goto LABEL_17;
    }
    return 0;
  }
  if ( v7 == 23 )
  {
    if ( !a4 )
      return 0;
    goto LABEL_17;
  }
  if ( v7 == 30 )
  {
    v44 = -1;
    v15 = v47;
    v45 = 0;
    v46 = 0;
    v43 = -1;
    do
    {
      *(_WORD *)v15 = 0;
      v15 += 5;
      *((_WORD *)v15 - 19) = 0;
      *((_WORD *)v15 - 18) = 0;
      *((_DWORD *)v15 - 2) = 0;
      *((_WORD *)v15 - 17) = 0;
      *((_OWORD *)v15 - 2) = 0;
      *(v15 - 2) = 0;
    }
    while ( v51 != v15 );
    if ( (int)decode_insn() <= 0 )
      return 0;
    v30 = nullptr;
    v32 = 0;
    v31 = 0;
    v16 = sub_82140(a1, &v30, &v48, &v43, 1, 0);
    v17 = v30;
    if ( !v16 || (unsigned __int8)(v32 - 10) > 1u )
    {
LABEL_40:
      if ( v17 )
      {
        *(_QWORD *)&v31 = 0;
        qfree();
      }
      return 0;
    }
    v22 = *v30;
    if ( (_QWORD)v31 != 1 )
    {
      v23 = v30 + 3;
      if ( 24LL * (_QWORD)v31 != 24 )
      {
        while ( *v23 == v22 )
        {
          v23 += 3;
          if ( &v30[3 * (_QWORD)v31] == v23 )
            goto LABEL_61;
        }
        goto LABEL_40;
      }
    }
LABEL_61:
    v24 = v22 + 16 * v43;
    v25 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v24 != v25 )
    {
      v25 &= v24;
      if ( v24 == -1 )
        v25 = -1;
    }
    flags = get_flags_ex();
    if ( a4 == -1
      || (unsigned __int8)is_defarg()
      && ((unsigned __int8)is_off() != 1 || !a4 || !(unsigned __int8)get_refinfo() || 16LL * (_QWORD)v43 != (_QWORD)v34)
      || (flags & 0x600) != 0x400 )
    {
LABEL_71:
      v17 = v30;
      goto LABEL_40;
    }
    v27 = flags & 0xF0000000;
    if ( v27 == 0x20000000 )
    {
      v28 = 130;
    }
    else
    {
      v28 = 137;
      if ( v27 != 805306368 )
        goto LABEL_71;
    }
    sub_22510(v25, v28 | (a5 << 9), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & a4);
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree();
    }
    return 1;
  }
  if ( v7 != 14 )
    return 0;
  if ( a4 )
    return 0;
  v44 = -1;
  v45 = 0;
  v18 = v47;
  v46 = 0;
  v43 = -1;
  do
  {
    *(_WORD *)v18 = 0;
    v18 += 5;
    *((_WORD *)v18 - 19) = 0;
    *((_WORD *)v18 - 18) = 0;
    *((_DWORD *)v18 - 2) = 0;
    *((_WORD *)v18 - 17) = 0;
    *((_OWORD *)v18 - 2) = 0;
    *(v18 - 2) = 0;
  }
  while ( v18 != v51 );
  if ( (int)decode_insn() <= 0 )
    return 0;
  v19 = v50;
  v20 = &v48;
  if ( !v50 )
  {
    v19 = v49;
    v20 = v47;
  }
  if ( v19 != 5 )
    return 0;
  v21 = *((unsigned __int16 *)v20 + 3);
  v33 = 0;
  v35 = 0;
  v34 = 0;
  if ( !(unsigned __int8)sub_81F70(a1, &v33, v44, v21, 0, 0) || (unsigned __int8)(v35 - 10) > 1u )
  {
LABEL_52:
    if ( !v33 )
      return 0;
    goto LABEL_35;
  }
  if ( (_QWORD)v34 != 1 )
  {
    v29 = (_QWORD *)(v33 + 24);
    if ( 24LL * (_QWORD)v34 != 24 )
    {
      while ( *(_QWORD *)v33 == *v29 )
      {
        v29 += 3;
        if ( v29 == (_QWORD *)(v33 + 24 * v34) )
          goto LABEL_83;
      }
      goto LABEL_52;
    }
  }
LABEL_83:
  if ( *(_WORD *)(v33 + 16) != 497 )
    goto LABEL_52;
  get_flags_ex();
  if ( !(unsigned __int8)is_defarg() )
    op_offset();
  get_flags_ex();
  if ( !(unsigned __int8)is_defarg() )
    op_offset();
  if ( v33 )
  {
LABEL_89:
    *(_QWORD *)&v34 = 0;
    qfree();
  }
  return 1;
}

