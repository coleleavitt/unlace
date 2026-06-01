__int64 __fastcall sub_346A0(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  unsigned __int8 v8; // [rsp+Fh] [rbp-19h]

  if ( (unsigned __int64)(unsigned int)(a3 - 1) >= *(_QWORD *)(a1 + 56) )
  {
    sub_30F90(a1, (__int64)a2);
    return sub_34710();
  }
  else
  {
    result = sub_34510(a2);
    if ( (_BYTE)result )
    {
      if ( a6 )
      {
        v8 = result;
        sub_30F00(a2);
        return v8;
      }
    }
  }
  return result;
}

