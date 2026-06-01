__int64 __fastcall sub_107A0(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 8;
  if ( v2 )
  {
    v4 = a1 + 8;
    do
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(v2 + 16);
        v6 = *(_QWORD *)(v2 + 24);
        if ( a2 > *(_DWORD *)(v2 + 32) )
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
    if ( v3 != v4 && *(_DWORD *)(v4 + 32) <= a2 )
      return v4;
  }
  return v3;
}

