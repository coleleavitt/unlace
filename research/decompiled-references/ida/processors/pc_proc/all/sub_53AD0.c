__int64 __fastcall sub_53AD0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  result = 0;
  if ( *(_QWORD *)(a1 + 5496) != -1 )
  {
    *a2 = *(_QWORD *)(a1 + 5496);
    return 1;
  }
  return result;
}

