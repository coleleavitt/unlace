__int64 __fastcall sub_33AA50(__int64 a1)
{
  void (*v1)(void); // rax

  sub_13D250(a1, 0);
  sub_35AC50(a1);
  sub_3AD2B0(a1);
  sub_385CE0(a1, -1, 1);
  if ( !(unsigned __int8)register_cfgopts() )
    sub_335D90(&off_4D2B60, 0);
  sub_3C0BD0(0, 0);
  sub_3A1980(a1);
  v1 = *(void (**)(void))(**(_QWORD **)(a1 + 112) + 8LL);
  if ( v1 != nullsub_190 )
    v1();
  sub_38C3F0(a1);
  return sub_325B40(a1);
}

