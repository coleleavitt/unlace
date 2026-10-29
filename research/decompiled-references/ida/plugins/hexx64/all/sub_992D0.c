__int64 __fastcall sub_992D0(__int128 a1, double a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  int v4; // ebp
  __int64 v5; // rcx
  unsigned int v6; // ebp
  int v7; // r8d
  int v8; // r9d
  __int64 i; // rbx
  __int128 v10; // rdi
  int v11; // eax
  int v12; // r14d
  int v13; // eax
  __int64 v14; // rcx
  int v15; // r8d
  int v16; // r9d
  __int64 v18; // rbx

  if ( (*(_BYTE *)(*((_QWORD *)&a1 + 1) + 5LL) & 8) == 0 )
  {
    if ( !under_debugger )
      sub_383060(0xC72Bu, a2);
    BUG();
  }
  v2 = *((_QWORD *)&a1 + 1);
  v3 = a1;
  v4 = sub_98DA0(a1, *((_QWORD *)&a1 + 1) + 32LL);
  v6 = sub_98DA0(a1, *((_QWORD *)&a1 + 1) + 48LL) + v4;
  if ( v6 )
  {
    for ( i = *(_QWORD *)(*((_QWORD *)&a1 + 1) + 16LL); i; v6 += v13 + v12 )
    {
      while ( (*(_BYTE *)(i + 5) & 8) == 0 )
      {
        i = *(_QWORD *)(i + 16);
        if ( !i )
          goto LABEL_8;
      }
      *((_QWORD *)&v10 + 1) = i;
      *(_QWORD *)&v10 = v3;
      v11 = sub_98DA0(v10, i + 32);
      *((_QWORD *)&v10 + 1) = i;
      *(_QWORD *)&v10 = v3;
      v12 = v11;
      v13 = sub_98DA0(v10, i + 48);
      i = *(_QWORD *)(i + 16);
    }
  }
LABEL_8:
  if ( (unsigned int)sub_99090(v3, v2, (_BYTE *)(v2 + 64), v5, v7, v8) == 1 )
  {
    v18 = *(_QWORD *)(v2 + 8);
    ++v6;
    for ( ; v18; v18 = *(_QWORD *)(v18 + 8) )
    {
      if ( (*(_BYTE *)(v18 + 5) & 8) != 0 )
        v6 += sub_99090(v3, v18, (_BYTE *)(v18 + 64), v14, v15, v16);
    }
  }
  return v6;
}

