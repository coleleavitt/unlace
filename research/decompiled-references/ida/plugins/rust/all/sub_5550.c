__int64 __fastcall sub_5550(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( *(_WORD *)(a2 + 24) == 92 && *(_BYTE *)(a2 + 41) == 1 )
    return *(unsigned __int16 *)(a2 + 46);
  return result;
}

