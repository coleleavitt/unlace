unsigned __int64 __fastcall sub_17C50(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  _QWORD *v3; // rcx
  unsigned __int64 v4; // r13
  __int64 v5; // rsi

  result = *(_QWORD *)(a2 + 28);
  if ( result != 0xFFFFFFFF && result != 0 && result != -1 )
  {
    v3 = *(_QWORD **)(a1 + 141);
    result = *(__int16 *)(a2 + 84);
    if ( result < v3[1] && (__int16)result > 0 )
    {
      result = getseg(*(_QWORD *)(*v3 + 32 * result + 8));
      v4 = result;
      if ( result )
      {
        v5 = *(_QWORD *)(result + 48);
        setinf(14);
        sel2para(*(_QWORD *)(v4 + 48), v5);
        return setinf(15);
      }
    }
  }
  return result;
}
