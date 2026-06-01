__int64 __fastcall sub_11FC60(__int64 a1, int a2, __int64 a3, int a4)
{
  int v4; // ebp
  __int64 v5; // rax
  __int64 v7; // rax
  int v8; // r8d
  int v9; // r9d
  _QWORD v11[5]; // [rsp+0h] [rbp-68h] BYREF
  char v12; // [rsp+28h] [rbp-40h]
  __int64 v13; // [rsp+30h] [rbp-38h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 480);
  v14 = __readfsqword(0x28u);
  v11[0] = off_4D7E38;
  v7 = *(_QWORD *)(v5 + 112);
  v12 = 0;
  memset(&v11[1], 0, 32);
  v13 = v7;
  if ( (unsigned int)sub_11E3F0(a3, (__int64)v11, 0, 0) )
    return sub_1554E0(a1, a2, v4, a4, v8, v9);
  else
    return 1;
}

