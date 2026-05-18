unsigned __int64 __fastcall sub_103D10(_QWORD *a1, int a2, __int64 a3)
{
  const char *v3; // r8
  int v4; // ecx
  unsigned __int8 *v5; // r9
  int v6; // eax
  __int64 v7; // rdx

  v3 = (const char *)a3;
  v4 = a2;
  if ( a2 > 2 && (byte_1BEF00[*(unsigned __int8 *)(a3 + 1)] & 2) != 0 )
  {
    if ( a2 == 3 )
    {
LABEL_8:
      v4 = a2 - 2;
      return sub_103BF0(v4 + 2, a1, ".%.*s", v4, ++v3);
    }
    if ( (byte_1BEF00[*(unsigned __int8 *)(a3 + 2)] & 6) != 0 )
    {
      v5 = (unsigned __int8 *)(a3 + 3);
      v6 = 2;
      while ( ++v6 != a2 - 1 )
      {
        v7 = *v5++;
        if ( (byte_1BEF00[v7] & 6) == 0 )
          return sub_103BF0(v4 + 2, a1, ".%.*s", v4, v3);
      }
      goto LABEL_8;
    }
  }
  return sub_103BF0(v4 + 2, a1, ".%.*s", v4, v3);
}
