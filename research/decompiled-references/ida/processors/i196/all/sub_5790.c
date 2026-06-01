unsigned __int64 __fastcall sub_5790(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v4; // eax
  unsigned __int8 v6; // al
  unsigned __int64 result; // rax
  unsigned __int8 v8; // al
  __int64 next_word; // rax
  unsigned __int8 next_byte; // al

  v4 = a3 & 3;
  switch ( v4 )
  {
    case 2:
      *(_BYTE *)(a4 + 5) = 1;
      next_byte = insn_get_next_byte();
      *(_QWORD *)(a4 + 16) = next_byte;
      *(_BYTE *)(a4 + 1) = (next_byte & 1) + 8;
      result = sub_55F0(a1, *(_QWORD *)(a2 + 16), next_byte & 0xFE);
      *(_QWORD *)(a4 + 16) = result;
      break;
    case 3:
      *(_BYTE *)(a4 + 5) = 1;
      *(_BYTE *)(a4 + 1) = 10;
      v8 = insn_get_next_byte();
      *(_QWORD *)(a4 + 8) = v8;
      if ( (v8 & 1) != 0 )
        next_word = (unsigned __int16)insn_get_next_word();
      else
        next_word = (unsigned __int8)insn_get_next_byte();
      *(_QWORD *)(a4 + 16) = next_word;
      result = sub_55F0(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFFELL);
      *(_QWORD *)(a4 + 8) = result;
      break;
    case 1:
      *(_BYTE *)(a4 + 1) = 5;
      if ( (a3 & 0x10) != 0 || (a3 & 0xFC) == 0xAC )
      {
        result = (unsigned __int8)insn_get_next_byte();
        *(_QWORD *)(a4 + 8) = (unsigned __int8)result;
      }
      else
      {
        *(_BYTE *)(a4 + 5) = 1;
        result = (unsigned __int16)insn_get_next_word();
        *(_QWORD *)(a4 + 8) = (unsigned __int16)result;
      }
      break;
    default:
      *(_BYTE *)(a4 + 1) = 2;
      v6 = insn_get_next_byte();
      result = sub_55F0(a1, *(_QWORD *)(a2 + 16), v6);
      *(_QWORD *)(a4 + 16) = result;
      break;
  }
  return result;
}

