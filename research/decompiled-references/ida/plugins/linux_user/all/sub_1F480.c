__int64 __fastcall sub_1F480(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = *(_QWORD *)(a1 + 1224);
  if ( v2 )
  {
    v3 = a1 + 1216;
    do
    {
      while ( 1 )
      {
        v4 = *(_QWORD *)(v2 + 16);
        v5 = *(_QWORD *)(v2 + 24);
        if ( (int)a2 <= *(_DWORD *)(v2 + 32) )
          break;
        v2 = *(_QWORD *)(v2 + 24);
        if ( !v5 )
          goto LABEL_6;
      }
      v3 = v2;
      v2 = *(_QWORD *)(v2 + 16);
    }
    while ( v4 );
LABEL_6:
    if ( a1 + 1216 != v3 && (int)a2 >= *(_DWORD *)(v3 + 32) )
      return 0;
  }
  if ( *(_DWORD *)(a1 + 1340) != a2 )
    sub_1ED60(a1, a2, 0);
  return sub_1DEC0(a1, (unsigned int)a2, -1);
}

