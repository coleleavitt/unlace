__int64 __fastcall sub_82960(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // r13
  int v7; // eax
  __int64 v8; // r12
  const char *v9; // rax
  const char *v10; // rdi
  __int64 v11; // rax
  __int64 v13; // [rsp+8h] [rbp-40h]

  v13 = *(_QWORD *)(a1 + 96) + *(_QWORD *)(a1 + 120) + a2;
  if ( (*(_BYTE *)(a1 + 480) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 224);
    if ( v2 + 72LL * *(_QWORD *)(a1 + 232) != v2 )
    {
      v4 = v2 + 8;
      v5 = 0;
      v6 = v2 + ((72LL * *(_QWORD *)(a1 + 232) - 72) & 0xFFFFFFFFFFFFFFF8LL) + 80;
      do
      {
        while ( 1 )
        {
          v8 = *(_QWORD *)(a1 + 448);
          if ( v8 != -1 || !*(_QWORD *)(v4 + 40) )
            break;
          if ( *(_QWORD *)(v4 + 32) )
          {
            v9 = (const char *)v4;
            while ( *v9 == 95 )
            {
              ++v9;
              v10 = (const char *)(v4 + 16);
              if ( v9 == (const char *)(v4 + 16) )
                goto LABEL_14;
            }
            v10 = v9;
LABEL_14:
            if ( strncasecmp(v10, "TEXT", 4u) )
              break;
          }
          v11 = *(_QWORD *)(v4 + 16);
          v4 += 72;
          *(_QWORD *)(a1 + 448) = v11;
          if ( v4 == v6 )
            goto LABEL_16;
        }
        v7 = strncasecmp((const char *)v4, "__LINKEDIT", 0xAu);
        if ( !v5 && !v7 )
          v5 = *(_QWORD *)(v4 + 16) - v8 - *(_QWORD *)(v4 + 32);
        v4 += 72;
      }
      while ( v4 != v6 );
LABEL_16:
      v13 += v5;
    }
  }
  return v13;
}

