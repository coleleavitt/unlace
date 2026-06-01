__int64 __fastcall sub_A210(__int64 a1, __int64 a2, unsigned __int8 *a3, char a4, char a5, double a6)
{
  _QWORD *v9; // rax
  int v10; // edx
  __int16 v12; // ax
  unsigned __int16 v13; // ax
  int v14; // r14d
  __int16 v15; // ax
  __int64 func; // r14
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdi
  int tinfo_udt_member; // r14d
  __int64 v22; // [rsp+0h] [rbp-F8h]
  __int64 v23; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v24; // [rsp+B8h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  switch ( a3[1] )
  {
    case 1u:
    case 0xAu:
      return v24 - __readfsqword(0x28u);
    case 3u:
      goto LABEL_7;
    case 4u:
      sub_9120(a2, *a3);
      v13 = *((_WORD *)a3 + 3);
      if ( v13 == 30
        || (v14 = v13) != 0
        && (v9 = (_QWORD *)get_func()) != nullptr
        && (*v9 != *(_QWORD *)(a1 + 184)
          ? (*(_QWORD *)(a1 + 184) = *v9, v17 = netnode_altval(), *(_DWORD *)(a1 + 192) = v17, v10 = v17)
          : (v10 = *(_DWORD *)(a1 + 192)),
            v14 == v10) )
      {
        if ( (unsigned __int8)getinf_flag() )
        {
          if ( (unsigned int)get_auto_state() == 40 )
          {
            get_flags_ex();
            if ( !(unsigned __int8)is_defarg() )
            {
              if ( (*(_WORD *)(a2 + 86) != 30 || *(_WORD *)(a2 + 24) != 55)
                && (~(unsigned int)get_dword() & 0x4C000000) != 0 )
              {
                func = get_func();
                if ( !func )
                  goto LABEL_7;
                if ( get_frame_var() == -1 )
                {
                  if ( !(unsigned __int8)insn_create_stkvar() || get_frame_var() == -1 )
                    goto LABEL_34;
                  v18 = &qword_14CC0;
                  v19 = 0;
                  v20 = v23 - *(_QWORD *)(func + 48);
                  while ( v20 != *(_DWORD *)v18 )
                  {
                    ++v19;
                    v18 += 2;
                    if ( v19 == 8 )
                      goto LABEL_43;
                  }
                  tinfo_udt_member = find_tinfo_udt_member();
                  clear_tinfo_t();
                  if ( tinfo_udt_member != -1 )
                    set_tinfo_property4();
LABEL_43:
                  if ( v20 < -51 )
                  {
                    v22 = get_func();
                    while ( *(int *)(v22 + 112) <= 3 )
                    {
                      add_regarg();
                      clear_tinfo_t();
                    }
                  }
                }
                op_stkvar();
LABEL_34:
                clear_tinfo_t();
                goto LABEL_7;
              }
              num_flag();
              set_op_type();
            }
          }
        }
      }
      else if ( sub_A070(a1, a2, (__int64)a3) != -1 )
      {
        v15 = *(_WORD *)(a2 + 24);
        if ( v15 == 10 )
          sub_A160(a1);
        else
          insn_add_dref();
        insn_create_op_data();
        if ( a5 )
        {
          get_dword();
          if ( (unsigned __int8)is_mapped() )
            insn_add_dref();
        }
      }
LABEL_7:
      if ( a4 )
        return v24 - __readfsqword(0x28u);
      get_flags_ex();
      if ( !(unsigned __int8)op_adds_xrefs() || insn_add_off_drefs() == -1 )
        return v24 - __readfsqword(0x28u);
      else
        return insn_create_op_data();
    case 5u:
      sub_9120(a2, *a3);
      get_flags_ex();
      if ( !(unsigned __int8)op_adds_xrefs() )
        return v24 - __readfsqword(0x28u);
      return insn_add_off_drefs();
    case 7u:
      return sub_A160(a1);
    default:
      v12 = *(_WORD *)(a2 + 24);
      if ( v12 == 8 || v12 == 110 || v12 == 130 )
        return v24 - __readfsqword(0x28u);
      return sub_9040(a2, a6);
  }
}

