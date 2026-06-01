unsigned __int64 __fastcall sub_3E7000(__int64 a1, int a2, int a3, int a4, int a5, char a6)
{
  unsigned __int8 v9; // r12
  _QWORD v11[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-40h]

  v14 = __readfsqword(0x28u);
  v9 = a6 & 1;
  sub_1CF640(a1, 2, 7, a4, 272, a6 & 1);
  sub_1CF640(a1, 2, 7, a5, 280, v9);
  v11[1] = 272;
  v11[0] = 0x800000001LL;
  v12[0] = 0x800000001LL;
  v12[1] = 280;
  v13[0] = 0xFFFFFFFF00000000LL;
  v13[1] = 0;
  sub_11EBE0((__int64)v13, a2, a3, 4);
  if ( (a6 & 2) != 0 )
  {
    sub_1CF350(a1, 14, (unsigned __int8 *)v11, (unsigned __int8 *)v12, (unsigned __int8 *)v11);
    sub_1CF350(a1, 12, (unsigned __int8 *)v11, (unsigned __int8 *)v13, (unsigned __int8 *)v13);
  }
  else
  {
    sub_1CF350(a1, 14, (unsigned __int8 *)v11, (unsigned __int8 *)v12, (unsigned __int8 *)v13);
  }
  sub_1166E0((__int64)v13);
  sub_1166E0((__int64)v12);
  sub_1166E0((__int64)v11);
  return v14 - __readfsqword(0x28u);
}

