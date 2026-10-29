__int64 __fastcall sub_3D0DA0(_DWORD *a1, __int64 a2, double a3)
{
  __int64 v3; // rdx
  int v4; // r8d
  int v5; // eax
  int v6; // r8d
  int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  _DWORD *v13; // rsi

  v13 = a1;
  v3 = *(_QWORD *)(a2 + 64);
  if ( !v3 || (unsigned int)(*(_DWORD *)(v3 + 60) - 1) > 1 )
    return 0;
  v4 = *(_DWORD *)(*(_QWORD *)(v3 + 64) + 64LL);
  if ( a1[4] == *(_DWORD *)(v3 + 72) && (v5 = a1[5], v5 >= 0) && v5 < v4 )
  {
    v6 = v13[6];
    if ( v6 > 0 )
    {
      v13[6] = v6 - 1;
      sub_3D0BB0(a2, (__int64)v13, v3, a3);
    }
    else
    {
      if ( !v5 )
        return 0;
      v8 = v5 - 1;
      v9 = 0;
      v13[5] = v8;
      if ( (unsigned __int64)v8 < *(_QWORD *)(v3 + 120) )
      {
        v10 = *(_QWORD *)(*(_QWORD *)(v3 + 112) + 24LL * v8 + 8);
        if ( v10 )
          v9 = v10 - 1;
      }
      v13[6] = v9;
      sub_3D0BB0(a2, (__int64)v13, v3, a3);
    }
  }
  else if ( v4 > 0 )
  {
    v13[2] = 0;
    *(_QWORD *)(v13 + 5) = 0;
    sub_3D0BB0(a2, (__int64)v13, v3, a3);
  }
  return 1;
}

