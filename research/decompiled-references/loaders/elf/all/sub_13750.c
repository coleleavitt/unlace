const char *__fastcall sub_13750(__int64 a1, int *a2, const char *a3)
{
  int v3; // ecx
  const char *result; // rax
  int v5; // ecx
  int v6; // ecx

  v3 = *(unsigned __int16 *)(*(_QWORD *)(a1 + 16) + 522LL);
  if ( v3 != 117 )
  {
    result = a3;
    if ( v3 == 120 )
    {
      v5 = *a2;
      result = "m16c80";
      if ( *a2 )
      {
        result = "m32c80";
        *a2 = 0;
        if ( (unsigned int)(v5 - 1) >= 2 )
          return a3;
        return result;
      }
    }
LABEL_3:
    *a2 = 0;
    return result;
  }
  v6 = *a2;
  result = "m16c60";
  if ( !*a2 )
    goto LABEL_3;
  result = "r8c";
  *a2 = 0;
  if ( (unsigned int)(v6 - 1) >= 2 )
    return a3;
  return result;
}
