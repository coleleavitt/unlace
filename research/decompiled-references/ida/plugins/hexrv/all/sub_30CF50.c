void __fastcall sub_30CF50(_QWORD *a1)
{
  if ( a1 )
  {
    sub_30CE90((__int64)a1);
    if ( *a1 )
    {
      a1[1] = 0;
      qfree();
    }
    operator delete(a1, 0x28u);
  }
}

