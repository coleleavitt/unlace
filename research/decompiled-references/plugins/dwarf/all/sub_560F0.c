unsigned __int64 __fastcall sub_560F0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  _QWORD v9[6]; // [rsp+0h] [rbp-78h] BYREF
  _QWORD v10[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v11; // [rsp+40h] [rbp-38h]
  __int128 v12; // [rsp+48h] [rbp-30h]
  unsigned __int64 v13; // [rsp+58h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 8);
  v9[0] = off_C8458;
  v9[1] = a2;
  v9[2] = a1;
  v7 = v6 >> 1;
  v9[3] = a4;
  v9[4] = a5;
  if ( a2[2] < v7 )
    *a2 = qvector_reserve(a2, *a2, v7, 8);
  v10[0] = a3;
  v10[1] = v9;
  v11 = 0;
  v12 = 0;
  sub_55EA0(v10, a3);
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11);
  }
  return v13 - __readfsqword(0x28u);
}
