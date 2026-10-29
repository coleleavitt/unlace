__int64 __fastcall sub_16480(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  void *v4; // r12
  size_t v5; // rax
  size_t v6; // r13
  size_t v7; // r14
  void *v8; // rdi
  __int64 v9; // rax

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
  if ( (unsigned __int8)choose_ioport_device() )
  {
    if ( *(_QWORD *)(v2 + 144) )
    {
      v4 = *(void **)(v2 + 136);
      if ( !v4 )
        return 0;
      v5 = strlen(*(const char **)(v2 + 136));
      v6 = v5;
      if ( v5 )
      {
        v7 = v5 + 1;
        v8 = v4;
        if ( *(_QWORD *)(v2 + 152) < v5 + 1 )
        {
          v9 = qvector_reserve();
          *(_QWORD *)(v2 + 136) = v9;
          v8 = (void *)v9;
        }
        *(_QWORD *)(v2 + 144) = v7;
        memmove(v8, v4, v6);
        *(_BYTE *)(*(_QWORD *)(v2 + 136) + v6) = 0;
        goto LABEL_5;
      }
LABEL_4:
      *(_QWORD *)(v2 + 144) = 0;
LABEL_5:
      netnode_supset();
      sub_161B0((__int64 *)(v2 + 128), 7);
      return 0;
    }
    if ( qword_1AF48 )
      goto LABEL_4;
  }
  return 0;
}

