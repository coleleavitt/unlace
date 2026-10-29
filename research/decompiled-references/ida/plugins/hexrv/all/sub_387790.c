__int64 __fastcall sub_387790(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // rax
  __int64 v6; // rdi
  __int64 result; // rax
  unsigned __int64 v8; // r12
  const void *v9; // r14
  void *v10; // rax

  v4 = *(_QWORD *)(a1 + 32) & 0xFF000000F00FFFFFLL;
  v6 = a1 + 8;
  result = v4 | 0x88888808800000LL;
  *(_QWORD *)(v6 + 24) = result;
  if ( v6 != a2 )
  {
    v8 = *(_QWORD *)(a2 + 8);
    if ( v8 > 1 )
    {
      v9 = *(const void **)a2;
      v10 = *(void **)(a1 + 8);
      if ( *(_QWORD *)(a1 + 24) < v8 )
      {
        v10 = (void *)qvector_reserve();
        *(_QWORD *)(a1 + 8) = v10;
      }
      *(_QWORD *)(a1 + 16) = v8;
      memmove(v10, v9, v8 - 1);
      result = *(_QWORD *)(a1 + 8);
      *(_BYTE *)(result + v8 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 16) = 0;
    }
  }
  *(_BYTE *)(a1 + 5) |= 0x20u;
  *(_BYTE *)(a1 + 6) = a3;
  return result;
}

