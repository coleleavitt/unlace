__int64 __fastcall sub_104290(__int64 a1, unsigned int a2)
{
  __int64 v2; // r13
  __int64 v4; // rbp
  char *v5; // rsi
  char v6; // dl
  __int64 v7; // r13
  __int64 result; // rax
  __int64 v9; // rdx
  char v10; // al
  char v11; // r14
  unsigned __int64 v12; // rdi
  __int64 v13; // rbx
  int v14; // ecx
  unsigned int v15; // ebx
  int v16; // r14d
  __int16 v17; // cx
  unsigned int i; // r13d
  unsigned __int16 v19; // cx
  int v20; // eax
  _BYTE *v21; // rdx
  unsigned __int8 v22; // dl
  __int64 v23; // rcx
  __int64 j; // rax
  __int64 v25; // rdx
  __int64 v26; // r13
  int v27; // eax
  __int64 v28; // rbx
  __int16 v29; // si
  unsigned __int16 v30; // si
  int v31; // eax
  unsigned __int8 v32; // dl
  __int64 v33; // rcx
  __int64 v34; // r13
  unsigned __int8 *v35; // rax
  unsigned __int8 *v36; // rbx
  unsigned int v37; // edx
  unsigned int v38; // ebx
  char v39; // di
  char v40; // cl
  char v41; // al
  __int64 v42; // rax
  char v43; // al
  char v44; // dl

  LODWORD(v2) = a2;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = (char *)(v4 + a2);
  if ( byte_1BADE0[(unsigned __int8)*v5] )
  {
    do
    {
      v2 = (unsigned int)(v2 + 1);
      v5 = (char *)(v4 + v2);
      v6 = *(_BYTE *)(v4 + v2);
    }
    while ( byte_1BADE0[(unsigned __int8)v6] );
  }
  else
  {
    v6 = *v5;
  }
  switch ( v6 )
  {
    case '{':
      v16 = sub_104250((unsigned int *)a1, 7, 0, 0);
      if ( v16 < 0 )
        return 0xFFFFFFFFLL;
      v17 = *(_WORD *)(a1 + 34);
      for ( i = v2 + 1; ; i = j + 1 )
      {
        while ( byte_1BADE0[*(unsigned __int8 *)(v4 + i)] )
          ++i;
        v19 = v17 + 1;
        *(_WORD *)(a1 + 34) = v19;
        if ( v19 > 0x7D0u )
          return 0xFFFFFFFFLL;
        v20 = sub_104290(a1, i);
        if ( v20 < 0 )
          break;
        if ( *(_BYTE *)(a1 + 32) )
          return 0xFFFFFFFFLL;
        v21 = (_BYTE *)(*(_QWORD *)(a1 + 8) + 16LL * (unsigned int)(*(_DWORD *)a1 - 1));
        if ( *v21 != 5 )
          return 0xFFFFFFFFLL;
        v21[1] |= 0x40u;
        v22 = *(_BYTE *)(v4 + v20);
        if ( byte_1BADE0[v22] )
        {
          do
          {
            v23 = *(unsigned __int8 *)(v4 + (unsigned int)++v20);
            v22 = v23;
          }
          while ( byte_1BADE0[v23] );
        }
        if ( v22 != 58 )
          return 0xFFFFFFFFLL;
        LODWORD(j) = sub_104290(a1, (unsigned int)(v20 + 1));
        v17 = *(_WORD *)(a1 + 34) - 1;
        *(_WORD *)(a1 + 34) = v17;
        if ( (int)j < 0 )
          return 0xFFFFFFFFLL;
        for ( j = (int)j; ; j = (unsigned int)(j + 1) )
        {
          v25 = *(unsigned __int8 *)(v4 + j);
          if ( !byte_1BADE0[v25] )
            break;
        }
        if ( (_BYTE)v25 != 44 )
        {
          if ( (_BYTE)v25 == 125 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL * v16 + 4) = *(_DWORD *)a1 + ~v16;
            return (unsigned int)(j + 1);
          }
          return 0xFFFFFFFFLL;
        }
      }
      --*(_WORD *)(a1 + 34);
      if ( v20 != -2 )
        return 0xFFFFFFFFLL;
LABEL_74:
      if ( *(_DWORD *)a1 == v16 + 1 )
        return i + 1;
      return 0xFFFFFFFFLL;
    case '[':
      v27 = sub_104250((unsigned int *)a1, 6, 0, 0);
      v16 = v27;
      if ( v27 < 0 )
        return 0xFFFFFFFFLL;
      i = v2 + 1;
      v28 = 16LL * v27;
      *(_QWORD *)(v28 + *(_QWORD *)(a1 + 8) + 8) = 0;
      v29 = *(_WORD *)(a1 + 34);
      while ( 1 )
      {
        while ( byte_1BADE0[*(unsigned __int8 *)(v4 + i)] )
          ++i;
        v30 = v29 + 1;
        *(_WORD *)(a1 + 34) = v30;
        if ( v30 > 0x7D0u )
          return 0xFFFFFFFFLL;
        v31 = sub_104290(a1, i);
        v29 = *(_WORD *)(a1 + 34) - 1;
        *(_WORD *)(a1 + 34) = v29;
        if ( v31 < 0 )
          break;
        v32 = *(_BYTE *)(v4 + v31);
        if ( byte_1BADE0[v32] )
        {
          do
          {
            v33 = *(unsigned __int8 *)(v4 + (unsigned int)++v31);
            v32 = v33;
          }
          while ( byte_1BADE0[v33] );
        }
        if ( v32 != 44 )
        {
          if ( v32 == 93 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 8) + v28 + 4) = *(_DWORD *)a1 + ~v16;
            return (unsigned int)(v31 + 1);
          }
          return 0xFFFFFFFFLL;
        }
        i = v31 + 1;
      }
      if ( v31 != -3 )
        return 0xFFFFFFFFLL;
      goto LABEL_74;
    case '"':
      v9 = (unsigned int)(v2 + 1);
      v10 = *(_BYTE *)(v4 + v9);
      if ( (v10 & 0xE0) == 0 )
        return 0xFFFFFFFFLL;
      v11 = 0;
      v12 = 0x8080200000000001LL;
      while ( 1 )
      {
        while ( 1 )
        {
          v13 = (unsigned int)(v9 + 1);
          if ( v10 == 92 )
            break;
          if ( v10 == 34 )
          {
            sub_104250((unsigned int *)a1, 5, v9 - v2 + 1, (__int64)v5);
            if ( !*(_BYTE *)(a1 + 32) )
              *(_BYTE *)(*(_QWORD *)(a1 + 8) + 16LL * (unsigned int)(*(_DWORD *)a1 - 1) + 1) = v11;
            return (unsigned int)v13;
          }
          LODWORD(v9) = v9 + 1;
          v10 = *(_BYTE *)(v4 + (unsigned int)v13);
          if ( (v10 & 0xE0) == 0 )
            return 0xFFFFFFFFLL;
        }
        v14 = *(unsigned __int8 *)(v4 + v13);
        if ( (*(_BYTE *)(v4 + v13) & 0xBF) != 0x22 )
        {
          if ( (unsigned __int8)(v14 - 47) <= 0x3Fu && _bittest64((const __int64 *)&v12, (unsigned int)(v14 - 47)) )
          {
            v15 = v9 + 2;
            v11 = 2;
            goto LABEL_21;
          }
          if ( (((_BYTE)v14 - 114) & 0xFD) != 0 )
          {
            if ( (_BYTE)v14 != 117 )
              return 0xFFFFFFFFLL;
            v35 = (unsigned __int8 *)(v4 + v13 + 1);
            v36 = (unsigned __int8 *)(v4 + 5 + v13);
            do
            {
              if ( (byte_1BEF00[*v35] & 8) == 0 )
                return 0xFFFFFFFFLL;
              ++v35;
            }
            while ( v36 != v35 );
          }
        }
        v15 = v9 + 2;
        v11 = 2;
LABEL_21:
        LODWORD(v9) = v15;
        v10 = *(_BYTE *)(v4 + v15);
        if ( (v10 & 0xE0) == 0 )
          return 0xFFFFFFFFLL;
      }
    case 'n':
      if ( !memcmp(v5, "null", 4u) )
      {
        v34 = (unsigned int)(v2 + 4);
        if ( (byte_1BEF00[*(unsigned __int8 *)(v4 + v34)] & 6) == 0 )
        {
          sub_104250((unsigned int *)a1, 0, 0, 0);
          return (unsigned int)v34;
        }
      }
      return (unsigned int)-(v6 != 0);
    case 't':
      if ( !memcmp(v5, "true", 4u) )
      {
        v26 = (unsigned int)(v2 + 4);
        if ( (byte_1BEF00[*(unsigned __int8 *)(v4 + v26)] & 6) == 0 )
        {
          sub_104250((unsigned int *)a1, 1, 0, 0);
          return (unsigned int)v26;
        }
      }
      return (unsigned int)-(v6 != 0);
    case 'f':
      if ( !memcmp(v5, "false", 5u) )
      {
        v7 = (unsigned int)(v2 + 5);
        if ( (byte_1BEF00[*(unsigned __int8 *)(v4 + v7)] & 6) == 0 )
        {
          sub_104250((unsigned int *)a1, 2, 0, 0);
          return (unsigned int)v7;
        }
      }
      return (unsigned int)-(v6 != 0);
    case '-':
      v37 = v2 + 1;
      break;
    default:
      if ( (unsigned __int8)(v6 - 48) > 9u )
      {
        result = 4294967294LL;
        if ( v6 == 125 )
          return result;
        result = 4294967293LL;
        if ( v6 == 93 )
          return result;
        return (unsigned int)-(v6 != 0);
      }
      if ( v6 > 48 )
        goto LABEL_79;
      v37 = v2;
      break;
  }
  if ( *(_BYTE *)(v4 + v37) == 48 && (unsigned __int8)(*(_BYTE *)(v4 + v37 + 1) - 48) <= 9u )
    return 0xFFFFFFFFLL;
