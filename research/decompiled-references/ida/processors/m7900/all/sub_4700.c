__int64 __fastcall sub_4700(__int64 a1, __int64 a2)
{
  int next_byte; // r12d
  int v3; // ebx
  int v4; // ebp
  int v5; // eax
  __int64 result; // rax

  next_byte = (unsigned __int8)insn_get_next_byte();
  v3 = (unsigned __int8)insn_get_next_byte();
  v4 = (unsigned __int8)insn_get_next_byte();
  v5 = insn_get_next_byte();
  *(_BYTE *)(a2 + 1) = 5;
  *(_BYTE *)(a2 + 5) = 2;
  *(_BYTE *)(a2 + 32) = 2;
  result = (v3 << 8) | next_byte | (v4 << 16) | (unsigned int)(v5 << 24);
  *(_QWORD *)(a2 + 8) = (unsigned int)result;
  return result;
}

