__int64 __fastcall sub_16C0B0(__int64 a1, _BYTE *a2)
{
  char v2; // al
  const void *v4; // rbp
  size_t v5; // rax
  size_t v6; // r14
  size_t v7; // r13
  void *v8; // rdi
  size_t v9; // rax
  size_t v10; // r12
  size_t v12; // rax
  size_t v13; // r14
  size_t v14; // r13
  size_t v15; // rax
  size_t v16; // r12
  void *v17; // rdi
  size_t v18; // r13
  void *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  __int64 v22; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  int v24[4]; // [rsp+8h] [rbp-40h]
  int v25[2]; // [rsp+18h] [rbp-30h]

  *(_QWORD *)v25 = __readfsqword(0x28u);
  if ( *a2 != 45 )
  {
    if ( !unk_2439A0 )
      sub_198E10(2756);
    BUG();
  }
  v2 = a2[1];
  v4 = a2 + 2;
  if ( v2 == 112 )
  {
    v15 = strlen(a2 + 2);
    v16 = v15;
    if ( v15 )
    {
      v19 = *(void **)(a1 + 64);
      v20 = v15 + 1;
      if ( *(_QWORD *)(a1 + 80) < v15 + 1 )
      {
        v22 = sub_1987B0(a1 + 64, *(_QWORD *)(a1 + 64), v20, 1);
        *(_QWORD *)(a1 + 64) = v22;
        v19 = (void *)v22;
      }
      *(_QWORD *)(a1 + 72) = v20;
      memmove(v19, v4, v16);
      *(_BYTE *)(*(_QWORD *)(a1 + 64) + v16) = 0;
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
      v9 = strlen(a2 + 2);
      v10 = v9;
      if ( v9 )
      {
        v17 = *(void **)(a1 + 40);
        v18 = v9 + 1;
        if ( *(_QWORD *)(a1 + 56) < v9 + 1 )
        {
          v21 = sub_1987B0(a1 + 40, *(_QWORD *)(a1 + 40), v18, 1);
          *(_QWORD *)(a1 + 40) = v21;
          v17 = (void *)v21;
        }
        *(_QWORD *)(a1 + 48) = v18;
        memmove(v17, v4, v10);
        *(_BYTE *)(*(_QWORD *)(a1 + 40) + v10) = 0;
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
      ptr = nullptr;
      *(_DWORD *)(a1 + 168) |= 0x402u;
      *(_OWORD *)v24 = 0;
      v12 = strlen(a2 + 2);
      v13 = v12 + 1;
      v14 = v12;
      ptr = (void *)sub_1987B0(&ptr, 0, v12 + 1, 1);
      *(_QWORD *)v24 = v13;
      memmove(ptr, v4, v14);
      *((_BYTE *)ptr + v14) = 0;
      sub_16B9E0(a1 + 88, &ptr, 1);
      v8 = ptr;
      if ( !ptr )
        return 1;
      goto LABEL_7;
    }
    if ( v2 == 104 )
    {
      ptr = nullptr;
      *(_OWORD *)v24 = 0;
      v5 = strlen(a2 + 2);
      v6 = v5 + 1;
      v7 = v5;
      ptr = (void *)sub_1987B0(&ptr, 0, v5 + 1, 1);
      *(_QWORD *)v24 = v6;
      memmove(ptr, v4, v7);
      *((_BYTE *)ptr + v7) = 0;
      sub_16B9E0(a1 + 8, &ptr, 1);
      v8 = ptr;
      if ( !ptr )
        return 1;
LABEL_7:
      *(_QWORD *)v24 = 0;
      j__free(v8);
      return 1;
    }
  }
  return 0;
}
