void __fastcall sub_4430(std::exception *a1)
{
  *(_QWORD *)a1 = &off_13D38;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

