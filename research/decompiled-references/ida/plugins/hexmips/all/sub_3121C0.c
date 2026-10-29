__int64 __fastcall sub_3121C0(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx

  result = 0xFFFFFFFFLL;
  if ( *a1 >= *a2 )
  {
    result = 1;
    if ( *a2 >= *a1 )
    {
      v3 = a1[1];
      v4 = a2[1];
      result = 0xFFFFFFFFLL;
      if ( v3 >= v4 )
        return v4 < v3;
    }
  }
  return result;
}

