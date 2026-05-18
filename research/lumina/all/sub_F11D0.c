__int64 __fastcall sub_F11D0(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64 a1),
        __int64 a6)
{
  const void *v6; // r12
  __int64 v8; // rbx
  __int64 v9; // rdx
  char v10; // r14
  __int64 v11; // r15
  int v12; // r13d
  char *v13; // rax
  char v14; // dl
  char v15; // al
  char v16; // bl
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // r15
  __int64 v21; // rsi
  void *v22; // rdi
  size_t v23; // rdx
  size_t v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  __int64 v28; // rdi
  __int64 (__fastcall *v29)(__int64); // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+0h] [rbp-48h]
  __int64 (__fastcall *v31)(__int64); // [rsp+8h] [rbp-40h]

  v6 = a2;
  if ( !a2 )
  {
    if ( (*(_WORD *)(a1 + 20) & 0x9000) != 0 )
    {
      sub_C93F0(a1, 0, a3, a4, (__int64)a5, a6);
    }
    else
    {
      LODWORD(v6) = 0;
      *(_WORD *)(a1 + 20) = 1;
    }
    return (unsigned int)v6;
  }
  v8 = a3;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = a4;
  if ( v9 )
  {
    v11 = *(int *)(v9 + 136);
    if ( v8 >= 0 )
      goto LABEL_4;
    if ( (_BYTE)a4 != 1 )
    {
      if ( v11 < 0 )
        goto LABEL_25;
      goto LABEL_21;
    }
    goto LABEL_43;
  }
  v11 = 1000000000;
  if ( v8 < 0 )
  {
    if ( (_BYTE)a4 != 1 )
    {
LABEL_21:
      v8 = 0;
      if ( !*(_WORD *)a2 )
      {
LABEL_48:
        LOWORD(v12) = 514;
        if ( a5 != (__int64 (__fastcall *)(__int64))-1LL )
          goto LABEL_8;
        goto LABEL_49;
      }
      while ( 1 )
      {
        v8 += 2;
        if ( v11 < v8 )
          break;
        if ( !*(_WORD *)((char *)a2 + v8) )
          goto LABEL_48;
      }
LABEL_25:
      if ( (unsigned __int64)a5 - 1 <= 0xFFFFFFFFFFFFFFFDLL )
      {
        if ( a5 != sub_D42A0 )
        {
          a5((__int64)a2);
          if ( (*(_WORD *)(a1 + 20) & 0x9000) == 0 )
            goto LABEL_27;
          goto LABEL_36;
        }
        sub_C9250(v9, a2);
      }
      if ( (*(_WORD *)(a1 + 20) & 0x9000) == 0 )
      {
LABEL_27:
        *(_WORD *)(a1 + 20) = 1;
        goto LABEL_28;
      }
LABEL_36:
      sub_C93F0(a1, (__int64)a2, v9, a4, (__int64)a5, a6);
LABEL_28:
      v17 = *(_QWORD *)(a1 + 24);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 344);
        LODWORD(v6) = 18;
        if ( v18 )
        {
          ++*(_DWORD *)(v18 + 48);
          *(_DWORD *)(v18 + 24) = 18;
        }
      }
      else
      {
        LODWORD(v6) = 18;
      }
      return (unsigned int)v6;
    }
LABEL_43:
    v31 = a5;
    v30 = *(_QWORD *)(a1 + 24);
    LOWORD(v12) = 514;
    v10 = 1;
    v24 = strlen((const char *)a2);
    v9 = v30;
    v8 = v24;
    a5 = v31;
    goto LABEL_6;
  }
LABEL_4:
  v12 = (_BYTE)a4 == 0 ? 16 : 2;
  if ( !(_BYTE)a4 )
    v10 = 1;
LABEL_6:
  if ( v8 > v11 )
    goto LABEL_25;
  if ( a5 == (__int64 (__fastcall *)(__int64))-1LL )
  {
    v20 = v8;
    if ( (v12 & 0x200) == 0 )
    {
LABEL_38:
      v21 = 32;
      if ( v8 >= 32 )
        v21 = v8;
      if ( (int)v21 > *(_DWORD *)(a1 + 32) )
      {
        if ( (unsigned int)sub_E0020(a1, v21, 0) )
        {
LABEL_18:
          LODWORD(v6) = 7;
          return (unsigned int)v6;
        }
        v22 = *(void **)(a1 + 8);
      }
      else
      {
        v22 = *(void **)(a1 + 40);
        *(_WORD *)(a1 + 20) &= 0x2Du;
        *(_QWORD *)(a1 + 8) = v22;
      }
      v23 = v8;
      v8 = v20;
      memcpy(v22, v6, v23);
      goto LABEL_13;
    }
LABEL_49:
    v20 = v8;
    v8 += (v10 != 1) + 1LL;
    goto LABEL_38;
  }
LABEL_8:
  if ( (*(_WORD *)(a1 + 20) & 0x9000) != 0 || *(_DWORD *)(a1 + 32) )
  {
    v29 = a5;
    sub_C9690(a1, (__int64)a2, v9, a4, (__int64)a5, a6);
    a5 = v29;
  }
  *(_QWORD *)(a1 + 8) = a2;
  if ( a5 == sub_D42A0 )
  {
    v25 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 40) = a2;
    if ( v25 && *(_QWORD *)(v25 + 488) > (unsigned __int64)a2 )
    {
      v26 = 128;
      if ( *(_QWORD *)(v25 + 472) <= (unsigned __int64)a2 )
        goto LABEL_52;
      if ( *(_QWORD *)(v25 + 480) <= (unsigned __int64)a2 )
      {
        v26 = *(unsigned __int16 *)(v25 + 414);
        goto LABEL_52;
      }
    }
    v26 = ((__int64 (__fastcall *)(_QWORD *))*(&xmmword_2414B0 + 1))(a2);
LABEL_52:
    *(_DWORD *)(a1 + 32) = v26;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 48) = a5;
  LOWORD(v12) = (a5 == nullptr ? 0x2000 : 4096) | v12;
LABEL_13:
  LODWORD(v6) = 0;
  *(_DWORD *)(a1 + 16) = v8;
  *(_WORD *)(a1 + 20) = v12;
  *(_BYTE *)(a1 + 22) = v10;
  if ( (unsigned __int8)v10 > 1u && v8 > 1 )
  {
    v13 = *(char **)(a1 + 8);
    v14 = *v13;
    v15 = v13[1];
    if ( v14 != -2 || (v16 = 3, v15 != -1) )
    {
      if ( v15 != -2 || v14 != -1 )
      {
        LODWORD(v6) = 0;
        return (unsigned int)v6;
      }
      v16 = 2;
    }
    LODWORD(v6) = sub_E0350(a1);
    if ( !(_DWORD)v6 )
    {
      v27 = *(_DWORD *)(a1 + 16);
      v28 = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 16) = v27 - 2;
      memmove((void *)v28, (const void *)(v28 + 2), v27 - 2);
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 16)) = 0;
      *(_BYTE *)(*(_QWORD *)(a1 + 8) + *(int *)(a1 + 16) + 1LL) = 0;
      *(_BYTE *)(a1 + 22) = v16;
      *(_WORD *)(a1 + 20) |= 0x200u;
      return (unsigned int)v6;
    }
    goto LABEL_18;
  }
  return (unsigned int)v6;
}
