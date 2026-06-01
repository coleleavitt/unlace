__int64 __fastcall sub_DC60(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(_QWORD, __int64), __int64 a4)
{
  __int64 v4; // rax
  __int64 result; // rax

  v4 = *(unsigned __int16 *)(a2 + 6);
  if ( (unsigned __int16)v4 > 0x1Fu )
  {
    sub_A790((__int64)"Bad register number passed to tricore.get_register_value: %d", (unsigned __int16)v4);
    return 0;
  }
  else
  {
    result = *(_QWORD *)(a3(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v4), a4) + 8);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 32) + 24LL) != 8 )
      return (int)result;
  }
  return result;
}

