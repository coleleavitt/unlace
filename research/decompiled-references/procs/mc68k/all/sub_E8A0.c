__int64 __fastcall sub_E8A0(__int64 a1, int a2)
{
  if ( a2 <= 15 )
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * a2);
  if ( ((a2 - 91) & 0xFFFFFFFD) == 0 )
  {
    a2 -= 48;
    return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * a2);
  }
  return 0;
}
