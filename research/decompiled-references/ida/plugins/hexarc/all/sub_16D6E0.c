unsigned __int64 __fastcall sub_16D6E0(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdi

  v1 = *(_BYTE *)(a1 + 355) == 0;
  *(_QWORD *)a1 = off_4AA680;
  if ( !v1 && !*(_BYTE *)(a1 + 350) )
    sub_1171D0(*(_QWORD *)(a1 + 64), a1 + 72);
  v3 = *(_QWORD *)(a1 + 288);
  *(_QWORD *)(a1 + 64) = 0;
  *(_OWORD *)(a1 + 320) = 0;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 296) = 0;
    qfree();
  }
  qfree();
  if ( *(_QWORD *)(a1 + 248) )
  {
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
  }
  qfree();
  if ( *(_QWORD *)(a1 + 208) )
  {
    *(_QWORD *)(a1 + 216) = 0;
    qfree();
  }
  qfree();
  if ( *(_QWORD *)(a1 + 168) )
  {
    *(_QWORD *)(a1 + 176) = 0;
    qfree();
  }
  qfree();
  sub_1166E0(a1 + 136);
  sub_1166E0(a1 + 120);
  return sub_1166E0(a1 + 104);
}

