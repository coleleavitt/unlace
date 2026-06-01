__int64 __fastcall sub_363D80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  _DWORD *v3; // rax
  _DWORD *v4; // rdx

  if ( *(_DWORD *)a1 != 1 )
  {
    if ( *(_DWORD *)a1 == 2 )
    {
      v1 = *(_QWORD *)(a1 + 8);
      v2 = *(_QWORD *)(v1 + 8);
      if ( !v2 )
      {
        if ( !under_debugger )
          sub_37CFE0(52842);
        BUG();
      }
      v3 = *(_DWORD **)v1;
      v4 = &v3[6 * v2];
      if ( v4 == v3 )
        return 1;
      while ( *v3 == 1 )
      {
        v3 += 6;
        if ( v4 == v3 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}

