__int64 __fastcall sub_22370(char *a1, const char *a2, int a3, char **a4)
{
  int v6; // ebx
  int v9; // esi
  int v11; // ebx
  char *v12; // r13

  v6 = *a1;
  if ( (unsigned __int8)(*a1 - 48) > 9u )
    return 0xFFFFFFFFLL;
  v9 = a1[1];
  v11 = v6 - 48;
  v12 = a1 + 1;
  if ( (unsigned __int8)(a1[1] - 48) <= 9u )
  {
    v12 = a1 + 2;
    v11 = v9 + 10 * v11 - 48;
    v9 = a1[2];
  }
  if ( !strchr(a2, v9) )
    return 0xFFFFFFFFLL;
  if ( a4 )
    *a4 = v12;
  if ( v11 <= a3 )
    return (unsigned int)v11;
  else
    return 0xFFFFFFFFLL;
}

