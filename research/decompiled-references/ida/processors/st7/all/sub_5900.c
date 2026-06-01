__int64 __fastcall sub_5900(__int64 a1)
{
  void *v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r14
  void *v7; // rdi
  __int64 v8; // rax

  getinf_buf();
  qstrlwr();
  qstrncat();
  if ( (unsigned __int8)choose_ioport_device() )
  {
    if ( *(_QWORD *)(a1 + 144) )
    {
      v3 = *(void **)(a1 + 136);
      if ( !v3 )
        return 0;
      v4 = strlen(*(const char **)(a1 + 136));
      v5 = v4;
      if ( v4 )
      {
        v6 = v4 + 1;
        v7 = v3;
        if ( *(_QWORD *)(a1 + 152) < v4 + 1 )
        {
          v8 = qvector_reserve();
          *(_QWORD *)(a1 + 136) = v8;
          v7 = (void *)v8;
        }
        *(_QWORD *)(a1 + 144) = v6;
        memmove(v7, v3, v5);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v5) = 0;
        goto LABEL_5;
      }
LABEL_4:
      *(_QWORD *)(a1 + 144) = 0;
LABEL_5:
      netnode_supset();
      sub_55D0((__int64 *)(a1 + 128), 5);
      return 0;
    }
    if ( byte_8E90 )
      goto LABEL_4;
  }
  return 0;
}

