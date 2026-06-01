__int64 __fastcall sub_128C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a2 + 8);
  if ( *(_BYTE *)(a2 + 1) == 10 && (unsigned __int64)(int)v2 <= 0xF )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(a1, *(&off_2C540 + (int)v2), 32);
  if ( under_debugger )
    BUG();
  interr(10323);
  return sub_12910();
}
