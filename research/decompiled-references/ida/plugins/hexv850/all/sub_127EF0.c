__int64 __fastcall sub_127EF0(__int64 a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  __int64 v5; // rax
  int v6; // ebp
  __int64 v7; // rax
  unsigned int v8; // eax
  unsigned int v9; // r12d
  __int64 v11; // rax
  unsigned int v12; // eax
  unsigned __int8 v13[24]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+18h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 96);
  v14 = __readfsqword(0x28u);
  v6 = a4;
  if ( *(_BYTE *)(v5 + 145) )
    v6 = -a4;
  sub_11EE80((__int64)v13, a2);
  sub_127BA0((__int64)v13, a1, -1, v6);
  v7 = sub_3338F0();
  LOBYTE(v8) = sub_120A10(v13, v7, (__int64)a3, 0);
  v9 = v8;
  if ( !(_BYTE)v8 )
  {
    sub_1181E0((__int64)v13);
    sub_11EE80((__int64)v13, a3);
    sub_127BA0((__int64)v13, a1, -1, -v6);
    v11 = sub_3338F0();
    LOBYTE(v12) = sub_120A10(v13, v11, (__int64)a2, 0);
    v9 = v12;
  }
  sub_1181E0((__int64)v13);
  return v9;
}

