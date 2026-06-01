__int64 __fastcall sub_3FF810(__int64 a1, __int64 *a2, int a3, signed int a4, double a5)
{
  __int64 v6; // rdx
  unsigned int v9; // r12d
  const void *v10; // rbx
  int v11; // r14d
  size_t v12; // rax
  size_t v13; // r8
  int v14; // r8d
  int v15; // eax
  int v16; // r9d
  void *v18; // rdi
  size_t v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rbx
  int v22; // r14d
  char v23; // al
  int v24; // ebx
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rax
  size_t v28; // [rsp+0h] [rbp-48h]
  size_t v29; // [rsp+0h] [rbp-48h]
  size_t v30; // [rsp+8h] [rbp-40h]

  if ( a3 < 0 )
  {
    if ( !under_debugger )
      sub_3835A0(0xCD1Bu, a5);
    goto LABEL_57;
  }
  v6 = *(_QWORD *)(a1 + 688);
  if ( !*(_BYTE *)(v6 + 8) )
    goto LABEL_55;
  while ( a3 >= *(_DWORD *)(v6 + 40) )
  {
    v6 += 24;
    if ( !*(_BYTE *)(v6 + 8) )
      goto LABEL_55;
  }
  if ( !v6 )
  {
LABEL_55:
    if ( !under_debugger )
      sub_3835A0(0xC853u, a5);
    goto LABEL_57;
  }
  v9 = *(__int16 *)(v6 + 14);
  if ( (int)v9 > a4 )
    v9 = a4;
  if ( a2 )
  {
    v10 = (const void *)(v6 + 8);
    v11 = *(_DWORD *)(v6 + 16);
    v12 = strlen((const char *)(v6 + 8));
    v13 = v12;
    if ( v12 )
    {
      v18 = (void *)*a2;
      v19 = v12 + 1;
      if ( a2[2] < v12 + 1 )
      {
        v29 = v12 + 1;
        v30 = v12;
        v25 = qvector_reserve();
        v13 = v30;
        v19 = v29;
        *a2 = v25;
        v18 = (void *)v25;
      }
      a2[1] = v19;
      v28 = v13;
      memmove(v18, v10, v13);
      *(_BYTE *)(*a2 + v28) = 0;
      v14 = a3 - v11;
      if ( *(_DWORD *)(a1 + 80) != 8 )
        goto LABEL_12;
    }
    else
    {
      a2[1] = 0;
      v14 = a3 - v11;
      if ( *(_DWORD *)(a1 + 80) != 8 )
      {
LABEL_12:
        v15 = *(_DWORD *)(a1 + 548);
LABEL_13:
        if ( a3 < *(_DWORD *)(a1 + 488) || a3 >= v15 + 16 )
        {
          if ( !v14 )
            return v9;
LABEL_46:
          sub_FA510(a2);
          return v9;
        }
        *(_BYTE *)*a2 = 118;
        if ( *(_DWORD *)(a1 + 80) == 8 )
        {
          v21 = v9 - 1;
        }
        else
        {
          if ( sub_3EAF40(*(_DWORD *)(a1 + 488), a3, v9) )
          {
            if ( ((v9 - 4) & 0xFFFFFFFB) == 0 )
            {
              sub_6B2B0(a2);
              return v9;
            }
            if ( !under_debugger )
              sub_3835A0(0xC8E1u, a5);
LABEL_57:
            BUG();
          }
          v21 = v9 - 1;
          if ( a3 >= v16 && a3 <= v16 + 256 && ((unsigned int)v21 <= 1 || v9 == 4) )
          {
            v22 = a3 & 7;
            if ( (int)(v9 + v22) <= 8 )
            {
              sub_6B2B0(a2);
LABEL_36:
              v14 = v22;
              v23 = aBhqsqqqd[v21];
              v24 = dword_42E1A0[v21];
              if ( !v22 )
              {
                if ( v24 != 16 && *(_DWORD *)(a1 + 80) != 8 )
                  goto LABEL_46;
LABEL_43:
                *(_BYTE *)*a2 = v23;
                return v9;
              }
              goto LABEL_45;
            }
LABEL_35:
            v22 = v14;
            goto LABEL_36;
          }
        }
        if ( (unsigned int)v21 > 7 )
        {
          v23 = 113;
          v24 = 16;
          if ( !v14 )
            goto LABEL_43;
LABEL_45:
          v26 = v14 % v24;
          sub_FA510(a2);
          if ( !v26 )
            return v9;
          goto LABEL_46;
        }
        goto LABEL_35;
      }
    }
    if ( (unsigned int)(a3 - 8) > 0x107 || (int)v9 > 4 || v14 )
    {
      v15 = *(_DWORD *)(a1 + 612);
      goto LABEL_13;
    }
    v20 = *a2;
    if ( *(_DWORD *)(a1 + 484) == a3 )
    {
      if ( (unsigned __int64)a2[2] <= 3 )
      {
        v27 = qvector_reserve();
        *a2 = v27;
        v20 = v27;
      }
      a2[1] = 4;
      *(_WORD *)v20 = 29559;
      *(_BYTE *)(v20 + 2) = 112;
      *(_BYTE *)(*a2 + 3) = 0;
    }
    else
    {
      *(_BYTE *)v20 = 119;
    }
  }
  return v9;
}

