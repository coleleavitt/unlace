bool __fastcall sub_3E00(unsigned __int64 a1, __int64 a2)
{
  bool result; // al
  int dword; // ebp

  result = 0;
  if ( a1 <= 0xFFFFFFFFFFFFFFF1LL && a1 + 18 < *(_QWORD *)(a2 + 8) )
  {
    dword = get_dword();
    return (unsigned int)get_dword() + 14 == dword;
  }
  return result;
}

