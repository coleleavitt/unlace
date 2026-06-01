__int64 __fastcall sub_BD60(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // al
  __int64 v3; // r12
  char v4; // al
  __int64 v6; // rdx
  __int64 v7; // r14
  __int64 (__fastcall *v8)(__int64, __int64, __int64); // rcx
  char v9; // cl
  bool v10; // dl
  unsigned __int8 v11; // bp
  unsigned __int8 v12; // al
  bool v13; // r12
  __int64 (__fastcall *v14)(__int64, __int64); // rax
  __int64 (__fastcall *v15)(__int64, __int64, __int64); // rcx
  __int64 v16; // r13
  __int64 (__fastcall *v17)(__int64, __int64, __int64); // rcx
  char v18; // al
  unsigned __int8 v19; // dl
  unsigned __int8 v20; // al
  bool v21; // cl
  bool v22; // dl
  __int64 (__fastcall *v23)(__int64, __int64); // rax
  unsigned __int8 v24; // dl
  unsigned __int8 v25; // al
  bool v26; // cl
  bool v27; // dl
  __int64 (__fastcall *v28)(__int64, __int64); // rax
  __int64 (__fastcall *v29)(__int64, __int64, __int64); // rcx
  bool v30; // dl
  unsigned __int8 v31; // bp
  unsigned __int8 v32; // al
  bool v33; // r12
  __int64 (__fastcall *v34)(__int64, __int64); // rax
  unsigned __int8 v35; // al
  bool v36; // dl
  bool v37; // cc
  bool v38; // al
  unsigned __int8 v39; // al
  bool v40; // dl

  v1 = *(_QWORD *)(a1 + 864);
  v2 = *(_BYTE *)(v1 + 1);
  v3 = v1;
  if ( *(_WORD *)(a1 + 40) != 3 )
  {
LABEL_4:
    if ( !v2 )
    {
LABEL_5:
      *(_BYTE *)(a1 + 792) = 1;
LABEL_6:
      v4 = *(_BYTE *)(v3 + 1);
      if ( !v4 )
      {
        *(_BYTE *)(a1 + 792) = 1;
        return 0;
      }
      v16 = a1 + 96;
      v17 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
      if ( v17 != sub_9290 )
      {
        v18 = v17(a1, a1 + 96, v3);
        goto LABEL_41;
      }
      if ( v4 != *(_BYTE *)(a1 + 97) )
        return 0;
LABEL_33:
      switch ( v4 )
      {
        case 99:
LABEL_42:
          v19 = *(_BYTE *)(v3 + 5);
          v20 = *(_BYTE *)(a1 + 101);
          v21 = v19 <= 0xF9u;
          v22 = v20 < v19;
          if ( v20 > 0xF9u )
          {
            if ( !v21 && !v22 )
              return 0;
          }
          else if ( !v21 || !v22 || *(_BYTE *)(a1 + 8) && v20 == 2 )
          {
            return 0;
          }
          v23 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
          if ( v23 != sub_92F0 )
            v23(a1, v16);
          return 0;
        case 100:
          v18 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v3 + 8);
          break;
        case 1:
          v18 = *(_WORD *)(a1 + 102) == *(_WORD *)(v3 + 6);
          break;
        default:
          return 0;
      }
LABEL_41:
      if ( !v18 )
        return 0;
      goto LABEL_42;
    }
    goto LABEL_23;
  }
  if ( !v2 )
  {
LABEL_3:
    *(_BYTE *)(a1 + 792) = 1;
    v2 = *(_BYTE *)(v1 + 1);
    goto LABEL_4;
  }
  v6 = *(_QWORD *)a1;
  v7 = a1 + 56;
  v8 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v8 == sub_9290 )
  {
    v9 = *(_BYTE *)(a1 + 57);
    if ( v9 != v2 )
      goto LABEL_26;
    if ( v9 != 99 )
    {
      if ( v9 == 100 )
      {
        v10 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v1 + 8);
      }
      else
      {
        if ( v9 != 1 )
          goto LABEL_24;
        v10 = *(_WORD *)(a1 + 62) == *(_WORD *)(v1 + 6);
      }
      if ( !v10 )
        goto LABEL_26;
    }
  }
  else if ( !(unsigned __int8)v8(a1, a1 + 56, *(_QWORD *)(a1 + 864)) )
  {
    goto LABEL_22;
  }
  v11 = *(_BYTE *)(v1 + 5);
  v12 = *(_BYTE *)(a1 + 61);
  v13 = v11 <= 0xF9u;
  if ( v12 > 0xF9u )
  {
    if ( v11 > 0xF9u && v12 >= v11 )
      goto LABEL_60;
  }
  else if ( v11 > 0xF9u || v12 >= v11 || *(_BYTE *)(a1 + 8) && v12 == 2 )
  {
    goto LABEL_60;
  }
  v14 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v14 == sub_92F0 )
    goto LABEL_22;
  v39 = v14(a1, a1 + 56);
  v40 = v13 || v39 < v11;
  if ( v39 <= 0xF9u )
    v40 = v13 && v39 < v11;
  if ( v40 )
  {
LABEL_22:
    v1 = *(_QWORD *)(a1 + 864);
    v2 = *(_BYTE *)(v1 + 1);
    v3 = v1;
    if ( !v2 )
      goto LABEL_5;
LABEL_23:
    v6 = *(_QWORD *)a1;
    v7 = a1 + 56;
    goto LABEL_24;
  }
