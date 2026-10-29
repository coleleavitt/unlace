__int64 __fastcall sub_7A6E0(__int64 a1, __int64 *a2)
{
  __int64 *v3; // rdi
  __int64 result; // rax
  char *v5; // r12
  char *v6; // rax
  int v7; // edx

  if ( *((_DWORD *)a2 + 12) > 3u )
  {
    v5 = (char *)a2[4];
    v3 = a2;
    result = (__int64)&v5[sub_78D00(a2)];
    *(_QWORD *)a1 = result;
    if ( result == -1 )
      goto LABEL_3;
  }
  else
  {
    v3 = a2;
    result = sub_78CC0(a2) - 1;
    *(_QWORD *)a1 = result;
    if ( result == -1 )
    {
LABEL_3:
      *(_DWORD *)(a1 + 8) = 0;
      return result;
    }
  }
  v6 = (char *)*a2;
  if ( *a2 >= (unsigned __int64)a2[1] )
    sub_762F0(v3);
  v7 = *v6;
  result = (__int64)(v6 + 1);
  *a2 = result;
  *(_DWORD *)(a1 + 8) = v7;
  return result;
}

