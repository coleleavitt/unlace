unsigned __int64 __fastcall sub_19D1A0(__int64 a1, _QWORD *a2, double a3, __m128 a4)
{
  int v4; // r12d
  __int64 v5; // rbp
  __int64 v7[2]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 *v8[3]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v9; // [rsp+28h] [rbp-40h]

  v9 = __readfsqword(0x28u);
  v4 = *(_DWORD *)(a1 + 8) - 1;
  if ( v4 >= 0 )
  {
    v5 = 8LL * (unsigned int)v4;
    do
    {
      sub_124680((__int64)v7, *(_QWORD *)(a1 + 32), *(_QWORD *)(*(_QWORD *)a1 + v5), 0, a3, a4);
      if ( (unsigned __int8)sub_64780(v7, a2) || (unsigned __int8)sub_318470(v8, (__int64)(a2 + 2)) )
      {
        memmove(
          (void *)(v5 + *(_QWORD *)a1),
          (const void *)(v5 + *(_QWORD *)a1 + 8),
          8LL * *(_QWORD *)(a1 + 8) - 8 - v5);
        --*(_QWORD *)(a1 + 8);
      }
      if ( v8[0] )
      {
        v8[1] = nullptr;
        qfree((__int64)v8[0]);
      }
      --v4;
      v5 -= 8;
      qfree(v7[0]);
    }
    while ( v4 != -1 );
  }
  return v9 - __readfsqword(0x28u);
}