LABEL_60:
  v1 = *(_QWORD *)(a1 + 864);
  v2 = *(_BYTE *)(v1 + 1);
  v3 = v1;
  if ( !v2 )
    goto LABEL_3;
  v6 = *(_QWORD *)a1;
  v29 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v29 == sub_9290 )
  {
    if ( v2 != *(_BYTE *)(a1 + 97) )
      goto LABEL_25;
    if ( v2 != 99 )
    {
      if ( v2 == 100 )
      {
        v30 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v1 + 8);
      }
      else
      {
        if ( v2 != 1 )
        {
LABEL_24:
          v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v6 + 8);
          if ( v15 != sub_9290 )
          {
            if ( !(unsigned __int8)v15(a1, v7, v1) )
              goto LABEL_57;
            goto LABEL_50;
          }
          goto LABEL_25;
        }
        v30 = *(_WORD *)(a1 + 102) == *(_WORD *)(v1 + 6);
      }
      if ( !v30 )
      {
LABEL_25:
        v9 = *(_BYTE *)(a1 + 57);
LABEL_26:
        if ( v2 != v9 )
          goto LABEL_38;
        if ( v2 != 99 )
        {
          if ( v2 == 100 )
          {
            if ( *(_QWORD *)(a1 + 64) != *(_QWORD *)(v1 + 8) )
              goto LABEL_30;
          }
          else
          {
            if ( v2 != 1 )
            {
LABEL_30:
              v3 = v1;
              goto LABEL_6;
            }
            if ( *(_WORD *)(a1 + 62) != *(_WORD *)(v1 + 6) )
            {
LABEL_38:
              v4 = *(_BYTE *)(v1 + 1);
              v16 = a1 + 96;
              v3 = v1;
              if ( v4 != *(_BYTE *)(a1 + 97) )
                return 0;
              goto LABEL_33;
            }
          }
        }
LABEL_50:
        v24 = *(_BYTE *)(v1 + 5);
        v25 = *(_BYTE *)(a1 + 61);
        v26 = v24 <= 0xF9u;
        v27 = v25 < v24;
        if ( v25 > 0xF9u )
        {
          if ( v26 || v27 )
          {
LABEL_55:
            v28 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
            if ( v28 != sub_92F0 )
              v28(a1, v7);
          }
        }
        else if ( v26 && v27 && (!*(_BYTE *)(a1 + 8) || v25 != 2) )
        {
          goto LABEL_55;
        }
LABEL_57:
        v3 = *(_QWORD *)(a1 + 864);
        goto LABEL_6;
      }
    }
  }
  else if ( !(unsigned __int8)v29(a1, a1 + 96, *(_QWORD *)(a1 + 864)) )
  {
    goto LABEL_22;
  }
  v31 = *(_BYTE *)(v1 + 5);
  v32 = *(_BYTE *)(a1 + 101);
  v33 = v31 <= 0xF9u;
  if ( v32 > 0xF9u )
  {
    if ( v31 > 0xF9u && v32 >= v31 )
      goto LABEL_77;
  }
  else if ( v31 > 0xF9u || v32 >= v31 || *(_BYTE *)(a1 + 8) && v32 == 2 )
  {
    goto LABEL_77;
  }
  v34 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v34 == sub_92F0 )
    goto LABEL_22;
  v35 = v34(a1, a1 + 96);
  v36 = v33 || v35 < v31;
  v37 = v35 <= 0xF9u;
  v38 = v33 && v35 < v31;
  if ( !v37 )
    v38 = v36;
  if ( v38 )
    goto LABEL_22;
LABEL_77:
  *(_QWORD *)(*(_QWORD *)(a1 + 376) + 16LL) = 256LL - *(_QWORD *)(a1 + 144);
  return 1;
}

