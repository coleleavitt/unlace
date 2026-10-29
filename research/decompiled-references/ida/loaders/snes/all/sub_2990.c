__int64 __fastcall sub_2990(__int64 *a1, __int64 *a2, __int64 a3)
{
  unsigned int v5; // edx
  __int64 result; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  int v11[14]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_2730((__int64)v11, a3);
  v5 = sub_1AB0(a3, v11[3]);
  result = 0;
  if ( v5 > 8 && v11[4] != 9 )
  {
    v7 = (_QWORD *)*a1;
    if ( (unsigned __int64)a1[2] <= 8 )
    {
      v9 = qvector_reserve(a1, v7, 9, 1);
      *a1 = v9;
      v7 = (_QWORD *)v9;
    }
    a1[1] = 9;
    *v7 = 0x4D4F522053454E53LL;
    *(_BYTE *)(*a1 + 8) = 0;
    v8 = *a2;
    if ( (unsigned __int64)a2[2] <= 6 )
    {
      v10 = qvector_reserve(a2, v8, 7, 1);
      *a2 = v10;
      v8 = v10;
    }
    a2[1] = 7;
    *(_DWORD *)v8 = 943011437;
    *(_WORD *)(v8 + 4) = 13873;
    *(_BYTE *)(*a2 + 6) = 0;
    return 1;
  }
  return result;
}

