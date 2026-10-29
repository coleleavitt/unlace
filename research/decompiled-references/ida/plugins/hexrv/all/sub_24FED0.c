unsigned __int64 __fastcall sub_24FED0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 (__fastcall **v10)(int, int, int, int, int, int, char); // [rsp+0h] [rbp-68h] BYREF
  __int64 v11; // [rsp+8h] [rbp-60h]
  __int128 v12; // [rsp+10h] [rbp-58h]
  int v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+28h] [rbp-40h]
  char v15; // [rsp+30h] [rbp-38h]
  unsigned __int64 v16; // [rsp+38h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  sub_68D20((__int64)"-------------------------------------- ");
  callui(23, a3, a4, &callui, v6, v7, v10, v11, v12, *((_QWORD *)&v12 + 1));
  sub_68D20((__int64)"\n");
  v8 = *(_QWORD *)(a1 + 1352);
  v11 = 0;
  v10 = &off_4BDFC8;
  v13 = 0;
  v14 = v8;
  v15 = 0;
  v12 = 0;
  sub_263970(a2, 2, &v10, 1);
  v10 = &off_4B6058;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree();
  }
  return v16 - __readfsqword(0x28u);
}

