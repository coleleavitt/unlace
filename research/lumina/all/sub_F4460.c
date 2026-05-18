__int64 __fastcall sub_F4460(__int64 a1, _QWORD *a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 v5; // rbx
  __int64 result; // rax

  v5 = (int)a4;
  if ( !a3 || (result = sub_F4460(a1, a3 + 32, *(_QWORD *)(a3 + 80), a4)) == 0 )
  {
    if ( (int)v5 < *(_DWORD *)*a2 )
      return sub_F3950(a1, *(unsigned __int8 **)(*a2 + 24 * v5 + 8), a5);
    else
      return 0;
  }
  return result;
}
