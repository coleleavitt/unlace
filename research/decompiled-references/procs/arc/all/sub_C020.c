__int64 __fastcall sub_C020(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  __int64 result; // rax

  result = 0;
  if ( *(_WORD *)(a2 + 24) == 3 && (*(_QWORD *)(a2 + 80) & 0xFFFF00000000FF00LL) == 0x1C000000000400LL )
  {
    *a3 = 0;
    *a4 = 1;
    return 1;
  }
  return result;
}
