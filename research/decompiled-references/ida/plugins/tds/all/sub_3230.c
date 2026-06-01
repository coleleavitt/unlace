__int64 __fastcall sub_3230(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  _DWORD *v3; // rbx
  unsigned int v4; // r15d
  __int64 v5; // rbp
  unsigned __int8 *v6; // r12
  const char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // r13
  unsigned __int8 *v10; // r15
  __int64 v11; // rbp
  unsigned __int8 *v12; // rax
  unsigned int v14; // ebp
  const char *v15; // rbx
  const char *v16; // rdx
  bool v17; // zf
  unsigned int v18; // eax
  __int64 v19; // r13
  __int64 v20; // [rsp+0h] [rbp-48h]
  int v21; // [rsp+8h] [rbp-40h]
  int v22; // [rsp+Ch] [rbp-3Ch]

  v2 = *(unsigned int *)(a2 + 8);
  if ( (unsigned int)v2 > 4 )
  {
    v3 = (_DWORD *)(*(_QWORD *)(a1 + 120) + *(unsigned int *)(a2 + 4));
    v4 = *v3;
    v5 = (unsigned int)(*v3 - 1);
    if ( (unsigned int)v5 <= 0x3FFFFFFE )
    {
      v6 = (unsigned __int8 *)v3 + v2;
      v7 = (const char *)(v3 + 1);
      v8 = qcalloc(v4, 4);
      *(_QWORD *)(a1 + 128) = v7;
      *(_QWORD *)(a1 + 136) = v8;
      v9 = v8;
      *(_DWORD *)(a1 + 160) = v4;
      v20 = v8 + 4 * v5 + 4;
      v22 = 0;
      do
      {
        v10 = (unsigned __int8 *)(v7 + 1);
        v11 = *(unsigned __int8 *)v7;
        v21 = *(unsigned __int8 *)v7;
        v12 = (unsigned __int8 *)&v7[v11 + 1];
        if ( v12 >= v6 || *v12 || v11 != strlen(v7 + 1) && v7[1] )
          break;
        v9 += 4;
        *(_DWORD *)(v9 - 4) = (_DWORD)v10 - *(_DWORD *)(a1 + 128);
        v7 = (const char *)&v10[v21 + 1];
        if ( v21 == 255 )
          v22 += *((_DWORD *)v7 - 1) == 3026478;
        if ( v9 == v20 )
        {
          if ( v22 )
          {
            do
            {
              if ( (unsigned __int64)(v6 - (unsigned __int8 *)v7) <= 0x10C )
                break;
              if ( *(_DWORD *)v7 != 1282701381 )
                break;
              v18 = *((_DWORD *)v7 + 1);
              if ( (_WORD)v18 != 28265 )
                break;
              v19 = *((unsigned int *)v7 + 2);
              if ( (unsigned int)v19 >= *(_DWORD *)(a1 + 160) )
                return 0;
              v14 = HIWORD(v18);
              if ( v18 <= 0xFFFFFF )
                return 0;
              if ( v6 - (unsigned __int8 *)v7 < (unsigned __int64)v14 + 13 )
                return 0;
              v15 = v7 + 12;
              if ( v14 != strlen(v15) )
                return 0;
              v16 = &v15[-*(_QWORD *)(a1 + 128)];
              v7 = &v15[v14 + 1];
              v17 = v22-- == 1;
              *(_DWORD *)(*(_QWORD *)(a1 + 136) + 4 * v19) = (_DWORD)v16;
            }
            while ( !v17 );
          }
          return 1;
        }
      }
      while ( v7 < (const char *)v6 );
    }
  }
  return 0;
}

