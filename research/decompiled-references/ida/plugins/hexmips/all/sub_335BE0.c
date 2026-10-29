__int64 __fastcall sub_335BE0(std::exception *this)
{
  *(_QWORD *)this = off_4BC450;
  if ( *((_QWORD *)this + 3) )
  {
    *((_QWORD *)this + 4) = 0;
    qfree();
  }
  std::exception::~exception(this);
  return j__qfree();
}

