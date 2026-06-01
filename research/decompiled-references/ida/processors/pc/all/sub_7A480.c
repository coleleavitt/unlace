__int64 __fastcall sub_7A480(__int128 a1, unsigned __int64 a2, unsigned int a3, double a4, double a5)
{
  __int64 v5; // rbx
  __int64 func; // rax
  __int64 v8; // r14
  unsigned int does_return; // ebp
  __int64 ea_name; // rax
  char *v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rax
  __int16 v16; // dx
  char v17; // al
  __int64 *v18; // rax
  __int64 v19; // r14
  unsigned __int64 *v20; // rax
  __int64 v21; // [rsp+10h] [rbp-1C8h] BYREF
  __int64 v22; // [rsp+18h] [rbp-1C0h] BYREF
  char *s1; // [rsp+20h] [rbp-1B8h] BYREF
  __int128 v24; // [rsp+28h] [rbp-1B0h]
  __int128 v25; // [rsp+40h] [rbp-198h]
  __int64 v26; // [rsp+50h] [rbp-188h]
  __int64 v27; // [rsp+58h] [rbp-180h]
  __int64 v28; // [rsp+60h] [rbp-178h]
  char v29; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v30; // [rsp+1A8h] [rbp-30h] BYREF

  v5 = *((_QWORD *)&a1 + 1);
  v30 = __readfsqword(0x28u);
  v21 = -1;
  v22 = -1;
  if ( (_BYTE)a3 )
    goto LABEL_2;
  does_return = a3;
  if ( sub_79480(a1, *((__int64 *)&a1 + 1), a2, a4, a5) )
  {
    set_abits();
    add_cref();
    return does_return;
  }
  v16 = *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL);
  if ( v16 != 16 )
  {
LABEL_26:
    v17 = *(_BYTE *)(*((_QWORD *)&a1 + 1) + 41LL);
    if ( v16 != 17 && v17 == 6 || (unsigned __int8)(v17 - 6) <= 1u )
      insn_add_cref();
    else
      add_cref();
LABEL_2:
    func = get_func();
    v8 = func;
    if ( func
      && (*(_BYTE *)(func + 17) & 4) == 0
      && (unsigned __int8)getinf_flag()
      && (unsigned int)get_auto_state() == 40
      && (int)get_func_chunknum() >= 0 )
    {
      *((_QWORD *)&a1 + 1) = v8;
      if ( (unsigned __int8)sub_79D80(a1, v5, a2, (__int64 *)&s1, 0) )
        sub_68E80(v8, v5, s1);
      v8 = get_func();
    }
    if ( (unsigned int)sub_78DA0(a1, 0, a2, 1u, 0, a4, a5) != 1 )
    {
      if ( *(_WORD *)(v5 + 24) != 16 )
      {
LABEL_6:
        does_return = func_does_return();
        if ( (_BYTE)does_return )
        {
          if ( (unsigned __int16)get_word() == 0xCCCC )
          {
            does_return = 0;
          }
          else if ( !get_func() && (unsigned __int8)get_byte() == 0xCC && v8 )
          {
            LOBYTE(does_return) = *(_QWORD *)(v5 + 16) + (unsigned __int64)*(unsigned __int16 *)(v5 + 26) + 1 < *(_QWORD *)(v8 + 8);
          }
        }
        goto LABEL_7;
      }
      v24 = 0;
      s1 = 0;
      ea_name = get_ea_name();
      v12 = s1;
      if ( ea_name <= 0 || !(_QWORD)v24 || strcmp(s1, "runtime.morestack_noctxt") && strcmp(v12, "runtime.morestack") )
      {
        if ( v12 )
        {
          *(_QWORD *)&v24 = 0;
          qfree();
        }
        goto LABEL_6;
      }
      if ( v12 )
      {
        *(_QWORD *)&v24 = 0;
        qfree();
      }
      v13 = get_func();
      v14 = v13;
      if ( v13 )
      {
        v15 = *(_QWORD *)(v13 + 16);
        if ( (v15 & 0x241) != 0x40 )
        {
          *(_QWORD *)(v14 + 16) = v15 & 0xFFFFFFFFFFFFFDBELL | 0x40;
          update_func();
        }
      }
    }
    does_return = 1;
LABEL_7:
    set_noret_insn();
    auto_apply_type();
    return does_return;
  }
  v18 = (__int64 *)get_func();
  if ( !sub_701C0(a1, v18, a2, &v21, &v22) )
  {
    v16 = *(_WORD *)(*((_QWORD *)&a1 + 1) + 24LL);
    goto LABEL_26;
  }
  v19 = v21;
  set_abits();
  add_cref();
  if ( v19 != -1 )
  {
    s1 = (char *)(*(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL) + *(unsigned __int16 *)(*((_QWORD *)&a1 + 1) + 26LL) - v19);
    netnode_supset();
    v26 = -1;
    v20 = (unsigned __int64 *)&v29;
    v25 = -1;
    v27 = 0;
    v28 = 0;
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
    while ( &v30 != v20 );
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 && (int)decode_insn() > 0 && (_WORD)v27 == 159 )
      add_cref();
    sub_70700(a1, 0.0, a5, *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL), a2, v22);
  }
  return does_return;
}
