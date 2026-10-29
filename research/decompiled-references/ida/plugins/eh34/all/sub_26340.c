char __fastcall sub_26340(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 80);
  v3 = a1 + 72;
  if ( v2 )
  {
    v4 = a1 + 72;
    do
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v2 + 16);
        v6 = *(_QWORD *)(v2 + 24);
        if ( *(_DWORD *)(v2 + 32) < a2 )
          break;
        v4 = v2;
        v2 = *(_QWORD *)(v2 + 16);
        if ( !v5 )
          goto LABEL_6;
      }
      v2 = *(_QWORD *)(v2 + 24);
    }
    while ( v6 );
LABEL_6:
    if ( v3 != v4 )
      LOBYTE(v2) = *(_DWORD *)(v4 + 32) <= a2;
  }
  else
  {
    LOBYTE(v2) = 0;
  }
  return v2;
}

