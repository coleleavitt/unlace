void __fastcall sub_2970(std::exception *a1)
{
  *(_QWORD *)a1 = &off_7C78;
  std::exception::~exception(a1);
  operator delete(a1, 8u);
}
