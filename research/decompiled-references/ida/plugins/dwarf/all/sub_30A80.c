__int64 __fastcall sub_30A80(__int64 a1)
{
  __int64 v2; // r13
  int tinfo_property; // eax
  unsigned int v4; // edx
  unsigned int v5; // r12d
  __int64 idati; // rax
  int v8; // r14d
  size_t v9; // rax
  char *v10; // rcx
  size_t v11; // rdx
  __int64 v12; // rax
  const char *v13; // rsi
  int v14; // eax
  char *v15; // rdi
  char *v16; // rdi
  char *s2; // [rsp+8h] [rbp-80h]
  char *s2a; // [rsp+8h] [rbp-80h]
  char *v19; // [rsp+10h] [rbp-78h]
  size_t v20; // [rsp+18h] [rbp-70h]
  __int64 v21; // [rsp+28h] [rbp-60h] BYREF
  _QWORD v22[2]; // [rsp+30h] [rbp-58h] BYREF
  __int16 v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  v21 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 144LL) + 96LL);
  tinfo_property = get_tinfo_property(*(_QWORD *)(a1 + 8), 7);
  *(_DWORD *)(a1 + 128) = tinfo_property;
  if ( !tinfo_property )
    goto LABEL_4;
  v4 = *(_DWORD *)(a1 + 132);
  if ( v4 == tinfo_property || !v4 )
    goto LABEL_4;
  idati = v2;
  v23 = 257;
  v22[1] = v4;
  if ( !v2 )
    idati = get_idati();
  v22[0] = idati;
  v5 = create_tinfo(&v21, 61, 189, v22);
  if ( !(_BYTE)v5 )
    goto LABEL_4;
  v8 = sub_28C70((_QWORD *)(a1 + 8), &v21);
  if ( !v8 )
    goto LABEL_4;
  s2 = (char *)get_numbered_type_name(v2, *(unsigned int *)(a1 + 132));
  v9 = strlen(s2);
  v10 = s2;
  v11 = v9;
  if ( s2 && v9 )
  {
    v12 = *(_QWORD *)(a1 + 48);
    if ( !v12 )
      goto LABEL_4;
    if ( v12 - 1 < v11 )
      goto LABEL_4;
    v13 = s2;
    v20 = v11;
    v19 = s2;
    s2a = *(char **)(a1 + 40);
    v14 = strncmp(s2a, v13, v11);
    v15 = s2a;
    v10 = v19;
    v11 = v20;
    if ( v14 )
      goto LABEL_4;
  }
  else
  {
    v15 = *(char **)(a1 + 40);
  }
  v16 = &v15[v11];
  if ( *v16 == 95
    && (unsigned __int8)(v16[1] - 48) <= 9u
    && (v8 != -1 || !(unsigned int)save_tinfo(a1 + 8, v2, *(unsigned int *)(a1 + 132), v10, 4100)) )
  {
    set_type_alias(v2, *(unsigned int *)(a1 + 128), *(unsigned int *)(a1 + 132), v10);
    *(_DWORD *)(a1 + 132) = 0;
    goto LABEL_5;
  }
LABEL_4:
  v5 = 0;
LABEL_5:
  clear_tinfo_t(&v21);
  return v5;
}

