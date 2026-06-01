__int64 __fastcall sub_64000(__int64 *a1, __int64 a2, double a3)
{
  __int64 v4; // rsi
  __int64 result; // rax

  *a1 = 0;
  a1[1] = 0;
  if ( a1 != (__int64 *)a2 )
  {
    v4 = *(_QWORD *)(a2 + 8);
    if ( v4 )
    {
      sub_63DE0(a1, v4, a3);
      memcpy((void *)*a1, *(const void **)a2, *(_QWORD *)(a2 + 8) >> 3);
      result = *(_QWORD *)(a2 + 8);
      a1[1] = result;
    }
  }
  return result;
}

