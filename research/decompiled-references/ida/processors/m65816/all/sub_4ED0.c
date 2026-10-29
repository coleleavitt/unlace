__int64 __fastcall sub_4ED0(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // kr10_8
  __int64 v6; // r12
  char v9; // al
  __int16 v10; // ax
  __int64 sreg; // rax
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  v5 = v4;
  v6 = a1;
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 0:
    case 1:
      return v16 - __readfsqword(0x28u);
    case 2:
    case 8:
      sub_5C60(a1, a2, 0);
      goto LABEL_9;
    case 4:
      v10 = *(_WORD *)(a2 + 6);
      if ( v10 == 7 )
      {
LABEL_16:
        sreg = get_sreg();
        if ( sreg != -1 )
        {
          sub_9880(a1, *(_QWORD *)(a2 + 16) + sreg);
LABEL_9:
          insn_create_op_data();
          return insn_add_dref();
        }
      }
      else if ( (unsigned __int16)(v10 - 100) <= 0xCu )
      {
        switch ( *(_WORD *)(a2 + 6) )
        {
          case 'g':
          case 'h':
          case 'i':
          case 'j':
            goto LABEL_24;
          case 'k':
            goto LABEL_9;
          case 'l':
            v14 = map_code_ea();
            sub_9880(a1, v14);
            goto LABEL_9;
          default:
            goto LABEL_16;
        }
      }
LABEL_11:
      set_immd();
      get_flags_ex();
      if ( !(unsigned __int8)is_off() )
        return v16 - __readfsqword(0x28u);
      return insn_add_off_drefs();
    case 5:
      if ( a3 )
        goto LABEL_11;
      if ( under_debugger )
LABEL_28:
        BUG();
      interr();
      return sub_51F0(557);
    case 6:
    case 7:
      sub_5C60(a1, a2, &v15);
      if ( *(_WORD *)(a4 + 24) == 45 )
      {
        insn_add_dref();
        return v16 - __readfsqword(0x28u);
      }
      v9 = has_insn_feature();
      if ( *(_BYTE *)(a2 + 1) == 7 )
      {
        if ( !v9 )
          goto LABEL_7;
      }
      else if ( !v9 )
      {
LABEL_7:
        insn_add_cref();
        return v16 - __readfsqword(0x28u);
      }
      insn_add_cref();
      if ( *(_BYTE *)(a1 + 264) )
        *(_BYTE *)(a1 + 264) = func_does_return();
      return v16 - __readfsqword(0x28u);
    default:
      v6 = v5;
      if ( under_debugger )
        goto LABEL_28;
      interr();
LABEL_24:
      v12 = *(_QWORD *)(a2 + 16);
      v13 = calc_dataseg();
      sub_9880(v6, 16 * v13 + v12);
      goto LABEL_9;
  }
}

