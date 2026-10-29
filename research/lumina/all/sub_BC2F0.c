void __fastcall sub_BC2F0(_QWORD *a1)
{
  *a1 = &off_239D88;
  if ( a1[2] )
    mysql_close();
  operator delete(a1, 0x20u);
}
