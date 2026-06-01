__int64 __fastcall sub_20BE0(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned int v3; // [rsp+0h] [rbp-Ch]

  v1 = a1[10];
  result = 1;
  if ( v1 )
  {
    result = sub_F0A0((__int64)a1, a1[9], a1[12], v1);
    if ( a1[10] )
    {
      v3 = result;
      sub_1E000(a1);
      return v3;
    }
  }
  return result;
}

