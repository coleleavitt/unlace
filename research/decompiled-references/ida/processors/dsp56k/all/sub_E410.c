__int64 __fastcall sub_E410(__int64 a1, __int64 a2, char a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 33LL) |= 2u;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 16LL) = a3 & 0x3F;
  sub_E190(a1, a2);
  *(_QWORD *)(a1 + 248) += 40LL;
  return 1;
}

