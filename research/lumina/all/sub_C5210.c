__int64 __fastcall sub_C5210(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0;
  if ( (*a2 & 0x80000000000FFLL) == 0xAC )
  {
    *(_WORD *)(a1 + 36) = 0;
    return 2;
  }
  return result;
}
