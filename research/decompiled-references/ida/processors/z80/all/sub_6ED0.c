__int64 __fastcall sub_6ED0(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4, double a5)
{
  __int16 v6; // di
  __int64 v8; // rbx
  int v9; // esi
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // cl

  v6 = *(_WORD *)(a3 + 2);
  if ( v6 )
  {
    v8 = a3;
    v9 = 0;
    while ( a4 >= *(_BYTE *)v8 )
    {
      if ( *(_BYTE *)v8 == a4 )
      {
        *(_WORD *)(a2 + 24) = v6;
        v11 = *(_BYTE *)(v8 + 4);
        if ( v11 )
          sub_68D0(a1, a2, a2 + 40, v11, a5);
        v12 = *(_BYTE *)(v8 + 5);
        if ( v12 )
          sub_68D0(a1, a2, a2 + 80, v12, a5);
        return 1;
      }
      v8 = a3 + 6LL * ++v9;
      v6 = *(_WORD *)(v8 + 2);
      if ( !v6 )
        return 0;
    }
  }
  return 0;
}

