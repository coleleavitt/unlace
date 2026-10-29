__int64 __fastcall sub_10CA60(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // ebx
  __int64 v9; // [rsp+0h] [rbp-58h] BYREF
  __int128 v10; // [rsp+8h] [rbp-50h]
  __int128 v11; // [rsp+18h] [rbp-40h]
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 *))sub_11BD60)(a1, a2, a3, &v9)
    && (v7 = sub_11BD60(a1, a2, a4, 0, v5, v6, v9, v10, *((_QWORD *)&v10 + 1), v11, *((_QWORD *)&v11 + 1), v12),
        (_BYTE)v7) )
  {
    sub_1513F0(&v9);
  }
  else
  {
    v7 = 0;
  }
  sub_151340(&v9);
  return v7;
}

