__int64 __fastcall sub_1D810(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v4; // edx

  *(_BYTE *)(a2 + 1) = 8;
  *(_BYTE *)(a2 + 5) = 2;
  *(_WORD *)(a2 + 6) = a3 & 0xF;
  result = (a3 >> 5) & 3;
  *(_BYTE *)(a2 + 33) = (a3 >> 5) & 3;
  if ( (a3 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 28) |= 8u;
    *(_BYTE *)(a2 + 32) = BYTE1(a3) & 0xF;
  }
  else
  {
    v4 = (a3 >> 7) & 0x1F;
    *(_QWORD *)(a2 + 8) = v4;
    if ( !v4 )
    {
      if ( (unsigned __int8)(result - 1) <= 1u )
      {
        *(_QWORD *)(a2 + 8) = 32;
      }
      else if ( (_BYTE)result == 3 )
      {
        *(_BYTE *)(a2 + 33) = 4;
      }
      else
      {
        *(_BYTE *)(a2 + 1) = 1;
      }
    }
  }
  return result;
}

