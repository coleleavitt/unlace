__int64 __fastcall sub_C3340(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // r12

  result = *a1;
  if ( *a1 )
  {
    if ( a2 > 1 )
    {
      result = sub_C3340(a1, (unsigned int)(a2 - 1));
      v3 = *a1;
      if ( *a1 )
      {
        *(_QWORD *)(v3 + 16) = result;
        *a1 = *(_QWORD *)(v3 + 8);
        *(_QWORD *)(v3 + 8) = sub_C3340(a1, (unsigned int)(a2 - 1));
        return v3;
      }
    }
    else
    {
      *a1 = *(_QWORD *)(result + 8);
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
  }
  return result;
}
