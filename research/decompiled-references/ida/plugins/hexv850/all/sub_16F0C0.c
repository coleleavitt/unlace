__int64 __fastcall sub_16F0C0(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdi

  v1 = *(_BYTE *)(a1 + 355) == 0;
  *(_QWORD *)a1 = off_4B1820;
  if ( !v1 && !*(_BYTE *)(a1 + 350) )
    sub_118CD0(*(_QWORD *)(a1 + 64), a1 + 72);
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
  sub_1181E0(a1 + 136);
  sub_1181E0(a1 + 120);
  sub_1181E0(a1 + 104);
  return j__qfree();
}

