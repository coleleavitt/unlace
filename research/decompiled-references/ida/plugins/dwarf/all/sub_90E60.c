__int64 __fastcall sub_90E60(__int64 a1, int *a2)
{
  unsigned __int8 v2; // al
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v7; // esi
  char v8; // r13
  int v9; // r14d
  _DWORD *v10; // r12
  __int64 v11; // rbx
  unsigned __int64 v12; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rbp
  char v17; // al
  char *v18; // r15
  __int64 name_ea; // rbp
  _QWORD *v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rax
  char *s1; // [rsp+0h] [rbp-58h] BYREF
  __int128 v25; // [rsp+8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v2 = *((_BYTE *)a2 + 7);
  v26 = __readfsqword(0x28u);
  if ( v2 > 0xFu
    || (v4 = *(_QWORD *)(a1 + 16), v5 = *a2, v7 = *(_DWORD *)(v4 + 48), (unsigned int)v5 >= v7)
    || (v8 = (v2 >> 1) & 3, v9 = 1 << v8, v7 < (int)v5 + (1 << v8)) )
  {
    if ( !*(_BYTE *)(a1 + 80) )
    {
      sub_1D740((__int64)"Failed to apply all relocations!\n");
      *(_BYTE *)(a1 + 80) = 1;
    }
    **(_DWORD **)(a1 + 32) = 233;
    return 1;
  }
  v10 = (_DWORD *)(*(_QWORD *)(v4 + 56) + v5);
  if ( (v2 & 8) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 73) )
    {
      sub_90D10(*(_QWORD **)(a1 + 8), a1 + 40, 0);
      *(_BYTE *)(a1 + 73) = 1;
    }
    v14 = a2[1] & 0xFFFFFF;
    if ( v14 < *(_QWORD *)(a1 + 48) )
    {
      v20 = *(_QWORD **)(a1 + 64);
      if ( v20 )
      {
        v21 = v20[2];
        if ( v21 )
        {
          if ( *(unsigned int *)(*(_QWORD *)(a1 + 40) + 16 * v14) < (unsigned __int64)(v21 - 1) )
          {
            v22 = (*(__int64 (__fastcall **)(_QWORD *))(*v20 + 16LL))(v20);
            if ( v22 )
            {
              v23 = getinf(19);
              name_ea = get_name_ea(v23, v22);
              if ( name_ea != -1 )
              {
                if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 160LL) )
                  name_ea = swap64(name_ea);
                if ( v8 != 2 )
                  goto LABEL_37;
LABEL_46:
                *v10 = name_ea;
                return 0;
              }
            }
          }
        }
      }
    }
    if ( !*(_BYTE *)(a1 + 80) )
    {
      sub_1D740((__int64)"Failed to apply all relocations!\n");
      *(_BYTE *)(a1 + 80) = 1;
    }
    **(_DWORD **)(a1 + 32) = 211;
    return 1;
  }
  v11 = *(_QWORD *)(a1 + 8);
  v12 = (a2[1] & 0xFFFFFF) - 1;
  if ( !*(_BYTE *)(v11 + 440) )
    sub_8FDF0(v11);
  if ( v12 >= *(_QWORD *)(v11 + 256) )
    return 0;
  v15 = *(_QWORD *)(v11 + 248);
  v16 = 80 * v12;
  s1 = nullptr;
  v25 = 0;
  v17 = sub_82C90((__int64 *)&s1, (const char *)(v16 + v15));
  v18 = s1;
  if ( v17 && (_QWORD)v25 && !strncmp(s1, ".debug_", 7u) )
  {
    if ( v8 != 2 )
    {
      if ( v9 > 4 )
      {
        name_ea = *(_QWORD *)v10 - *(_QWORD *)(*(_QWORD *)(v11 + 248) + v16 + 32);
        if ( v18 )
        {
          *(_QWORD *)&v25 = 0;
          qfree(v18);
        }
LABEL_43:
        *(_QWORD *)v10 = name_ea;
        return 0;
      }
      if ( v8 )
      {
        name_ea = *(unsigned __int16 *)v10 - *(_QWORD *)(*(_QWORD *)(v11 + 248) + v16 + 32);
        if ( !v18 )
        {
LABEL_40:
          *(_WORD *)v10 = name_ea;
          return 0;
        }
        *(_QWORD *)&v25 = 0;
        qfree(v18);
LABEL_38:
        if ( !v8 )
          goto LABEL_39;
        goto LABEL_40;
      }
      name_ea = *(unsigned __int8 *)v10 - *(_QWORD *)(*(_QWORD *)(v11 + 248) + v16 + 32);
      if ( !v18 )
      {
LABEL_39:
        *(_BYTE *)v10 = name_ea;
        return 0;
      }
      *(_QWORD *)&v25 = 0;
      qfree(v18);
LABEL_37:
      if ( v9 <= 4 )
        goto LABEL_38;
      goto LABEL_43;
    }
    name_ea = (unsigned int)*v10 - *(_QWORD *)(*(_QWORD *)(v11 + 248) + v16 + 32);
    if ( v18 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v18);
    }
    goto LABEL_46;
  }
  if ( !v18 )
    return 0;
  *(_QWORD *)&v25 = 0;
  qfree(v18);
  return 0;
}

