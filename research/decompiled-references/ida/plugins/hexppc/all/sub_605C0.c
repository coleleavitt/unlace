__int64 __fastcall sub_605C0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 result; // rax

  *a1 = 0;
  a1[1] = 0;
  if ( a1 != (__int64 *)a2 )
  {
    v3 = *(_QWORD *)(a2 + 8);
    if ( v3 )
    {
      sub_603A0(a1, v3);
      memcpy((void *)*a1, *(const void **)a2, *(_QWORD *)(a2 + 8) >> 3);
      result = *(_QWORD *)(a2 + 8);
      a1[1] = result;
    }
  }
  return result;
}

