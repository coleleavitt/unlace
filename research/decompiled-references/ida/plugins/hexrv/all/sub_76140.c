void __fastcall sub_76140(std::exception *a1)
{
  *(_QWORD *)a1 = off_4AE750;
  if ( *((_QWORD *)a1 + 3) )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree();
  }
  std::exception::~exception(a1);
}

