__int64 __fastcall sub_40A430(__int64 a1, const char *a2, char a3)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx
  char *v7; // rbp
  size_t v8; // rax
  unsigned __int64 v9; // r15
  size_t v10; // rbp
  __int64 v11; // r12
  char *v12; // rax
  char *v13; // rax
  __int64 v14; // r8
  __int64 v15; // rax
  const char *v16; // rsi
  char *haystack; // [rsp+10h] [rbp-58h]

  v4 = sub_40A200(a1, a2);
  if ( (_BYTE)v4 )
    return 1;
  v5 = v4;
  if ( a3 )
    return v5;
  v7 = nullptr;
  if ( a2 )
  {
    v8 = strlen(a2);
    v9 = v8 + 1;
    v10 = v8;
    haystack = (char *)qvector_reserve();
    memmove(haystack, a2, v10);
    haystack[v10] = 0;
    v7 = haystack;
    v11 = (int)v9 - 3;
    if ( v9 )
    {
      v12 = strstr(haystack, "32");
      if ( v12 )
      {
        if ( v12 - haystack == v11 )
        {
LABEL_12:
          if ( (_DWORD)v9 == 3 )
          {
            if ( haystack )
            {
              qfree();
              haystack = nullptr;
            }
            v16 = nullptr;
LABEL_18:
            v7 = haystack;
            if ( (unsigned __int8)sub_40A200(a1, v16) )
            {
              if ( haystack )
                qfree();
              return 1;
            }
            goto LABEL_10;
          }
          v14 = v11 + 1;
          if ( v9 < v11 + 1 )
          {
            v15 = (__int64)haystack;
            if ( v11 != -1 )
            {
              v15 = qvector_reserve();
              v14 = v11 + 1;
              haystack = (char *)v15;
            }
            memset((void *)(v15 + v9), 0, v14 - v9);
            v7 = haystack;
          }
LABEL_17:
          v7[v11] = 0;
          v16 = haystack;
          goto LABEL_18;
        }
        v13 = strstr(haystack, "64");
        if ( !v13 )
        {
          if ( v11 != -1 )
            goto LABEL_10;
          goto LABEL_17;
        }
      }
      else
      {
        if ( v11 == -1 )
          goto LABEL_17;
        v13 = strstr(haystack, "64");
        if ( !v13 )
          goto LABEL_10;
      }
      if ( v11 != v13 - haystack )
        goto LABEL_10;
      goto LABEL_12;
    }
  }
LABEL_10:
  if ( v7 )
    qfree();
  return v5;
}

