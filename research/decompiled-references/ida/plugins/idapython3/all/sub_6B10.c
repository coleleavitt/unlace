_BOOL8 __fastcall sub_6B10(int a1)
{
  int v1; // eax

  v1 = dword_244E0;
  if ( dword_244E0 < 0 )
  {
    if ( (unsigned __int8)qgetenv() )
      dword_244E0 = strtol(src, nullptr, 10);
    v1 = dword_244E0;
  }
  return a1 <= v1;
}

