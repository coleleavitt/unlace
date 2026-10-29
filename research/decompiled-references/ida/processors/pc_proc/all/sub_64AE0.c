__int64 __fastcall sub_64AE0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 result; // rax
  __int16 v7; // dx
  unsigned __int8 next_byte; // al

  if ( *(_BYTE *)(a1 + 5220) )
  {
    result = *(unsigned __int8 *)(a1 + 5200);
  }
  else
  {
    *(_BYTE *)(a1 + 5220) = 1;
    next_byte = insn_get_next_byte();
    *(_DWORD *)(a1 + 5196) = next_byte;
    result = ((int)next_byte >> 3) & 7;
    *(_DWORD *)(a1 + 5200) = result;
  }
  v7 = result;
  if ( (*(_BYTE *)(a2 + 28) & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 4) != 0 )
  {
    result = (unsigned int)result | 8;
    *(_BYTE *)(a3 + 1) = a4;
    *(_WORD *)(a3 + 6) = result;
  }
  else
  {
    *(_WORD *)(a3 + 6) = result;
    if ( (*(_WORD *)(a2 + 29) & 0x140) == 0 && !*(_BYTE *)(a3 + 5) && (unsigned int)result <= 7 )
    {
      result = (unsigned int)(result + 16);
      *(_WORD *)(a3 + 6) = v7 + 16;
      if ( *(_BYTE *)(a2 + 33) )
      {
        if ( (__int16)result > 19 )
          *(_WORD *)(a3 + 6) = v7 + 20;
      }
    }
    *(_BYTE *)(a3 + 1) = a4;
  }
  return result;
}

