unsigned __int64 __fastcall sub_1DAEE0(__int64 a1, char a2, __int64 a3, __int64 *a4, int a5)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int64 *v9; // rax
  __int64 v10; // [rsp+0h] [rbp-58h] BYREF
  __int64 v11; // [rsp+8h] [rbp-50h]
  __int64 v12; // [rsp+10h] [rbp-48h] BYREF
  __int128 v13; // [rsp+18h] [rbp-40h]
  unsigned __int64 v14; // [rsp+28h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a2 == 1 )
  {
    v10 = 0;
    v11 = 0;
    sub_5FC80(&v10, a1, a5);
    v12 = 0;
    v13 = 0;
  }
  else if ( a2 == 5 )
  {
    v6 = *(_QWORD *)(a3 + 1440) + a1;
    v7 = a5;
    v10 = 0;
    v13 = 0;
    v11 = 0;
    v12 = 0;
    if ( a5 + v6 - 1 >= v6 )
    {
      v12 = qvector_reserve();
      v9 = (unsigned __int64 *)(16 * v13 + v12);
      *v9 = v6;
      v9[1] = v7;
      *(_QWORD *)&v13 = v13 + 1;
    }
  }
  else
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
  }
  sub_60080(a4, &v10);
  sub_311F30(a4 + 2, &v12);
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  qfree();
  return v14 - __readfsqword(0x28u);
}

