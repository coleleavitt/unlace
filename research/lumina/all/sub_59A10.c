__int64 *__fastcall sub_59A10(__int64 a1, _QWORD *a2, const char *a3, const char *a4)
{
  __int64 v5; // rcx
  __int64 *v6; // rsi
  __int64 *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // r15
  const char *v11; // rdi
  void *v12; // r14
  const char *v13; // rdi
  int v14; // ebx
  void *ptr; // [rsp+20h] [rbp-50h] BYREF
  __int128 v20; // [rsp+28h] [rbp-48h]
  unsigned __int64 v21; // [rsp+38h] [rbp-38h]

  v21 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_59020((void **)a1) )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(__int64 **)a1;
    v7 = *(__int64 **)a1;
    if ( 280 * v5 )
    {
      do
      {
        v8 = v7[1];
        v9 = *v7;
        v10 = *v7;
        if ( 112 * v8 )
        {
          while ( 1 )
          {
            v11 = s1;
            if ( *(_QWORD *)(v10 + 16) )
              v11 = *(const char **)(v10 + 8);
            if ( !strcmp(v11, a3) )
            {
              ptr = nullptr;
              v20 = 0;
              sub_299F0((char **)&ptr);
              v12 = ptr;
              v13 = s1;
              if ( (_QWORD)v20 )
                v13 = (const char *)ptr;
              v14 = strcmp(v13, a4);
              if ( v12 )
              {
                *(_QWORD *)&v20 = 0;
                j__free(v12);
              }
              if ( !v14 )
              {
                *a2 = v10;
                return v7;
              }
              v9 = *v7;
              v8 = v7[1];
            }
            v10 += 112;
            if ( v10 == v9 + 112 * v8 )
            {
              v6 = *(__int64 **)a1;
              v5 = *(_QWORD *)(a1 + 8);
              break;
            }
          }
        }
        v7 += 35;
      }
      while ( v7 != &v6[35 * v5] );
    }
  }
  return nullptr;
}
