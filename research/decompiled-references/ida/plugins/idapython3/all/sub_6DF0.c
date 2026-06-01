__int64 __fastcall sub_6DF0(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax

  if ( a1 )
  {
    if ( *a1 <= 0 )
    {
      sub_6C20((__int64)a1, a2, a3, a4, a5, a6, result);
      return sub_6E20();
    }
    else
    {
      return (*(__int64 (**)(void))(qword_24798 + 984))();
    }
  }
  return result;
}

