__int64 __fastcall sub_E8D0(__int64 a1, int a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  int v4; // eax
  __int64 v5; // rdi

  if ( a2 <= 15 )
  {
    v4 = a2;
  }
  else
  {
    if ( ((a2 - 91) & 0xFFFFFFFD) != 0 )
      goto LABEL_7;
    v4 = a2 - 48;
  }
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v4);
  if ( v5 )
    return *(_QWORD *)(a3(v5, a4) + 8);
LABEL_7:
  sub_6C80((__int64)"Bad register number passed to mc68k.regval: %d", a2);
  return 0;
}
