__int64 __fastcall sub_83700(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  v1 = *(int *)(a1 + 176);
  v2 = 0;
  if ( (int)v1 >= 0 )
    return *(_QWORD *)(a1 + 104) + 120 * v1;
  return v2;
}

