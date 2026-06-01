__int64 __fastcall sub_B9E0(__int64 a1, __int64 a2, __int16 a3)
{
  *(_BYTE *)(*(_QWORD *)(a1 + 248) + 1LL) = 5;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) = (a3 << 8) & 0xF00;
  *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL) |= HIBYTE(a3);
  return 1;
}

