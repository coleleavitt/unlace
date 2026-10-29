__int64 __fastcall sub_9F60(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx

  result = *(unsigned __int8 *)(a2 + 1);
  switch ( *(_BYTE *)(a2 + 1) )
  {
    case 1:
    case 3:
    case 8:
    case 9:
    case 0xA:
      return result;
    case 4:
      goto LABEL_4;
    case 5:
      if ( !a4 )
        goto LABEL_17;
LABEL_4:
      set_immd();
      if ( (unsigned __int8)is_defarg() )
        goto LABEL_11;
      v5 = *(unsigned __int16 *)(a1 + 24);
      if ( (unsigned __int16)v5 > 0x4Cu )
      {
LABEL_19:
        if ( (unsigned __int16)(v5 - 156) > 1u )
          goto LABEL_11;
LABEL_10:
        set_op_type();
        goto LABEL_11;
      }
      if ( (unsigned __int16)v5 > 0xEu )
      {
        v6 = 0x204100B00000480DLL;
        if ( !_bittest64(&v6, (unsigned int)(v5 - 15)) )
        {
          if ( (_WORD)v5 != 44 )
            goto LABEL_11;
          get_dword();
        }
        goto LABEL_10;
      }
      if ( (unsigned __int16)(v5 - 7) <= 6u )
      {
        v7 = 14976;
        if ( _bittest64(&v7, v5) )
          goto LABEL_10;
      }
LABEL_11:
      result = op_adds_xrefs();
      if ( (_BYTE)result )
        return insn_add_off_drefs();
      return result;
    case 7:
      sub_9E80(*(_QWORD *)(a2 + 16) + 16LL * *(_QWORD *)a1);
      return insn_add_cref();
    default:
LABEL_17:
      if ( under_debugger )
        BUG();
      LOWORD(v5) = interr();
      goto LABEL_19;
  }
}

