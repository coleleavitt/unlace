__int64 __fastcall sub_CA640(__int64 a1, unsigned __int8 *a2, _BYTE *a3)
{
  int v5; // r15d
  unsigned __int8 **v6; // r10
  __int64 v7; // r9
  unsigned __int8 **v8; // r14
  __int64 v9; // rbp
  unsigned __int8 *v10; // rdi
  _BYTE *j; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax
  int v15; // r11d
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r11
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // r11d
  int v26; // r11d
  __int64 i; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 k; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 m; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi

  if ( !a3 )
  {
    result = sub_C2AB0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 8LL, a2, nullptr)[2];
    if ( result )
      return result;
    result = sub_C2AB0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL) + 8LL, a2, nullptr)[2];
    if ( result )
      return result;
    if ( *(int *)(a1 + 40) > 2 )
    {
      v25 = 2;
      do
      {
        result = sub_C2AB0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL * v25 + 24) + 8LL, a2, nullptr)[2];
        if ( result )
          return result;
        v25 = v26 + 1;
      }
      while ( *(_DWORD *)(a1 + 40) > v25 );
    }
    if ( !a2 || (unsigned int)sub_CA590(a2, "sqlite_", 7) )
      return 0;
    for ( i = 7; ; ++i )
    {
      v28 = a2[i];
      v29 = (unsigned __int8)aSqliteSchema[i];
      if ( (_DWORD)v28 == (_DWORD)v29 )
      {
        if ( !a2[i] )
        {
          v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24LL);
          return sub_C2AB0(v24 + 8, "sqlite_master", nullptr)[2];
        }
      }
      else if ( byte_1BF000[v28] != byte_1BF000[v29] )
      {
        v36 = 7;
        v37 = a2[7];
        v38 = (unsigned __int8)aSqliteTempSche[7];
        if ( (_DWORD)v37 == (_DWORD)v38 )
          goto LABEL_64;
        while ( 1 )
        {
          if ( byte_1BF000[v37] != byte_1BF000[v38] )
            return 0;
          while ( 1 )
          {
            v37 = a2[++v36];
            v38 = (unsigned __int8)aSqliteTempSche[v36];
            if ( (_DWORD)v37 != (_DWORD)v38 )
              break;
LABEL_64:
            if ( !(_DWORD)v37 )
              return sub_C2AB0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 8LL, "sqlite_temp_master", nullptr)[2];
          }
        }
      }
    }
  }
  v5 = *(_DWORD *)(a1 + 40);
  if ( v5 <= 0 )
    goto LABEL_21;
  v6 = *(unsigned __int8 ***)(a1 + 32);
  v7 = 0;
  while ( 2 )
  {
    v8 = v6;
    v9 = 32 * v7;
    v10 = *v6;
    for ( j = a3; ; ++j )
    {
      v12 = (unsigned __int8)*j;
      v13 = *v10;
      if ( (_DWORD)v12 != (_DWORD)v13 )
        break;
      if ( !*j )
      {
        if ( v5 > (int)v7 )
          goto LABEL_10;
        goto LABEL_21;
      }
LABEL_6:
      ++v10;
    }
    if ( byte_1BF000[v13] == byte_1BF000[v12] )
      goto LABEL_6;
    ++v7;
    v6 += 4;
    if ( v7 != (unsigned int)(v5 - 1) + 1LL )
      continue;
    break;
  }
LABEL_21:
  v19 = 0;
  while ( 2 )
  {
    v20 = (unsigned __int8)a3[v19];
    v21 = (unsigned __int8)aMain[v19];
    if ( (_DWORD)v20 != (_DWORD)v21 )
    {
      if ( byte_1BF000[v20] != byte_1BF000[v21] )
        return 0;
      goto LABEL_23;
    }
    if ( a3[v19] )
    {
LABEL_23:
      ++v19;
      continue;
    }
    break;
  }
  v8 = *(unsigned __int8 ***)(a1 + 32);
  v9 = 0;
LABEL_10:
  result = sub_C2AB0((__int64)(v8[3] + 8), a2, nullptr)[2];
  if ( !result )
  {
    if ( a2 && !(unsigned int)sub_CA590(a2, "sqlite_", 7) )
    {
      v16 = 7;
      if ( v15 == 1 )
      {
        while ( 1 )
        {
          v17 = a2[v16];
          v18 = (unsigned __int8)aSqliteTempSche[v16];
          if ( (_DWORD)v17 == (_DWORD)v18 )
          {
            if ( !a2[v16] )
              return sub_C2AB0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 8LL, "sqlite_temp_master", nullptr)[2];
          }
          else if ( byte_1BF000[v17] != byte_1BF000[v18] )
          {
            for ( k = 7; ; ++k )
            {
              v31 = a2[k];
              v32 = (unsigned __int8)aSqliteSchema[k];
              if ( (_DWORD)v31 == (_DWORD)v32 )
              {
                if ( !a2[k] )
                  return sub_C2AB0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 8LL, "sqlite_temp_master", nullptr)[2];
              }
              else if ( byte_1BF000[v31] != byte_1BF000[v32] )
              {
                for ( m = 7; ; ++m )
                {
                  v34 = a2[m];
                  v35 = (unsigned __int8)aSqliteMaster[m];
                  if ( (_DWORD)v34 == (_DWORD)v35 )
                  {
                    if ( !a2[m] )
                      return sub_C2AB0(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 56LL) + 8LL, "sqlite_temp_master", nullptr)[2];
                  }
                  else if ( byte_1BF000[v34] != byte_1BF000[v35] )
                  {
                    return 0;
                  }
                }
              }
            }
          }
          ++v16;
        }
      }
      while ( 1 )
      {
        v22 = a2[v16];
        v23 = (unsigned __int8)aSqliteSchema[v16];
        if ( (_DWORD)v22 == (_DWORD)v23 )
        {
          if ( !a2[v16] )
          {
            v24 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + v9 + 24);
            return sub_C2AB0(v24 + 8, "sqlite_master", nullptr)[2];
          }
        }
        else if ( byte_1BF000[v22] != byte_1BF000[v23] )
        {
          return 0;
        }
        ++v16;
      }
    }
    return 0;
  }
  return result;
}
