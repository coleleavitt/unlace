__int64 __fastcall sub_6D060(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbp
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v5; // rsi

  if ( *((_DWORD *)a2 + 2) != 46 )
    return 0;
  v3 = *a2;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp(a1, (const char *)a2);
  v5 = hexdsp(438, v3);
  if ( v5 )
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, v5);
  else
    return 0;
}
