__int64 __fastcall sub_25470(__int64 a1, __int64 a2, double a3)
{
  _QWORD *v5; // r15
  __int64 v6; // r13
  _QWORD *v7; // rbp
  const char *v8; // rsi
  const char *v9; // rdi
  int v10; // eax
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rsi
  unsigned int v14; // ebp
  __int64 v16; // [rsp+18h] [rbp-90h]
  __int64 v17; // [rsp+20h] [rbp-88h]
  int v18; // [rsp+40h] [rbp-68h] BYREF
  __int64 v19; // [rsp+48h] [rbp-60h]
  __int128 v20; // [rsp+50h] [rbp-58h]
  unsigned __int64 v21; // [rsp+68h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 2048) != a2 && *(_QWORD *)(a1 + 2056) != a2 )
    return 0;
  if ( *(_QWORD *)(a1 + 2080) == -1 )
  {
    if ( (unsigned __int8)sub_1D740((_QWORD *)a1, *(_QWORD *)(a1 + 2032), a3) )
    {
      sub_1DA80(a1, *(_QWORD *)(a1 + 2080), (__int64)"EFI_SYSTEM_TABLE");
      if ( *(_QWORD *)(a1 + 2088) == -1 )
        sub_1CD00(a1);
    }
  }
  v20 = 0;
  v18 = -2;
  v19 = -1;
  v17 = qvector_reserve();
  *(_WORD *)v17 = 25458;
  *(_BYTE *)(v17 + 2) = 120;
  *(_BYTE *)(v17 + 3) = 0;
  v5 = *(_QWORD **)(a1 + 1256);
  v16 = a1 + 1248;
  if ( !v5 )
    goto LABEL_17;
  v6 = a1 + 1248;
  do
  {
    v7 = v5;
    if ( v5[5] )
    {
      v9 = (const char *)v5[4];
      v8 = (const char *)v17;
    }
    else
    {
      v8 = (const char *)v17;
      v9 = src;
    }
    v10 = strcmp(v9, v8);
    v11 = (_QWORD *)v5[2];
    v5 = (_QWORD *)v5[3];
    if ( v10 >= 0 )
    {
      v6 = (__int64)v7;
      v5 = v11;
    }
  }
  while ( v5 );
  v12 = 0xFFFFFFFFLL;
  if ( v16 == v6 )
    goto LABEL_18;
  v13 = *(_QWORD *)(v6 + 40) ? *(const char **)(v6 + 32) : src;
  if ( strcmp((const char *)v17, v13) >= 0 )
    v12 = *(unsigned int *)(v6 + 56);
  else
LABEL_17:
    v12 = 0xFFFFFFFFLL;
LABEL_18:
  v14 = sub_519A0(a1, *(unsigned int *)(a1 + 1364), &v18, v12);
  if ( v17 )
    qfree();
  if ( (_BYTE)v14 )
  {
    if ( *(_QWORD *)(a1 + 2048) == a2 )
    {
      sub_251D0(a1, (char *)v19);
    }
    else if ( *(_QWORD *)(a1 + 2056) == a2 )
    {
      sub_20260(a1, v19);
    }
  }
  if ( v18 >= -1 && v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  return v14;
}

