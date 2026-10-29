__int64 __fastcall sub_B2A40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // r14
  const void *v9; // rbx
  void *v10; // rdi
  __int64 v11; // rax

  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 > 1 )
  {
    if ( a1 != a2 + 16 )
    {
      v9 = *(const void **)(a2 + 16);
      v10 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v5 )
      {
        v11 = qvector_reserve();
        *(_QWORD *)a1 = v11;
        v10 = (void *)v11;
      }
      *(_QWORD *)(a1 + 8) = v5;
      memmove(v10, v9, v5 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v5 - 1) = 0;
    }
    return 1;
  }
  else if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    return sub_B2B00(a1, a2 + 64, 0, a4, a3);
  }
  else
  {
    return 0;
  }
}

