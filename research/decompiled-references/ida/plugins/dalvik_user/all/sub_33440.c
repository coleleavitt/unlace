unsigned __int64 __fastcall sub_33440(__int64 a1)
{
  size_t v2; // rax
  size_t v3; // rbp
  void *v5; // rdi
  size_t v6; // r13
  __int64 v7; // rax
  char v8[4104]; // [rsp-8h] [rbp-1038h] BYREF
  unsigned __int64 v9; // [rsp+1000h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 8) = 1;
  *(_QWORD *)a1 = &off_7D5B8;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  qbasename();
  qmakepath();
  v2 = strlen(v8);
  v3 = v2;
  if ( v2 )
  {
    v5 = *(void **)(a1 + 16);
    v6 = v2 + 1;
    if ( *(_QWORD *)(a1 + 32) < v2 + 1 )
    {
      v7 = qvector_reserve();
      *(_QWORD *)(a1 + 16) = v7;
      v5 = (void *)v7;
    }
    *(_QWORD *)(a1 + 24) = v6;
    memmove(v5, v8, v3);
    *(_BYTE *)(*(_QWORD *)(a1 + 16) + v3) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = 0;
  }
  return v9 - __readfsqword(0x28u);
}

