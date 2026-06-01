__int64 __fastcall sub_319C40(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 v4; // rax
  int v5; // edx

  v4 = sub_318D60(a1, a3, a4);
  if ( a2 )
  {
    *(_QWORD *)a2 = v4;
    *(_DWORD *)(a2 + 8) = v5;
  }
  return 1;
}

