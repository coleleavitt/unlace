__int64 __fastcall sub_56C0(__int64 a1, __int64 a2, __int16 a3, char a4, char a5, __int64 a6, __int64 a7)
{
  unsigned __int8 next_byte; // al
  unsigned __int64 v10; // rax
  unsigned __int8 v11; // al

  *(_WORD *)(a2 + 24) = a3;
  *(_BYTE *)(a6 + 5) = a4;
  *(_BYTE *)(a7 + 5) = a4;
  next_byte = insn_get_next_byte();
  *(_QWORD *)(a7 + 16) = next_byte;
  if ( a5 )
  {
    *(_BYTE *)(a7 + 1) = (next_byte & 1) + 8;
    v10 = sub_55F0(a1, *(_QWORD *)(a2 + 16), next_byte & 0xFE);
  }
  else
  {
    *(_BYTE *)(a7 + 1) = 10;
    *(_QWORD *)(a7 + 8) = sub_55F0(a1, *(_QWORD *)(a2 + 16), next_byte);
    *(_QWORD *)(a7 + 16) = (unsigned __int16)insn_get_next_word();
    v10 = *(_QWORD *)(a7 + 16) | ((unsigned int)insn_get_next_byte() << 16) & 0xFF0000;
  }
  *(_QWORD *)(a7 + 16) = v10;
  *(_BYTE *)(a6 + 1) = 2;
  v11 = insn_get_next_byte();
  *(_QWORD *)(a6 + 16) = sub_55F0(a1, *(_QWORD *)(a2 + 16), v11);
  return *(unsigned __int16 *)(a2 + 26);
}

