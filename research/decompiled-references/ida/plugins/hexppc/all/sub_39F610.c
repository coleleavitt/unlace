__int64 __fastcall sub_39F610(__int64 a1, _QWORD *a2, _QWORD *a3, int a4, int a5)
{
  bool v7; // zf
  _QWORD *v9; // rax
  __int64 v11; // [rsp+0h] [rbp-68h] BYREF
  int v12; // [rsp+8h] [rbp-60h]
  _BYTE v13[40]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v7 = *(_QWORD *)(a1 + 32) == 0;
  v14 = __readfsqword(0x28u);
  if ( !v7 && !get_func() )
    return 0;
  v12 = 5;
  LODWORD(v11) = a4 - 1;
  HIDWORD(v11) = a5 - 1;
  sub_38C8B0((__int64)v13, a1 + 32, &v11);
  v9 = (_QWORD *)sub_391710((__int64)v13, 0x38u, 0, 0);
  if ( !v9 )
    return 0;
  *a2 = v9[4] + 128LL;
  *a3 = v9[1];
  return v9[2];
}

