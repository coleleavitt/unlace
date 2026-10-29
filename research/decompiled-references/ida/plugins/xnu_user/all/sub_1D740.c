__int64 __fastcall sub_1D740(_QWORD *a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v7; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a2 & 0xFFFFFFFFFFC00000LL;
  v4 = v3;
  v8[1] = __readfsqword(0x28u);
  v7 = 0;
  while ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, __int64 *, __int64, _QWORD))(*a1 + 288LL))(
            a1,
            v4,
            &v7,
            8,
            0) != 8
       || v7 != 0x5453595320494249LL )
  {
    v4 -= 0x400000LL;
    if ( v4 == v3 - 0x8000000 )
      return 0;
  }
  v5 = *a1;
  v8[0] = 0;
  if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, _QWORD *, __int64, _QWORD))(v5 + 288))(
         a1,
         v4 + 8,
         v8,
         8,
         0) != 8 )
    return 0;
  a1[260] = v8[0];
  set_debug_name();
  sub_1BF10((__int64)a1, (__int64)"%a: EFI_SYSTEM_TABLE\n", a3);
  return 1;
}

