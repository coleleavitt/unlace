__int64 __fastcall sub_14CE10(
        __int64 a1,
        __int64 **a2,
        __int64 a3,
        __int64 a4,
        __int16 a5,
        __int64 a6,
        double a7,
        double a8,
        __m128i a9,
        double a10)
{
  _QWORD *v11; // rdi
  int v12; // eax
  __int64 *v13; // rax
  __int64 v15; // [rsp+8h] [rbp-30h] BYREF
  __int64 v16[5]; // [rsp+10h] [rbp-28h] BYREF

  v11 = *(_QWORD **)(a1 + 96);
  v16[1] = __readfsqword(0x28u);
  v15 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    v12 = sub_13D650(v11, (__int64)&v15, a2);
    if ( v12 && a3 )
    {
      *(_DWORD *)a3 = v12;
      v13 = *a2;
      if ( !*a2 )
        v13 = a2[1];
      *(_QWORD *)(a3 + 8) = *v13;
    }
  }
  else
  {
    sub_14BF70(v16, (__int64)v11, a2, (_DWORD *)a3, &v15, a4, a7, a8, a9, a10, a5, a6);
    if ( v16[0] )
    {
      if ( !under_debugger )
        sub_383060(0xCA13u, a7);
      BUG();
    }
  }
  return v15;
}

