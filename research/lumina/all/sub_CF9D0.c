__int64 __fastcall sub_CF9D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_BYTE *)a2 != 0xA7 )
    return 0;
  v3 = *(__int16 *)(a2 + 48);
  if ( (v3 & 0x8000u) != 0LL )
  {
    *(_WORD *)(a1 + 36) |= 2u;
    return 0;
  }
  else
  {
    if ( *(int *)(*(_QWORD *)(a1 + 40) + 4 * v3) < 0 )
      return 0;
    *(_WORD *)(a1 + 36) |= 1u;
    return 0;
  }
}
