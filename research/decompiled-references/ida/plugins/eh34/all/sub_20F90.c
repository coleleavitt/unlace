void __fastcall sub_20F90(std::exception *a1)
{
  *(_QWORD *)a1 = &off_8BF10;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}

