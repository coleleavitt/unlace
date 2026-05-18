__int64 __fastcall sub_F0B40(_QWORD *a1, unsigned int **a2, __int64 *a3)
{
  __int64 v5; // rax
  char v6; // dl
  __int64 v7; // rsi
  int (__fastcall *v8)(__int64, _DWORD *, char *, unsigned int, char *, unsigned int, double); // rax
  __int64 v9; // r13
  unsigned int *v10; // rdx
  __int64 v11; // rax
  __int64 i; // r13
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v16; // rbx
  unsigned int *v17; // rax
  __int64 *v19; // rax
  _QWORD v20[64]; // [rsp+0h] [rbp-248h] BYREF
  _QWORD v21[9]; // [rsp+200h] [rbp-48h] BYREF

  v21[1] = __readfsqword(0x28u);
  v5 = a1[2];
  if ( a1[3] )
  {
LABEL_2:
    v6 = *(_BYTE *)(v5 + 92);
    v7 = (__int64)*a2;
    v8 = sub_EEBD0;
    if ( v6 != 1 )
    {
      v8 = sub_EEB70;
      if ( v6 == 2 )
        v8 = sub_EFF10;
    }
    a1[8] = v8;
    memset(v20, 0, sizeof(v20));
    if ( !v7 )
      goto LABEL_16;
    v9 = *a3;
    v10 = nullptr;
    if ( !*a3 )
      goto LABEL_13;
LABEL_7:
    if ( v9 == v7 )
    {
      *(_QWORD *)(v7 + 8) = 0;
      if ( !v10 )
      {
        v20[0] = v7;
        goto LABEL_16;
      }
      i = 0;
    }
    else
    {
      v11 = *(int *)(v7 + 8);
      *(_QWORD *)(v7 + 8) = 0;
      for ( i = v11 + v9; !v10; *(_QWORD *)(v7 + 8) = 0 )
      {
        v20[0] = v7;
        if ( !i )
          goto LABEL_15;
LABEL_12:
        v7 = i;
        v9 = *a3;
        v10 = (unsigned int *)v20[0];
        if ( *a3 )
          goto LABEL_7;
LABEL_13:
        i = *(_QWORD *)(v7 + 8);
      }
    }
    v13 = 1;
    do
    {
      v14 = sub_C4210((__int64)a1, (unsigned int *)v7, v10);
      v20[v13 - 1] = 0;
      v7 = v14;
      v15 = (int)v13++;
      v10 = (unsigned int *)v20[v13 - 1];
    }
    while ( v10 );
    v20[v15] = v7;
    if ( i )
      goto LABEL_12;
LABEL_15:
    v7 = v20[0];
LABEL_16:
    v16 = &v20[1];
    v17 = nullptr;
    while ( 1 )
    {
      if ( !v7 )
        goto LABEL_18;
      if ( v17 )
        break;
      v17 = (unsigned int *)v7;
      if ( v16 == v21 )
      {
LABEL_23:
        *a2 = v17;
        return *(unsigned __int8 *)(a1[3] + 31LL);
      }
LABEL_19:
      v7 = *v16++;
    }
    v17 = (unsigned int *)sub_C4210((__int64)a1, v17, (unsigned int *)v7);
LABEL_18:
    if ( v16 == v21 )
      goto LABEL_23;
    goto LABEL_19;
  }
  v19 = sub_DCB00(*(_QWORD *)(v5 + 40));
  a1[3] = v19;
  if ( v19 )
  {
    *((_WORD *)v19 + 14) = *(_WORD *)(*(_QWORD *)(a1[2] + 40LL) + 6LL);
    *(_BYTE *)(a1[3] + 31LL) = 0;
    v5 = a1[2];
    goto LABEL_2;
  }
  return 7;
}
