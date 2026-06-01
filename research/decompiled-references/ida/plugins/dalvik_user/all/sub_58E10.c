__int64 __fastcall sub_58E10(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // [rsp+0h] [rbp-Ch]

  v6 = a1[10];
  result = 1;
  if ( v6 )
  {
    result = sub_13800((__int64)a1, a1[9], a1[12], v6, a5, a6);
    if ( a1[10] )
    {
      v8 = result;
      sub_565C0(a1);
      return v8;
    }
  }
  return result;
}

