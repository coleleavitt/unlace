void __fastcall sub_4280(__int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  size_t v3; // r14
  __int64 v4; // r13
  size_t v6; // r15
  __int64 v7; // rsi

  v2 = *(_QWORD *)(a2 + 8);
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v2 != 1 )
    {
      v4 = a1[1];
      v6 = v2 - 1;
      if ( v4 )
      {
        --v4;
        v6 = v3 + v4;
        v2 += v4;
      }
      v7 = *a1;
      if ( a1[2] < v2 )
      {
        v7 = qvector_reserve();
        *a1 = v7;
      }
      a1[1] = v2;
      *(_BYTE *)(v7 + v6) = 0;
      memcpy((void *)(*a1 + v4), *(const void **)a2, v3);
    }
  }
}
