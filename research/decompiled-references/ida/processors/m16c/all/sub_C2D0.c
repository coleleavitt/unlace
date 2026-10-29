__int64 __fastcall sub_C2D0(__int64 a1)
{
  __int64 v1; // r12
  int v2; // ebp

  v1 = *(_QWORD *)(a1 + 4352);
  v2 = *(_DWORD *)(a1 + 4360);
  sub_AE30(a1);
  *(_QWORD *)(v1 + 40LL * v2 + 48) |= ((unsigned __int16)get_byte() >> 4 << 8) & 0x100;
  return 1;
}

