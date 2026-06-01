void __fastcall sub_75A40(std::exception *a1)
{
  *(_QWORD *)a1 = off_4AF6B0;
  if ( *((_QWORD *)a1 + 3) )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree();
  }
  std::exception::~exception(a1);
}

