__int64 *__fastcall sub_DC810(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  char v4; // al
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 *v7; // rbp
  __int64 *v8; // r14
  __int64 v9; // r15
  int v10; // ebx
  unsigned __int8 *v11; // rax
  char v12; // al
  int v14; // [rsp+Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a2 + 16);
  v4 = *(_BYTE *)v3;
  if ( *(_BYTE *)v3 == 0xB0 )
    v4 = *(_BYTE *)(v3 + 2);
  if ( v4 == -79 )
  {
    v14 = **(_DWORD **)(v3 + 32);
    v5 = v14 + 1;
  }
  else
  {
    v5 = 2;
    v14 = 1;
    if ( v4 == -118 )
    {
      v14 = **(_DWORD **)(*(_QWORD *)(v3 + 32) + 32LL);
      v5 = v14 + 1;
    }
  }
  v6 = 0;
  if ( (*(_BYTE *)(a2 + 5) & 8) != 0 )
    v6 = *(_QWORD *)(a2 + 32);
  v7 = sub_DBFF0(a1, v5);
  if ( v7 )
  {
    if ( v14 > 0 )
    {
      v8 = v7;
      v9 = (__int64)v7 + (unsigned int)(v14 - 1) + 1;
      do
      {
        while ( 1 )
        {
          v10 = (_DWORD)v8 - (_DWORD)v7;
          v11 = (unsigned __int8 *)sub_C4360((char *)v3, (int)v8 - (int)v7);
          v12 = sub_C6820(v11);
          if ( !v6 )
            break;
          v8 = (__int64 *)((char *)v8 + 1);
          *((_BYTE *)v8 - 1) = sub_C68F0(*(unsigned __int8 **)(*(_QWORD *)(v6 + 32) + 24LL * v10 + 8), v12);
          if ( (__int64 *)v9 == v8 )
            goto LABEL_14;
        }
        *(_BYTE *)v8 = v12;
        v8 = (__int64 *)((char *)v8 + 1);
      }
      while ( (__int64 *)v9 != v8 );
    }
LABEL_14:
    *((_BYTE *)v7 + v14) = 0;
  }
  return v7;
}
