unsigned __int64 __fastcall sub_92B0(__int64 a1, int a2)
{
  __int64 *v2; // r13
  void *v5; // rbp
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // rdx
  void *v9; // rdi
  __int64 v10; // rax
  size_t v11; // [rsp+8h] [rbp-1060h]
  unsigned __int64 v12; // [rsp+1028h] [rbp-40h]

  v2 = (__int64 *)(a1 + 128);
  v12 = __readfsqword(0x28u);
  getinf_buf();
  qstrlwr();
  qstrncat();
  if ( (unsigned __int8)choose_ioport_device2() )
  {
    if ( *(_QWORD *)(a1 + 144) )
    {
      v5 = *(void **)(a1 + 136);
      if ( !v5 )
        return v12 - __readfsqword(0x28u);
      v6 = strlen(*(const char **)(a1 + 136));
      v7 = v6;
      if ( v6 )
      {
        v8 = v6 + 1;
        v9 = v5;
        if ( *(_QWORD *)(a1 + 152) < v6 + 1 )
        {
          v11 = v6 + 1;
          v10 = qvector_reserve();
          v8 = v11;
          *(_QWORD *)(a1 + 136) = v10;
          v9 = (void *)v10;
        }
        *(_QWORD *)(a1 + 144) = v8;
        memmove(v9, v5, v7);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v7) = 0;
        goto LABEL_5;
      }
LABEL_4:
      *(_QWORD *)(a1 + 144) = 0;
LABEL_5:
      netnode_supset();
      sub_8640(v2, a2);
      return v12 - __readfsqword(0x28u);
    }
    if ( &byte_D688 )
      goto LABEL_4;
  }
  return v12 - __readfsqword(0x28u);
}

