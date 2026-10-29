__int64 __fastcall sub_1D5E0(_DWORD *a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  if ( a5 && ((get_flags_ex() & 0x1000) != 0 || (int)decode_insn() <= 0)
    || *(_WORD *)(a3 + 24) != 496
    || *(_BYTE *)(a3 + 41) != 1
    || *(_BYTE *)(a3 + 81) != 5
    || *(_BYTE *)(a3 + 113)
    || *(_QWORD *)(a3 + 104) != a4 )
  {
    return 0;
  }
  *a2 = *(_QWORD *)(a3 + 88);
  *a1 = *(unsigned __int16 *)(a3 + 46);
  return 1;
}

