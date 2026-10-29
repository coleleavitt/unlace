__int64 __fastcall sub_152B0(__int64 *a1)
{
  char v2; // dl
  __int64 v3; // rax
  const char *v5; // r13
  size_t v6; // rax
  size_t v7; // rbp
  size_t v8; // r14
  void *v9; // rdi
  __int64 v10; // rax
  char v11[4104]; // [rsp+0h] [rbp-1038h] BYREF
  unsigned __int64 v12; // [rsp+1008h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  getinf_buf();
  qstrlwr();
  qstrncat();
  v2 = choose_ioport_device();
  v3 = a1[18];
  if ( !v2 )
  {
    if ( !v3 )
      goto LABEL_3;
    v5 = (const char *)a1[17];
    if ( strcmp(v5, "NONE") )
    {
LABEL_11:
      if ( !v5 )
        return 0;
      v6 = strlen(v5);
      v7 = v6;
      if ( v6 )
      {
        v8 = v6 + 1;
        v9 = (void *)v5;
        if ( a1[19] < v6 + 1 )
        {
          v10 = qvector_reserve();
          a1[17] = v10;
          v9 = (void *)v10;
        }
        a1[18] = v8;
        memmove(v9, v5, v7);
        *(_BYTE *)(a1[17] + v7) = 0;
        goto LABEL_5;
      }
LABEL_4:
      a1[18] = 0;
LABEL_5:
      netnode_supset();
      sub_149E0(a1 + 16, 5);
      return 0;
    }
    sub_151E0((__int64)"No devices are defined in the configuration file %s", v11);
    v3 = a1[18];
  }
  if ( v3 )
  {
    v5 = (const char *)a1[17];
    goto LABEL_11;
  }
LABEL_3:
  if ( &dword_192A4 )
    goto LABEL_4;
  return 0;
}

