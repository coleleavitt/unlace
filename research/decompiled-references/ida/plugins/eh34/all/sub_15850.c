void __fastcall sub_15850(_BYTE *a1, __int64 a2)
{
  bool v2; // zf
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall *)(_BYTE *, __int64, unsigned int *), _BYTE *); // rcx

  v2 = a1[8] == 0;
  *(_QWORD *)a1 = &off_8B970;
  if ( v2 )
  {
    if ( !a1[32] )
    {
LABEL_3:
      operator delete(a1, 0x30u);
      return;
    }
  }
  else
  {
    hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall *)(_BYTE *, __int64, unsigned int *), _BYTE *))get_hexdsp(a1, a2);
    if ( hexdsp )
      hexdsp(575, sub_14200, a1);
    v2 = a1[32] == 0;
    a1[8] = 0;
    if ( v2 )
      goto LABEL_3;
  }
  a1[32] = 0;
  qfree(*((_QWORD *)a1 + 2));
  operator delete(a1, 0x30u);
}

