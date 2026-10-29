__int64 __fastcall sub_33ECD0(__int64 a1, double a2)
{
  __int64 v3; // rdi
  void (*v4)(); // rax

  sub_140C90(a1, 0);
  sub_35EDD0(a1);
  sub_3B1430(a1, 0);
  sub_389E60(a1, -1, 1);
  if ( !(unsigned __int8)register_cfgopts() )
    sub_33A010(a2);
  sub_3C4D50(0, a2);
  sub_3A5B00(a1);
  v3 = *(_QWORD *)(a1 + 112);
  v4 = *(void (**)())(*(_QWORD *)v3 + 8LL);
  if ( v4 != nullsub_190 )
    ((void (__fastcall *)(__int64, _QWORD))v4)(v3, 0);
  sub_390570(a1);
  return sub_329D50(a1);
}

