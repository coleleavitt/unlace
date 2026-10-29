__int64 __fastcall sub_63010(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r8
  char v3; // bp
  unsigned int v4; // r9d
  int v5; // edx
  int v6; // esi
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  int v11; // edx
  unsigned __int16 v12; // ax
  int v13; // ecx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int16 v19; // ax
  char v20; // al
  __int64 v21; // rax
  __int64 v22; // r12
  _BYTE *v23; // rax
  char v24; // dl
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int16 v27; // r8
  char v28; // di
  int v29; // ecx
  char v30; // r11
  char v31; // r9
  unsigned __int8 v32; // r9
  __int64 v33; // rdx
  __int16 v34; // r10
  char v35; // si
  __int64 v36; // rdx
  char v37; // cl
  char v38; // cl
  __int64 v39; // rdx

  v1 = (*(_DWORD *)(a1 + 52) >> 8) & 0xF;
  *(_WORD *)(*(_QWORD *)(a1 + 8) + 24LL) = *((_WORD *)&unk_8DFC0 + 2 * v1);
  v2 = *(_QWORD *)(a1 + 8);
  if ( !*(_WORD *)(v2 + 24) )
    return 0;
  v3 = *((_BYTE *)&unk_8DFC0 + 4 * v1 + 2);
  v4 = *(_DWORD *)(a1 + 52);
  v5 = *(_DWORD *)(a1 + 20) | (16 * *(_DWORD *)(a1 + 32));
  v6 = *(_DWORD *)(a1 + 16) | (16 * *(_DWORD *)(a1 + 36));
  v7 = *(_DWORD *)(a1 + 24) | (16 * *(_DWORD *)(a1 + 44));
  if ( v3 == 2 )
  {
    *(_BYTE *)(v2 + 41) = 1;
    *(_WORD *)(v2 + 46) = v5 + 61;
    *(_BYTE *)(v2 + 45) = 7;
    if ( (v6 & 1) != 0 )
      return 0;
    v15 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v15 + 81) = 1;
    *(_BYTE *)(v15 + 85) = 8;
    *(_WORD *)(v15 + 86) = v6 / 2 + 45;
    if ( (v7 & 1) != 0 )
      return 0;
    v16 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v16 + 121) = 1;
    *(_BYTE *)(v16 + 125) = 8;
    *(_WORD *)(v16 + 126) = v7 / 2 + 45;
  }
  else if ( v3 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 20) & 1) != 0 )
      return 0;
    *(_BYTE *)(v2 + 41) = 1;
    *(_BYTE *)(v2 + 45) = 8;
    *(_WORD *)(v2 + 46) = v5 / 2 + 45;
    if ( (v6 & 1) != 0 )
      return 0;
    v17 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v17 + 81) = 1;
    *(_BYTE *)(v17 + 85) = 8;
    *(_WORD *)(v17 + 86) = v6 / 2 + 45;
    v18 = *(_QWORD *)(a1 + 8);
    *(_WORD *)(v18 + 126) = v7 + 61;
    *(_BYTE *)(v18 + 121) = 1;
    *(_BYTE *)(v18 + 125) = 7;
  }
  else
  {
    if ( v3 != 1 || (*(_BYTE *)(a1 + 20) & 1) != 0 )
      return 0;
    *(_BYTE *)(v2 + 41) = 1;
    *(_BYTE *)(v2 + 45) = 8;
    *(_WORD *)(v2 + 46) = v5 / 2 + 45;
    v8 = *(_QWORD *)(a1 + 8);
    *(_WORD *)(v8 + 86) = v6 + 61;
    *(_BYTE *)(v8 + 81) = 1;
    *(_BYTE *)(v8 + 85) = 7;
    v9 = *(_QWORD *)(a1 + 8);
    *(_WORD *)(v9 + 126) = v7 + 61;
    *(_BYTE *)(v9 + 121) = 1;
    *(_BYTE *)(v9 + 125) = 7;
  }
  v10 = *(_QWORD *)(a1 + 8);
  v11 = *(_DWORD *)(a1 + 48);
  v12 = *(_WORD *)(v10 + 24);
  v13 = (v4 >> 20) & 3;
  if ( v12 <= 0x177u )
  {
    if ( v12 <= 0x175u )
    {
      if ( v12 != 307 )
      {
        if ( v12 == 357 )
        {
          if ( (*(_BYTE *)(a1 + 53) & 2) != 0 )
          {
            if ( v11 != 1 && v13 != 1 )
            {
              *(_BYTE *)(v10 + 33) = v13 == 0 ? -111 : -105;
              v10 = *(_QWORD *)(a1 + 8);
              goto LABEL_39;
            }
            return 0;
          }
          v21 = v13;
          if ( v11 )
            goto LABEL_33;
LABEL_36:
          v20 = byte_8E21C[v21];
LABEL_37:
          if ( !v20 )
            goto LABEL_39;
          goto LABEL_38;
        }
        goto LABEL_31;
      }
      v19 = 390;
      if ( !v11 )
        goto LABEL_28;
LABEL_27:
      *(_WORD *)(v10 + 24) = v19;
      v10 = *(_QWORD *)(a1 + 8);
      goto LABEL_28;
    }
LABEL_15:
    if ( v11 || !v13 )
      return 0;
LABEL_35:
    v21 = v13;
    goto LABEL_36;
  }
  if ( v12 == 377 )
    goto LABEL_15;
  if ( v12 != 419 )
  {
LABEL_31:
    if ( v11 )
    {
      v21 = v13;
LABEL_33:
      v20 = byte_8E218[v21];
      goto LABEL_37;
    }
    goto LABEL_35;
  }
  if ( v11 )
  {
    v19 = 403;
    goto LABEL_27;
  }
