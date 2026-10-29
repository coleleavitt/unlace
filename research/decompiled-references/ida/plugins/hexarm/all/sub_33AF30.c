void __fastcall sub_33AF30(std::exception *a1)
{
  *(_QWORD *)a1 = off_4D6390;
  if ( *((_QWORD *)a1 + 3) )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree();
  }
  std::exception::~exception(a1);
}

