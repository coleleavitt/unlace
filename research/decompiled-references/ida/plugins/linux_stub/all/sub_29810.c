__int64 __fastcall sub_29810(__int64 a1, _BYTE *a2)
{
  char v2; // al
  const void *v4; // rbp
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r13
  size_t v8; // rax
  size_t v9; // r12
  size_t v11; // rax
  size_t v12; // r14
  size_t v13; // r13
  size_t v14; // rax
  size_t v15; // r12
  void *v16; // rdi
  size_t v17; // r13
  void *v18; // rdi
  size_t v19; // r13
  __int64 v20; // rax
  __int64 v21; // rax
  void *v22; // [rsp+0h] [rbp-48h] BYREF
  __int128 v23; // [rsp+8h] [rbp-40h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( *a2 != 45 )
  {
    if ( !under_debugger )
      interr();
    BUG();
  }
  v2 = a2[1];
  v4 = a2 + 2;
  if ( v2 == 112 )
  {
    v14 = strlen(a2 + 2);
    v15 = v14;
    if ( v14 )
    {
      v18 = *(void **)(a1 + 64);
      v19 = v14 + 1;
      if ( *(_QWORD *)(a1 + 80) < v14 + 1 )
      {
        v21 = qvector_reserve();
        *(_QWORD *)(a1 + 64) = v21;
        v18 = (void *)v21;
      }
      *(_QWORD *)(a1 + 72) = v19;
      memmove(v18, v4, v15);
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + v15) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 72) = 0;
    }
    return 1;
  }
  if ( v2 > 112 )
  {
    if ( v2 == 117 )
    {
      v8 = strlen(a2 + 2);
      v9 = v8;
      if ( v8 )
      {
        v16 = *(void **)(a1 + 40);
        v17 = v8 + 1;
        if ( *(_QWORD *)(a1 + 56) < v8 + 1 )
        {
          v20 = qvector_reserve();
          *(_QWORD *)(a1 + 40) = v20;
          v16 = (void *)v20;
        }
        *(_QWORD *)(a1 + 48) = v17;
        memmove(v16, v4, v9);
        *(_BYTE *)(*(_QWORD *)(a1 + 40) + v9) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 48) = 0;
      }
      return 1;
    }
  }
  else
  {
    if ( v2 == 80 )
    {
      v22 = nullptr;
      *(_DWORD *)(a1 + 168) |= 0x402u;
      v23 = 0;
      v11 = strlen(a2 + 2);
      v12 = v11 + 1;
      v13 = v11;
      v22 = (void *)qvector_reserve();
      *(_QWORD *)&v23 = v12;
      memmove(v22, v4, v13);
      *((_BYTE *)v22 + v13) = 0;
      sub_29140(a1 + 88, &v22, 1);
      if ( !v22 )
        return 1;
      goto LABEL_7;
    }
    if ( v2 == 104 )
    {
      v23 = 0;
      v5 = strlen(a2 + 2);
      v6 = v5 + 1;
      v7 = v5;
      v22 = (void *)qvector_reserve();
      *(_QWORD *)&v23 = v6;
      memmove(v22, v4, v7);
      *((_BYTE *)v22 + v7) = 0;
      sub_29140(a1 + 8, &v22, 1);
      if ( !v22 )
        return 1;
LABEL_7:
      *(_QWORD *)&v23 = 0;
      qfree();
      return 1;
    }
  }
  return 0;
}

