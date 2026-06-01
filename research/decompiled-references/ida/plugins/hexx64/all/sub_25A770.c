int __fastcall sub_25A770(__int64 a1, __int64 a2, double a3)
{
  int result; // eax
  __int64 v4; // rdi
  __int64 v5; // rsi

  result = sub_259850(a1, a2, 0, a3);
  if ( !result )
  {
    result = sub_2596A0(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 64), a3);
    if ( !result )
    {
      v4 = *(_QWORD *)(a1 + 72);
      v5 = *(_QWORD *)(a2 + 72);
      if ( v4 )
      {
        if ( v5 )
          return sub_2596A0(v4, v5, a3);
        else
          return 1;
      }
      else
      {
        return -(v5 != 0);
      }
    }
  }
  return result;
}

