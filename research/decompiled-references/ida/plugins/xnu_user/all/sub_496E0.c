__int64 __fastcall sub_496E0(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 result; // rax
  __int64 sreg; // rcx

  result = qword_9AD30 + 144LL * *(int *)(a1 + 1176);
  if ( *(_DWORD *)(result + 120) == 13 )
  {
    sreg = get_sreg();
    result = *a2;
    if ( sreg == 1 || (result & 1) != 0 )
    {
      result &= ~1uLL;
      *a2 = result;
      *a3 = 2;
    }
  }
  return result;
}

