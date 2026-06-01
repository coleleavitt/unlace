__int64 __fastcall sub_650C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v4; // dl
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 5;
  *(_BYTE *)(a3 + 2) = *(_WORD *)(a2 + 26);
  v4 = *(_BYTE *)(a3 + 5);
  if ( v4 == 2 )
    goto LABEL_9;
  if ( v4 > 2u )
  {
    if ( v4 != 7 )
    {
      if ( under_debugger )
        BUG();
      interr();
      return sub_65170(244);
    }
    if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0
      && (*(_BYTE *)(a2 + 33) & 8) != 0
      && *(_WORD *)(a2 + 24) == 122
      && !*(_BYTE *)(a1 + 5220) )
    {
      result = insn_get_next_qword();
      goto LABEL_5;
    }
LABEL_9:
    result = (int)insn_get_next_dword();
    *(_QWORD *)(a3 + 8) = (int)result;
    return result;
  }
  if ( v4 )
  {
    result = (__int16)insn_get_next_word();
LABEL_5:
    *(_QWORD *)(a3 + 8) = result;
    return result;
  }
  result = (unsigned __int8)insn_get_next_byte();
  *(_QWORD *)(a3 + 8) = (unsigned __int8)result;
  return result;
}

