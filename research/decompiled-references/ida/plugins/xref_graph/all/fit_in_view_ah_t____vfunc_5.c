__int64 __fastcall fit_in_view_ah_t__::vfunc_5(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 result; // rax

  if ( !a4 )
    return 7;
  v4 = *(_QWORD *)(a4 + 64);
  result = 7;
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 48) )
      return 3;
  }
  return result;
}

