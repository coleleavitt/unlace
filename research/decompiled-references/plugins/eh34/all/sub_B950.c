__int64 __fastcall sub_B950(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // rax
  int v6; // eax

  if ( *(_DWORD *)a2 != 1 )
    return 0;
  v2 = *(_QWORD *)(a2 + 8);
  if ( *(int *)(v2 + 8) > 69 )
    return 0;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp();
  v4 = hexdsp(462, a1 + 16, v2);
  if ( !v4 )
    return 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)(v4 + 8);
    if ( v6 == 57 )
      break;
    if ( v6 != 48 )
      return 0;
    v5 = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp();
    v4 = v5(462, a1 + 16, v4);
  }
  return v4;
}
