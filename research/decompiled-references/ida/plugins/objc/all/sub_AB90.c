__int64 __fastcall sub_AB90(_QWORD *a1)
{
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *); // rax

  *a1 = off_3BCB8;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  if ( a1[2] )
  {
    a1[3] = 0;
    qfree();
  }
  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *))get_hexdsp();
  return hexdsp(130, a1);
}
