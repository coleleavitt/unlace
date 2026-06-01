__int64 __fastcall sub_3EB160(_DWORD *a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rax

  if ( a1[20] == 8 )
  {
    v2 = -1;
    *(_DWORD *)a2 = a1[109];
    v3 = 16;
  }
  else
  {
    *(_DWORD *)a2 = a1[90];
    v2 = a1[89];
    v3 = 4;
  }
  *(_QWORD *)(a2 + 8) = v3;
  *(_DWORD *)(a2 + 4) = v2;
  *(_QWORD *)(a2 + 16) = 1;
  *(_QWORD *)(a2 + 24) = 0;
  return 1;
}

