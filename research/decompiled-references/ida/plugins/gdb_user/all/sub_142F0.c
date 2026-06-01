_QWORD *__fastcall sub_142F0(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax
  unsigned __int64 v3; // rbp
  const void *v4; // r13
  void *v5; // rax

  result = a1;
  *(_QWORD *)(a2 + 32) = a1[114];
  *(_QWORD *)(a2 + 40) = a1[115];
  *(_QWORD *)(a2 + 48) = a1[116];
  *(_QWORD *)(a2 + 64) = a1[118];
  *(_QWORD *)(a2 + 56) = a1[117];
  *(_QWORD *)(a2 + 72) = a1[119];
  *(_WORD *)(a2 + 80) = a1[120];
  *(_QWORD *)(a2 + 88) = a1[151];
  if ( (_QWORD *)(a2 + 96) != a1 + 122 )
  {
    v3 = a1[123];
    if ( v3 > 1 )
    {
      v4 = (const void *)a1[122];
      v5 = *(void **)(a2 + 96);
      if ( *(_QWORD *)(a2 + 112) < v3 )
      {
        v5 = (void *)qvector_reserve();
        *(_QWORD *)(a2 + 96) = v5;
      }
      *(_QWORD *)(a2 + 104) = v3;
      memmove(v5, v4, v3 - 1);
      result = *(_QWORD **)(a2 + 96);
      *((_BYTE *)result + v3 - 1) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 104) = 0;
    }
  }
  return result;
}

