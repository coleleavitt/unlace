__int64 __fastcall sub_7B20(__int64 a1, __int64 a2, double a3, double a4)
{
  __int64 result; // rax

  if ( (unsigned __int8)getinf_flag() )
  {
    result = 0;
    if ( a2 )
      return result;
    sub_BA40(a1, 0);
    sub_1A000(a1, 0, a3, a4);
    sub_19EF0(a1, 0);
  }
  return 1;
}

