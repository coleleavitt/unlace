__int64 __fastcall sub_120220(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // r8
  int v10; // r9d
  _QWORD v12[5]; // [rsp+0h] [rbp-68h] BYREF
  char v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  unsigned __int64 v15; // [rsp+38h] [rbp-30h]

  v6 = *(_QWORD *)(a1 + 480);
  v15 = __readfsqword(0x28u);
  v12[0] = &off_4DD778;
  v8 = *(_QWORD *)(v6 + 112);
  v13 = 0;
  memset(&v12[1], 0, 32);
  v14 = v8;
  if ( (unsigned int)sub_11E9B0(a3, (__int64)v12, 0, 0, a5) )
    return sub_155AA0(a1, a2, a3, a4, v9, v10);
  else
    return 1;
}

