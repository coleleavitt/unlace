__int64 __fastcall sub_87BD0(__int64 a1, const char *a2, int a3, _QWORD *a4, char a5)
{
  int v8; // r15d
  __int64 result; // rax
  const char **v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  char *s1; // [rsp+8h] [rbp-60h]
  int v16; // [rsp+1Ch] [rbp-4Ch] BYREF
  __int64 v17; // [rsp+20h] [rbp-48h]
  unsigned __int64 v18; // [rsp+28h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  if ( !a2 )
  {
    v16 = *(_DWORD *)(a1 + 4452) ^ 0x18C00;
    if ( !(unsigned int)sub_84020((__int64)aHelpIbmPcSpeci, &v16, (char *)&v16 + 2) )
      return 0;
    v14 = v16 ^ 0x18C00;
    *(_DWORD *)(a1 + 4452) = v16 ^ 0x18C00;
LABEL_17:
    if ( (v14 & 0x20) == 0 )
      *(_DWORD *)(a1 + 4452) = v14 & 0xFFFFFFBF;
    if ( a5 )
    {
      v17 = *(unsigned int *)(a1 + 4452);
      netnode_supset();
      return 0;
    }
    return 0;
  }
  if ( !strcmp(a2, "DBGTOOLS") )
  {
    qstrncpy();
    return 0;
  }
  v8 = strncmp(a2, "PC_ANALYZE_", 0xBu);
  result = 1;
  if ( !v8 )
  {
    v10 = (const char **)&off_174A80;
    s1 = (char *)(a2 + 11);
    while ( strcmp(s1, *v10) )
    {
      ++v8;
      v10 += 2;
      if ( v8 == 17 )
      {
        v11 = strcmp(s1, "MAX_SIMPLEX_SIZE");
        result = 1;
        if ( !v11 )
        {
          result = 2;
          if ( a3 == 2 )
          {
            *(_DWORD *)(a1 + 4448) = *a4;
            return 0;
          }
        }
        return result;
      }
    }
    result = 2;
    if ( a3 != 3 )
      return result;
    v12 = *(_DWORD *)a4;
    v13 = (int)(&off_174A80)[2 * v8 + 1];
    if ( (v13 & 0x18C00) != 0 )
    {
      if ( !v12 )
      {
LABEL_16:
        v14 = *(_DWORD *)(a1 + 4452) | v13;
        *(_DWORD *)(a1 + 4452) = v14;
        goto LABEL_17;
      }
    }
    else if ( v12 )
    {
      goto LABEL_16;
    }
    v14 = *(_DWORD *)(a1 + 4452) & ~v13;
    *(_DWORD *)(a1 + 4452) = v14;
    goto LABEL_17;
  }
  return result;
}
