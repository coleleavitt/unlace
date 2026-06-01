__int64 __fastcall sub_7E7F0(_QWORD *a1, __int64 a2, char a3, char a4, __int64 a5, __int64 a6)
{
  char v6; // r14
  unsigned __int8 v8; // bl
  unsigned __int16 v9; // bp
  char v10; // dl
  char v11; // r11
  __int64 v12; // rcx
  unsigned __int8 v13; // si
  __int16 v14; // r13
  char v15; // r9
  char v16; // si
  unsigned int v17; // esi
  __int16 v18; // ax
  char v19; // bl
  __int64 v20; // rsi
  __int16 v21; // ax
  __int64 (__fastcall *v22)(_QWORD *, char); // rax
  __int64 v23; // rbx
  unsigned __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(_QWORD *, char); // rax
  __int64 v28; // rbp
  unsigned __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // rsi
  __int64 v32; // rbx
  char *v34; // rsi
  unsigned __int16 v35; // dx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v40; // [rsp+10h] [rbp-58h]
  char v41; // [rsp+18h] [rbp-50h]
  char v42; // [rsp+1Ch] [rbp-4Ch]
  int v43; // [rsp+1Ch] [rbp-4Ch]
  unsigned int v44; // [rsp+20h] [rbp-48h]
  char v45; // [rsp+24h] [rbp-44h]
  unsigned int v46; // [rsp+28h] [rbp-40h]
  char v47; // [rsp+2Eh] [rbp-3Ah]
  char v48; // [rsp+2Fh] [rbp-39h]

  v6 = a5;
  v8 = *(_BYTE *)(a2 + 33);
  v40 = (__int64)(a1 + 28);
  v9 = *((_WORD *)a1 + 124);
  v10 = a4;
  v47 = a4;
  v11 = v8 & 7;
  v12 = v8 & 7;
  v13 = ((char)v8 >> 3) & 7;
  v14 = v13;
  if ( (*((_DWORD *)a1 + 63) & 0x10) == 0 )
  {
    if ( v9 <= 0x5C0u )
    {
      if ( v9 <= 0x5BCu )
      {
        if ( v9 > 0x378u )
        {
          if ( (unsigned __int16)(v9 - 993) > 3u )
          {
            v19 = v8 >> 6;
            v41 = v19;
            if ( *(_BYTE *)(a2 + 1) == 2 )
            {
              if ( v13 != 4 )
                goto LABEL_15;
              goto LABEL_89;
            }
            goto LABEL_36;
          }
        }
        else if ( v9 <= 0x374u )
        {
          v19 = v8 >> 6;
          v41 = v19;
          if ( *(_BYTE *)(a2 + 1) == 2 )
          {
            if ( v13 != 4 )
              goto LABEL_15;
            goto LABEL_74;
          }
          goto LABEL_36;
        }
      }
      goto LABEL_32;
    }
    if ( v9 <= 0x5F1u )
    {
      if ( v9 <= 0x5EDu )
      {
LABEL_29:
        v19 = v8 >> 6;
        v41 = v19;
        if ( *(_BYTE *)(a2 + 1) == 2 )
        {
          if ( v13 != 4 )
            goto LABEL_15;
          goto LABEL_100;
        }
        goto LABEL_36;
      }
    }
    else if ( (unsigned __int16)(v9 - 1532) > 0xFu )
    {
      goto LABEL_29;
    }
LABEL_32:
    v44 = a5;
    v42 = v10;
    if ( (*((_BYTE *)a1 + 497) & 0x10) != 0 )
    {
      v21 = sub_22710(v40, (char)(v13 | 0x10));
      a5 = v44;
      v10 = v42;
      v12 = v8 & 7;
    }
    else
    {
      v21 = sub_22710(v40, (char)v13);
      v12 = v8 & 7;
      v10 = v42;
      a5 = v44;
    }
    v14 = v21;
    v19 = v8 >> 6;
    v41 = v19;
    if ( *(_BYTE *)(a2 + 1) == 2 )
      goto LABEL_14;
    goto LABEL_36;
  }
  v15 = *((_BYTE *)a1 + 257);
  v16 = v13 | 8;
  if ( (v15 & 2) != 0 )
    v14 = v16;
  if ( v9 > 0x5C0u )
  {
    if ( v9 > 0x5F1u )
    {
      if ( (unsigned __int16)(v9 - 1532) > 0xFu )
        goto LABEL_11;
    }
    else if ( v9 <= 0x5EDu )
    {
      goto LABEL_11;
    }
  }
  else if ( v9 <= 0x5BCu )
  {
    if ( v9 > 0x378u )
    {
      if ( (unsigned __int16)(v9 - 993) > 3u )
        goto LABEL_11;
    }
    else if ( v9 <= 0x374u )
    {
      goto LABEL_11;
    }
  }
  v48 = *((_BYTE *)a1 + 257);
  if ( (*((_BYTE *)a1 + 497) & 0x10) != 0 )
  {
    v46 = a5;
    v45 = v10;
    v17 = v14 | 0x10;
  }
  else
  {
    v17 = v14;
    v46 = a5;
    v45 = v10;
  }
  v18 = sub_22710(v40, v17);
  v12 = v8 & 7;
  v11 = v8 & 7;
  v10 = v45;
  v14 = v18;
  a5 = v46;
  v15 = v48;
LABEL_11:
  a6 = v15 & 1;
  if ( (_DWORD)a6 )
    v12 = (unsigned int)(v11 | 8);
  v19 = v8 >> 6;
  v41 = v19;
  if ( *(_BYTE *)(a2 + 1) == 2 )
  {
LABEL_14:
    if ( v14 != 4 )
      goto LABEL_15;
    if ( v9 <= 0x5C0u )
    {
LABEL_89:
      if ( v9 > 0x5BCu )
      {
LABEL_92:
        v14 = 4;
        goto LABEL_15;
      }
      if ( v9 <= 0x378u )
      {
        if ( v9 > 0x374u )
          goto LABEL_92;
      }
      else if ( (unsigned __int16)(v9 - 993) <= 3u )
      {
        goto LABEL_92;
      }
LABEL_74:
      v32 = 0;
      if ( a3 )
        goto LABEL_67;
      if ( *((_WORD *)a1 + 124) == 129 && !*(_QWORD *)(a2 + 16) )
        goto LABEL_64;
      v36 = (unsigned int)sub_7E670(v40);
      if ( v47 != 43 )
        v36 = (unsigned int)v36 & 0xFFFFFFFD;
      goto LABEL_79;
    }
LABEL_100:
    if ( v9 > 0x5F1u )
    {
      v14 = 4;
      if ( (unsigned __int16)(v9 - 1532) > 0xFu )
        goto LABEL_74;
    }
    else
    {
      v14 = 4;
      if ( v9 <= 0x5EDu )
        goto LABEL_74;
    }
LABEL_15:
    if ( v10 )
      v20 = (unsigned int)v10;
    else
      v20 = (_BYTE)a5 == 0 ? 91 : 43;
    goto LABEL_39;
  }
LABEL_36:
  if ( v10 )
  {
    v43 = v12;
    v6 = 1;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 32LL))(a1, (unsigned int)v10);
    LODWORD(v12) = v43;
  }
  sub_7E6F0(a1, v12);
  v20 = 43;
  if ( v14 == 4 )
  {
    v35 = *((_WORD *)a1 + 124);
    if ( v35 > 0x5C0u )
    {
      if ( v35 > 0x5F1u )
      {
        v47 = 43;
        if ( (unsigned __int16)(v35 - 1532) <= 0xFu )
          goto LABEL_39;
        goto LABEL_74;
      }
      if ( v35 > 0x5EDu )
        goto LABEL_39;
    }
    else
    {
      if ( v35 > 0x5BCu )
        goto LABEL_39;
      if ( v35 > 0x378u )
      {
        v47 = 43;
        if ( (unsigned __int16)(v35 - 993) <= 3u )
          goto LABEL_39;
        goto LABEL_74;
      }
      if ( v35 > 0x374u )
        goto LABEL_39;
    }
    v47 = 43;
    goto LABEL_74;
  }
