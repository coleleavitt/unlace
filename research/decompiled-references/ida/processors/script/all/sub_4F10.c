__int64 __fastcall sub_4F10(__int64 a1, __int64 a2, int *a3, __int64 *a4)
{
  unsigned int v6; // ebp
  char v8[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  __int64 v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v10 = 0;
  v9 = 0;
  free_idcv();
  v8[0] = 8;
  *(_QWORD *)&v9 = a2;
  v6 = sub_4E30(a1, 1, (__int64)v8, a3, a4);
  free_idcv();
  return v6;
}

