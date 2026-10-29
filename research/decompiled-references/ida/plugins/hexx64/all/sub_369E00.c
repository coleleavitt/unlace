__int64 __fastcall sub_369E00(__int64 a1, double a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  _DWORD *v4; // rax
  _DWORD *v5; // rdx

  if ( *(_DWORD *)a1 != 1 )
  {
    if ( *(_DWORD *)a1 == 2 )
    {
      v2 = *(_QWORD *)(a1 + 8);
      v3 = *(_QWORD *)(v2 + 8);
      if ( !v3 )
      {
        if ( !under_debugger )
          sub_383060(0xCE6Au, a2);
        BUG();
      }
      v4 = *(_DWORD **)v2;
      v5 = &v4[6 * v3];
      if ( v5 == v4 )
        return 1;
      while ( *v4 == 1 )
      {
        v4 += 6;
        if ( v5 == v4 )
          return 1;
      }
    }
    return 0;
  }
  return 1;
}

