__int64 __fastcall sub_56D0(__int64 a1)
{
  char v2; // dl
  __int64 v3; // rax
  void *v5; // rbp
  size_t v6; // rax
  size_t v7; // r13
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
  v3 = *(_QWORD *)(a1 + 144);
  if ( v2 )
  {
    if ( v3 )
    {
      v5 = *(void **)(a1 + 136);
      if ( !v5 )
        return 0;
      v6 = strlen(*(const char **)(a1 + 136));
      v7 = v6;
      if ( v6 )
      {
        v8 = v6 + 1;
        v9 = v5;
        if ( *(_QWORD *)(a1 + 152) < v6 + 1 )
        {
          v10 = qvector_reserve();
          *(_QWORD *)(a1 + 136) = v10;
          v9 = (void *)v10;
        }
        *(_QWORD *)(a1 + 144) = v8;
        memmove(v9, v5, v7);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v7) = 0;
        goto LABEL_7;
      }
    }
    else if ( !&qword_7630 )
    {
      return 0;
    }
    *(_QWORD *)(a1 + 144) = 0;
LABEL_7:
    netnode_supset();
    sub_4E40((__int64 *)(a1 + 128), 7);
    return 0;
  }
  if ( v3 && !strcmp(*(const char **)(a1 + 136), "NONE") )
    sub_5600((__int64)"No devices are defined in the configuration file %s", v11);
  return 0;
}

