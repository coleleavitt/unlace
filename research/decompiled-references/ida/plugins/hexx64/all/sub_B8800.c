__int64 __fastcall sub_B8800(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 i; // r15
  int v8; // r13d
  _BYTE *v9; // rdi
  int v10; // eax
  __int64 v11; // rbp
  int *v12; // r14
  _BYTE *v13; // rdi
  __int64 v14; // r13
  _BYTE *v15; // rdi
  int *v16; // r15
  _BYTE *v17; // rdi
  __int64 v19; // rbp
  int v20; // eax
  int v21; // [rsp+8h] [rbp-60h]
  int v22; // [rsp+8h] [rbp-60h]
  __int64 v24; // [rsp+18h] [rbp-50h]
  __int64 v25; // [rsp+20h] [rbp-48h]

  v25 = a3 & 1;
  v24 = (a3 - 1) / 2;
  if ( a2 >= v24 )
  {
    v12 = (int *)(a1 + 4 * a2);
    if ( (a3 & 1) != 0 )
      goto LABEL_28;
    v11 = a2;
    if ( a2 != (a3 - 2) / 2 )
      goto LABEL_28;
    goto LABEL_30;
  }
  for ( i = a2; ; i = v11 )
  {
    v11 = 2 * (i + 1);
    v12 = (int *)(a1 + 8 * (i + 1));
    v21 = *(v12 - 1);
    v13 = (_BYTE *)sub_330E60(a5, *v12);
    if ( v13 != *(_BYTE **)(a5 + 56) || (v8 = 1000, *(_DWORD *)(a5 + 76) != 4) )
      v8 = sub_175240(v13);
    v9 = (_BYTE *)sub_330E60(a5, v21);
    if ( v9 != *(_BYTE **)(a5 + 56) || (v10 = 1000, *(_DWORD *)(a5 + 76) != 4) )
      v10 = sub_175240(v9);
    if ( v10 > v8 )
    {
      --v11;
      v12 = (int *)(a1 + 4 * v11);
    }
    *(_DWORD *)(a1 + 4 * i) = *v12;
    if ( v11 >= v24 )
      break;
  }
  if ( !v25 && (a3 - 2) / 2 == v11 )
  {
LABEL_30:
    v19 = 2 * v11 + 2;
    v20 = *(_DWORD *)(a1 + 4 * v19 - 4);
    v11 = v19 - 1;
    *v12 = v20;
    v12 = (int *)(a1 + 4 * v11);
  }
  v14 = (v11 - 1) / 2;
  if ( v11 > a2 )
  {
    while ( 1 )
    {
      v16 = (int *)(a1 + 4 * v14);
      v17 = (_BYTE *)sub_330E60(a5, *v16);
      if ( v17 != *(_BYTE **)(a5 + 56) || (v22 = 1000, *(_DWORD *)(a5 + 76) != 4) )
        v22 = sub_175240(v17);
      v15 = (_BYTE *)sub_330E60(a5, a4);
      if ( v15 == *(_BYTE **)(a5 + 56) && *(_DWORD *)(a5 + 76) == 4 )
      {
        v12 = (int *)(a1 + 4 * v11);
        if ( v22 >= 1000 )
          goto LABEL_28;
      }
      else
      {
        v12 = (int *)(a1 + 4 * v11);
        if ( (int)sub_175240(v15) <= v22 )
          goto LABEL_28;
      }
      v11 = v14;
      *v12 = *v16;
      if ( a2 >= v14 )
        break;
      v14 = (v14 - 1) / 2;
    }
    v12 = (int *)(a1 + 4 * v14);
  }
LABEL_28:
  *v12 = a4;
  return a4;
}

