__int64 __fastcall sub_389E0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *); // rax

  *a1 = off_8C260;
  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3);
  }
  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *))get_hexdsp(v3, a2);
  return hexdsp(130, a1);
}
