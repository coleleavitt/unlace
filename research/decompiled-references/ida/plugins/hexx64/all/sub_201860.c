__int64 __fastcall sub_201860(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6, double a7, __m128 a8)
{
  bool v8; // zf
  __int64 v9; // rdx
  unsigned int v10; // ebp
  __int64 v12[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v8 = *(_BYTE *)(a1 + 80) == 0;
  v9 = *(_QWORD *)(a1 + 32);
  v13[3] = __readfsqword(0x28u);
  if ( v8 )
  {
    sub_124680((__int64)v12, *(_QWORD *)(a1 + 16), v9, 0, a7, a8);
  }
  else
  {
    if ( *(char *)(v9 + 4) < 0 )
      return 0;
    sub_127A20((__int64)v12, *(_QWORD *)(a1 + 16), v9, 257, a5, a6, a7, a8);
  }
  v10 = 1;
  if ( !(unsigned __int8)sub_64780((_QWORD *)(a1 + 40), v12) )
    v10 = (unsigned __int8)sub_318470((unsigned __int64 **)(a1 + 56), (__int64)v13);
  if ( v13[0] )
  {
    v13[1] = 0;
    qfree(v13[0]);
  }
  qfree(v12[0]);
  return v10;
}