LABEL_79:
  v38 = v2 + 1;
  v39 = 0;
  v40 = 0;
  while ( 1 )
  {
    v43 = *(_BYTE *)(v4 + v38);
    if ( (unsigned __int8)(v43 - 48) > 9u )
      break;
LABEL_88:
    ++v38;
  }
  v44 = *(_BYTE *)(v4 + v38 - 1);
  if ( v43 == 46 )
  {
    if ( v44 == 45 || v40 )
      return 0xFFFFFFFFLL;
LABEL_87:
    v40 = 1;
    goto LABEL_88;
  }
  if ( (v43 & 0xDF) == 0x45 )
  {
    if ( v44 <= 47 || v39 )
      return 0xFFFFFFFFLL;
    v41 = *(_BYTE *)(v4 + v38 + 1);
    if ( ((v41 - 43) & 0xFD) == 0 )
    {
      v42 = v38 + 2;
      ++v38;
      v41 = *(_BYTE *)(v4 + v42);
    }
    if ( (unsigned __int8)(v41 - 48) > 9u )
      return 0xFFFFFFFFLL;
    v39 = 1;
    goto LABEL_87;
  }
  if ( v44 > 47 )
  {
    sub_104250((unsigned int *)a1, (v40 & 1u) + 3, v38 - v2, (__int64)v5);
    return v38;
  }
  return 0xFFFFFFFFLL;
}
