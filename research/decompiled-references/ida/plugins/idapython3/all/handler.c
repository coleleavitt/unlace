void __fastcall handler(int a1)
{
  sub_6C40();
  dword_24504 = 1;
  signal(a1, nullptr);
  raise(a1);
}

