__int64 __fastcall sub_3147B0(__int64 a1, int *a2, double a3)
{
  int v3; // eax
  int v4; // edx
  __m128i *v5; // rdx
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx

  if ( a2[1] != *(_DWORD *)(a1 + 4) )
  {
    if ( !under_debugger )
      sub_383060(0xCA86u, a3);
    goto LABEL_26;
  }
  v3 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 8 )
  {
    v4 = *a2;
    if ( *a2 != 1 )
    {
      if ( v4 == 8 )
      {
        sub_312B80(a1, a3);
        *(_DWORD *)a1 = 8;
        return 1;
      }
      if ( v3 )
      {
        if ( !v4 )
          goto LABEL_18;
        if ( v3 == 1 )
        {
          if ( a2 != (int *)a1 )
          {
            sub_312B80(a1, a3);
            sub_312C40(a1, (__int64)a2, v8, v9, a3);
          }
          return 1;
        }
        if ( (unsigned int)sub_312DC0(a1, (__int64)a2, a3) )
        {
          if ( (unsigned __int64)*(int *)(a1 + 4) > 8 )
          {
            if ( !under_debugger )
              sub_383060(0xCAEDu, a3);
          }
          else
          {
            if ( (*(_DWORD *)a1 & 0xF) == 2 && (*a2 & 0xF) == 2 )
            {
              if ( (unsigned __int8)sub_3180C0((__int64 *)(a1 + 8), (__int64)(a2 + 2), v5, v6) )
              {
                if ( *(_QWORD *)(a1 + 16) )
                  return 1;
LABEL_18:
                sub_312B80(a1, a3);
                return 1;
              }
              return 0;
            }
            if ( !under_debugger )
              sub_383060(0xCB0Bu, a3);
          }
LABEL_26:
          BUG();
        }
      }
    }
  }
  return 0;
}

