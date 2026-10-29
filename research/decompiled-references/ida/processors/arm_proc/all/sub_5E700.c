unsigned __int64 __fastcall sub_5E700(__int64 a1, unsigned __int64 a2)
{
  _QWORD *v3; // r11
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rax

  v3 = *(_QWORD **)a1;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v5 + 1;
  v7 = **(_QWORD **)a1 + 32 * v5;
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_QWORD *)(v7 + 16);
  *(_QWORD *)(a1 + 8) = v6;
  if ( v6 == v4 )
  {
    v14 = v8 + v9;
  }
  else
  {
    while ( 1 )
    {
      v12 = v9;
      v13 = *v3 + 32 * v6;
      v14 = v9 + v8;
      v8 = *(_QWORD *)(v13 + 8);
      v9 = *(_QWORD *)(v13 + 16);
      if ( a2 < v8 + v9 )
        break;
      if ( v8 - v14 >= 0 )
      {
        v11 = v12;
        if ( v9 >= v12 )
          v11 = v9;
        if ( v9 == v12 )
          v11 = 0;
        if ( v11 < v8 - v14 )
          break;
      }
      *(_QWORD *)(a1 + 8) = ++v6;
      if ( v6 == v4 )
        return (v8 + v9 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    }
  }
  return (v14 + 7) & 0xFFFFFFFFFFFFFFF8LL;
}

