__int64 __fastcall sub_1160E0(__int64 a1, int a2)
{
  __int64 v2; // rbp
  int v3; // ebx
  unsigned int v4; // r14d
  __int64 v5; // r13
  char v6; // al
  unsigned int v7; // eax
  __int64 v9; // rax
  unsigned int v10; // [rsp+Ch] [rbp-3Ch]

  v2 = *(_QWORD *)a1;
  v10 = *(_DWORD *)(a1 + 64) - 1;
  if ( *(int *)(*(_QWORD *)a1 + 40LL) <= 0 )
  {
    --*(_DWORD *)(v2 + 740);
    *(_DWORD *)(a1 + 64) = 0;
    goto LABEL_18;
  }
  v3 = 0;
  v4 = 0;
  do
  {
    v5 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL * v3 + 8);
    if ( !v5 )
      goto LABEL_9;
    v6 = *(_BYTE *)(v5 + 16);
    if ( a2 != 2 )
      goto LABEL_5;
    if ( v6 != 2 )
    {
LABEL_6:
      v7 = 0;
      goto LABEL_7;
    }
    v7 = sub_115FE0(v5, 2, v10);
    if ( !v7 )
    {
      v6 = *(_BYTE *)(v5 + 16);
LABEL_5:
      if ( v6 != 2 )
        goto LABEL_6;
      v7 = sub_115FE0(v5, 1, v10);
    }
LABEL_7:
    if ( !v4 )
      v4 = v7;
LABEL_9:
    ++v3;
  }
  while ( *(_DWORD *)(v2 + 40) > v3 );
  --*(_DWORD *)(v2 + 740);
  *(_DWORD *)(a1 + 64) = 0;
  if ( !v4 )
  {
LABEL_18:
    v9 = *(_QWORD *)(v2 + 568);
    if ( a2 == 2 )
    {
      if ( !v9 )
      {
        v4 = 0;
        goto LABEL_21;
      }
      v4 = sub_D0730(v2, 2, v10);
      if ( v4 || !*(_QWORD *)(v2 + 568) )
        goto LABEL_21;
    }
    else if ( !v9 )
    {
      return 0;
    }
    v4 = sub_D0730(v2, 1, v10);
    if ( a2 != 2 )
      return v4;
LABEL_21:
    *(_QWORD *)(v2 + 744) = *(_QWORD *)(a1 + 88);
    *(_QWORD *)(v2 + 752) = *(_QWORD *)(a1 + 96);
    return v4;
  }
  if ( a2 == 2 )
    goto LABEL_21;
  return v4;
}
