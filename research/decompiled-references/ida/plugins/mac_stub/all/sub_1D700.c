char __fastcall sub_1D700(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  __int64 v5; // rdx
  int v6; // r8d
  __int64 v7; // r10
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdx

  if ( a3 )
  {
    v4 = *(_DWORD *)(a3 + 4) & 1;
    if ( !v4 )
    {
      v5 = *(_QWORD *)(a1 + 352);
      v6 = *(_DWORD *)(a2 + 4);
      v7 = a1 + 344;
      if ( v5 )
      {
        v8 = a1 + 344;
        do
        {
          while ( 1 )
          {
            v9 = *(_QWORD *)(v5 + 16);
            v10 = *(_QWORD *)(v5 + 24);
            if ( v6 <= *(_DWORD *)(v5 + 32) )
              break;
            v5 = *(_QWORD *)(v5 + 24);
            if ( !v10 )
              goto LABEL_8;
          }
          v8 = v5;
          v5 = *(_QWORD *)(v5 + 16);
        }
        while ( v9 );
LABEL_8:
        if ( v7 != v8 && v6 >= *(_DWORD *)(v8 + 32) )
        {
          v11 = *(_QWORD *)(v8 + 48);
          if ( v11 )
            LOBYTE(v4) = *(_QWORD *)(*(_QWORD *)(v8 + 40) + 48 * v11 - 16) == *(_QWORD *)(a2 + 8);
        }
      }
    }
  }
  else
  {
    LOBYTE(v4) = 1;
  }
  return v4;
}

