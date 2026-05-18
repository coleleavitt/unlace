__int64 sub_285C0()
{
  __int64 *v0; // rbx
  __pid_t v1; // eax
  int v2; // r8d
  int v3; // r9d
  FILE *v4; // rax
  FILE *v5; // r12
  int v6; // ebp
  __int64 v8; // [rsp+0h] [rbp-438h] BYREF
  __int16 v9; // [rsp+8h] [rbp-430h]
  char nptr[1022]; // [rsp+Ah] [rbp-42Eh] BYREF
  unsigned __int64 v11; // [rsp+408h] [rbp-30h]

  LODWORD(v0) = 0;
  v11 = __readfsqword(0x28u);
  v1 = getpid();
  sub_19D9D0((unsigned int)&v8, 1024, (unsigned int)"/proc/%d/status", v1, v2, v3, v8);
  v4 = fopen((const char *)&v8, "r");
  if ( v4 )
  {
    v0 = &v8;
    v5 = v4;
    v6 = 16;
    while ( 1 )
    {
      if ( !fgets((char *)&v8, 1024, v5) )
      {
LABEL_6:
        LODWORD(v0) = 0;
        goto LABEL_7;
      }
      if ( v8 == 0x6950726563617254LL && v9 == 14948 )
        break;
      if ( !--v6 )
        goto LABEL_6;
    }
    LOBYTE(v0) = (unsigned int)strtol(nptr, nullptr, 10) != 0;
LABEL_7:
    fclose(v5);
  }
  return (unsigned int)v0;
}
