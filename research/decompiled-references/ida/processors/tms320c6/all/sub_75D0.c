__int64 __fastcall sub_75D0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 5;
  *(_WORD *)(a2 + 24) = 44;
  *(_BYTE *)(a2 + 45) = 2;
  *(_BYTE *)(a2 + 32) = (a4 & 1) + 3;
  *(_BYTE *)(a2 + 81) = 1;
  *(_BYTE *)(a2 + 85) = 2;
  result = (a4 >> 7) & 7;
  *(_QWORD *)(a2 + 48) = (8 * (a4 >> 11)) & 0x18
                       | (a4 >> 13)
                       | (32 * (unsigned __int8)(a4 >> 5)) & 0x60
                       | (unsigned int)(unsigned __int8)(a4 >> 10 << 7);
  if ( (a4 & 1) == 1 )
    result = (unsigned int)(result + 32);
  *(_WORD *)(a2 + 86) = result;
  return result;
}

