__int64 __fastcall sub_A990(__int64 a1, __int64 *a2)
{
  __int64 v3; // rbx
  __int64 (__fastcall *hexdsp)(__int64, __int64); // rax
  __int64 v5; // rbx
  void (__fastcall *v6)(__int64, __int64, __int64); // rax

  if ( a2[11] == -1 || !(unsigned __int8)sub_2B720(*(_QWORD *)(a1 + 16) + 1952LL) )
    return 0;
  if ( *((_DWORD *)a2 + 2) == 46 )
  {
    v3 = *a2;
    hexdsp = (__int64 (__fastcall *)(__int64, __int64))get_hexdsp();
    v5 = hexdsp(438, v3);
    if ( v5 )
    {
      v6 = (void (__fastcall *)(__int64, __int64, __int64))get_hexdsp();
      v6(577, v5, 1);
    }
  }
  return 1;
}
