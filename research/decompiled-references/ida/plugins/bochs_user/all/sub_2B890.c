__int64 __fastcall sub_2B890(__int64 a1, const char *a2)
{
  char *v2; // rdx
  __int64 result; // rax

  v2 = strstr(a2, " inserted");
  result = 0;
  if ( !v2 )
    return 1 - ((unsigned int)(strncmp(a2, "Too many", 8u) == 0) - 1);
  return result;
}

