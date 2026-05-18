void __fastcall sub_103310(__int64 a1, __int64 **a2, __int64 a3, int a4, int a5, __int64 a6, double a7)
{
  __int64 v9; // rbx
  char v10; // al
  unsigned int v11; // ebp
  unsigned int v12; // eax
  __int64 v13; // r15
  __int64 v14; // r12
  int v15; // ebp
  char *v16; // rsi
  unsigned int v17; // edx
  unsigned int v18; // r12d
  unsigned int v19; // edx
  __int64 v20; // rbp
  int v21; // eax
  char v22; // si

  v9 = a1;
  v10 = *(_BYTE *)(a1 + 1);
  if ( (v10 & 0x18) != 0 )
  {
    if ( (v10 & 8) != 0 && a3 )
    {
      sub_102C90(a2, *(_QWORD *)(a3 + 8LL * *(unsigned int *)(a1 + 8)), a7, a3, a4, a5, a6);
      return;
    }
    v9 = *(_QWORD *)(a1 + 8);
  }
  switch ( *(_BYTE *)v9 )
  {
    case 1:
      v17 = 4;
      v16 = "true";
      goto LABEL_16;
    case 2:
      v16 = "false";
      v17 = 5;
      goto LABEL_16;
    case 3:
    case 4:
      v17 = *(_DWORD *)(v9 + 4);
      v16 = *(char **)(v9 + 8);
      goto LABEL_18;
    case 5:
      v17 = *(_DWORD *)(v9 + 4);
      v16 = *(char **)(v9 + 8);
      if ( (*(_BYTE *)(v9 + 1) & 1) != 0 )
      {
        sub_102A10(a2, (__int64)v16, v17);
      }
      else
      {
LABEL_18:
        if ( v17 )
LABEL_16:
          sub_102C40(a2, v16, v17);
      }
      return;
    case 6:
      v18 = 1;
      sub_102750(a2, 91);
      v19 = *(_DWORD *)(v9 + 4);
LABEL_23:
      if ( v18 <= v19 )
        goto LABEL_26;
      while ( (*(_BYTE *)(v9 + 1) & 0x20) != 0 )
      {
        v18 = 1;
        v9 += 16LL * *(unsigned int *)(v9 + 8);
        v19 = *(_DWORD *)(v9 + 4);
        if ( v19 )
        {
LABEL_26:
          v20 = v9 + 16LL * v18;
          if ( (*(_BYTE *)(v20 + 1) & 4) == 0 )
          {
            sub_1029E0(a2);
            sub_103310(v9 + 16LL * v18, a2, a3);
            v19 = *(_DWORD *)(v9 + 4);
          }
          v21 = 1;
          if ( *(_BYTE *)v20 > 5u )
            v21 = *(_DWORD *)(v20 + 4) + 1;
          v18 += v21;
          goto LABEL_23;
        }
      }
      v22 = 93;
      goto LABEL_35;
    case 7:
      v11 = 1;
      sub_102750(a2, 123);
      v12 = *(_DWORD *)(v9 + 4);
      break;
    default:
      v17 = 4;
      v16 = "null";
      goto LABEL_16;
  }
  while ( v11 <= v12 )
  {
LABEL_10:
    v13 = v11 + 1;
    v14 = v9 + 16 * v13;
    if ( (*(_BYTE *)(v14 + 1) & 4) == 0 )
    {
      sub_1029E0(a2);
      sub_103310(v9 + 16LL * v11, a2, a3);
      sub_102750(a2, 58);
      sub_103310(v9 + 16 * v13, a2, a3);
      v12 = *(_DWORD *)(v9 + 4);
    }
    v15 = 1;
    if ( *(_BYTE *)v14 > 5u )
      v15 = *(_DWORD *)(v14 + 4) + 1;
    v11 = v13 + v15;
  }
  while ( (*(_BYTE *)(v9 + 1) & 0x20) != 0 )
  {
    v11 = 1;
    v9 += 16LL * *(unsigned int *)(v9 + 8);
    v12 = *(_DWORD *)(v9 + 4);
    if ( v12 )
      goto LABEL_10;
  }
  v22 = 125;
LABEL_35:
  sub_102750(a2, v22);
}
