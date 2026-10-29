__int64 __fastcall sub_8530(__int64 a1, const char *a2, int a3, const void *a4, char a5)
{
  int v9; // edx
  __int64 result; // rax
  size_t v11; // rax
  size_t v12; // rbx
  void *v13; // rdi
  size_t v14; // r14
  void *v15; // r12
  size_t v16; // rax
  size_t v17; // rbx
  size_t v18; // r13
  void *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rax

  if ( !a2 )
  {
    sub_8180(a1, 4);
    return 0;
  }
  v9 = strcmp(a2, "AVR_MCPU");
  result = 1;
  if ( !v9 )
  {
    result = 2;
    if ( a3 == 1 )
    {
      if ( a4 && (v11 = strlen((const char *)a4), (v12 = v11) != 0) )
      {
        v13 = *(void **)(a1 + 136);
        v14 = v11 + 1;
        if ( *(_QWORD *)(a1 + 152) < v11 + 1 )
        {
          v20 = qvector_reserve();
          *(_QWORD *)(a1 + 136) = v20;
          v13 = (void *)v20;
        }
        *(_QWORD *)(a1 + 144) = v14;
        memmove(v13, a4, v12);
        *(_BYTE *)(*(_QWORD *)(a1 + 136) + v12) = 0;
        if ( !a5 )
          return 0;
        if ( *(_QWORD *)(a1 + 144) )
        {
          v15 = *(void **)(a1 + 136);
          if ( !v15 )
            return 0;
          v16 = strlen(*(const char **)(a1 + 136));
          v17 = v16;
          if ( v16 )
          {
            v18 = v16 + 1;
            v19 = v15;
            if ( *(_QWORD *)(a1 + 152) < v16 + 1 )
            {
              v21 = qvector_reserve();
              *(_QWORD *)(a1 + 136) = v21;
              v19 = (void *)v21;
            }
            *(_QWORD *)(a1 + 144) = v18;
            memmove(v19, v15, v17);
            *(_BYTE *)(*(_QWORD *)(a1 + 136) + v17) = 0;
            goto LABEL_11;
          }
LABEL_10:
          *(_QWORD *)(a1 + 144) = 0;
LABEL_11:
          netnode_supset();
          sub_7270((__int64 *)(a1 + 128), 0);
          return 0;
        }
      }
      else
      {
        *(_QWORD *)(a1 + 144) = 0;
        if ( !a5 )
          return 0;
      }
      if ( !&unk_B62C )
        return 0;
      goto LABEL_10;
    }
  }
  return result;
}

