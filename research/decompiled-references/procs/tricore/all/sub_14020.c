__int64 __fastcall sub_14020(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0;
  if ( *(_WORD *)(a4 + 24) == 107 && *(_BYTE *)(a4 + 41) == 1 && *(_BYTE *)(a4 + 81) == 1 && !*(_BYTE *)(a4 + 121) )
  {
    *(_QWORD *)(a2 + 8) = a4 + 40;
    *(_QWORD *)(a2 + 16) = a4 + 80;
    *(_BYTE *)(a2 + 24) = *(_BYTE *)(a4 + 85) < *(_BYTE *)(a4 + 45);
    return 1;
  }
  return result;
}
