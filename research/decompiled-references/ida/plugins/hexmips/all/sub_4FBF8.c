void __fastcall sub_4FBF8(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  const void *v3; // r12

  if ( a1 != a2 )
  {
    v2 = *(_QWORD *)(a2 + 8);
    if ( v2 < 2 )
    {
      *(_QWORD *)(a1 + 8) = 0;
    }
    else
    {
      v3 = *(const void **)a2;
      if ( *(_QWORD *)(a1 + 16) < v2 )
        *(_QWORD *)a1 = qvector_reserve();
      *(_QWORD *)(a1 + 8) = v2;
      memmove(*(void **)a1, v3, v2 - 1);
      *(_BYTE *)(*(_QWORD *)a1 + v2 - 1) = 0;
    }
  }
}

