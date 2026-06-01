const char *__fastcall sub_12300(__int64 a1, unsigned int *a2, const char *a3)
{
  unsigned int v3; // ecx
  unsigned int v4; // edi
  const char *result; // rax

  v3 = *a2;
  v4 = *a2 & 0xF;
  if ( (*a2 & 8) != 0 )
  {
    result = "c166V1";
    if ( v4 != 8 )
      result = a3;
    *a2 = v3 & 0xFFFFFFF0;
  }
  else
  {
    result = "super10";
    if ( v4 <= 5 )
    {
      result = "c166V2";
      if ( v4 != 5 )
      {
        result = "st10";
        if ( v4 < 3 )
          result = a3;
      }
    }
    *a2 = v3 & 0xFFFFFFF0;
  }
  return result;
}
