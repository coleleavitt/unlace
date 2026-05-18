char *__fastcall sub_C4360(char *a1, int a2)
{
  char *result; // rax
  char v3; // cl
  int v4; // ecx
  __int64 v5; // rcx

  result = a1;
  v3 = *a1;
  if ( *a1 == -80 )
    v3 = a1[2];
  if ( v3 == -79 )
  {
    v4 = **((_DWORD **)a1 + 4);
  }
  else
  {
    if ( v3 != -118 )
      return result;
    v4 = **(_DWORD **)(*((_QWORD *)a1 + 4) + 32LL);
  }
  if ( v4 > 1 )
  {
    v5 = *((_QWORD *)a1 + 4);
    if ( *a1 == -118 || a1[2] == -118 )
      return *(char **)(*(_QWORD *)(v5 + 32) + 24LL * a2 + 8);
    else
      return *(char **)(v5 + 24LL * a2 + 8);
  }
  return result;
}
