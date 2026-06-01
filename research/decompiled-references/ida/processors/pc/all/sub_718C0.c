__int64 __fastcall sub_718C0(__int128 a1)
{
  __int64 func; // rax

  func = get_func();
  if ( !func )
    return 0;
  *((_QWORD *)&a1 + 1) = func;
  return sub_6EB80(a1, 1);
}
