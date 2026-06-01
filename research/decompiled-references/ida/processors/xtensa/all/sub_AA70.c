__int64 __fastcall sub_AA70(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // al
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // r13
  __int64 (__fastcall *v7)(__int64, __int64, __int64); // r8
  char v8; // dl
  bool v9; // cl
  unsigned __int8 v10; // bp
  unsigned __int8 v11; // al
  bool v12; // r14
  __int64 (__fastcall *v13)(__int64, __int64); // rax
  __int64 (__fastcall *v14)(__int64, __int64, __int64); // rcx
  bool v15; // al
  unsigned __int8 v16; // dl
  unsigned __int8 v17; // al
  bool v18; // cl
  bool v19; // dl
  __int64 (__fastcall *v20)(__int64, __int64); // rax
  __int64 v21; // rax
  unsigned __int8 v22; // al
  bool v23; // dl

  v1 = *(_QWORD *)(a1 + 864);
  v2 = *(_BYTE *)(v1 + 1);
  v3 = v1;
  if ( *(_WORD *)(a1 + 40) != 59 )
    goto LABEL_4;
  if ( !v2 )
    goto LABEL_3;
  v5 = *(_QWORD *)a1;
  v6 = a1 + 56;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
  if ( v7 == sub_9290 )
  {
    v8 = *(_BYTE *)(a1 + 57);
    if ( v8 != v2 )
      goto LABEL_27;
    if ( v8 != 99 )
    {
      if ( v8 == 100 )
      {
        v9 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v1 + 8);
      }
      else
      {
        if ( v8 != 1 )
        {
LABEL_24:
          v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v5 + 8);
LABEL_25:
          if ( v14 != sub_9290 )
          {
            if ( !(unsigned __int8)v14(a1, v6, v1) )
              goto LABEL_40;
            goto LABEL_33;
          }
          v8 = *(_BYTE *)(a1 + 57);
LABEL_27:
          if ( v2 != v8 )
            return 0;
          if ( v2 != 99 )
          {
            if ( v2 == 100 )
            {
              v15 = *(_QWORD *)(a1 + 64) == *(_QWORD *)(v1 + 8);
            }
            else
            {
              v3 = v1;
              if ( v2 != 1 )
                goto LABEL_6;
              v15 = *(_WORD *)(a1 + 62) == *(_WORD *)(v1 + 6);
            }
            if ( !v15 )
              return 0;
          }
LABEL_33:
          v16 = *(_BYTE *)(v1 + 5);
          v17 = *(_BYTE *)(a1 + 61);
          v18 = v16 <= 0xF9u;
          v19 = v17 < v16;
          if ( v17 > 0xF9u )
          {
            if ( v18 || v19 )
            {
LABEL_38:
              v20 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
              if ( v20 != sub_92F0 )
                v20(a1, v6);
            }
          }
          else if ( v18 && v19 && (!*(_BYTE *)(a1 + 8) || v17 != 2) )
          {
            goto LABEL_38;
          }
LABEL_40:
          v3 = *(_QWORD *)(a1 + 864);
LABEL_6:
          if ( !*(_BYTE *)(v3 + 1) )
            *(_BYTE *)(a1 + 792) = 1;
          return 0;
        }
        v9 = *(_WORD *)(a1 + 62) == *(_WORD *)(v1 + 6);
      }
      if ( !v9 )
        goto LABEL_27;
    }
  }
  else if ( !(unsigned __int8)v7(a1, a1 + 56, v1) )
  {
LABEL_22:
    v1 = *(_QWORD *)(a1 + 864);
    v2 = *(_BYTE *)(v1 + 1);
    v3 = v1;
    goto LABEL_4;
  }
  v10 = *(_BYTE *)(v1 + 5);
  v11 = *(_BYTE *)(a1 + 61);
  v12 = v10 <= 0xF9u;
  if ( v11 > 0xF9u )
  {
    if ( v10 > 0xF9u && v11 >= v10 )
      goto LABEL_43;
  }
  else if ( v10 > 0xF9u || v11 >= v10 || *(_BYTE *)(a1 + 8) && v11 == 2 )
  {
    goto LABEL_43;
  }
  v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL);
  if ( v13 == sub_92F0 )
    goto LABEL_22;
  v22 = v13(a1, a1 + 56);
  v23 = v12 || v22 < v10;
  if ( v22 <= 0xF9u )
    v23 = v12 && v22 < v10;
  if ( v23 )
    goto LABEL_22;
LABEL_43:
  v1 = *(_QWORD *)(a1 + 864);
  v2 = *(_BYTE *)(v1 + 1);
  v3 = v1;
  if ( !v2 )
  {
LABEL_3:
    *(_BYTE *)(a1 + 792) = 1;
    v2 = *(_BYTE *)(v1 + 1);
LABEL_4:
    if ( !v2 )
    {
      *(_BYTE *)(a1 + 792) = 1;
      goto LABEL_6;
    }
    v5 = *(_QWORD *)a1;
    v6 = a1 + 56;
    goto LABEL_24;
  }
  if ( *(_BYTE *)(a1 + 97) != 4 || *(_WORD *)(a1 + 102) != *(_WORD *)(v1 + 6) || *(_QWORD *)(a1 + 104) )
  {
    v14 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 8LL);
    goto LABEL_25;
  }
  v21 = *(_QWORD *)(a1 + 376);
  *(_DWORD *)v21 |= 0x200u;
  *(_QWORD *)(v21 + 56) = 0;
  **(_DWORD **)(a1 + 376) = **(_DWORD **)(a1 + 376) & 0xFFFFFBFB | 4;
  return 1;
}

