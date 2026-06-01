__int64 __fastcall sub_4B00(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  signed int v3; // eax

  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 9;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 32LL) = 0;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 0x10u;
  v3 = a3 & 0x7F;
  if ( (a3 & 0x40) != 0 )
    v3 = a3 | 0xFFFFFF80;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = v3;
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 4u;
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