LABEL_28:
  if ( v13 != 3 )
  {
    v20 = byte_8E214[v13 + 1];
    if ( !v20 )
      goto LABEL_39;
LABEL_38:
    *(_BYTE *)(v10 + 33) = v20 | 0x80;
    v10 = *(_QWORD *)(a1 + 8);
LABEL_39:
    if ( v3 == 2 )
    {
      *(_BYTE *)(v10 + 45) = get_dtype_by_size();
      v25 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v25 + 125) = get_dtype_by_size();
    }
    else
    {
      *(_BYTE *)(v10 + 45) = get_dtype_by_size();
      v22 = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(v22 + 125) = get_dtype_by_size();
      if ( v3 == 3 )
      {
        v23 = *(_BYTE **)(a1 + 8);
        v24 = v23[45];
        goto LABEL_42;
      }
    }
    v23 = *(_BYTE **)(a1 + 8);
    v24 = v23[125];
LABEL_42:
    v23[85] = v24;
    return *(unsigned __int16 *)(*(_QWORD *)(a1 + 8) + 26LL);
  }
  sub_62620();
  v26 = (unk_8DFF4 >> 8) & 0xF;
  v27 = *((_WORD *)&unk_8DF80 + 2 * v26);
  if ( !v27 )
    return 0;
  v28 = *((_BYTE *)&unk_8DF80 + 4 * v26 + 2);
  v29 = (unk_8DFF4 >> 20) & 3;
  if ( v28 != 20 )
  {
    if ( (unsigned int)(v29 - 1) <= 1 )
    {
      v30 = *((_BYTE *)&unk_8DF80 + 4 * v26 + 3);
      if ( v28 != 5 )
      {
        v31 = *((_BYTE *)&unk_8DF80 + 4 * v26 + 2);
        if ( v28 != 1 )
          goto LABEL_54;
        v31 = 9;
        if ( unk_8DFF0 )
          goto LABEL_54;
        goto LABEL_67;
      }
      if ( !v30 || !unk_8DFF0 )
      {
LABEL_67:
        v31 = 5;
LABEL_54:
        v32 = v29 + v31;
        goto LABEL_55;
      }
    }
    return 0;
  }
  if ( v29 == 1 )
  {
    v30 = *((_BYTE *)&unk_8DF80 + 4 * v26 + 3);
    v32 = 19;
  }
  else
  {
    if ( v29 != 2 )
      return 0;
    v30 = *((_BYTE *)&unk_8DF80 + 4 * v26 + 3);
    v32 = 20;
  }
