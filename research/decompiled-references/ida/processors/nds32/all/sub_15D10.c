__int64 __fastcall sub_15D10(__int64 *a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rsi
  __int64 v5; // rax

  result = a1[1];
  v4 = *a1;
  if ( a1[2] < (unsigned __int64)(result + 1) )
  {
    v5 = qvector_reserve(a1, v4, result + 1, 8);
    *a1 = v5;
    v4 = v5;
    result = a1[1];
  }
  *(_QWORD *)(v4 + 8 * result) = a2;
  ++a1[1];
  return result;
}

