__int64 __fastcall sub_17510(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  const char *v4; // r12
  size_t v5; // rax
  const char *v6; // r13
  unsigned int v7; // edi
  size_t v8; // rax
  size_t v9; // r14
  void *v10; // rdi
  size_t v11; // r13
  __int64 v12; // rax

  v2 = a2;
  if ( qgetline() <= 0 )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a2 + 39) = 0;
    *(_WORD *)(a2 + 47) = 0;
    *(_QWORD *)a2 = -1;
    if ( (unsigned int)qsscanf() == 6 )
    {
      *(_BYTE *)(a2 + 48) = 1;
      v4 = (const char *)skip_spaces();
      v5 = strlen(v4);
      v6 = &v4[v5];
      if ( v4 < &v4[v5] )
      {
        while ( 1 )
        {
          v7 = *(v6 - 1);
          if ( v7 > 0x7F || !isspace(v7) )
            break;
          *--v6 = 0;
          if ( v6 == v4 )
            goto LABEL_11;
        }
      }
      if ( v6 - v4 > 10 && !strncmp(v6 - 10, " (deleted)", 0xAu) )
        *((_BYTE *)v6 - 10) = 0;
LABEL_11:
      if ( v4 && (v8 = strlen(v4), (v9 = v8) != 0) )
      {
        v10 = *(void **)(a2 + 56);
        v11 = v8 + 1;
        if ( *(_QWORD *)(a2 + 72) < v8 + 1 )
        {
          v12 = qvector_reserve();
          *(_QWORD *)(a2 + 56) = v12;
          v10 = (void *)v12;
        }
        *(_QWORD *)(a2 + 64) = v11;
        memmove(v10, v4, v9);
        *(_BYTE *)(*(_QWORD *)(a2 + 56) + v9) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 64) = 0;
      }
    }
    LOBYTE(v2) = *(_QWORD *)a2 != -1;
  }
  return v2;
}

