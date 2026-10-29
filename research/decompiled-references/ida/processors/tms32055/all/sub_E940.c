__int64 __fastcall sub_E940(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 result; // rax

  LODWORD(result) = a2;
  *(_BYTE *)(a3 + 1) = 5;
  *(_BYTE *)(a3 + 5) = 0;
  if ( (a2 & 0x80) != 0 )
    LODWORD(result) = a2 | 0xFFFFFF80;
  *(_BYTE *)(a3 + 32) = 1;
  result = (int)result;
  *(_QWORD *)(a3 + 8) = (int)result;
  return result;
}

