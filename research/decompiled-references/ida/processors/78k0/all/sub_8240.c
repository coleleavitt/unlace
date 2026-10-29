__int64 __fastcall sub_8240(__int64 a1, __int64 a2)
{
  _QWORD *ioport_bit; // rax

  ioport_bit = (_QWORD *)find_ioport_bit();
  if ( !ioport_bit || ioport_bit[1] <= 1u )
    return 0;
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a2 + 56LL))(a2, *ioport_bit, 34);
  return 1;
}

