_BOOL8 __fastcall sub_6C6F0(__int64 a1, int a2)
{
  _QWORD *v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rax

  v2 = *(_QWORD **)(a1 + 224);
  if ( v2 )
  {
    v3 = 24;
    v4 = *v2 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v4 )
    {
LABEL_9:
      a2 = *(_DWORD *)(v3 + 4);
      return (*(_BYTE *)(*(_QWORD *)(a1 + 280) + 4LL * a2) & 4) != 0;
    }
LABEL_3:
    if ( (*(_BYTE *)v4 & 2) == 0 )
    {
      while ( 1 )
      {
        v3 = v4 + 24;
        if ( *(_DWORD *)(v4 + 24) > a2 )
        {
          v4 = *(_QWORD *)(v4 + 8);
          goto LABEL_3;
        }
        if ( *(_DWORD *)(v4 + 24) >= a2 )
          break;
        v4 = *(_QWORD *)(v4 + 16);
        if ( (*(_BYTE *)v4 & 2) != 0 )
          return (*(_BYTE *)(*(_QWORD *)(a1 + 280) + 4LL * a2) & 4) != 0;
      }
      if ( v2 == (_QWORD *)v4 )
        return (*(_BYTE *)(*(_QWORD *)(a1 + 280) + 4LL * a2) & 4) != 0;
      goto LABEL_9;
    }
  }
  return (*(_BYTE *)(*(_QWORD *)(a1 + 280) + 4LL * a2) & 4) != 0;
}

