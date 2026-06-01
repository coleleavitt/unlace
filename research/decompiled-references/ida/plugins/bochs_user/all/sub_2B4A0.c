__int64 __fastcall sub_2B4A0(__int64 a1, const char *a2, _DWORD *a3)
{
  const char *v5; // rsi
  _BOOL4 v7; // r12d

  v5 = ", base=";
  if ( *(int *)(a1 + 24) <= 241 )
    v5 = ", laddr=";
  if ( !strstr(a2, v5) || (unsigned int)qsscanf() != 1 )
    return 2;
  *a3 = 0;
  v7 = strstr(a2, "Read/Write") != nullptr;
  *a3 = v7;
  if ( strstr(a2, "32-") )
    *a3 = v7 | 4;
  if ( strstr(a2, "Execute") )
    *a3 |= 2u;
  return 0;
}

