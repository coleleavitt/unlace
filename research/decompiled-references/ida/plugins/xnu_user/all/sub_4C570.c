__int64 __fastcall sub_4C570(double a1, double a2, __int64 a3, const char *a4, __int64 a5)
{
  const char *v5; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  const char *v9; // rcx
  const char *v10; // rdx
  const char *v11; // rsi

  if ( *(_QWORD *)(a5 + 8) )
  {
    v5 = (const char *)a5;
    sub_140F0((__int64)"List of memory ranges:\n");
    v7 = *(_QWORD *)v5 + 80LL * *((_QWORD *)v5 + 1);
    if ( *(_QWORD *)v5 != v7 )
    {
      v8 = *(_QWORD *)v5;
      v5 = src;
      do
      {
        v9 = src;
        if ( *(_QWORD *)(v8 + 24) )
          v9 = *(const char **)(v8 + 16);
        v10 = *(const char **)(v8 + 8);
        v11 = *(const char **)v8;
        v8 += 80;
        sub_140F0((__int64)"%08a..%08a: %s %s%s\n", a1, a2, v11, v10, v9);
      }
      while ( v7 != v8 );
    }
  }
  get_segm_name();
  LOBYTE(v5) = (unsigned int)sub_14DE0(
                               0,
                               (__int64)"TITLE Address conflict\n"
                                        "AUTOHIDE DATABASE\n"
                                        "HIDECANCEL\n"
                                        "ICON WARNING\n"
                                        "Segment \"%s\" %s.\n"
                                        "The program will likely fail to load or work properly.\n"
                                        "If possible, rebase the program or edit the memory map.\n"
                                        "See the list of currently valid memory ranges in the output window.\n"
                                        "Do you still wish to continue?",
                               src,
                               a4) == 1;
  return (unsigned int)v5;
}

