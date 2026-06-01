__int64 __fastcall sub_19850(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 33352);
  if ( *(_WORD *)(a1 + 33111) < (unsigned __int16)a2 )
  {
    *(_WORD *)(a1 + 33111) = a2;
    qfree(result, a2, a3, a4);
    result = qalloc((unsigned int)(4 * a2 + 2));
    if ( !result )
      sub_19160((__int64)"JavaLoader");
    *(_QWORD *)(a1 + 33352) = result;
  }
  return result;
}

