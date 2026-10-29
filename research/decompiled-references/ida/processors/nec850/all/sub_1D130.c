__int64 __fastcall sub_1D130(__int64 a1)
{
  __int64 result; // rax

  if ( *(_WORD *)(a1 + 40) != 70 || *(_BYTE *)(a1 + 57) != 5 || *(_BYTE *)(a1 + 137) != 1 || *(_WORD *)(a1 + 142) )
    return 0;
  result = same_value_jpt(a1, a1 + 96, 0);
  if ( !(_BYTE)result )
    return 0;
  *(_WORD *)(*(_QWORD *)(a1 + 376) + 4LL) = -*(_WORD *)(a1 + 64);
  return result;
}

