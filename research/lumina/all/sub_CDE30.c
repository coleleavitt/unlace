unsigned __int64 __fastcall sub_CDE30(__int64 a1, __int64 a2, __int64 a3, int *a4, __int64 a5, __int64 *a6)
{
  __int64 v7; // r10
  _QWORD v9[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h]
  __int64 v11; // [rsp+18h] [rbp-60h]
  __int64 v12; // [rsp+20h] [rbp-58h]
  _QWORD v13[3]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+48h] [rbp-30h]
  _QWORD *v15; // [rsp+58h] [rbp-20h]
  unsigned __int64 v16; // [rsp+68h] [rbp-10h]

  v7 = *a6;
  v16 = __readfsqword(0x28u);
  v9[0] = a2;
  v9[1] = a3;
  v13[0] = a1;
  v13[2] = sub_CE340;
  v12 = 0;
  v10 = v7;
  v14 = 0;
  v11 = a5;
  v13[1] = sub_F97E0;
  v15 = v9;
  sub_CDDC0((__int64)v13, a4);
  *a6 = v10;
  return __readfsqword(0x28u) ^ v16;
}
