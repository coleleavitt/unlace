__int64 __fastcall sub_10E210(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  _DWORD *v5; // rax
  int v6; // edi

  result = 0;
  if ( *(_DWORD *)(a1 + 76) == 4 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    if ( *(_BYTE *)(v3 + 64) == 7 )
    {
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 76) == 3 && *(_DWORD *)(v4 + 352) == 1 )
        {
          if ( !*(_QWORD *)(v4 + 48) )
          {
            if ( (*(_BYTE *)(v3 + 5) & 0x40) == 0 )
              return result;
            v4 = *(_QWORD *)(v4 + 8);
            if ( !v4 || *(_DWORD *)(v4 + 76) != 3 || *(_DWORD *)(v4 + 352) != 1 )
              return result;
            if ( !*(_QWORD *)(v4 + 48) )
              return 0;
          }
          v5 = *(_DWORD **)(v4 + 56);
          if ( *v5 == 55 )
            v6 = v5[10];
          else
            v6 = *(_DWORD *)(v4 + 72) + 1;
          result = 0;
          if ( *(_DWORD *)(v3 + 72) == v6 )
          {
            *a2 = v4;
            return 1;
          }
        }
      }
    }
  }
  return result;
}

