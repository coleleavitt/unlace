__int64 __fastcall sub_333270(std::exception *this)
{
  *(_QWORD *)this = off_4A8510;
  if ( *((_QWORD *)this + 3) )
  {
    *((_QWORD *)this + 4) = 0;
    qfree();
  }
  std::exception::~exception(this);
  return j__qfree();
}

