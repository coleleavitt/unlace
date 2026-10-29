__int64 __fastcall sub_F580(__int64 a1, __int64 a2, char a3, char a4, char a5)
{
  __int64 v9; // rax
  const char *v10; // r14
  unsigned __int16 v11; // r15
  size_t v12; // rax
  __int64 v13; // rbp
  const char *v14; // rbx
  size_t v15; // rax
  char *s2; // [rsp+8h] [rbp-860h]
  unsigned __int16 v18; // [rsp+18h] [rbp-850h]
  char v19[1024]; // [rsp+20h] [rbp-848h] BYREF
  char v20[1032]; // [rsp+420h] [rbp-448h] BYREF
  unsigned __int64 v21; // [rsp+828h] [rbp-40h]

  v9 = *(unsigned __int16 *)(a1 + 24);
  v21 = __readfsqword(0x28u);
  v10 = *((const char **)&off_373A0 + 2 * v9);
  qstpncpy();
  if ( a4 )
    qstrncpy();
  v20[0] = 0;
  s2 = nullptr;
  if ( a3 )
  {
    s2 = (char *)&v10[strlen(v10) + 1];
    qstpncpy();
    if ( a5 )
      qstrncpy();
  }
  v18 = *(_WORD *)(a1 + 24);
  v11 = v18 + 1;
  while ( 1 )
  {
    v13 = v11;
    v14 = *((const char **)&off_373A0 + 2 * v11);
    if ( strcmp(v14, v10) )
      break;
    if ( a3 )
    {
      v12 = strlen(v14);
      if ( strcmp(&v14[v12 + 1], s2) )
        break;
    }
    if ( ++v11 == 261 )
      return 0;
  }
  while ( 1 )
  {
    if ( !strcmp(v14, v19) )
    {
      if ( !a3 )
        break;
      v15 = strlen(v14);
      if ( !strcmp(&v14[v15 + 1], v20) )
        break;
    }
    if ( ++v11 == 261 )
      return 0;
    v13 = v11;
    v14 = *((const char **)&off_373A0 + 2 * v11);
  }
  while ( *((_DWORD *)&off_373A0 + 4 * v18 + 2) != *((_DWORD *)&off_373A0 + 4 * v13 + 2) )
  {
    if ( ++v11 == 261 )
      return 0;
    v13 = v11;
  }
  *(_WORD *)(a1 + 24) = v11;
  return 1;
}

