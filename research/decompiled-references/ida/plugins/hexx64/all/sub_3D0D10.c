__int64 __fastcall sub_3D0D10(__int64 a1, __int64 *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rsi
  _QWORD *v5; // rax
  _QWORD *v6; // rcx

  v2 = *((_DWORD *)a2 + 2);
  if ( (unsigned int)(v2 - 27) > 1 && v2 != 46 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    v4 = *a2;
    v5 = *(_QWORD **)(v3 + 2088);
    v6 = &v5[*(_QWORD *)(v3 + 2096)];
    if ( v5 == v6 )
      return 6;
    while ( !*v5 || v4 != *(_QWORD *)*v5 )
    {
      if ( v6 == ++v5 )
        return 6;
    }
  }
  return 2;
}

