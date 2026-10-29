__int64 __fastcall sub_15B3A0(__int64 a1, double a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int8 *v8; // rdx
  unsigned __int8 *v9; // rsi
  __int64 v10; // rax
  unsigned __int8 *v11; // r10
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rcx
  char v17; // r13
  unsigned __int8 *v18; // rdi
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // r8
  __int64 v25; // r9
  int v26; // eax
  __int64 (__fastcall *v27)(__int64, _QWORD *, _QWORD, _QWORD); // rdx
  __int64 v28; // rcx
  const char *v29; // rax
  __int64 v30; // rdi
  int v31; // ecx
  __int64 v32; // rdx
  unsigned int v33; // eax
  __int64 v34; // [rsp-10h] [rbp-48h]
  __int64 v35; // [rsp-8h] [rbp-40h]
  _QWORD v36[7]; // [rsp+0h] [rbp-38h] BYREF

  v4 = *(_QWORD *)a1;
  v36[1] = __readfsqword(0x28u);
  v5 = *(int *)(a1 + 16);
  *(_DWORD *)(v4 + 44) |= 0x40u;
  if ( !a4 )
    return 0;
  ++*(_DWORD *)(a1 + 28);
  if ( *(_BYTE *)(v4 + 103) )
  {
    sub_EA810(a1, (const char **)a4, nullptr);
    return 1;
  }
  if ( !*(_QWORD *)(a4 + 24) )
    goto LABEL_20;
  v8 = *(unsigned __int8 **)(a4 + 32);
  if ( !v8 )
  {
    v9 = *(unsigned __int8 **)(a4 + 8);
    if ( v9 )
      goto LABEL_8;
    goto LABEL_20;
  }
  if ( byte_1BF000[*v8] != 99 || byte_1BF000[v8[1]] != 114 )
  {
    v9 = *(unsigned __int8 **)(a4 + 8);
    if ( v9 && !*v8 )
    {
LABEL_8:
      v10 = sub_CF360(v4, v9, *(unsigned __int8 **)(*(_QWORD *)(v4 + 32) + 32 * v5));
      if ( v10 )
      {
        v11 = *(unsigned __int8 **)(a4 + 24);
        v12 = *v11;
        if ( (byte_1BEF00[v12] & 4) == 0 )
          goto LABEL_16;
        v13 = (char)v12 - 48LL;
        if ( v13 > 0x100000000LL )
          goto LABEL_16;
        v14 = 0;
        while ( 1 )
        {
          v15 = (char)v11[++v14];
          if ( (byte_1BEF00[(unsigned __int8)v15] & 4) == 0 )
            break;
          v13 = v15 + 10 * v13 - 48;
          if ( v13 > 0x100000000LL )
            goto LABEL_16;
        }
        if ( !v14 || (_BYTE)v15 )
        {
LABEL_16:
          *(_DWORD *)(v10 + 88) = 0;
          goto LABEL_17;
        }
        v31 = v13;
        *(_DWORD *)(v10 + 88) = v13;
        if ( (unsigned int)v13 <= 1 || *(_DWORD *)(a1 + 32) < (unsigned int)v13 )
        {
LABEL_17:
          if ( byte_241489 )
          {
            sub_EA810(a1, (const char **)a4, "invalid rootpage");
            return 0;
          }
          return 0;
        }
        v32 = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 16LL);
        if ( v32 )
        {
          while ( *(_DWORD *)(v32 + 88) != v31 || v10 == v32 )
          {
            v32 = *(_QWORD *)(v32 + 40);
            if ( !v32 )
              return 0;
          }
          goto LABEL_17;
        }
      }
      else
      {
        sub_EA810(a1, (const char **)a4, "orphan index");
      }
      return 0;
    }
LABEL_20:
    sub_EA810(a1, (const char **)a4, nullptr);
    return 0;
  }
  v17 = *(_BYTE *)(v4 + 196);
  *(_BYTE *)(v4 + 196) = v5;
  v18 = *(unsigned __int8 **)(a4 + 24);
  v19 = *v18;
  if ( (byte_1BEF00[v19] & 4) == 0 )
    goto LABEL_32;
  v20 = (char)v19 - 48LL;
  if ( v20 > 0x100000000LL )
    goto LABEL_32;
  v21 = 0;
  while ( 1 )
  {
    v22 = (char)v18[++v21];
    if ( (byte_1BEF00[(unsigned __int8)v22] & 4) == 0 )
      break;
    v20 = v22 + 10 * v20 - 48;
    if ( v20 > 0x100000000LL )
      goto LABEL_32;
  }
  if ( (_BYTE)v22 || !v21 )
  {
LABEL_32:
    *(_DWORD *)(v4 + 192) = 0;
    goto LABEL_33;
  }
  *(_DWORD *)(v4 + 192) = v20;
  v33 = *(_DWORD *)(a1 + 32);
  if ( v33 < (unsigned int)v20 && v33 )
  {
LABEL_33:
    if ( byte_241489 )
      sub_EA810(a1, (const char **)a4, "invalid rootpage");
  }
  v36[0] = 0;
  *(_BYTE *)(v4 + 198) &= ~1u;
  *(_QWORD *)(v4 + 200) = a4;
  v23 = *(_QWORD *)(a4 + 32);
  sub_156CB0(v4, v23, -1, 0, 0, v36, nullptr);
  v26 = *(_DWORD *)(v4 + 80);
  *(_BYTE *)(v4 + 196) = v17;
  v27 = (__int64 (__fastcall *)(__int64, _QWORD *, _QWORD, _QWORD))v34;
  v28 = v35;
  if ( v26 && (*(_BYTE *)(v4 + 198) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 20) < v26 )
      *(_DWORD *)(a1 + 20) = v26;
    if ( v26 == 7 )
    {
      if ( !*(_BYTE *)(v4 + 103) && !*(_BYTE *)(v4 + 104) )
        sub_DBE60(v4);
    }
    else if ( v26 != 9 && (_BYTE)v26 != 6 )
    {
      v29 = sub_EEFB0(v4, v23, v34, a2, v35, v24, v25);
      v23 = a4;
      sub_EA810(a1, (const char **)a4, v29);
    }
  }
  v30 = v36[0];
  *(_QWORD *)(v4 + 200) = &off_241440;
  sub_11E660(v30, v23, v27, v28, v24, v25);
  return 0;
}
