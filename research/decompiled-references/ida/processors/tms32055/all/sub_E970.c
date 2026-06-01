__int64 __fastcall sub_E970(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 result; // rax

  LODWORD(result) = a2;
  *(_BYTE *)(a3 + 1) = 5;
  *(_BYTE *)(a3 + 5) = 1;
  if ( (a2 & 0x8000) != 0 )
    LODWORD(result) = a2 | 0xFFFF8000;
  *(_BYTE *)(a3 + 32) = 1;
  result = (int)result;
  *(_QWORD *)(a3 + 8) = (int)result;
  return result;
}

