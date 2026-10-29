__int64 __fastcall sub_B9100(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // r14
  const void *v5; // rbx
  void *v6; // rdi
  __int64 v7; // rax

  v3 = *(_QWORD *)(a2 + 24);
  if ( v3 > 1 )
  {
    if ( a1 != a2 + 16 )
    {
      v5 = *(const void **)(a2 + 16);
      v6 = *(void **)a1;
      if ( *(_QWORD *)(a1 + 16) < v3 )
      {
        v7 = qvector_reserve(a1, (__int64)v6, v3, 1);
        *(_QWORD *)a1 = v7;
        v6 = (void *)v7;
      }
      *(_QWORD *)(a1 + 8) = v3;
      memmove(v6, v5, v3 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v3 - 1) = 0;
    }
    return 1;
  }
  else if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    return sub_B91C0();
  }
  else
  {
    return 0;
  }
}

