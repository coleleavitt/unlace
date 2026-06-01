char __fastcall sub_20DD80(__int64 a1, const char *a2, char a3)
{
  __int64 name_ea; // r12
  int v5; // eax
  _QWORD *v6; // r14
  size_t v7; // rbp
  _QWORD *v8; // r15
  const char *v9; // rcx
  unsigned __int64 v10; // rbp
  const char *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int16 flags; // ax
  char *s2; // [rsp+10h] [rbp-68h]
  char *v18; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+20h] [rbp-58h]
  size_t v20; // [rsp+28h] [rbp-50h]

  if ( a2 )
  {
    if ( (a3 & 1) != 0 && (unsigned __int8)is_c_keyword() )
      goto LABEL_21;
    if ( (a3 & 2) != 0 )
    {
      if ( *(_QWORD *)(a1 + 416) )
      {
        if ( !strcmp(*(const char **)(a1 + 408), a2) )
          goto LABEL_21;
      }
      else if ( !strcmp(::s1, a2) )
      {
        goto LABEL_21;
      }
    }
    if ( (a3 & 4) == 0 )
    {
LABEL_7:
      if ( (a3 & 0x18) == 0 )
        goto LABEL_9;
      name_ea = get_name_ea();
      if ( name_ea == -1 )
        goto LABEL_9;
      v12 = sub_32B3E0(a1);
      if ( (unsigned __int8)sub_32CDA0(a1 + 8, v12) )
        return ((unsigned __int8)(a3 & 0x10) >> 4) & 1;
      if ( (a3 & 8) == 0 )
        goto LABEL_9;
      flags = get_flags_ex();
      if ( (~flags & 0x600) != 0 )
      {
        if ( (flags & 0x1000) != 0 )
        {
          LOBYTE(v5) = (unsigned int)sub_33D3E0(*(_QWORD *)(a1 + 1496), name_ea) == 0;
          return v5;
        }
        goto LABEL_9;
      }
LABEL_21:
      LOBYTE(v5) = 1;
      return v5;
    }
    v6 = *(_QWORD **)(a1 + 872);
    v7 = strlen(a2);
    v20 = v7 + 1;
    s1 = (char *)qvector_reserve();
    memmove(s1, a2, v7);
    s1[v7] = 0;
    v8 = *(_QWORD **)(a1 + 872);
    v9 = s1;
    if ( !v8 )
      goto LABEL_18;
    v10 = *v8 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v10 )
    {
      v8 = nullptr;
LABEL_18:
      if ( v9 )
        qfree();
      if ( v6 != v8 )
        goto LABEL_21;
      goto LABEL_7;
    }
    if ( (*(_BYTE *)v10 & 2) != 0 )
      goto LABEL_18;
    while ( 1 )
    {
      if ( *(_QWORD *)(v10 + 32) )
      {
        v11 = *(const char **)(v10 + 24);
        if ( !v20 )
        {
          if ( !*v11 )
            goto LABEL_37;
LABEL_16:
          v10 = *(_QWORD *)(v10 + 8);
          goto LABEL_17;
        }
      }
      else
      {
        if ( !v20 )
          goto LABEL_37;
        v11 = ::s1;
      }
      s2 = (char *)v9;
      v18 = (char *)v11;
      v13 = strcmp(v9, v11);
      v9 = s2;
      if ( v13 < 0 )
        goto LABEL_16;
      v14 = strcmp(v18, s2);
      v9 = s2;
      if ( v14 >= 0 )
      {
LABEL_37:
        v8 = (_QWORD *)v10;
        goto LABEL_18;
      }
      v10 = *(_QWORD *)(v10 + 16);
LABEL_17:
      if ( (*(_BYTE *)v10 & 2) != 0 )
        goto LABEL_18;
    }
  }
LABEL_9:
  LOBYTE(v5) = 0;
  return v5;
}

