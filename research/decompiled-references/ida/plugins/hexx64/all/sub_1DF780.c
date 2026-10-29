unsigned __int64 __fastcall sub_1DF780(__int64 a1, char a2, __int64 a3, __int64 *a4, int a5, double a6)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 *v12; // rax
  __int64 v13; // [rsp+0h] [rbp-58h] BYREF
  __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 *v15; // [rsp+10h] [rbp-48h] BYREF
  __int128 v16; // [rsp+18h] [rbp-40h]
  unsigned __int64 v17; // [rsp+28h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( a2 == 1 )
  {
    v13 = 0;
    v14 = 0;
    sub_63E80(&v13, a1, a5, a6);
    v15 = nullptr;
    v16 = 0;
  }
  else if ( a2 == 5 )
  {
    v7 = *(_QWORD *)(a3 + 1440) + a1;
    v8 = a5;
    v13 = 0;
    v16 = 0;
    v14 = 0;
    v15 = nullptr;
    if ( a5 + v7 - 1 >= v7 )
    {
      v15 = (__int64 *)qvector_reserve((__int64)&v15, 0, 1, 16);
      v12 = &v15[2 * v16];
      *v12 = v7;
      v12[1] = v8;
      *(_QWORD *)&v16 = v16 + 1;
    }
  }
  else
  {
    v13 = 0;
    v14 = 0;
    v15 = nullptr;
    v16 = 0;
  }
  sub_64280(a4, &v13, 0.0);
  sub_316CB0(a4 + 2, &v15, v9, v10);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree((__int64)v15);
  }
  qfree(v13);
  return v17 - __readfsqword(0x28u);
}

