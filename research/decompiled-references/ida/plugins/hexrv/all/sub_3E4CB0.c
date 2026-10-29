__int64 __fastcall sub_3E4CB0(__int64 a1, const char *a2, _DWORD *a3)
{
  char *v4; // rax
  char *v5; // rbx
  size_t v6; // rbx
  _DWORD *v7; // r13
  char *i; // r14
  __int64 v9; // rax
  int v11; // eax
  int v12; // [rsp+Ch] [rbp-3Ch]

  v4 = strchr(a2, 94);
  if ( v4 )
  {
    v5 = v4;
    v12 = strtol(v4 + 1, nullptr, 10);
  }
  else
  {
    v12 = 0;
    v5 = (char *)&a2[strlen(a2)];
  }
  v6 = v5 - a2;
  v7 = (_DWORD *)(a1 + 352);
  for ( i = (char *)&unk_40C240; strncmp(a2, i + 8, v6) || i[v6 + 8]; i += 16 )
  {
    v9 = *((_QWORD *)i + 2);
    v7 = (_DWORD *)(a1 + v9);
    if ( v9 == 624 )
      return 0xFFFFFFFFLL;
  }
  if ( a3 )
  {
    v11 = (unsigned __int8)i[14];
    if ( (_BYTE)v11 == 0xFF )
    {
      v11 = *(unsigned __int8 *)(a1 + 80);
    }
    else if ( (_BYTE)v11 == 0xFE )
    {
      v11 = *(unsigned __int8 *)(a1 + 692);
    }
    *a3 = v11;
  }
  return (unsigned int)(*v7 + v12);
}

