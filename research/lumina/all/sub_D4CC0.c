const char *__fastcall sub_D4CC0(_QWORD *a1, __int64 a2)
{
  int v2; // r11d
  __int64 v3; // r10
  __int64 v4; // rdx
  int *v5; // r9
  int v6; // r8d
  _DWORD *v7; // rdx
  int v8; // eax
  int *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  const char *result; // rax
  int *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD v16[9]; // [rsp+0h] [rbp-48h] BYREF

  v16[7] = __readfsqword(0x28u);
  if ( *(_BYTE *)a2 == 0x8A )
  {
    v14 = *(_QWORD *)(a2 + 32);
    v15 = *(_QWORD *)(v14 + 32);
    v11 = *(_QWORD *)(v14 + 40);
    v10 = *(_QWORD *)(v15 + 8);
    goto LABEL_22;
  }
  if ( *(_BYTE *)a2 != 0xA7 )
    return nullptr;
  v2 = *(__int16 *)(a2 + 48);
  v3 = 0;
  v4 = 0;
LABEL_4:
  if ( a1 )
  {
    while ( !v4 )
    {
      v5 = (int *)a1[1];
      if ( *v5 > 0 )
      {
        v6 = *(_DWORD *)(a2 + 44);
        if ( v6 == v5[18] )
        {
          v8 = 0;
LABEL_20:
          v13 = &v5[26 * v8];
          v4 = *((_QWORD *)v13 + 5);
          v3 = *((_QWORD *)v13 + 6);
          goto LABEL_4;
        }
        v7 = v5 + 44;
        v8 = 0;
        while ( ++v8 != *v5 )
        {
          v7 += 26;
          if ( *(v7 - 26) == v6 )
            goto LABEL_20;
        }
      }
      a1 = (_QWORD *)a1[3];
      v4 = 0;
      if ( !a1 )
        break;
    }
  }
  if ( !v4 )
    return nullptr;
  if ( v3 )
  {
    v9 = *(int **)(v3 + 32);
    if ( v2 < *v9 && v2 >= 0 )
    {
      v10 = *(_QWORD *)&v9[6 * *(__int16 *)(a2 + 48) + 2];
      v11 = *(_QWORD *)(v3 + 40);
LABEL_22:
      v16[3] = a1;
      v16[1] = v11;
      v16[0] = *a1;
      return (const char *)sub_D4CC0(v16, v10);
    }
    return nullptr;
  }
  result = "INTEGER";
  if ( v2 >= 0 )
    return (const char *)sub_D4C70(*(_QWORD *)(v4 + 8) + 16LL * *(__int16 *)(a2 + 48), 0);
  return result;
}
