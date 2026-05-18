__int64 __fastcall sub_105050(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // r15
  unsigned int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // r14d
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  unsigned int v14; // r12d
  __int64 v15; // r10
  __int64 v16; // r13
  __int64 v17; // r11
  char v18; // al
  unsigned __int8 v19; // dl
  unsigned int v20; // ebx
  int v21; // esi
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r11
  char *s2; // [rsp+8h] [rbp-70h]
  __int64 v29; // [rsp+10h] [rbp-68h]
  __int64 v31; // [rsp+28h] [rbp-50h]
  __int64 v32; // [rsp+30h] [rbp-48h]
  unsigned int v33; // [rsp+38h] [rbp-40h]

  v29 = a3;
  if ( *(_BYTE *)a3 == 7 )
  {
    v31 = 16LL * a2;
    v4 = v31 + *(_QWORD *)(a1 + 8);
    if ( *(_BYTE *)v4 != 7 )
    {
      sub_C5CE0(a3);
      return v29;
    }
    v33 = a2;
    v5 = 1;
    if ( *(_DWORD *)(a3 + 4) <= 1u )
      return v4;
    while ( 1 )
    {
      v6 = v29 + 16LL * v5;
      v7 = *(_DWORD *)(v6 + 4);
      s2 = *(char **)(v6 + 8);
      if ( *(_DWORD *)(v4 + 4) <= 1u )
      {
LABEL_19:
        v15 = v5 + 1;
      }
      else
      {
        v8 = *(_DWORD *)(v4 + 4);
        v9 = 1;
        while ( 1 )
        {
          v12 = v4 + 16LL * v9;
          if ( *(_DWORD *)(v12 + 4) == v7 && !strncmp(*(const char **)(v12 + 8), s2, v7) )
            break;
          v10 = 2;
          v11 = v4 + 16LL * (v9 + 1);
          if ( *(_BYTE *)v11 > 5u )
            v10 = *(_DWORD *)(v11 + 4) + 2;
          v9 += v10;
          if ( v9 >= v8 )
            goto LABEL_19;
        }
        v13 = v9;
        v14 = v8;
        v15 = v5 + 1;
        v16 = v29 + 16 * v15;
        v17 = 16LL * (v13 + 1);
        v18 = *(_BYTE *)(v4 + v17 + 1);
        v19 = *(_BYTE *)v16;
        if ( (v18 & 0x14) == 0 )
        {
          if ( v19 )
          {
            v32 = 16LL * (v13 + 1);
            v26 = sub_105050(a1, v13 + a2 + 1, v29 + 16 * v15);
            v15 = v5 + 1;
            if ( !v26 )
              return 0;
            v4 = *(_QWORD *)(a1 + 8) + v31;
            v27 = v4 + v32;
            if ( v4 + v32 != v26 )
            {
              *(_BYTE *)(v27 + 1) |= 0x10u;
              *(_QWORD *)(v27 + 8) = v26;
            }
            v14 = *(_DWORD *)(v4 + 4);
            v19 = *(_BYTE *)v16;
          }
          else
          {
            *(_BYTE *)(v4 + v17 + 1) = v18 | 4;
            v19 = *(_BYTE *)v16;
            v14 = *(_DWORD *)(v4 + 4);
          }
        }
        if ( v13 < v14 )
          goto LABEL_16;
      }
      v16 = v29 + 16 * v15;
      if ( !*(_BYTE *)v16 )
        goto LABEL_21;
      v20 = sub_104250((unsigned int *)a1, 7, 2, 0);
      sub_104250((unsigned int *)a1, 5, v7, (__int64)s2);
      v21 = sub_104250((unsigned int *)a1, 1, 0, 0);
      if ( *(_BYTE *)(a1 + 32) )
        return 0;
      sub_C5CE0(v29);
      v22 = *(_QWORD *)(a1 + 8);
      v4 = v22 + v31;
      v23 = v33;
      v33 = v20;
      v24 = v23;
      v23 *= 16;
      *(_BYTE *)(v22 + v23 + 1) |= 0x20u;
      *(_DWORD *)(*(_QWORD *)(a1 + 8) + v23 + 8) = v20 - v24;
      v25 = 16LL * v21;
      *(_BYTE *)(v25 + *(_QWORD *)(a1 + 8) + 1) |= 0x10u;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + v25 + 8) = v16;
      v19 = *(_BYTE *)v16;
LABEL_16:
      if ( v19 <= 5u )
      {
LABEL_21:
        v5 += 2;
        if ( *(_DWORD *)(v29 + 4) <= v5 )
          return v4;
      }
      else
      {
        v5 += *(_DWORD *)(v16 + 4) + 2;
        if ( *(_DWORD *)(v29 + 4) <= v5 )
          return v4;
      }
    }
  }
  return v29;
}
