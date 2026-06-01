bool __fastcall sub_9240(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  bool result; // al
  const char *v5; // rbx
  char *v6; // rax
  __int128 v7; // [rsp+0h] [rbp-178h] BYREF
  __int64 v8; // [rsp+10h] [rbp-168h]
  __int64 v9; // [rsp+18h] [rbp-160h]
  __int64 v10; // [rsp+20h] [rbp-158h]
  char v11; // [rsp+28h] [rbp-150h] BYREF
  _QWORD v12[2]; // [rsp+168h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v12[0] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 216) != v2 )
  {
    v9 = 0;
    v6 = &v11;
    v10 = 0;
    v7 = -1;
    do
    {
      *(_WORD *)v6 = 0;
      v6 += 40;
      *((_WORD *)v6 - 19) = 0;
      *((_WORD *)v6 - 18) = 0;
      *((_DWORD *)v6 - 2) = 0;
      *((_WORD *)v6 - 17) = 0;
      *((_OWORD *)v6 - 2) = 0;
      *((_QWORD *)v6 - 2) = 0;
    }
    while ( v12 != (_QWORD *)v6 );
    v8 = v2;
    if ( !(unsigned int)sub_89C0(a1, (__int64)&v7, (__int64)v12, v2) )
      return 0;
  }
  v3 = *(int *)(a1 + 208);
  result = 1;
  if ( *((_DWORD *)&unk_22500 + 6 * (*(int *)(a1 + 212) >> 1) + v3 + 1) == 3
    && ((*(_BYTE *)(a1 + 180) & 0x20) != 0 || (*(_BYTE *)(a1 + 8 * v3 + 184) & 0x3F) == 0) )
  {
    v5 = *(const char **)(a1 + 128);
    if ( strncmp(v5, "br.cond", 7u)
      && strncmp(v5, "br.many", 7u)
      && strncmp(v5, "brl.cond", 8u)
      && strncmp(v5, "br.few", 6u)
      && strncmp(v5, "br.ret", 6u)
      && strncmp(v5, "br.ia", 5u) )
    {
      return strcmp(v5, "rfi") != 0;
    }
    return 0;
  }
  return result;
}

