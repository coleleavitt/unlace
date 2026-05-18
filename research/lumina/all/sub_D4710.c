__int64 __fastcall sub_D4710(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  char *v4; // rbx
  int v5; // eax
  int v6; // r11d
  unsigned __int8 *v7; // rax
  __int64 *v9; // rax
  __int64 v10; // r11
  __int64 v11; // rax
  __int64 (__fastcall *v12)(unsigned __int8 *); // rax

  v4 = *(char **)a2;
  if ( *(_QWORD *)a2 )
  {
    v5 = strlen(*(const char **)a2);
    if ( !a3 || (unsigned int)sub_CA590(a3, (unsigned __int8 *)v4, v5 & 0x3FFFFFFF) )
      return 0;
    v7 = &a3[v6];
  }
  else
  {
    v7 = nullptr;
    if ( a3 )
      return 0;
  }
  if ( *v7 != 95 )
    return 0;
  v9 = (__int64 *)sub_C2AB0(a1 + 536, **(unsigned __int8 ***)(a2 + 72), nullptr)[2];
  if ( !v9 )
    return 0;
  v11 = *v9;
  if ( *(int *)v11 <= 2 )
    return 0;
  v12 = *(__int64 (__fastcall **)(unsigned __int8 *))(v11 + 184);
  if ( !v12 )
    return 0;
  return v12(&a3[v10 + 1]);
}
