void __fastcall sub_19810(__int64 a1)
{
  const char *v1; // r12

  if ( *(_QWORD *)(a1 + 40) )
  {
    if ( (dword_3A5A0 & 1) != 0 )
    {
      if ( *(_QWORD *)(a1 + 56) )
      {
        v1 = *(const char **)(a1 + 48);
        if ( (!strcmp(v1, "localhost") || !strcmp(v1, "127.0.0.1")) && !*(_BYTE *)(a1 + 80) )
          check_process_exit();
      }
    }
  }
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 40) = 0;
}

