__int64 __fastcall sub_C4520(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 40);
  result = *(_QWORD *)(v2 + 16);
  if ( result )
  {
    result -= **(int **)(a2 + 40);
    *(_QWORD *)(v2 + 16) = result;
  }
  return result;
}
