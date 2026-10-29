__int64 __fastcall sub_2132C0(__int64 a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  __int64 i; // r15
  int v8; // eax
  __int64 v9; // rbx
  int *v10; // r14
  int v11; // esi
  __int64 v12; // rdi
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // r15
  int v16; // eax
  int v17; // esi
  __int64 v18; // rbp
  int v19; // eax
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // [rsp+0h] [rbp-68h]
  __int64 v24; // [rsp+0h] [rbp-68h]
  __int64 v26; // [rsp+10h] [rbp-58h]
  __int64 v27; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+20h] [rbp-48h]

  v26 = (a3 - 1) / 2;
  v29 = a3 & 1;
  if ( a2 >= v26 )
  {
    v9 = a2;
    v10 = (int *)(a1 + 4 * a2);
    if ( (a3 & 1) == 0 && a2 == (a3 - 2) / 2 )
    {
LABEL_31:
      v21 = 2 * v9 + 2;
      v22 = *(_DWORD *)(a1 + 4 * v21 - 4);
      v9 = v21 - 1;
      *v10 = v22;
      v10 = (int *)(a1 + 4 * v9);
      goto LABEL_16;
    }
    goto LABEL_27;
  }
  for ( i = a2; ; i = v9 )
  {
    v9 = 2 * (i + 1);
    v10 = (int *)(a1 + 8 * (i + 1));
    v11 = *v10;
    v12 = *a5 + 104LL * *v10;
    v13 = *a5 + 104LL * *(v10 - 1);
    v14 = *(_DWORD *)(v13 + 24) & 0x100;
    if ( (*(_BYTE *)(v12 + 25) & 1) != 0 )
    {
      if ( v14 )
      {
LABEL_4:
        v23 = *a5 + 104LL * *v10;
        v8 = sub_1BC250((int *)v12, (int *)v13);
        if ( v8 )
        {
          if ( v8 >= 0 )
            goto LABEL_7;
        }
        else if ( *(_QWORD *)(v23 + 16) >= *(_QWORD *)(v13 + 16) )
        {
LABEL_7:
          v11 = *v10;
          goto LABEL_8;
        }
      }
      --v9;
      v10 = (int *)(a1 + 4 * v9);
      goto LABEL_7;
    }
    if ( !v14 )
      goto LABEL_4;
LABEL_8:
    *(_DWORD *)(a1 + 4 * i) = v11;
    if ( v9 >= v26 )
      break;
  }
  if ( !v29 && (a3 - 2) / 2 == v9 )
    goto LABEL_31;
LABEL_16:
  v15 = (v9 - 1) / 2;
  if ( v9 > a2 )
  {
    v27 = 104LL * a4;
    while ( 1 )
    {
      v10 = (int *)(a1 + 4 * v15);
      v17 = *v10;
      v18 = v27 + *a5;
      v19 = *(_DWORD *)(v18 + 24) & 0x100;
      if ( (*(_BYTE *)(*a5 + 104LL * *v10 + 25) & 1) != 0 )
      {
        if ( !v19 )
          goto LABEL_22;
      }
      else if ( v19 )
      {
        goto LABEL_26;
      }
      v24 = *a5 + 104LL * *v10;
      v16 = sub_1BC250((int *)v24, (int *)(v27 + *a5));
      if ( v16 )
      {
        if ( v16 >= 0 )
        {
LABEL_26:
          v10 = (int *)(a1 + 4 * v9);
          break;
        }
      }
      else if ( *(_QWORD *)(v24 + 16) >= *(_QWORD *)(v18 + 16) )
      {
        goto LABEL_26;
      }
      v17 = *v10;
LABEL_22:
      *(_DWORD *)(a1 + 4 * v9) = v17;
      v9 = v15;
      if ( a2 >= v15 )
        break;
      v15 = (v15 - 1) / 2;
    }
  }
LABEL_27:
  *v10 = a4;
  return (unsigned int)a4;
}

