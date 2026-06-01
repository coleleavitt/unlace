__int64 __fastcall sub_24E80(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7,
        __m128 a8)
{
  bool v8; // zf
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // ebx
  char v17; // al
  __int64 v19; // [rsp+18h] [rbp-58h] BYREF
  __int128 v20; // [rsp+20h] [rbp-50h]
  unsigned __int64 v21; // [rsp+30h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v8 = *(_QWORD *)(a1 + 680) == 0;
  v20 = 0;
  v19 = 0;
  if ( v8 )
  {
    return 1;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    do
    {
      while ( (a3 & *(_BYTE *)(*(_QWORD *)(a1 + 672) + 32 * v12 + 12)) == 0 )
      {
        if ( ++v12 >= *(_QWORD *)(a1 + 680) )
          goto LABEL_8;
      }
      v13 = v19;
      if ( *((_QWORD *)&v20 + 1) < (unsigned __int64)(v11 + 1) )
      {
        v19 = qvector_reserve();
        v11 = v20;
        v13 = v19;
      }
      *(_DWORD *)(v13 + 4 * v11) = v12++;
      v11 = v20 + 1;
      *(_QWORD *)&v20 = v20 + 1;
    }
    while ( v12 < *(_QWORD *)(a1 + 680) );
LABEL_8:
    if ( v11 )
    {
      v17 = sub_24D00(a1, a2, a4, (__int64)&v19, 0.0, a6, a7, a8);
      v14 = v19;
      v15 = v17 == 0 ? -1 : 1;
    }
    else
    {
      v14 = v19;
      v15 = 1;
    }
    if ( v14 )
    {
      *(_QWORD *)&v20 = 0;
      qfree();
    }
  }
  return v15;
}

