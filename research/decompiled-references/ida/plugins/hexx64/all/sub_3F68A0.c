__int64 __fastcall sub_3F68A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  const char *v3; // r12
  const char *v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 result; // rax
  _DWORD *v9; // rsi
  char v10; // dl
  __int64 v11; // r12
  __int64 v12; // r13
  int v13; // ecx
  int v14; // edx
  __int64 v15; // r12
  __int64 v16; // rbp
  int v17; // ecx
  int v18; // edx
  __int64 v19; // r12
  __int64 v20; // rbp
  int v21; // ecx
  int v22; // edx
  __int64 v23; // r12
  __int64 v24; // rbp
  int v25; // ecx
  int v26; // ebp
  unsigned __int8 v27; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v28; // [rsp+Fh] [rbp-39h]
  unsigned __int8 v29; // [rsp+Fh] [rbp-39h]
  _QWORD v30[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(const char **)(a2 + 40);
  v30[1] = __readfsqword(0x28u);
  if ( *(_BYTE *)(v2 + 144) )
  {
    if ( strncmp(v3, "__readfs", 8u) && strncmp(v3, "__writefs", 9u) )
    {
      v5 = "__addfs";
LABEL_5:
      if ( strncmp(v3, v5, 7u) )
        return 0;
    }
  }
  else if ( strncmp(v3, "__readgs", 8u) )
  {
    v5 = "__addgs";
    if ( !strncmp(v3, "__writegs", 9u) )
    {
      v6 = *(_QWORD *)(a2 + 72);
      v7 = *(_QWORD *)(v6 + 24);
      if ( *(_BYTE *)v7 != 4 )
        return 0;
      goto LABEL_12;
    }
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(a2 + 72);
  v7 = *(_QWORD *)(v6 + 24);
  if ( *(_BYTE *)v7 != 4 )
    return 0;
LABEL_12:
  v9 = *(_DWORD **)(v7 + 8);
  if ( *v9 != 13 )
    return 0;
  result = sub_32A8E0(v30, (__int64)v9);
  if ( !(_BYTE)result )
    return 0;
  v10 = *(_BYTE *)(*(_QWORD *)(a2 + 40) + 2LL);
  switch ( v10 )
  {
    case 'r':
      *(_DWORD *)a2 = 4;
      v29 = result;
      sub_11CDA0(a2 + 48);
      v23 = v30[0];
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      sub_11CDA0(a2 + 32);
      *(_BYTE *)(a2 + 32) = 6;
      v25 = 8 * *(_DWORD *)(v24 + 84);
      if ( (unsigned __int64)v25 <= 0x3F )
        v23 &= ~(-1LL << v25);
      v26 = *(_DWORD *)(a2 + 68);
      *(_QWORD *)(a2 + 40) = v23;
      *(_DWORD *)(a2 + 36) = v26;
      sub_11CDA0(a2 + 64);
      *(_DWORD *)(a2 + 68) = v26;
      return v29;
    case 'w':
      *(_DWORD *)a2 = 4;
      v28 = result;
      sub_11CDA0(a2 + 48);
      sub_11CA10((char *)(a2 + 32), (char *)(*(_QWORD *)(v6 + 24) + 80LL));
      v19 = v30[0];
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      sub_11CDA0(a2 + 64);
      *(_BYTE *)(a2 + 64) = 6;
      result = v28;
      v21 = 8 * *(_DWORD *)(v20 + 84);
      if ( (unsigned __int64)v21 <= 0x3F )
        v19 &= ~(-1LL << v21);
      v22 = *(_DWORD *)(a2 + 36);
      *(_QWORD *)(a2 + 72) = v19;
      *(_DWORD *)(a2 + 68) = v22;
      break;
    case 'a':
      *(_DWORD *)a2 = 12;
      v27 = result;
      sub_11CA10((char *)(a2 + 48), (char *)(*(_QWORD *)(v6 + 24) + 80LL));
      v11 = v30[0];
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      sub_11CDA0(a2 + 32);
      *(_BYTE *)(a2 + 32) = 6;
      v13 = 8 * *(_DWORD *)(v12 + 84);
      if ( (unsigned __int64)v13 <= 0x3F )
        v11 &= ~(-1LL << v13);
      v14 = *(_DWORD *)(a2 + 52);
      *(_QWORD *)(a2 + 40) = v11;
      v15 = v30[0];
      *(_DWORD *)(a2 + 36) = v14;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 112LL);
      sub_11CDA0(a2 + 64);
      *(_BYTE *)(a2 + 64) = 6;
      result = v27;
      v17 = 8 * *(_DWORD *)(v16 + 84);
      if ( (unsigned __int64)v17 <= 0x3F )
        v15 &= ~(-1LL << v17);
      v18 = *(_DWORD *)(a2 + 52);
      *(_QWORD *)(a2 + 72) = v15;
      *(_DWORD *)(a2 + 68) = v18;
      break;
  }
  return result;
}

