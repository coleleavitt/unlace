int __fastcall sub_86D0(__int64 a1, __int64 a2)
{
  int result; // eax
  __int64 v5; // r10
  __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // dl
  unsigned __int8 v13; // r8
  unsigned __int8 v14; // dl
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r13
  __int64 v18; // r15
  unsigned __int64 v19; // r12
  const char *v20; // rsi
  const char *v21; // rdi
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rdx

  result = *(unsigned __int8 *)(a2 + 188) - *(unsigned __int8 *)(a1 + 188);
  if ( !result )
  {
    result = *(unsigned __int16 *)(a1 + 96) - *(unsigned __int16 *)(a2 + 96);
    if ( !result )
    {
      v5 = *(_QWORD *)(a1 + 160);
      v6 = *(_QWORD *)(a2 + 160);
      v7 = v5;
      if ( (int)v6 <= (int)v5 )
        v7 = *(_QWORD *)(a2 + 160);
      if ( v7 > 0 )
      {
        v8 = *(_QWORD *)(a2 + 152);
        v9 = *(_QWORD *)(a1 + 152);
        v10 = 0;
        v11 = 2LL * v7;
        do
        {
          v12 = *(_BYTE *)(v8 + v10);
          if ( *(_BYTE *)(v9 + v10) )
          {
            if ( !v12 )
              return -1;
            v13 = *(_BYTE *)(v9 + v10 + 1);
            v14 = *(_BYTE *)(v8 + v10 + 1);
            if ( v14 < v13 )
              return 1;
            if ( v13 < v14 )
              return -1;
          }
          else if ( v12 )
          {
            return 1;
          }
          v10 += 2;
        }
        while ( v11 != v10 );
      }
      result = v6 - v5;
      if ( (_DWORD)v6 == (_DWORD)v5 )
      {
        result = *(_QWORD *)(a2 + 136) - *(_DWORD *)(a1 + 136);
        if ( !result )
        {
          v15 = *(_QWORD *)(a2 + 16);
          result = v15 - *(_DWORD *)(a1 + 16);
          if ( !result )
          {
            if ( (int)v15 > 0 )
            {
              v16 = *(_QWORD *)(a2 + 8);
              v17 = *(_QWORD *)(a1 + 8);
              v18 = 0;
              v19 = (unsigned __int64)(unsigned int)v15 << 6;
              while ( 1 )
              {
                v22 = *(_QWORD *)(v17 + v18 + 8);
                if ( *(_QWORD *)(v16 + v18 + 8) )
                  break;
                v20 = s1;
                if ( v22 )
                  goto LABEL_20;
LABEL_22:
                v18 += 64;
                if ( v19 == v18 )
                  goto LABEL_29;
              }
              v20 = *(const char **)(v16 + v18);
              v21 = s1;
              if ( v22 )
LABEL_20:
                v21 = *(const char **)(v17 + v18);
              result = strcmp(v21, v20);
              if ( result )
                return result;
              goto LABEL_22;
            }
LABEL_29:
            v23 = *(_QWORD *)(a1 + 112);
            result = v23 - *(_DWORD *)(a2 + 112);
            if ( !result && (int)v23 > 0 )
            {
              v24 = *(_QWORD *)(a1 + 104);
              v25 = *(_QWORD *)(a2 + 104);
              v26 = 0;
              do
              {
                result = *(_DWORD *)(v24 + 8 * v26) - *(_DWORD *)(v25 + 8 * v26);
                if ( result )
                  break;
                result = *(unsigned __int8 *)(v24 + 8 * v26 + 4) - *(unsigned __int8 *)(v25 + 8 * v26 + 4);
                if ( result )
                  break;
                ++v26;
              }
              while ( (unsigned int)v23 != v26 );
            }
          }
        }
      }
    }
  }
  return result;
}

