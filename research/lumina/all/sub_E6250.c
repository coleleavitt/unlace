__int64 __fastcall sub_E6250(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, unsigned __int8 *a5)
{
  int v5; // r12d
  __int64 *v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // r10
  int v9; // ebp
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // r15d
  const char *v13; // rsi
  __int64 v14; // rax
  __int16 v15; // cx
  _BYTE *v16; // r13
  int v17; // eax
  _BYTE *v18; // rcx
  __int64 v19; // r9
  _BYTE **v20; // r11
  _BYTE *v21; // rdi
  unsigned __int8 *v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 result; // rax
  int *v26; // rax
  __int64 v27; // rdx
  int v28; // ecx
  _BYTE *j; // rax
  __int16 v30; // cx
  unsigned __int8 *v32; // rsi
  _BYTE *i; // rdi
  __int64 v34; // rcx
  unsigned __int8 *v36; // [rsp+8h] [rbp-60h]
  __int64 v38; // [rsp+18h] [rbp-50h]
  __int64 v40; // [rsp+28h] [rbp-40h]

  v5 = *(_DWORD *)(a3 + 40);
  v38 = *(_QWORD *)(a3 + 72);
  if ( v5 == 1 )
  {
    v30 = *(_WORD *)(a2 + 52);
    if ( v30 >= 0 )
    {
      v32 = *(unsigned __int8 **)(a3 + 72);
      result = 0;
      if ( !v38 )
        return result;
      a5 = byte_1BF000;
      for ( i = *(_BYTE **)(*(_QWORD *)(a2 + 8) + 16LL * v30); ; ++i )
      {
        result = (unsigned __int8)*i;
        v34 = *v32;
        if ( (_DWORD)result == (_DWORD)v34 )
        {
          if ( !*i )
            return result;
        }
        else if ( byte_1BF000[result] != byte_1BF000[v34] )
        {
          goto LABEL_5;
        }
        ++v32;
      }
    }
    goto LABEL_5;
  }
  v36 = a5;
  if ( !a5 )
  {
LABEL_5:
    v7 = nullptr;
    goto LABEL_6;
  }
  v40 = a3;
  v6 = sub_DBF10(*(_QWORD *)a1, 4LL * v5);
  v7 = v6;
  a3 = v40;
  a5 = v36;
  if ( !v6 )
    return 1;
  *(_QWORD *)v36 = v6;
LABEL_6:
  v8 = *(_QWORD *)(a2 + 16);
  if ( !v8 )
  {
LABEL_35:
    if ( !*(_BYTE *)(a1 + 215) )
    {
      sub_DBD10(a1, "foreign key mismatch - \"%w\" referencing \"%w\"", **(_QWORD **)a3, *(_QWORD *)(a3 + 16), a5);
      if ( !v7 )
        return 1;
      goto LABEL_37;
    }
    if ( v7 )
LABEL_37:
      sub_C9250(*(_QWORD *)a1, v7);
    return 1;
  }
  a5 = byte_1BF000;
  while ( 1 )
  {
    v9 = *(unsigned __int16 *)(v8 + 94);
    if ( v9 == v5 && *(_BYTE *)(v8 + 98) && !*(_QWORD *)(v8 + 72) )
    {
      if ( !v38 )
      {
        if ( (*(_BYTE *)(v8 + 99) & 3) == 2 )
        {
          if ( v7 && v5 > 0 )
          {
            v26 = (int *)(a3 + 64);
            v27 = a3 + 16LL * (unsigned int)(v5 - 1) + 80;
            do
            {
              v28 = *v26;
              v26 += 4;
              v7 = (__int64 *)((char *)v7 + 4);
              *((_DWORD *)v7 - 1) = v28;
            }
            while ( v26 != (int *)v27 );
          }
          goto LABEL_34;
        }
        goto LABEL_8;
      }
      if ( v5 <= 0 )
      {
        v12 = 0;
LABEL_33:
        if ( v5 == v12 )
          goto LABEL_34;
        goto LABEL_8;
      }
      v10 = **(__int16 **)(v8 + 8);
      if ( (v10 & 0x8000u) == 0LL )
        break;
    }
LABEL_8:
    v8 = *(_QWORD *)(v8 + 40);
    if ( !v8 )
      goto LABEL_35;
  }
  v11 = 0;
  while ( 2 )
  {
    v12 = v11;
    v13 = "BINARY";
    v14 = *(_QWORD *)(a2 + 8) + 16 * v10;
    v15 = *(_WORD *)(v14 + 14);
    v16 = *(_BYTE **)v14;
    v17 = 66;
    if ( (v15 & 0x200) != 0 )
    {
      for ( j = v16; *j; ++j )
        ;
      if ( (v15 & 4) != 0 )
      {
        do
        {
          if ( !*++j )
            break;
          ++j;
        }
        while ( *j );
      }
      v13 = j + 1;
      if ( j == (_BYTE *)-1LL )
      {
        v17 = 66;
        v13 = "BINARY";
      }
      else
      {
        v17 = (unsigned __int8)j[1];
      }
    }
    v18 = *(_BYTE **)(*(_QWORD *)(v8 + 64) + 8 * v11);
    while ( 2 )
    {
      v19 = (unsigned __int8)*v18;
      if ( (_DWORD)v19 != v17 )
      {
        if ( byte_1BF000[v19] != byte_1BF000[v17] )
          goto LABEL_33;
        goto LABEL_19;
      }
      if ( *v18 )
      {
LABEL_19:
        v17 = *(unsigned __int8 *)++v13;
        ++v18;
        continue;
      }
      break;
    }
    v20 = (_BYTE **)(a3 + 72);
LABEL_23:
    v21 = *v20;
    v22 = v16;
LABEL_26:
    v23 = (unsigned __int8)*v21;
    v24 = *v22;
    if ( (_DWORD)v23 == (_DWORD)v24 )
    {
      if ( !*v21 )
      {
        if ( v7 )
          *((_DWORD *)v7 + v11) = *(_DWORD *)(a3 + 16 * ((int)v19 + 4LL));
        if ( v5 != (_DWORD)v19 )
        {
          v12 = v11 + 1;
          if ( v11 != v5 - 1 )
          {
            ++v11;
            v10 = *(__int16 *)(*(_QWORD *)(v8 + 8) + 2 * v11);
            if ( (v10 & 0x8000u) == 0LL )
              continue;
          }
        }
        goto LABEL_33;
      }
      goto LABEL_25;
    }
    break;
  }
  if ( byte_1BF000[v23] == byte_1BF000[v24] )
  {
LABEL_25:
    ++v21;
    ++v22;
    goto LABEL_26;
  }
  LODWORD(v19) = v19 + 1;
  v20 += 2;
  if ( v9 != (_DWORD)v19 )
    goto LABEL_23;
  if ( v5 != (_DWORD)v11 )
    goto LABEL_8;
LABEL_34:
  *a4 = v8;
  return 0;
}
