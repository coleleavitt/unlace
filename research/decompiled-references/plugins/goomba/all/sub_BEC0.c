__int64 __fastcall sub_BEC0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v4; // rbx
  __int64 result; // rax
  void (__fastcall *v6)(__int64, __int64, __int64); // rax

  v2 = *a2;
  hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
  v4 = hexdsp(438, v2);
  result = 0;
  if ( v4 )
  {
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + 184LL) = 1;
    v6 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp();
    v6(577, v4, 1);
    return 1;
  }
  return result;
}
