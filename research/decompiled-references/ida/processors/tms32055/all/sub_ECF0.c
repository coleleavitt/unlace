__int64 __fastcall sub_ECF0(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  __int64 result; // rax

  *(_BYTE *)(a3 + 1) = 9;
  LODWORD(result) = a2 & 0x3F;
  if ( (a2 & 0x20) != 0 )
    LODWORD(result) = a2 | 0xFFFFFFE0;
  result = (int)result;
  *(_QWORD *)(a3 + 8) = (int)result;
  return result;
}

