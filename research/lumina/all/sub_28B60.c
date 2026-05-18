__int64 __fastcall sub_28B60(_QWORD *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rsi
  unsigned __int64 v5; // rax
  __int64 v6; // rbp
  size_t v7; // r12
  __int64 v8; // r13
  _DWORD *v9; // rax
  __int64 v11; // rax

  sub_28840(a2, a1, ", ", 2u);
  v3 = a2[1];
  v4 = *a2;
  v5 = a2[2];
  if ( !v3 )
  {
    if ( v5 > 7 )
    {
      a2[1] = 8;
      *(_BYTE *)(v4 + 7) = 0;
      goto LABEL_4;
    }
    v7 = 0;
    v6 = 8;
    v8 = 7;
    goto LABEL_9;
  }
  v6 = v3 + 7;
  v7 = v3 - 1;
  v8 = v3 + 6;
  if ( v5 < v3 + 7 )
  {
LABEL_9:
    v11 = sub_1987B0(a2, v4, v6, 1);
    a2[1] = v6;
    *a2 = v11;
    *(_BYTE *)(v11 + v8) = 0;
    if ( !v7 )
      goto LABEL_4;
    goto LABEL_7;
  }
  a2[1] = v6;
  *(_BYTE *)(v4 + v8) = 0;
  if ( v3 != 1 )
LABEL_7:
    memmove((void *)(*a2 + 7), (const void *)*a2, v7);
LABEL_4:
  v9 = (_DWORD *)*a2;
  *v9 = 1162626387;
  *(_DWORD *)((char *)v9 + 3) = 542393157;
  return 1;
}
