__int64 __fastcall sub_1922B0(__int64 a1, __int64 a2, _BYTE *a3, double a4)
{
  char v5; // si
  char v7; // dl
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v11; // si
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rsi

  v5 = *(_BYTE *)(a2 + 48);
  if ( a3 )
  {
    v7 = a3[8];
    if ( v7 )
    {
      if ( v5 == 1 )
      {
        v16 = *(int *)(a2 + 56);
        if ( v7 != 1 )
        {
          v11 = *(_BYTE *)(a2 + 32);
          if ( v11 == 1 )
            return -1;
          goto LABEL_10;
        }
      }
      else
      {
        if ( v5 != 5 || v7 != 5 )
          goto LABEL_9;
        v16 = *(_QWORD *)(*(_QWORD *)(a2 + 56) + 8LL);
      }
      if ( *(_QWORD *)a3 == v16 )
        goto LABEL_14;
LABEL_9:
      v11 = *(_BYTE *)(a2 + 32);
      if ( v11 == 1 )
      {
        v12 = *(int *)(a2 + 40);
LABEL_12:
        if ( v7 != v11 || *(_QWORD *)a3 != v12 )
          return -1;
LABEL_14:
        if ( !sub_125B60((unsigned __int8 *)(a2 + 32), a2 + 48, 0, a4) )
          return *(_QWORD *)a3;
        return -1;
      }
LABEL_10:
      if ( v11 != 5 )
        return -1;
      v12 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + 8LL);
      goto LABEL_12;
    }
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1352LL);
  if ( *(_BYTE *)(a2 + 32) == 10 )
  {
    v13 = *(_QWORD *)(a2 + 40);
    if ( *(_BYTE *)v13 == 6 && v8 == *(_QWORD *)(v13 + 8) )
    {
      v14 = a2 + 48;
      goto LABEL_19;
    }
  }
  if ( v5 != 10 )
    return -1;
  v15 = *(_QWORD *)(a2 + 56);
  if ( *(_BYTE *)v15 != 6 || v8 != *(_QWORD *)(v15 + 8) )
    return -1;
  v14 = a2 + 32;
  v5 = *(_BYTE *)(a2 + 32);
LABEL_19:
  v9 = -1;
  if ( v5 != 1 )
  {
    if ( v5 == 5 )
      return *(_QWORD *)(*(_QWORD *)(v14 + 8) + 8LL);
    return v9;
  }
  return *(int *)(v14 + 8);
}

