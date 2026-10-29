__int64 __fastcall sub_1B780(_QWORD *a1, __int64 a2, const char *a3, unsigned __int64 a4)
{
  size_t v7; // rax
  size_t v8; // rbp
  char v9; // al
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r15
  __int64 v15; // rdi
  unsigned __int64 v16; // rbp
  char *v17; // rdi
  const char *v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // ebx
  char *v22; // rax
  int v23; // eax
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rax
  char *v27; // rax
  char v28; // cl
  char *v29; // rax
  char *v30; // rbx
  char v32; // [rsp+14h] [rbp-9C4h]
  __int128 v33; // [rsp+20h] [rbp-9B8h] BYREF
  __int64 v34; // [rsp+30h] [rbp-9A8h]
  __int64 v35; // [rsp+38h] [rbp-9A0h]
  __int64 v36; // [rsp+40h] [rbp-998h]
  char v37; // [rsp+48h] [rbp-990h] BYREF
  _BYTE v38[8]; // [rsp+188h] [rbp-850h] BYREF
  char s[2056]; // [rsp+190h] [rbp-848h] BYREF
  unsigned __int64 v40; // [rsp+998h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v7 = strlen(a3);
  if ( a4 >= v7 )
    return -1;
  v8 = v7;
  if ( !getseg(a2) )
    return -1;
  v9 = *(_BYTE *)(sub_19F50((__int64)a1, a2, 0) + 184);
  v32 = v9;
  if ( v9 != 1 )
  {
    if ( v9 == 2 )
    {
      v27 = strstr(a3, *(const char **)(a1[3] + 48LL));
      if ( v27 )
      {
        v28 = v32;
        if ( a4 >= (int)v27 - (int)a3 )
          v28 = -126;
        v32 = v28;
      }
    }
    goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1[3] + 4LL) & 1) == 0 )
    return -1;
LABEL_5:
  v10 = (unsigned __int8)a3[a4];
  v11 = a4;
  if ( (unsigned int)(v10 - 46) > 1 && !(unsigned __int8)is_valid_cp(v10, 2, 0) )
    return -1;
  if ( a4 )
  {
    while ( 1 )
    {
      v12 = (unsigned __int8)a3[v11 - 1];
      if ( (unsigned int)(v12 - 46) > 1 && !(unsigned __int8)is_valid_cp(v12, 2, 0) )
        break;
      if ( !--v11 )
        goto LABEL_42;
    }
  }
  else
  {
LABEL_42:
    v11 = 0;
  }
  v13 = a4 + 1;
  v14 = a4 + 1;
  v15 = (unsigned __int8)a3[a4 + 1];
  if ( (_BYTE)v15 )
  {
    while ( (unsigned int)(v15 - 46) <= 1 || (unsigned __int8)is_valid_cp(v15, 2, 0) )
    {
      v15 = (unsigned __int8)a3[++v14];
      v13 = v14;
      if ( !(_BYTE)v15 )
        goto LABEL_18;
    }
    v13 = v14;
    if ( a3[v14] == 92 && !a3[v14 + 1] )
      return -1;
  }
LABEL_18:
  v16 = v8 - v11;
  v17 = s;
  v18 = &a3[v11];
  if ( v16 > 0x7FF )
    v16 = 2047;
  if ( v16 > v13 )
    v16 = v13;
  if ( (unsigned int)v16 >= 8 )
  {
    v19 = (unsigned int)v16 >> 3;
    qmemcpy(s, v18, 8 * v19);
    v18 += 8 * v19;
    v17 = &s[8 * v19];
  }
  v20 = 0;
  if ( (v16 & 4) != 0 )
  {
    *(_DWORD *)v17 = *(_DWORD *)v18;
    v20 = 4;
  }
  if ( (v16 & 2) != 0 )
  {
    *(_WORD *)&v17[v20] = *(_WORD *)&v18[v20];
    v20 += 2;
  }
  if ( (v16 & 1) != 0 )
    v17[v20] = v18[v20];
  s[v16] = 0;
  v21 = v32 & 0x7F;
  if ( v21 == 2 || v21 == 9 )
  {
    v26 = sub_10990((__int64)a1, s, v13);
    if ( v26 >= 0 )
      return *(_QWORD *)((char *)a1 + 33157) + v26;
  }
  v34 = -1;
  v22 = &v37;
  v35 = 0;
  v36 = 0;
  v33 = -1;
  do
  {
    *(_WORD *)v22 = 0;
    v22 += 40;
    *((_WORD *)v22 - 19) = 0;
    *((_WORD *)v22 - 18) = 0;
    *((_DWORD *)v22 - 2) = 0;
    *((_WORD *)v22 - 17) = 0;
    *((_OWORD *)v22 - 2) = 0;
    *((_QWORD *)v22 - 2) = 0;
  }
  while ( v38 != v22 );
  decode_insn(&v33, a2, v38, 0.0);
  if ( v32 < 0 )
  {
    if ( *(_QWORD *)((char *)a1 + 33193) )
    {
      v23 = sub_1B670((__int64)a1, (__int64)&v33, s);
      if ( v23 >= 0 )
        return *(_QWORD *)((char *)a1 + 33165) + v23;
    }
  }
  v24 = sub_1EC50(a1, s);
  result = get_name_ea(-1, v24);
  if ( result == -1 )
  {
    if ( (*(_BYTE *)(a1[3] + 4LL) & 1) != 0 && v21 == 2 )
    {
      v29 = strrchr(s, 46);
      v30 = v29;
      if ( v29 )
      {
        *v29 = 0;
        if ( *(_QWORD *)((char *)a1 + 33053) == get_name_ea(-1, s) )
          return get_name_ea(-1, v30 + 1);
      }
    }
    return -1;
  }
  return result;
}

