bool __fastcall sub_19D30(__int64 a1, const char *a2)
{
  bool result; // al
  __int64 v3; // rdx
  const char *v4; // rdi

  result = 0;
  if ( *(_DWORD *)(a1 + 8) == 57 )
  {
    v3 = *(_QWORD *)(a1 + 24);
    if ( *(_DWORD *)(v3 + 8) == 68 )
    {
      v4 = *(const char **)(v3 + 24);
      if ( a2 )
        return strcmp(v4, a2) == 0;
      else
        return strncmp(v4, "__eh34_", 6u) == 0;
    }
  }
  return result;
}
