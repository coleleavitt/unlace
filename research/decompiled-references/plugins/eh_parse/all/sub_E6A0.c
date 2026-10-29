__int64 __fastcall sub_E6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 fchunk; // rbp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 func_ranges; // rax
  __int64 that; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  char v21; // al
  const char *v22; // rdx
  __int64 v23; // [rsp+0h] [rbp-D8h] BYREF
  __int64 item_end; // [rsp+8h] [rbp-D0h]
  __int64 v25; // [rsp+10h] [rbp-C8h]
  __int64 v26; // [rsp+18h] [rbp-C0h]
  __int64 v27; // [rsp+20h] [rbp-B8h]
  int v28; // [rsp+28h] [rbp-B0h]
  __int128 v29; // [rsp+30h] [rbp-A8h]
  __int64 v30; // [rsp+40h] [rbp-98h]
  __int64 v31; // [rsp+48h] [rbp-90h]
  int v32; // [rsp+50h] [rbp-88h]
  __int64 v33; // [rsp+58h] [rbp-80h]
  int v34; // [rsp+60h] [rbp-78h]
  __int64 v35; // [rsp+68h] [rbp-70h]
  int v36; // [rsp+70h] [rbp-68h]
  __int64 v37; // [rsp+78h] [rbp-60h]
  int v38; // [rsp+80h] [rbp-58h]
  __int64 v39; // [rsp+88h] [rbp-50h]
  unsigned __int64 v40; // [rsp+98h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  fchunk = get_fchunk(a4);
  v7 = (_QWORD *)getseg(a4);
  v9 = v7;
  if ( !fchunk || fchunk == a3 )
  {
    if ( (~(unsigned __int16)get_flags_ex(a4, 4, v8) & 0x600) != 0 )
    {
      create_insn(a4, 0);
      if ( fchunk )
        goto LABEL_30;
    }
    else if ( fchunk )
    {
      if ( !v9 || fchunk == a3 )
        return 0;
      goto LABEL_18;
    }
    LOWORD(v28) = 0;
    v23 = a4;
    item_end = -1;
    v25 = 512;
    v26 = -1;
    v27 = 0;
    v30 = 0xFFFFFFFFLL;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v29 = 0;
    if ( (~(unsigned __int16)get_flags_ex(a4, 4, v15) & 0x600) == 0 )
      item_end = get_item_end(
                   a4,
                   4,
                   v16,
                   v17,
                   v18,
                   v19,
                   v23,
                   item_end,
                   v25,
                   v26,
                   v27,
                   v28,
                   v29,
                   *((_QWORD *)&v29 + 1),
                   v30,
                   v31,
                   v32,
                   v33,
                   v34,
                   v35,
                   v36,
                   v37,
                   v38,
                   v39);
    find_func_bounds(&v23, 1);
LABEL_30:
    if ( !v9 )
      return 0;
    if ( fchunk == a3 )
      return 0;
    goto LABEL_21;
  }
  if ( *(_QWORD *)fchunk != a4 )
  {
    if ( (~(unsigned __int16)get_flags_ex(a4, 4, v8) & 0x600) == 0 )
    {
      if ( !v9 )
        return 0;
LABEL_18:
      if ( !(unsigned __int8)getinf_flag(10, 256) )
        return 0;
      goto LABEL_22;
    }
    create_insn(a4, 0);
    if ( !v9 )
      return 0;
LABEL_21:
    if ( !(unsigned __int8)getinf_flag(10, 256) )
      return 0;
LABEL_22:
    if ( !(unsigned __int8)append_func_tail(a3, a4, -1) )
      return 0;
    goto LABEL_23;
  }
  if ( v7 )
  {
    if ( *v7 == a4 || *(char *)(fchunk + 17) < 0 )
    {
      if ( (~(unsigned __int16)get_flags_ex(a4, 4, v8) & 0x600) == 0 )
        goto LABEL_18;
      create_insn(a4, 0);
      goto LABEL_21;
    }
    v11 = *(_QWORD *)(fchunk + 8);
    auto_unmark(a4, v11, 30);
    if ( (unsigned __int8)del_func(a4) )
    {
      set_abits(a4, 0x20000000);
      if ( (~(unsigned __int16)get_flags_ex(a4, 4, v20) & 0x600) != 0 )
        create_insn(a4, 0);
      if ( (unsigned __int8)getinf_flag(10, 256) )
        append_func_tail(a3, a4, v11);
LABEL_23:
      if ( !*(_BYTE *)(a2 + 572) )
        *(_BYTE *)(a2 + 572) = 1;
      return 1;
    }
    if ( (debug & 8) != 0 )
    {
      v21 = is_func_locked(fchunk);
      v22 = "- UNKNOWN REASON!";
      if ( v21 )
        v22 = "because of locking";
      sub_E3D0((__int64)"%a: not deleted %s\n", a4, v22);
    }
    v12 = *(_QWORD *)(fchunk + 16);
    BYTE1(v12) &= ~4u;
    *(_QWORD *)(fchunk + 16) = v12 | 0x40000;
    update_func(fchunk);
    func_ranges = get_func_ranges(0, fchunk);
    if ( func_ranges == -1 )
      return 0;
    that = prev_that(func_ranges, *(_QWORD *)fchunk, sub_E0F0, 0);
    auto_mark_range(that, that + 1, 40);
    return 0;
  }
  else
  {
    if ( (~(unsigned __int16)get_flags_ex(a4, 4, v8) & 0x600) == 0 )
      return 0;
    create_insn(a4, 0);
    return 0;
  }
}
