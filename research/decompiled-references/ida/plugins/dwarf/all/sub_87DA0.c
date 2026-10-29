__int64 __fastcall sub_87DA0(_QWORD *a1)
{
  __int64 result; // rax

  result = a1[31];
  if ( !result )
  {
    result = sub_87C20(*(_QWORD **)(*a1 + 16LL), *(_QWORD *)(*a1 + 24LL));
    a1[31] = result;
  }
  return result;
}

