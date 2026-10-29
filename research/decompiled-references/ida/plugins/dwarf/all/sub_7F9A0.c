void __fastcall sub_7F9A0(_QWORD *a1)
{
  __int64 v2; // rdi

  *a1 = &off_C9478;
  v2 = a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2);
  }
  operator delete(a1, 0x28u);
}

