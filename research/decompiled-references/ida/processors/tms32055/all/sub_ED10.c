__int64 __fastcall sub_ED10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  int v7; // ebp
  unsigned __int8 byte; // al
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 7;
  v6 = (unsigned __int8)get_byte() << 16;
  v7 = ((unsigned __int8)get_byte() << 8) | v6;
  byte = get_byte();
  *(_BYTE *)(a3 + 5) = 9;
  result = v7 | byte;
  *(_QWORD *)(a3 + 16) = result;
  *(_WORD *)(a4 + 26) += 3;
  return result;
}

