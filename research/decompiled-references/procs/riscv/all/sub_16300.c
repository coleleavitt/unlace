__int64 __fastcall sub_16300(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (unsigned __int8)(*(_BYTE *)(a3 + 1) - 3) <= 1u )
  {
    if ( !a3 )
      return 0;
  }
  else
  {
    if ( *(_WORD *)a3 != 1282 || *(_WORD *)(a2 + 24) != 19 || *(_BYTE *)(a2 + 41) == 1 && *(_WORD *)(a2 + 46) == 2 )
      return 0;
    a3 = a2 + 80;
  }
  result = 1;
  if ( *(_WORD *)(a3 + 6) != 2 )
  {
    get_func(*(_QWORD *)(a2 + 16));
    return 0;
  }
  return result;
}
