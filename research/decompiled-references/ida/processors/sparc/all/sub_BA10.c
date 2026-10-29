_BOOL8 __fastcall sub_BA10(__int64 a1, char a2)
{
  return sub_B920(*(_QWORD *)(a1 + 16), 1) && (a2 || (sub_B8C0(*(_QWORD *)(a1 + 16) - 4LL) & 0xC0000000) != 0x40000000)
      || (*(_BYTE *)(a1 + 29) & 1) != 0
      || (get_flags_ex(*(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26), 4) & 0x10000) == 0;
}