LABEL_55:
  if ( v30 )
  {
    *(_BYTE *)(unk_8DFC8 + 41LL) = 1;
    *(_BYTE *)(unk_8DFC8 + 45LL) = 8;
    *(_WORD *)(unk_8DFC8 + 46LL) = -29918;
    v33 = unk_8DFC8;
    *(_BYTE *)(unk_8DFC8 + 81LL) = 1;
    *(_WORD *)(unk_8DFC8 + 86LL) = 6064;
    if ( v28 == 20 )
      goto LABEL_57;
LABEL_73:
    *(_BYTE *)(v33 + 85) = 7;
    v35 = unk_8DFEC;
    v36 = unk_8DFC8;
    v34 = 419;
    if ( v29 == 1 )
    {
      v34 = 3;
      v35 = 2 * unk_8DFEC;
      v37 = 1;
    }
    else
    {
      v37 = 2;
    }
LABEL_59:
    *(_BYTE *)(v36 + 125) = v37;
    *(_BYTE *)(v36 + 121) = 12;
    *(_WORD *)(v36 + 126) = v34 + 61;
    *(_QWORD *)(v36 + 128) = 0;
    *(_BYTE *)(v36 + 153) = 0;
    *(_BYTE *)(v36 + 154) = v35 + 1;
    *(_BYTE *)(unk_8DFC8 + 85LL) = *(_BYTE *)(unk_8DFC8 + 125LL);
    if ( v30 )
    {
      if ( v32 > 0x14u )
      {
        *(_BYTE *)(unk_8DFC8 + 45LL) = 7;
        *(_WORD *)(unk_8DFC8 + 24LL) = v27;
        v39 = unk_8DFC8;
        goto LABEL_80;
      }
      v38 = byte_8DB20[v32];
    }
    else
    {
      v38 = *(_BYTE *)(unk_8DFC8 + 125LL);
    }
    *(_BYTE *)(unk_8DFC8 + 45LL) = v38;
    *(_WORD *)(unk_8DFC8 + 24LL) = v27;
    v39 = unk_8DFC8;
    if ( !v32 )
      return *(unsigned __int16 *)(v39 + 26);
LABEL_80:
    *(_BYTE *)(v39 + 33) = v32 | 0x80;
    v39 = unk_8DFC8;
    return *(unsigned __int16 *)(v39 + 26);
  }
  if ( unk_8DFF0 )
  {
    *(_BYTE *)(unk_8DFC8 + 41LL) = 1;
    *(_BYTE *)(unk_8DFC8 + 45LL) = 8;
    *(_WORD *)(unk_8DFC8 + 46LL) = -29918;
  }
  else
  {
    *(_BYTE *)(unk_8DFC8 + 41LL) = 1;
    *(_WORD *)(unk_8DFC8 + 46LL) = 5671;
    if ( v28 == 20 )
    {
      *(_BYTE *)(unk_8DFC8 + 45LL) = 4;
      v33 = unk_8DFC8;
      if ( !unk_8DFF0 )
      {
        *(_BYTE *)(unk_8DFC8 + 81LL) = 1;
        *(_WORD *)(unk_8DFC8 + 86LL) = 6064;
LABEL_57:
        *(_BYTE *)(v33 + 85) = 4;
        v34 = 419;
        v35 = unk_8DFEC;
        v36 = unk_8DFC8;
        if ( v29 == 1 )
        {
          v34 = 3;
          v35 = 2 * unk_8DFEC;
          v37 = 18;
        }
        else
        {
          v37 = 3;
        }
        goto LABEL_59;
      }
    }
    else
    {
      *(_BYTE *)(unk_8DFC8 + 45LL) = 7;
      v33 = unk_8DFC8;
      if ( !unk_8DFF0 )
      {
        *(_BYTE *)(unk_8DFC8 + 81LL) = 1;
        *(_WORD *)(unk_8DFC8 + 86LL) = 6064;
        goto LABEL_73;
      }
    }
  }
  return 0;
}
