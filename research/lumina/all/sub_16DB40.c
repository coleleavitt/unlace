__int64 __fastcall sub_16DB40(_QWORD *a1, int a2, __int64 a3, __int64 a4)
{
  unsigned __int8 (*v4)(void); // rax

  v4 = *(unsigned __int8 (**)(void))(*a1 + 24LL);
  if ( (char *)v4 == (char *)sub_16D8C0 )
  {
    if ( a2 > 1 || *(_BYTE *)(a1[1] + 107LL) )
      return sub_16B820(a3, a4);
    else
      return 0;
  }
  else if ( v4() )
  {
    return sub_16B820(a3, a4);
  }
  else
  {
    return 0;
  }
}
