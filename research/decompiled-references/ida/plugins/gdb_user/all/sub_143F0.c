__int64 __fastcall sub_143F0(_QWORD *a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 result; // rax
  unsigned __int64 v5; // rbp
  const void *v6; // r13
  void *v7; // rax

  v3 = a1 + 122;
  *(v3 - 8) = *(_QWORD *)(a2 + 32);
  *(v3 - 7) = *(_QWORD *)(a2 + 40);
  *(v3 - 6) = *(_QWORD *)(a2 + 48);
  *(v3 - 4) = *(_QWORD *)(a2 + 64);
  *(v3 - 5) = *(_QWORD *)(a2 + 56);
  *(v3 - 3) = *(_QWORD *)(a2 + 72);
  *(v3 - 2) = *(unsigned __int16 *)(a2 + 80);
  v3[29] = *(_QWORD *)(a2 + 88);
  result = a2 + 96;
  if ( v3 != (_QWORD *)(a2 + 96) )
  {
    v5 = *(_QWORD *)(a2 + 104);
    if ( v5 > 1 )
    {
      v6 = *(const void **)(a2 + 96);
      v7 = (void *)a1[122];
      if ( a1[124] < v5 )
      {
        v7 = (void *)qvector_reserve();
        a1[122] = v7;
      }
      a1[123] = v5;
      memmove(v7, v6, v5 - 1);
      result = a1[122];
      *(_BYTE *)(result + v5 - 1) = 0;
    }
    else
    {
      a1[123] = 0;
    }
  }
  return result;
}

