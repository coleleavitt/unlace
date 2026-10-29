__int64 __fastcall sub_57D0(__int64 a1, __int64 a2, char a3)
{
  int v3; // edx
  __int64 result; // rax
  unsigned __int16 next_word; // bp
  int next_byte; // r12d

  v3 = a3 & 3;
  *(_BYTE *)(a2 + 41) = 5;
  switch ( v3 )
  {
    case 2:
      *(_BYTE *)(a2 + 45) = 1;
      result = (__int16)insn_get_next_word();
      *(_QWORD *)(a2 + 48) = (__int16)result;
      break;
    case 3:
      *(_BYTE *)(a2 + 45) = 2;
      next_word = insn_get_next_word();
      next_byte = (unsigned __int8)insn_get_next_byte();
      if ( (unsigned __int8)getinf_flag() )
        result = next_byte | ((__int16)next_word << 8);
      else
        result = next_word | ((char)next_byte << 16);
      *(_QWORD *)(a2 + 48) = result;
      break;
    case 1:
      *(_BYTE *)(a2 + 45) = 0;
      result = (char)insn_get_next_byte();
      *(_QWORD *)(a2 + 48) = (char)result;
      break;
    default:
      *(_BYTE *)(a2 + 45) = 2;
      result = (int)insn_get_next_dword();
      *(_QWORD *)(a2 + 48) = (int)result;
      break;
  }
  return result;
}

