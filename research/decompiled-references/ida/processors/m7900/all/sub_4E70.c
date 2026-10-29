__int64 __fastcall sub_4E70(__int64 a1, __int64 a2, int a3)
{
  int next_byte; // ebp
  unsigned __int8 v4; // al
  char v5; // cl
  char v6; // dl
  __int64 result; // rax

  if ( a3 == 8 )
  {
    LOBYTE(result) = insn_get_next_byte();
    v5 = 0;
    v6 = 0;
    result = (unsigned __int8)result;
  }
  else
  {
    next_byte = (unsigned __int8)insn_get_next_byte();
    v4 = insn_get_next_byte();
    v5 = 1;
    v6 = 1;
    result = next_byte | (v4 << 8);
  }
  *(_BYTE *)(a2 + 1) = 5;
  *(_QWORD *)(a2 + 8) = result;
  *(_BYTE *)(a2 + 5) = v5;
  *(_BYTE *)(a2 + 32) = v6;
  return result;
}

