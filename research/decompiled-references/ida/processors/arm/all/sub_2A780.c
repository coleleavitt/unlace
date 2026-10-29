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
  char v22; // al
  __int64 v23; // r12
  __int64 v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  int flags; // r14d
  __int64 v29; // r14
  int v30; // eax
  _QWORD *v31; // rax
  __int64 v32; // rdi
  _QWORD *v33; // [rsp+10h] [rbp-358h] BYREF
  __int128 v34; // [rsp+18h] [rbp-350h]
  char v35; // [rsp+28h] [rbp-340h]
  __int64 v36; // [rsp+30h] [rbp-338h] BYREF
  __int128 v37; // [rsp+38h] [rbp-330h]
  char v38; // [rsp+48h] [rbp-320h]
  __int128 v39; // [rsp+50h] [rbp-318h]
  __int64 v40; // [rsp+60h] [rbp-308h]
  __int64 v41; // [rsp+68h] [rbp-300h]
  __int64 v42; // [rsp+70h] [rbp-2F8h]
  char v43; // [rsp+78h] [rbp-2F0h] BYREF
  unsigned __int16 v44; // [rsp+7Eh] [rbp-2EAh]
  char v45; // [rsp+1B8h] [rbp-1B0h] BYREF
  __int128 v46; // [rsp+1C0h] [rbp-1A8h] BYREF
  __int64 v47; // [rsp+1D0h] [rbp-198h]
  __int64 v48; // [rsp+1D8h] [rbp-190h]
  __int64 v49; // [rsp+1E0h] [rbp-188h]
  _BYTE v50[40]; // [rsp+1E8h] [rbp-180h] BYREF
  char v51; // [rsp+210h] [rbp-158h] BYREF
  char v52; // [rsp+211h] [rbp-157h]
  char v53; // [rsp+239h] [rbp-12Fh]
  _QWORD v54[8]; // [rsp+328h] [rbp-40h] BYREF

  v7 = *(_WORD *)(a2 + 16);
  v54[0] = __readfsqword(0x28u);
  if ( v7 == 44 )
    goto LABEL_17;
  if ( v7 > 0x2Cu )
  {
    if ( v7 == 269 )
    {
      if ( (unsigned __int8)get_fixup() )
        return 0;
      v40 = -1;
      v12 = &v43;
      v41 = 0;
      v42 = 0;
      v39 = -1;
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
      while ( &v45 != v12 );
      if ( (int)decode_insn() <= 0 )
        return 0;
      v36 = 0;
      v38 = 0;
      v37 = 0;
      v13 = sub_81F70(a1, &v36, v40, v44, 0, 0);
      v14 = v36;
      if ( v13 && (_QWORD)v37 == 1 && *(_WORD *)(v36 + 16) == 23 )
      {
        if ( !(unsigned __int8)get_fixup() )
        {
          sub_23800((__int64)&v46);
          if ( (int)decode_insn() > 0 && v52 == 5 )
          {
            op_offset();
            op_offset();
            v32 = v36;
            if ( !v36 )
              return 1;
            goto LABEL_89;
          }
        }
        v14 = v36;
      }
      if ( v14 )
      {
        *(_QWORD *)&v37 = 0;
        qfree(v14);
      }
      return 0;
    }
    if ( v7 > 0x10Du )
    {
      if ( v7 != 497 || a3 == -1 || a4 )
        return 0;
      get_flags_ex(*(_QWORD *)(a2 + 8), 4);
      if ( !(unsigned __int8)is_defarg() )
        op_offset();
      return 1;
    }
    if ( (unsigned __int16)(v7 - 80) <= 1u )
      goto LABEL_17;
    return 0;
  }
  if ( v7 == 23 )
  {
    if ( a4 )
    {
LABEL_17:
      v47 = -1;
      v10 = v50;
      v48 = 0;
      v49 = 0;
      v46 = -1;
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
      while ( v54 != v10 );
      if ( (int)decode_insn() <= 0 )
        return 0;
      if ( v52 != 5 )
        return 0;
      get_flags_ex(v47, 0);
      if ( a4 == -1 )
        return 0;
      if ( (unsigned __int8)is_defarg() )
      {
        v11 = is_off();
        if ( !a4 || v11 != 1 || !(unsigned __int8)get_refinfo() || 16LL * (_QWORD)v46 != (_QWORD)v37 )
          return 0;
      }
      sub_55C30(v47);
      op_offset();
      return 1;
    }
    return 0;
  }
  if ( v7 == 30 )
  {
    v47 = -1;
    v15 = v50;
    v48 = 0;
    v49 = 0;
    v46 = -1;
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
    while ( v54 != v15 );
    if ( (int)decode_insn() <= 0 )
      return 0;
    v33 = 0;
    v35 = 0;
    v34 = 0;
    v16 = sub_82140(a1, &v33, &v51, &v46, 1, 0);
    v17 = v33;
    if ( !v16 || (unsigned __int8)(v35 - 10) > 1u )
    {
LABEL_40:
      if ( v17 )
      {
        *(_QWORD *)&v34 = 0;
        qfree((__int64)v17);
      }
      return 0;
    }
    v24 = *v33;
    if ( (_QWORD)v34 != 1 )
    {
      v25 = v33 + 3;
      if ( 24LL * (_QWORD)v34 != 24 )
      {
        while ( *v25 == v24 )
        {
          v25 += 3;
          if ( &v33[3 * (_QWORD)v34] == v25 )
            goto LABEL_61;
        }
        goto LABEL_40;
      }
    }
LABEL_61:
    v26 = v24 + 16 * v46;
    v27 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
    if ( v26 != v27 )
    {
      v27 &= v26;
      if ( v26 == -1 )
        v27 = -1;
    }
    flags = get_flags_ex(v27, 0);
    if ( a4 == -1
      || (unsigned __int8)is_defarg()
      && ((unsigned __int8)is_off() != 1 || !a4 || !(unsigned __int8)get_refinfo() || 16LL * (_QWORD)v46 != (_QWORD)v37)
      || (flags & 0x600) != 0x400 )
    {
LABEL_71:
      v17 = v33;
      goto LABEL_40;
    }
    v29 = flags & 0xF0000000;
    if ( v29 == 0x20000000 )
    {
      v30 = 130;
    }
    else
    {
      v30 = 137;
      if ( v29 != 805306368 )
        goto LABEL_71;
    }
    sub_22510(v27, v30 | (a5 << 9), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & a4);
    if ( v33 )
    {
      *(_QWORD *)&v34 = 0;
      qfree((__int64)v33);
    }
    return 1;
  }
  if ( v7 != 14 )
    return 0;
  if ( a4 )
    return 0;
  v47 = -1;
  v48 = 0;
  v18 = v50;
  v49 = 0;
  v46 = -1;
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
  while ( v18 != v54 );
  if ( (int)decode_insn() <= 0 )
    return 0;
  v19 = v53;
  v20 = &v51;
  if ( !v53 )
  {
    v19 = v52;
    v20 = v50;
  }
  if ( v19 != 5 )
    return 0;
  v21 = *((unsigned __int16 *)v20 + 3);
  v36 = 0;
  v38 = 0;
  v37 = 0;
  v22 = sub_81F70(a1, &v36, v47, v21, 0, 0);
  v23 = v36;
  if ( !v22 || (unsigned __int8)(v38 - 10) > 1u )
    goto LABEL_52;
  if ( (_QWORD)v37 != 1 )
  {
    v31 = (_QWORD *)(v36 + 24);
    if ( 24LL * (_QWORD)v37 != 24 )
    {
      while ( *(_QWORD *)v36 == *v31 )
      {
        v31 += 3;
        if ( v31 == (_QWORD *)(v36 + 24 * v37) )
          goto LABEL_83;
      }
      goto LABEL_52;
    }
  }
LABEL_83:
  if ( *(_WORD *)(v36 + 16) != 497 )
  {
LABEL_52:
    if ( v36 )
    {
      *(_QWORD *)&v37 = 0;
      qfree(v36);
    }
    return 0;
  }
  get_flags_ex(*(_QWORD *)(a2 + 8), 0);
  if ( !(unsigned __int8)is_defarg() )
    op_offset();
  get_flags_ex(*(_QWORD *)(v23 + 8), 0);
  if ( !(unsigned __int8)is_defarg() )
    op_offset();
  v32 = v36;
  if ( v36 )
  {
LABEL_89:
    *(_QWORD *)&v37 = 0;
    qfree(v32);
  }
  return 1;
}
