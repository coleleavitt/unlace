__int64 __fastcall sub_3D2B20(__int64 a1, int a2, double a3)
{
  __int64 v3; // rax
  int v4; // edx

  if ( a2 < 0 )
    return 0;
  v3 = *(_QWORD *)(a1 + 64);
  v4 = *(_DWORD *)(v3 + 64);
  if ( v4 <= a2 )
    return 0;
  if ( a2 >= (unsigned int)v4 )
    sub_3CF000(a3);
  return *(_QWORD *)(*(_QWORD *)(v3 + 528) + 8LL * a2);
}

