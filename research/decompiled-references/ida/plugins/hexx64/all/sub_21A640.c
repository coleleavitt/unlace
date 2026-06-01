__int64 __fastcall sub_21A640(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5, double a6)
{
  __int64 i; // r15
  int v9; // eax
  __int64 v10; // rbx
  int *v11; // r14
  int v12; // esi
  __int64 v13; // rdi
  __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // r15
  int v17; // eax
  int v18; // esi
  __int64 v19; // rbp
  int v20; // eax
  __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // [rsp+0h] [rbp-68h]
  __int64 v25; // [rsp+0h] [rbp-68h]
  __int64 v27; // [rsp+10h] [rbp-58h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v30; // [rsp+20h] [rbp-48h]

  v27 = (a3 - 1) / 2;
  v30 = a3 & 1;
  if ( a2 >= v27 )
  {
    v10 = a2;
    v11 = (int *)(a1 + 4 * a2);
    if ( (a3 & 1) == 0 && a2 == (a3 - 2) / 2 )
    {
LABEL_31:
      v22 = 2 * v10 + 2;
      v23 = *(_DWORD *)(a1 + 4 * v22 - 4);
      v10 = v22 - 1;
      *v11 = v23;
      v11 = (int *)(a1 + 4 * v10);
      goto LABEL_16;
    }
    goto LABEL_27;
  }
  for ( i = a2; ; i = v10 )
  {
    v10 = 2 * (i + 1);
    v11 = (int *)(a1 + 8 * (i + 1));
    v12 = *v11;
    v13 = *a5 + 104LL * *v11;
    v14 = *a5 + 104LL * *(v11 - 1);
    v15 = *(_DWORD *)(v14 + 24) & 0x100;
    if ( (*(_BYTE *)(v13 + 25) & 1) != 0 )
    {
      if ( v15 )
      {
LABEL_4:
        v24 = *a5 + 104LL * *v11;
        v9 = sub_1C2AD0((int *)v13, (int *)v14, a6);
        if ( v9 )
        {
          if ( v9 >= 0 )
            goto LABEL_7;
        }
        else if ( *(_QWORD *)(v24 + 16) >= *(_QWORD *)(v14 + 16) )
        {
LABEL_7:
          v12 = *v11;
          goto LABEL_8;
        }
      }
      --v10;
      v11 = (int *)(a1 + 4 * v10);
      goto LABEL_7;
    }
    if ( !v15 )
      goto LABEL_4;
LABEL_8:
    *(_DWORD *)(a1 + 4 * i) = v12;
    if ( v10 >= v27 )
      break;
  }
  if ( !v30 && (a3 - 2) / 2 == v10 )
    goto LABEL_31;
LABEL_16:
  v16 = (v10 - 1) / 2;
  if ( v10 > a2 )
  {
    v28 = 104LL * a4;
    while ( 1 )
    {
      v11 = (int *)(a1 + 4 * v16);
      v18 = *v11;
      v19 = v28 + *a5;
      v20 = *(_DWORD *)(v19 + 24) & 0x100;
      if ( (*(_BYTE *)(*a5 + 104LL * *v11 + 25) & 1) != 0 )
      {
        if ( !v20 )
          goto LABEL_22;
      }
      else if ( v20 )
      {
        goto LABEL_26;
      }
      v25 = *a5 + 104LL * *v11;
      v17 = sub_1C2AD0((int *)v25, (int *)(v28 + *a5), a6);
      if ( v17 )
      {
        if ( v17 >= 0 )
        {
LABEL_26:
          v11 = (int *)(a1 + 4 * v10);
          break;
        }
      }
      else if ( *(_QWORD *)(v25 + 16) >= *(_QWORD *)(v19 + 16) )
      {
        goto LABEL_26;
      }
      v18 = *v11;
LABEL_22:
      *(_DWORD *)(a1 + 4 * v10) = v18;
      v10 = v16;
      if ( a2 >= v16 )
        break;
      v16 = (v16 - 1) / 2;
    }
  }
LABEL_27:
  *v11 = a4;
  return (unsigned int)a4;
}

