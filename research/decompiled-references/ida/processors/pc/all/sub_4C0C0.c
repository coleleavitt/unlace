__int64 __fastcall sub_4C0C0(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // r14
  int v10; // eax
  int v11; // r12d
  int v12; // eax
  int v13; // r12d
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // r13d
  unsigned __int64 *v20; // rax
  __int64 v21; // rax
  unsigned __int64 v22; // rbp
  int v23; // r14d
  int v24; // r15d
  __int64 v25; // rax
  char v26; // al
  __int64 _64bit; // r15
  unsigned __int64 v28; // r15
  __int64 v29; // rax
  int flags; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v35; // [rsp+18h] [rbp-280h]
  unsigned __int64 v36; // [rsp+28h] [rbp-270h]
  __int64 v37; // [rsp+30h] [rbp-268h]
  unsigned __int64 v38; // [rsp+38h] [rbp-260h]
  unsigned __int64 v39; // [rsp+40h] [rbp-258h]
  __int128 v40; // [rsp+F0h] [rbp-1A8h] BYREF
  __int64 v41; // [rsp+100h] [rbp-198h]
  __int64 v42; // [rsp+108h] [rbp-190h]
  __int64 v43; // [rsp+110h] [rbp-188h]
  char v44; // [rsp+118h] [rbp-180h] BYREF
  unsigned __int64 v45; // [rsp+258h] [rbp-40h] BYREF

  v45 = __readfsqword(0x28u);
  if ( !(unsigned __int8)is_mapped() )
    return 0;
  v7 = getseg();
  v35 = v7;
  if ( !v7 )
    return 0;
  v8 = *a2;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
  v10 = 1 << (*(_BYTE *)(v7 + 43) + 4);
  v11 = v10 + 7;
  if ( v10 >= 0 )
    v11 = v10;
  v12 = nbits();
  v13 = v11 >> 3;
  v14 = v12 + 14;
  v15 = v12 + 7;
  if ( v15 >= 0 )
    v14 = v15;
  v16 = v13 / (v14 >> 3);
  v17 = 1;
  if ( v16 )
    v17 = v16;
  v18 = *((unsigned __int16 *)a2 + 12);
  if ( v18 == 17 || v18 == 87 )
  {
    v37 = -1;
    v19 = v17 + 2;
  }
  else
  {
    v37 = v9 & (16 * v8);
    v19 = v17;
  }
  v38 = *(_QWORD *)v35;
  v39 = *(_QWORD *)(v35 + 8);
  if ( a4 == -1 )
  {
    v32 = getseg();
    if ( !v32 )
      return 0;
    a4 = *(_QWORD *)(v32 + 8);
  }
  v36 = (a4 - a3) / v19;
  if ( v36 > 1 )
  {
    if ( *((_BYTE *)a2 + 41) != 2 || *((_BYTE *)a2 + 72) )
    {
      getseg();
      get_segm_name();
    }
    else
    {
      v36 = 1;
    }
  }
  v41 = -1;
  v20 = (unsigned __int64 *)&v44;
  v42 = 0;
  v43 = 0;
  v40 = -1;
  do
  {
    *(_WORD *)v20 = 0;
    v20 += 5;
    *((_WORD *)v20 - 19) = 0;
    *((_WORD *)v20 - 18) = 0;
    *((_DWORD *)v20 - 2) = 0;
    *((_WORD *)v20 - 17) = 0;
    *((_OWORD *)v20 - 2) = 0;
    *(v20 - 2) = 0;
  }
  while ( v20 != &v45 );
  if ( !v36 )
    return 0;
  if ( !v19 )
    goto LABEL_79;
  v21 = get_flags_ex() & 0x600;
  if ( v21 == 1024 )
  {
    if ( v19 == get_data_elsize() )
    {
LABEL_26:
      if ( v19 != 1 )
      {
        v22 = a3;
        v23 = 1;
        v24 = 1;
        v5 = 0;
        goto LABEL_30;
      }
      goto LABEL_79;
    }
    return 0;
  }
  if ( v21 == 1536 )
    return 0;
  if ( v21 != 512 )
    goto LABEL_26;
  if ( (get_flags_ex() & 0x600) == 0x200 )
    prev_not_tail();
  flags = get_flags_ex();
  if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x60000000 )
    return 0;
  get_strid();
  if ( !(unsigned __int8)get_type_by_tid() )
  {
LABEL_69:
    clear_tinfo_t();
    return 0;
  }
  if ( (unsigned int)find_tinfo_udt_member() == -1 || v19 != get_tinfo_size() )
  {
    clear_tinfo_t();
    goto LABEL_69;
  }
  clear_tinfo_t();
  clear_tinfo_t();
  if ( v19 == 1 )
    goto LABEL_79;
  v33 = get_flags_ex() & 0x400;
  v5 = v33;
  if ( v33 )
    return 0;
  if ( v19 == 2 )
  {
LABEL_79:
    v22 = a3;
    v5 = 0;
    while ( 1 )
    {
LABEL_36:
      v26 = *(_BYTE *)(v35 + 43);
      if ( v26 == 2 )
      {
        _64bit = get_64bit();
      }
      else if ( v26 == 1 )
      {
        _64bit = (unsigned int)get_32bit();
      }
      else
      {
        _64bit = (unsigned int)get_16bit();
      }
      if ( _64bit == 0xFFFFFFFFLL || _64bit == 0 || _64bit == 0xFFFF )
        return v5;
      if ( v37 != -1 )
        break;
      get_word();
      if ( !get_segm_by_sel() )
        return v5;
      v31 = _64bit + 16 * sel2para();
      v28 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
      if ( v31 == v28 )
        goto LABEL_45;
      v28 &= v31;
      if ( v31 != -1 )
        goto LABEL_45;
LABEL_48:
      v29 = getseg();
      if ( !v29
        || *(_BYTE *)(v29 + 184) != 1
        && ((((get_flags_ex() & 0x600) - 512) & 0xFFFFFFFFFFFFFC00LL) == 0
         || !(unsigned int)decode_insn()
         || !sub_35B20(a1, (__int64)&v40, 1)) )
      {
        return v5;
      }
      if ( (unsigned __int8)is_planned_ea() )
        return v5;
      v22 += v19;
      if ( get_next_planned_ea() < v22 )
        return v5;
      if ( ++v5 >= v36 )
        return v5;
      if ( v19 )
      {
        v23 = 0;
        v25 = get_flags_ex();
        v24 = 0;
        goto LABEL_31;
      }
    }
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (v37 + _64bit);
    if ( !*(_BYTE *)(v35 + 43) && (v28 < v38 || v28 >= v39) )
      return v5;
LABEL_45:
    if ( v28 >= a3 && v28 < a3 + v36 * v19 )
      v36 = (v28 - a3) / v19;
    goto LABEL_48;
  }
  v22 = a3;
  v23 = 2;
  v24 = 2;
LABEL_30:
  while ( 1 )
  {
    v25 = get_flags_ex();
    if ( v5 )
      break;
    if ( (v25 & 0x400) != 0 )
      goto LABEL_35;
LABEL_29:
    v23 = ++v24;
    if ( v24 == v19 )
      goto LABEL_36;
  }
LABEL_31:
  if ( (v25 & 0x600) == 0 )
    goto LABEL_29;
  if ( (get_flags_ex() & 0x600) == 0x200 )
    prev_not_tail();
  get_flags_ex();
  if ( v19 == get_data_elsize() )
    goto LABEL_29;
LABEL_35:
  if ( v23 == v19 )
    goto LABEL_36;
  return v5;
}
