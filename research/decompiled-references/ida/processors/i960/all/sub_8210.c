__int64 __fastcall sub_8210(__int64 a1)
{
  void *v2; // r12
  size_t v3; // rax
  size_t v4; // rbp
  size_t v5; // r13
  void *v6; // rdi
  __int64 v8; // rax

  if ( *(_QWORD *)(a1 + 144) )
  {
    v2 = *(void **)(a1 + 136);
    if ( v2 )
    {
      v3 = strlen(*(const char **)(a1 + 136));
      v4 = v3;
      if ( v3 )
      {
        v5 = v3 + 1;
        v6 = v2;
        if ( *(_QWORD *)(a1 + 152) < v3 + 1 )
        {
          v8 = qvector_reserve();
          *(_QWORD *)(a1 + 136) = v8;
          v6 = (void *)v8;
        }
        *(_QWORD *)(a1 + 144) = v5;
        memmove(v6, v2, v4);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v4) = 0;
        goto LABEL_9;
      }
LABEL_8:
      *(_QWORD *)(a1 + 144) = 0;
LABEL_9:
      netnode_supset();
      sub_7550((__int64 *)(a1 + 128), 0);
    }
  }
  else if ( &dword_AFE4 )
  {
    goto LABEL_8;
  }
  return sub_80A0((_QWORD *)a1);
}

