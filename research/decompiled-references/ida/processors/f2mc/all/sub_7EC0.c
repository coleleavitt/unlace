__int64 __fastcall sub_7EC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 next_byte; // al
  __int16 v7; // dx
  __int16 v8; // cx
  bool v9; // sf
  __int16 v10; // ax
  __int64 v11; // rdx
  __int16 v12; // ax
  __int64 result; // rax

  next_byte = insn_get_next_byte();
  *(_BYTE *)(a3 + 1) = 7;
  v7 = next_byte;
  v8 = next_byte | 0xFF80;
  v9 = (next_byte & 0x80u) != 0;
  v10 = *(_WORD *)(a4 + 26);
  if ( !v9 )
    v8 = v7;
  v11 = *(_QWORD *)(a4 + 8);
  *(_BYTE *)(a3 + 5) = 9;
  v12 = v11 + v10;
  LOWORD(v11) = 0;
  result = v11 | (unsigned __int16)(v8 + v12);
  *(_QWORD *)(a3 + 16) = result;
  return result;
}

