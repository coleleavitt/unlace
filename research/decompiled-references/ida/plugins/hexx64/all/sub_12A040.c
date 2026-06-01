__int64 __fastcall sub_12A040(__int128 a1, __int64 a2, int a3, __m128i a4, __m128 a5)
{
  int v7; // ebp
  unsigned __int64 *v8; // r14
  __int64 v9; // rax
  _DWORD *v10; // r13
  int v11; // eax
  __int64 v12; // [rsp+8h] [rbp-40h] BYREF
  __int64 v13[7]; // [rsp+10h] [rbp-38h] BYREF

  v12 = *((_QWORD *)&a1 + 1);
  v13[1] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a2 + 4) <= a3 )
    return 1;
  v7 = a3;
  if ( (unsigned __int8)sub_11FD80((char *)a2, v13, 0) )
  {
    if ( (unsigned __int64)v7 > 7 || !((unsigned __int64)v13[0] >> (8 * (unsigned __int8)v7)) )
      return 1;
  }
  if ( !(_QWORD)a1 )
    return 0;
  if ( !v12 )
    return 0;
  v8 = *(unsigned __int64 **)(*(_QWORD *)(a1 + 480) + 112LL);
  v9 = sub_129440(a1, a2, (__int64)&v12, 0, *(double *)a4.m128i_i64, a5);
  v10 = (_DWORD *)v9;
  if ( !v9 )
    return 0;
  if ( *(_BYTE *)a2 != 4 )
  {
    v11 = sub_129FA0(v9 + 64, v8, a2, a4);
    if ( !v11 )
      return 0;
    if ( v11 == 3 )
      v7 = v10[17] + v7 - *(_DWORD *)(a2 + 4);
  }
  if ( *v10 != 9 )
    return 0;
  *((_QWORD *)&a1 + 1) = v12;
  return sub_12A040(a1, (__int64)(v10 + 8), v7);
}

