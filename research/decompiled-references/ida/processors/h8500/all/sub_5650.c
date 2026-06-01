__int64 __fastcall sub_5650(_DWORD *a1)
{
  int v1; // eax
  const char *v2; // rdx

  v1 = a1[63];
  v2 = ".b";
  if ( (v1 & 1) == 0 )
  {
    v2 = ".w";
    if ( (v1 & 2) == 0 )
    {
      v2 = "/f";
      if ( (v1 & 0x40) == 0 )
      {
        v2 = "/ne";
        if ( (v1 & 0x80u) == 0 )
        {
          v2 = "/eq";
          if ( (v1 & 0x100) == 0 )
            v2 = nullptr;
        }
      }
    }
  }
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, const char *))(*(_QWORD *)a1 + 280LL))(a1, 8, v2);
}

