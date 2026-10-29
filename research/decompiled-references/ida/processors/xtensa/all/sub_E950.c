__int64 __fastcall sub_E950(__int64 a1)
{
  unsigned int v1; // ebp
  __int64 v3; // r12
  char v4; // al
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64, __int64); // r8
  __int64 v7; // r13
  char v8; // al
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // al
  bool v11; // cl
  bool v12; // dl
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  bool v14; // dl
  unsigned __int8 v15; // dl
  unsigned __int8 v16; // al
  bool v17; // cl
  bool v18; // dl
  __int64 (__fastcall *v19)(__int64, __int64); // rax
  __int64 (__fastcall *v20)(__int64, __int64, __int64); // r8

  v1 = sub_E630(a1);
  if ( (_BYTE)v1 )
    return v1;
  v3 = *(_QWORD *)(a1 + 864);
  v4 = *(_BYTE *)(v3 + 1);
  if ( !v4 )
  {
    *(_BYTE *)(a1 + 792) = 1;
    v4 = *(_BYTE *)(v3 + 1);
    goto LABEL_5;
  }
  v5 = *(_QWORD *)a1;
  v6 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v6 == sub_9290 )
  {
    if ( v4 != *(_BYTE *)(a1 + 57) )
      goto LABEL_9;
    if ( v4 != 99 )
    {
      if ( v4 == 100 )
      {
        v14 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v3 + 8);
      }
      else
      {
        if ( v4 != 1 )
          goto LABEL_37;
        v14 = *(_WORD *)(a1 + 62) == *(_WORD *)(v3 + 6);
      }
      if ( !v14 )
      {
LABEL_9:
        v7 = a1 + 96;
        goto LABEL_10;
      }
    }
  }
  else if ( !(unsigned __int8)v6(a1, a1 + 56, *(_QWORD *)(a1 + 864)) )
  {
    goto LABEL_35;
  }
  v15 = *(_BYTE *)(v3 + 5);
  v16 = *(_BYTE *)(a1 + 61);
  v17 = v15 <= 0xF9u;
  v18 = v16 < v15;
  if ( v16 > 0xF9u )
  {
    if ( v18 || v17 )
    {
LABEL_33:
      v19 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
      if ( v19 != sub_92F0 )
        v19(a1, a1 + 56);
    }
  }
  else if ( v18 && v17 && (v16 != 2 || !*(_BYTE *)(a1 + 8)) )
  {
    goto LABEL_33;
  }
LABEL_35:
  v3 = *(_QWORD *)(a1 + 864);
  v4 = *(_BYTE *)(v3 + 1);
LABEL_5:
  if ( v4 )
  {
    v5 = *(_QWORD *)a1;
LABEL_37:
    v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v5 + 8);
    v7 = a1 + 96;
    if ( v20 != sub_9290 )
    {
      v8 = v20(a1, a1 + 96, v3);
      goto LABEL_15;
    }
LABEL_10:
    if ( v4 != *(_BYTE *)(a1 + 97) )
      return v1;
    switch ( v4 )
    {
      case 99:
LABEL_16:
        v9 = *(_BYTE *)(v3 + 5);
        v10 = *(_BYTE *)(a1 + 101);
        v11 = v9 <= 0xF9u;
        v12 = v10 < v9;
        if ( v10 > 0xF9u )
        {
          if ( !v12 && !v11 )
            return v1;
        }
        else if ( !v12 || !v11 || *(_BYTE *)(a1 + 8) && v10 == 2 )
        {
          return v1;
        }
        v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
        if ( v13 != sub_92F0 )
          v13(a1, v7);
        return v1;
      case 100:
        v8 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v3 + 8);
        break;
      case 1:
        v8 = *(_WORD *)(a1 + 102) == *(_WORD *)(v3 + 6);
        break;
      default:
        return v1;
    }
LABEL_15:
    if ( !v8 )
      return v1;
    goto LABEL_16;
  }
  *(_BYTE *)(a1 + 792) = 1;
  return v1;
}

