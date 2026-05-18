__int64 __fastcall sub_166940(__int64 *a1)
{
  void *v2; // rdi

  sub_19A060(a1[2], 0xFFFFFFFFLL);
  sub_1667F0(*a1, (_QWORD *)a1[1]);
  if ( a1 )
  {
    v2 = (void *)a1[2];
    *(_OWORD *)a1 = 0;
    sub_199D50(v2);
    operator delete(a1, 0x18u);
  }
  return 0;
}
