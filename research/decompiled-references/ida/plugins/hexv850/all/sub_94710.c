__int64 __fastcall sub_94710(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned int v3; // ebp
  __int64 i; // rbx
  int v5; // r14d
  int v6; // eax
  __int64 v8; // rbx

  if ( (*(_BYTE *)(a2 + 5) & 8) == 0 )
  {
    if ( !under_debugger )
      sub_37CFE0(50987);
    BUG();
  }
  v2 = sub_941E0(a1, a2, a2 + 32);
  v3 = sub_941E0(a1, a2, a2 + 48) + v2;
  if ( v3 )
  {
    for ( i = *(_QWORD *)(a2 + 16); i; v3 += v6 + v5 )
    {
      while ( (*(_BYTE *)(i + 5) & 8) == 0 )
      {
        i = *(_QWORD *)(i + 16);
        if ( !i )
          goto LABEL_8;
      }
      v5 = sub_941E0(a1, i, i + 32);
      v6 = sub_941E0(a1, i, i + 48);
      i = *(_QWORD *)(i + 16);
    }
  }
LABEL_8:
  if ( (unsigned int)sub_944D0(a1, a2, (_BYTE *)(a2 + 64)) == 1 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    ++v3;
    for ( ; v8; v8 = *(_QWORD *)(v8 + 8) )
    {
      if ( (*(_BYTE *)(v8 + 5) & 8) != 0 )
        v3 += sub_944D0(a1, v8, (_BYTE *)(v8 + 64));
    }
  }
  return v3;
}

