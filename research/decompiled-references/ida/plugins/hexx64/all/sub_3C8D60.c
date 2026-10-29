_BYTE *__fastcall sub_3C8D60(__int64 a1, _BYTE *a2, int a3, int a4, double a5)
{
  _BYTE *v6; // r14
  unsigned int *v7; // rsi
  unsigned int v8; // eax
  _BYTE *v9; // rdi
  int v10; // edx
  int v11; // ebx
  int v12; // edx
  __int64 v13; // r13
  __int64 v14; // r12
  _BYTE *v15; // rbx
  __int64 v16; // rdi
  const char *v17; // rax
  char v18; // dl
  unsigned int v20; // [rsp+4h] [rbp-64h]
  const char *v22; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v6 = &a2[a3];
  v24 = __readfsqword(0x28u);
  v7 = *(unsigned int **)(a1 + 40);
  v8 = *v7;
  if ( (*v7 & 0x1000000) != 0 )
  {
    v9 = a2;
    v10 = (v8 >> 20) & 4 | 2;
    if ( (v8 & 0x40000000) == 0 )
      v10 = (v8 >> 20) & 4;
    v11 = v10;
    v12 = v10 | 1;
    if ( (v8 & 0x20000000) == 0 )
      v12 = v11;
    v13 = *(_QWORD *)(*((_QWORD *)v7 + 66) + 8LL * a4);
    v20 = v12;
    v14 = *(_QWORD *)(v13 + 48);
    if ( v9 < v6 )
    {
      v15 = v9;
      if ( v14 )
      {
        while ( 1 )
        {
          a5 = 0.0;
          v22 = nullptr;
          v23 = 0;
          sub_1B59B0((int *)v14, (__int64 *)&v22, v20);
          if ( (unsigned __int64)v23 > 1 )
            tag_remove();
          if ( v15 >= v6 )
            break;
          v16 = (__int64)v22;
          v17 = v22;
          if ( !(_QWORD)v23 )
            v17 = s1;
          if ( v15 == v6 - 1 )
          {
LABEL_27:
            *(v6 - 1) = 0;
            v15 = v6 - 1;
          }
          else
          {
            while ( 1 )
            {
              v18 = *v17++;
              *v15 = v18;
              if ( !v18 )
                break;
              if ( ++v15 == v6 - 1 )
                goto LABEL_27;
            }
          }
          if ( v16 )
          {
            *(_QWORD *)&v23 = 0;
            qfree(v16);
          }
          v14 = *(_QWORD *)(v14 + 8);
          if ( v15 >= v6 )
            goto LABEL_30;
          if ( !v14 )
            goto LABEL_25;
          if ( *(_QWORD *)(v13 + 48) != v14 )
          {
            *v15++ = 10;
            if ( v15 >= v6 )
            {
              *(v6 - 1) = 0;
              v15 = v6 - 1;
            }
          }
        }
        if ( !under_debugger )
          sub_383060(0x208u, 0.0);
LABEL_32:
        BUG();
      }
    }
  }
  v15 = a2;
LABEL_25:
  if ( v15 >= v6 )
  {
LABEL_30:
    if ( !under_debugger )
      sub_383060(0x207u, a5);
    goto LABEL_32;
  }
  *v15 = 0;
  return a2;
}

