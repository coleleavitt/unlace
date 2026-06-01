char *__fastcall sub_40040(char *a1, int *a2, char *a3, _WORD *a4)
{
  char *result; // rax
  int v5; // edx
  char v6; // r8
  __int16 v7; // dx
  char v8; // si

  result = a3;
  if ( a2 && a1 )
  {
    *a2 = 0;
    v5 = 4 * ((*a1 & 1) == 0);
    *a2 = v5;
    v6 = *a1;
    if ( (*a1 & 2) != 0 )
    {
      *a2 = v5 | 1;
      v6 = *a1;
    }
    if ( (v6 & 4) == 0 )
      *a2 |= 2u;
  }
  if ( result && a4 )
  {
    *a4 = 0;
    v7 = 4 * ((*result & 1) == 0);
    *a4 = v7;
    v8 = *result;
    if ( (*result & 2) != 0 )
    {
      *a4 = v7 | 1;
      v8 = *result;
    }
    if ( (v8 & 4) == 0 )
      *a4 |= 2u;
  }
  return result;
}

