__int64 __fastcall sub_2F3D0(__int64 a1, __int64 a2, int a3, __int64 (__fastcall *a4)(_BYTE *, __int64), __int64 a5)
{
  _BYTE *v6; // rdi

  if ( a3 <= 31 || a3 == 64 )
  {
    v6 = *(_BYTE **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * a3);
    if ( *v6 == 36 )
      ++v6;
    if ( v6 && a3 <= 31 )
      return *(_QWORD *)(a4(v6, a5) + 8);
  }
  sub_29CC0((__int64)"Bad register number passed to mips.getr: %d", a3);
  return 0;
}
