__int64 __fastcall sub_197B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 33360);
  if ( *(_DWORD *)(a1 + 33061) < (unsigned int)a2 )
  {
    *(_DWORD *)(a1 + 33061) = a2;
    qfree(result, a2, a3, a4);
    result = qalloc((unsigned int)(a2 + 1));
    if ( !result )
      sub_19160((__int64)"JavaLoader");
    *(_QWORD *)(a1 + 33360) = result;
  }
  return result;
}

