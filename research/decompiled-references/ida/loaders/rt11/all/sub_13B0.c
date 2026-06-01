__int64 __fastcall sub_13B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v9; // rbx
  __int64 v11; // [rsp+8h] [rbp-40h]

  v9 = a2 + a3;
  v11 = qlseek(a1, 0, 1);
  file2base(a1, a5, a2, v9, 1);
  add_segm(a4, a2, v9, 0, a6, 0);
  return qlseek(a1, v11, 0);
}