LABEL_39:
  (*(void (__fastcall **)(_QWORD *, __int64, _QWORD, __int64, __int64, __int64))(*a1 + 32LL))(a1, v20, *a1, v12, a5, a6);
  sub_7E6F0(a1, v14);
  if ( !v19 )
    goto LABEL_49;
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 9);
  v22 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v22 == sub_7D640 )
  {
    v23 = a1[4];
    if ( v23 )
    {
      v24 = v23 + 1;
      v25 = a1[4];
      v26 = a1[3];
      --v23;
      if ( a1[5] >= v24 )
      {
LABEL_43:
        a1[4] = v24;
        *(_BYTE *)(v26 + v23) = 42;
        *(_BYTE *)(a1[3] + v25) = 0;
        goto LABEL_44;
      }
    }
    else
    {
      v26 = a1[3];
      v25 = 1;
      v24 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_43;
    }
    v37 = qvector_reserve();
    a1[3] = v37;
    v26 = v37;
    goto LABEL_43;
  }
  v22(a1, 42);
LABEL_44:
  v27 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
  if ( v27 != sub_7D640 )
  {
    v27(a1, (1 << v41) + 48);
    goto LABEL_48;
  }
  v28 = a1[4];
  if ( !v28 )
  {
    v31 = a1[3];
    v30 = 1;
    v29 = 2;
    if ( a1[5] >= 2u )
      goto LABEL_47;
LABEL_83:
    v38 = qvector_reserve();
    a1[3] = v38;
    v31 = v38;
    goto LABEL_47;
  }
  v29 = v28 + 1;
  v30 = a1[4];
  v31 = a1[3];
  --v28;
  if ( a1[5] < v29 )
    goto LABEL_83;
LABEL_47:
  a1[4] = v29;
  *(_BYTE *)(v31 + v28) = (1 << v41) + 48;
  *(_BYTE *)(a1[3] + v30) = 0;
LABEL_48:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 9);
LABEL_49:
  v32 = 0;
  if ( !a3 )
  {
    if ( *((_WORD *)a1 + 124) == 129 && !*(_QWORD *)(a2 + 16) )
    {
      v6 = 1;
LABEL_64:
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 43);
      v34 = "00h";
      if ( *((_WORD *)a1 + 125) > 6u )
        v34 = "00000000h";
      v32 = 0;
      (*(void (__fastcall **)(_QWORD *, char *, __int64))(*a1 + 56LL))(a1, v34, 31);
LABEL_67:
      if ( !v6 )
        return v32;
      goto LABEL_50;
    }
    v6 = 1;
    v36 = (unsigned int)sub_7E670(v40);
LABEL_79:
    v32 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 24LL))(a1, a2, v36);
    goto LABEL_67;
  }
LABEL_50:
  (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 93);
  return v32;
}
