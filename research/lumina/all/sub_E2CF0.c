void __fastcall sub_E2CF0(
        __int64 a1,
        char *a2,
        unsigned int a3,
        int a4,
        double a5,
        double a6,
        double a7,
        double a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  int v12; // ebx
  char *v13; // r14
  char v15; // r15
  int v16; // eax

  v12 = a4 == 0 ? 3934208 : -1;
  if ( a2 )
  {
    v13 = a2;
    v15 = a4;
    do
    {
      if ( *((_QWORD *)v13 + 3) )
      {
        v16 = *((_DWORD *)v13 + 1);
        if ( (v16 & 0x40000) == 0 || (v15 & 1) != 0 )
          sub_E2BA0(
            a1,
            1u,
            "sissii",
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11,
            a12,
            *((_QWORD *)v13 + 7),
            a3,
            qword_23A720[v16 & 3],
            (unsigned int)*v13,
            v12 & v16 ^ 0x200000u);
      }
      v13 = *((char **)v13 + 2);
    }
    while ( v13 );
  }
}
