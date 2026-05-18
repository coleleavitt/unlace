__int64 *__fastcall sub_FDE00(__int64 a1, __int64 a2, double a3)
{
  int v3; // edx
  _OWORD *v6; // rsi
  char v7; // dl
  __int64 *v8; // rdi
  __int64 v9; // r13
  int v10; // edx
  __int64 *v11; // r12
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rsi
  _QWORD *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rsi
  int v20; // edx
  int v21; // eax
  __m128i *v22; // rax
  const char **v23; // rax
  const char *v24; // rdx
  _OWORD v25[2]; // [rsp+0h] [rbp-78h] BYREF
  __int128 v26; // [rsp+20h] [rbp-58h]
  __int128 v27; // [rsp+30h] [rbp-48h]
  __int64 v28; // [rsp+40h] [rbp-38h]
  unsigned __int64 v29; // [rsp+48h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  if ( !a2 )
    return nullptr;
  v3 = *(_DWORD *)(a2 + 4);
  if ( (v3 & 1) != 0 && *(_DWORD *)(a2 + 52) == *(_DWORD *)(a1 + 8) )
    *(_DWORD *)(a2 + 52) = *(_DWORD *)(a1 + 12);
  if ( *(_BYTE *)a2 != 0xA7 )
  {
    if ( *(_BYTE *)a2 == 0xB3 && *(_DWORD *)(a2 + 44) == *(_DWORD *)(a1 + 8) )
      *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 12);
LABEL_18:
    v12 = sub_FDE00(a1, *(_QWORD *)(a2 + 16));
    v13 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 16) = v12;
    *(_QWORD *)(a2 + 24) = sub_FDE00(a1, v13);
    v14 = *(_DWORD *)(a2 + 4);
    v15 = *(_QWORD *)(a2 + 32);
    if ( (v14 & 0x800) != 0 )
    {
      if ( v15 )
      {
        sub_FE180(a1, v15, 1);
        if ( (*(_DWORD *)(a2 + 4) & 0x1000000) == 0 )
          return (__int64 *)a2;
        goto LABEL_28;
      }
    }
    else if ( v15 )
    {
      sub_FE120(a1);
      v14 = *(_DWORD *)(a2 + 4);
    }
    if ( (v14 & 0x1000000) == 0 )
      return (__int64 *)a2;
LABEL_28:
    v17 = *(_QWORD **)(a2 + 64);
    v18 = sub_FDE00(a1, v17[9]);
    v19 = v17[2];
    v17[9] = v18;
    if ( v19 )
      sub_FE120(a1);
    if ( v17[3] )
      sub_FE120(a1);
    return (__int64 *)a2;
  }
  if ( *(_DWORD *)(a2 + 44) != *(_DWORD *)(a1 + 8) || (v3 & 8) != 0 )
    goto LABEL_18;
  v6 = *(_OWORD **)(*(_QWORD *)(a1 + 24) + 24LL * *(__int16 *)(a2 + 48) + 8);
  v7 = *(_BYTE *)v6;
  if ( *(_BYTE *)v6 == 0xB0 )
    v7 = *((_BYTE *)v6 + 2);
  v8 = *(__int64 **)a1;
  if ( v7 == -79 )
  {
    v20 = **((_DWORD **)v6 + 4);
  }
  else
  {
    if ( v7 != -118 )
      goto LABEL_10;
    v20 = **(_DWORD **)(*((_QWORD *)v6 + 4) + 32LL);
  }
  if ( v20 > 1 )
  {
    v11 = (__int64 *)a2;
    sub_E3F10((__int64)v8, *((_DWORD *)v6 + 1), (__int64)(v6 + 2));
    return v11;
  }
LABEL_10:
  v9 = *v8;
  v10 = *(_DWORD *)(a1 + 16);
  if ( *(_BYTE *)v6 != 0xA7 && v10 )
  {
    a3 = 0.0;
    v21 = *(_DWORD *)(a1 + 12);
    v28 = 0;
    v27 = 0;
    v25[0] = 0;
    v26 = 0;
    v25[1] = (unsigned __int64)v6;
    LOBYTE(v25[0]) = -77;
    v6 = v25;
    HIDWORD(v26) = v21;
    DWORD1(v25[0]) = 0x20000;
    goto LABEL_36;
  }
  if ( v6 )
  {
LABEL_36:
    v22 = sub_DD6E0(v9, (__int64)v6, 0, nullptr);
    v11 = (__int64 *)v22;
    if ( !*(_BYTE *)(v9 + 103) )
    {
      v10 = *(_DWORD *)(a1 + 16);
      goto LABEL_38;
    }
    if ( v22 )
      sub_D7720(v9, (__int64)v22);
    return (__int64 *)a2;
  }
  if ( *(_BYTE *)(v9 + 103) )
    return (__int64 *)a2;
  v11 = nullptr;
LABEL_38:
  if ( v10 )
    *((_DWORD *)v11 + 1) |= 0x100000u;
  if ( (*(_DWORD *)(a2 + 4) & 0x400001) != 0 )
    sub_C4C40((__int64)v11, *(_DWORD *)(a2 + 52), *(_DWORD *)(a2 + 4) & 0x400001);
  sub_D7720(v9, a2);
  if ( *(_BYTE *)v11 != 0xA7 && *(_BYTE *)v11 != 113 )
  {
    v23 = (const char **)sub_F3950(*(_QWORD *)a1, (unsigned __int8 *)v11, a3);
    v24 = "BINARY";
    if ( v23 )
      v24 = *v23;
    v11 = sub_DF020(*(__int64 **)a1, (__int64)v11, v24);
  }
  *((_DWORD *)v11 + 1) &= ~0x100u;
  return v11;
}
