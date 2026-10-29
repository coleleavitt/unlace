__int64 __fastcall sub_D270(__int64 a1)
{
  __int64 *v1; // r12
  void *v4; // rbp
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r15
  void *v8; // rdi
  __int64 v9; // rax

  v1 = (__int64 *)(a1 + 128);
  getinf_buf();
  qstrlwr();
  qstrncat();
  if ( (unsigned __int8)choose_ioport_device2() )
  {
    if ( *(_QWORD *)(a1 + 144) )
    {
      v4 = *(void **)(a1 + 136);
      if ( !v4 )
        return 0;
      v5 = strlen(*(const char **)(a1 + 136));
      v6 = v5;
      if ( v5 )
      {
        v7 = v5 + 1;
        v8 = v4;
        if ( *(_QWORD *)(a1 + 152) < v5 + 1 )
        {
          v9 = qvector_reserve();
          *(_QWORD *)(a1 + 136) = v9;
          v8 = (void *)v9;
        }
        *(_QWORD *)(a1 + 144) = v7;
        memmove(v8, v4, v6);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v6) = 0;
        goto LABEL_5;
      }
LABEL_4:
      *(_QWORD *)(a1 + 144) = 0;
LABEL_5:
      netnode_supset();
      sub_CF40(v1, 5);
      return 0;
    }
    if ( byte_11DF8 )
      goto LABEL_4;
  }
  return 0;
}

