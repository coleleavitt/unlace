__int64 __fastcall sub_72E0(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4)
{
  __int64 result; // rax

  *(_BYTE *)(a2 + 41) = 1;
  *(_WORD *)(a2 + 24) = 94;
  *(_BYTE *)(a2 + 45) = 2;
  result = (a4 >> 7) & 0xF;
  *(_BYTE *)(a2 + 32) = (a4 & 1) + 3;
  *(_BYTE *)(a2 + 81) = 5;
  if ( (a4 & 1) == 1 )
    result = (unsigned int)(result + 32);
  *(_BYTE *)(a2 + 85) = 2;
  *(_WORD *)(a2 + 46) = result;
  *(_QWORD *)(a2 + 88) = a4 >> 13;
  return result;
}

