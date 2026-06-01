__int64 __fastcall sub_333E0(__int64 a1, _QWORD *a2)
{
  unsigned int tinfo_property; // eax
  unsigned int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rcx

  tinfo_property = get_tinfo_property(*a2, 7);
  v4 = 0;
  if ( tinfo_property )
  {
    v5 = *(_QWORD *)(a1 + 224);
    if ( v5 )
    {
      v6 = a1 + 216;
      do
      {
        while ( 1 )
        {
          v7 = *(_QWORD *)(v5 + 16);
          v8 = *(_QWORD *)(v5 + 24);
          if ( *(_DWORD *)(v5 + 32) < tinfo_property )
            break;
          v6 = v5;
          v5 = *(_QWORD *)(v5 + 16);
          if ( !v7 )
            goto LABEL_7;
        }
        v5 = *(_QWORD *)(v5 + 24);
      }
      while ( v8 );
LABEL_7:
      v4 = 0;
      if ( a1 + 216 != v6 )
        LOBYTE(v4) = tinfo_property >= *(_DWORD *)(v6 + 32);
    }
  }
  return v4;
}

