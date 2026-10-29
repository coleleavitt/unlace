__int64 __fastcall sub_C930(__int64 a1, int a2)
{
  switch ( a2 )
  {
    case 2:
      return (unsigned __int16)insn_get_next_word();
    case 4:
      return (unsigned int)insn_get_next_dword();
    case 1:
      return (unsigned __int8)insn_get_next_byte();
  }
  if ( under_debugger )
    BUG();
  interr();
  return sub_C9B0(10350);
}

