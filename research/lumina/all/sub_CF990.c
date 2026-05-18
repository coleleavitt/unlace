__int64 __fastcall sub_CF990(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  if ( *(_BYTE *)a2 != 0xA7 )
    return 0;
  v3 = *(__int16 *)(a2 + 48);
  if ( (v3 & 0x8000u) != 0LL )
    return 0;
  *(_WORD *)(a1 + 36) |= *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 16 * v3 + 14);
  return 0;
}
