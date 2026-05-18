void __fastcall sub_198BB0(std::exception *a1)
{
  *(_QWORD *)a1 = &off_23DC90;
  std::exception::~exception(a1);
  operator delete(a1, 0x10u);
}
