__int64 __fastcall sub_438C0(__int64 a1, __int64 a2)
{
  __int64 *v2; // rax
  __int64 v4; // rsi
  _BYTE *v5; // rdi
  void (__fastcall *hexdsp)(__int64, __int64, __int64); // rax

  v2 = *(__int64 **)(a2 + 32);
  v4 = *(_QWORD *)(a1 + 168);
  v5 = *(_BYTE **)(a1 + 160);
  if ( (unsigned __int8)sub_2FBC0(v5, v4, *v2) )
  {
    hexdsp = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp(v5, v4);
    hexdsp(577, a2, 1);
  }
  return 1;
}

