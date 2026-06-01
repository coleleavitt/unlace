__int64 __fastcall sub_1560(__int64 *a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  bool v4; // r13
  int v5; // ebp
  int v7; // ecx
  int v8; // eax
  bool v9; // al
  int v10; // eax
  __int64 v11; // r8
  __int64 v13; // rsi
  char *v14; // rdx
  int v15; // ecx
  char *v16; // rax
  __int64 v17; // rax
  char v18; // [rsp+8h] [rbp-24A0h]
  char *v19; // [rsp+8h] [rbp-24A0h]
  char *v20; // [rsp+8h] [rbp-24A0h]
  char *v21; // [rsp+8h] [rbp-24A0h]
  __int64 v22; // [rsp+10h] [rbp-2498h]
  char *v23; // [rsp+10h] [rbp-2498h]
  __int64 v24; // [rsp+10h] [rbp-2498h]
  int v25; // [rsp+10h] [rbp-2498h]
  unsigned __int64 v26; // [rsp+18h] [rbp-2490h]
  __int64 v27; // [rsp+18h] [rbp-2490h]
  unsigned __int64 v28; // [rsp+28h] [rbp-2480h]
  int v29; // [rsp+34h] [rbp-2474h]
  char *endptr; // [rsp+48h] [rbp-2460h] BYREF
  char *nptr; // [rsp+50h] [rbp-2458h] BYREF
  char *v32; // [rsp+58h] [rbp-2450h]
  char s1[10]; // [rsp+2056h] [rbp-452h] BYREF
  char v34[1032]; // [rsp+2060h] [rbp-448h] BYREF
  unsigned __int64 v35; // [rsp+2468h] [rbp-40h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v35 = __readfsqword(0x28u);
  s1[0] = 0;
  v26 = 0;
  v18 = 0;
  v22 = -1;
  while ( qlgets(v34, 1024, a3) )
  {
    ++v5;
    strrpl(v34, 45, 32);
    v7 = sub_1350(v34, &nptr);
    if ( !v7 || *nptr == 59 || *nptr == 35 )
    {
      if ( v4 )
      {
        if ( (debug & 0x10) != 0 )
          sub_1490((__int64)"failed at %d (input file line %d)\n", 92, v5);
        return 0;
      }
    }
    else
    {
      if ( v18 )
      {
        if ( (debug & 0x10) != 0 )
          sub_1490((__int64)"failed at %d (input file line %d)\n", 96, v5);
        return 0;
      }
      v8 = (unsigned __int8)*nptr - 42;
      if ( *nptr == 42 )
        v8 = (unsigned __int8)nptr[1];
      v9 = v7 == 1 && v8 == 0;
      if ( v9 )
      {
        if ( !v3 )
        {
          if ( (debug & 0x10) != 0 )
            sub_1490((__int64)"failed at %d (input file line %d)\n", 101, v5);
          return 0;
        }
        if ( v4 )
        {
          if ( (debug & 0x10) != 0 )
            sub_1490((__int64)"failed at %d (input file line %d)\n", 103, v5);
          return 0;
        }
        v4 = v9;
      }
      else
      {
        v29 = v7;
        ++v3;
        endptr = nptr;
        v19 = nptr;
        v28 = strtoull(nptr, &endptr, 16);
        if ( (unsigned __int64)(endptr - v19 - 2) > 0xE )
        {
          if ( (debug & 0x10) != 0 )
            sub_1490((__int64)"failed at %d (input file line %d)\n", 114, v5);
          return 0;
        }
        v4 = v22 > endptr - v19 && v3 > 1;
        if ( v4 )
        {
          if ( (debug & 0x10) != 0 )
            sub_1490((__int64)"failed at %d (input file line %d)\n", 116, v5);
          return 0;
        }
        v23 = (char *)(endptr - v19);
        if ( v3 == 1 )
        {
          qstrncpy(s1, endptr, 10);
          v14 = endptr;
          v15 = v29;
          v11 = (__int64)v23;
          while ( *v14 )
          {
            v27 = v11;
            endptr = v14 + 1;
            v25 = v15;
            v21 = v14 + 1;
            v16 = strchr(":>-.", *v14);
            v14 = v21;
            v15 = v25;
            v11 = v27;
            if ( !v16 )
            {
              if ( (debug & 0x10) != 0 )
                sub_1490((__int64)"failed at %d (input file line %d)\n", 124, v5);
              return 0;
            }
          }
          if ( v11 <= 3 && !s1[0] )
            goto LABEL_16;
          if ( v15 != 1 )
            goto LABEL_25;
          if ( (debug & 0x10) != 0 )
            sub_1490((__int64)"failed at %d (input file line %d)\n", 138, v5);
          return 0;
        }
        v10 = strcmp(s1, endptr);
        v11 = (__int64)v23;
        if ( v10 )
        {
          if ( (debug & 0x10) != 0 )
            sub_1490((__int64)"failed at %d (input file line %d)\n", 129, v5);
          return 0;
        }
        if ( (__int64)v23 <= 3 && !s1[0] )
          goto LABEL_16;
        if ( v29 != 1 )
        {
LABEL_25:
          v24 = v11;
          endptr = v32;
          v20 = v32;
          strtoull(v32, &endptr, 16);
          v11 = v24;
          if ( v20 == endptr )
          {
            if ( (debug & 0x10) != 0 )
              sub_1490((__int64)"failed at %d (input file line %d)\n", 150, v5);
            return 0;
          }
LABEL_16:
          v18 = 0;
          goto LABEL_17;
        }
        if ( v26 >= v28 )
        {
          if ( (debug & 0x10) != 0 )
            sub_1490((__int64)"failed at %d (input file line %d)\n", 141, v5);
          return 0;
        }
        v18 = 1;
LABEL_17:
        v22 = v11;
        v26 = v28;
      }
    }
  }
  if ( !v3 || v4 )
  {
    if ( (debug & 0x10) != 0 )
      sub_1490((__int64)"failed at %d (input file line %d)\n", 156, v5);
    return 0;
  }
  v13 = *a1;
  if ( (unsigned __int64)a1[2] <= 9 )
  {
    v17 = qvector_reserve(a1, v13, 10, 1);
    *a1 = v17;
    v13 = v17;
  }
  a1[1] = 10;
  *(_QWORD *)v13 = 0x6C696620706D7544LL;
  *(_BYTE *)(v13 + 8) = 101;
  *(_BYTE *)(*a1 + 9) = 0;
  return 1;
}
