__int64 __fastcall sub_11F560(_QWORD *a1, double a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 result; // rax

  v2 = *a1;
  v3 = *(_QWORD *)(*a1 + 496LL);
  if ( !v3 || *(_QWORD *)(*(_QWORD *)(v2 + 488) + 8 * v3 - 8) != a1[1] )
  {
    if ( !under_debugger )
      sub_383060(0xCD23u, a2);
    BUG();
  }
  result = v3 - 1;
  *(_QWORD *)(v2 + 496) = result;
  return result;
}

