void __fastcall sub_9770(_QWORD *a1)
{
  *a1 = off_36EF8;
  if ( a1[5] )
  {
    a1[6] = 0;
    qfree();
  }
  *a1 = &off_375E8;
  qsem_free();
  operator delete(a1, 0x40u);
}

