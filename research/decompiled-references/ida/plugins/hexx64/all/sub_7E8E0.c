char *__fastcall sub_7E8E0(__int64 a1, char **a2, double a3)
{
  char *result; // rax
  __int64 v4; // r12
  char *v5; // rax
  int v6; // edx

  if ( *((_DWORD *)a2 + 12) > 3u )
  {
    v4 = (__int64)a2[4];
    result = (char *)(v4 + sub_7CF00(a2, a3));
    *(_QWORD *)a1 = result;
    if ( result == (char *)-1LL )
      goto LABEL_3;
  }
  else
  {
    result = (char *)(sub_7CEC0(a2, a3) - 1);
    *(_QWORD *)a1 = result;
    if ( result == (char *)-1LL )
    {
LABEL_3:
      *(_DWORD *)(a1 + 8) = 0;
      return result;
    }
  }
  v5 = *a2;
  if ( *a2 >= a2[1] )
    sub_7A4F0(a3);
  v6 = *v5;
  result = v5 + 1;
  *a2 = result;
  *(_DWORD *)(a1 + 8) = v6;
  return result;
}

