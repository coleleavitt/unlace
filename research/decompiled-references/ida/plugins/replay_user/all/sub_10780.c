__int64 __fastcall sub_10780(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  int v7; // ebx
  unsigned int v8; // eax
  __int64 v10; // [rsp+0h] [rbp-28h]
  __int64 v11; // [rsp+8h] [rbp-20h]
  __int64 v12; // [rsp+10h] [rbp-18h]
  __int64 v13; // [rsp+18h] [rbp-10h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 1032);
  if ( v7 >= 0 )
  {
    v6 = a3;
    do
    {
      v8 = callui(1054, (unsigned int)v7, a2, a4, a5, a6, v10, v11, v12, v13);
      if ( (_BYTE)v8 )
      {
        if ( !(_BYTE)v6 )
          return v8;
        if ( *(_QWORD *)(a2 + 8) != -1 )
          return v6;
      }
      --v7;
      --*(_DWORD *)(a1 + 1032);
    }
    while ( v7 != -1 );
    return v8;
  }
  return v6;
}

