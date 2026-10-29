char __fastcall sub_213140(__int64 a1, const char *a2, char a3)
{
  unsigned __int64 name_ea; // rax
  unsigned __int64 v5; // r12
  int v6; // eax
  _QWORD *v7; // r14
  size_t v8; // rax
  size_t v9; // r15
  size_t v10; // rbp
  char *v11; // rax
  _QWORD *v12; // r15
  char *v13; // rcx
  unsigned __int64 v14; // rbp
  const char *v15; // r8
  unsigned __int64 v16; // rax
  int v17; // eax
  int v18; // eax
  __int16 flags; // ax
  __int64 v21; // [rsp+8h] [rbp-70h]
  char *s2; // [rsp+10h] [rbp-68h]
  char *v23; // [rsp+18h] [rbp-60h]
  char *s1; // [rsp+20h] [rbp-58h] BYREF
  __int128 v25; // [rsp+28h] [rbp-50h]
  unsigned __int64 v26; // [rsp+38h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( (a3 & 1) != 0 && (unsigned __int8)is_c_keyword() )
      goto LABEL_22;
    if ( (a3 & 2) != 0 )
    {
      if ( *(_QWORD *)(a1 + 416) )
      {
        if ( !strcmp(*(const char **)(a1 + 408), a2) )
          goto LABEL_22;
      }
      else if ( !strcmp(::s1, a2) )
      {
        goto LABEL_22;
      }
    }
    if ( (a3 & 4) == 0 )
    {
LABEL_7:
      if ( (a3 & 0x18) == 0 )
        goto LABEL_9;
      name_ea = get_name_ea();
      v5 = name_ea;
      if ( name_ea == -1 )
        goto LABEL_9;
      v16 = sub_330F80((_QWORD *)a1, name_ea);
      if ( (unsigned __int8)sub_332920(a1 + 8, v16) )
        return ((unsigned __int8)(a3 & 0x10) >> 4) & 1;
      if ( (a3 & 8) == 0 )
        goto LABEL_9;
      flags = get_flags_ex();
      if ( (~flags & 0x600) != 0 )
      {
        if ( (flags & 0x1000) != 0 )
        {
          LOBYTE(v6) = (unsigned int)sub_343460(*(_QWORD *)(a1 + 1496), v5, 1) == 0;
          return v6;
        }
        goto LABEL_9;
      }
LABEL_22:
      LOBYTE(v6) = 1;
      return v6;
    }
    s1 = nullptr;
    v7 = *(_QWORD **)(a1 + 872);
    v25 = 0;
    v8 = strlen(a2);
    v9 = v8 + 1;
    v10 = v8;
    v11 = (char *)qvector_reserve((__int64)&s1, 0, v8 + 1, 1);
    *(_QWORD *)&v25 = v9;
    s1 = v11;
    memmove(v11, a2, v10);
    s1[v10] = 0;
    v12 = *(_QWORD **)(a1 + 872);
    v13 = s1;
    if ( !v12 )
      goto LABEL_19;
    v14 = *v12 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v14 )
    {
      v12 = nullptr;
LABEL_19:
      if ( v13 )
      {
        *(_QWORD *)&v25 = 0;
        qfree((__int64)v13);
      }
      if ( v7 != v12 )
        goto LABEL_22;
      goto LABEL_7;
    }
    if ( (*(_BYTE *)v14 & 2) != 0 )
      goto LABEL_19;
    v21 = v25;
    while ( 1 )
    {
      if ( *(_QWORD *)(v14 + 32) )
      {
        v15 = *(const char **)(v14 + 24);
        if ( !v21 )
        {
          if ( !*v15 )
            goto LABEL_38;
LABEL_17:
          v14 = *(_QWORD *)(v14 + 8);
          goto LABEL_18;
        }
      }
      else
      {
        if ( !v21 )
          goto LABEL_38;
        v15 = ::s1;
      }
      s2 = v13;
      v23 = (char *)v15;
      v17 = strcmp(v13, v15);
      v13 = s2;
      if ( v17 < 0 )
        goto LABEL_17;
      v18 = strcmp(v23, s2);
      v13 = s2;
      if ( v18 >= 0 )
      {
LABEL_38:
        v12 = (_QWORD *)v14;
        goto LABEL_19;
      }
      v14 = *(_QWORD *)(v14 + 16);
LABEL_18:
      if ( (*(_BYTE *)v14 & 2) != 0 )
        goto LABEL_19;
    }
  }
LABEL_9:
  LOBYTE(v6) = 0;
  return v6;
}

