__int64 __fastcall sub_49A0(__int64 a1, __int64 a2)
{
  int wide_byte; // eax

  wide_byte = get_wide_byte();
  *(_BYTE *)(a2 + 1) = 5;
  *(_BYTE *)(a2 + 5) = 0;
  *(_QWORD *)(a2 + 8) = wide_byte;
  *(_WORD *)(a2 + 32) = 0;
  ++*(_WORD *)(a1 + 26);
  return 0;
}

