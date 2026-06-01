const char *__fastcall sub_1CCC0(__int64 a1)
{
  int v1; // edx
  const char *result; // rax

  v1 = *(_DWORD *)(a1 + 16);
  result = "linux";
  if ( v1 != 0x2000 )
  {
    result = "macosx";
    if ( v1 != 0x4000 )
    {
      result = "win32";
      if ( v1 != 4096 )
        return nullptr;
    }
  }
  return result;
}

