__int64 __fastcall sub_17CF50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // r13
  _BYTE *v7; // rsi
  __int64 v8; // rbx
  __int64 v10; // rax

  v2 = sub_1983D0(a1, *(_QWORD *)(a2 + 288));
  if ( v2 > 0 && *(_QWORD *)(a1 + 8) > 3u )
  {
    v3 = *(_BYTE **)a1;
    if ( **(_BYTE **)a1 == 0xEF && v3[1] == 0xBB && v3[2] == 0xBF && v2 + 2 >= sub_197FF0(*(_QWORD *)(a2 + 288)) )
    {
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
      {
        if ( v4 == 1 )
        {
          v8 = 1;
          return v8 - 1;
        }
        v5 = 1;
        v6 = 0;
        if ( (unsigned __int64)(v4 - 1) > 3 )
        {
          v6 = v4 - 4;
          v5 = v4 - 3;
          memmove(*(void **)a1, (const void *)(*(_QWORD *)a1 + 3LL), v4 - 4);
        }
        v7 = *(_BYTE **)a1;
        if ( *(_QWORD *)(a1 + 16) < v5 )
        {
          v10 = sub_1987B0(a1, v7, v5, 1);
          *(_QWORD *)a1 = v10;
          v7 = (_BYTE *)v10;
        }
        *(_QWORD *)(a1 + 8) = v5;
        v7[v6] = 0;
        v8 = *(_QWORD *)(a1 + 8);
        if ( v8 )
          return v8 - 1;
      }
      return 0;
    }
  }
  return v2;
}
