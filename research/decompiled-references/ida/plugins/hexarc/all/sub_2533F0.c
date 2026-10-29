int __fastcall sub_2533F0(__int64 a1, __int64 a2)
{
  int result; // eax
  __int64 v3; // rdi
  __int64 v4; // rsi

  result = sub_2524D0(a1, a2, 0);
  if ( !result )
  {
    result = sub_252320(*(_QWORD *)(a1 + 64), *(_QWORD *)(a2 + 64));
    if ( !result )
    {
      v3 = *(_QWORD *)(a1 + 72);
      v4 = *(_QWORD *)(a2 + 72);
      if ( v3 )
      {
        if ( v4 )
          return sub_252320(v3, v4);
        else
          return 1;
      }
      else
      {
        return -(v4 != 0);
      }
    }
  }
  return result;
}

