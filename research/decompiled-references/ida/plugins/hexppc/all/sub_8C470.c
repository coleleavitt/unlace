unsigned __int64 __fastcall sub_8C470(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int128 v3; // rt0
  __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // rt0
  _QWORD v8[5]; // [rsp+0h] [rbp-28h] BYREF

  v8[1] = __readfsqword(0x28u);
  sub_8BC40((__int64)a2, 4, "gva_reg_attrs.gp");
  v2 = -*(_QWORD *)(a1 + 16);
  if ( *(__int64 *)(a1 + 16) > 0 )
    v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)&v3 = *(_QWORD *)(a1 + 16);
  *((_QWORD *)&v3 + 1) = v2;
  sub_7BF00(a2, v3 >> 63);
  v4 = pack_dd();
  sub_7BD20(a2, (__int64)v8, v4 - (_QWORD)v8);
  sub_8BC40((__int64)a2, 4, "gva_reg_attrs.fp");
  v5 = -*(_QWORD *)(a1 + 40);
  if ( *(__int64 *)(a1 + 40) > 0 )
    v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)&v6 = *(_QWORD *)(a1 + 40);
  *((_QWORD *)&v6 + 1) = v5;
  sub_7BF00(a2, v6 >> 63);
  return sub_7BEA0(a2);
}

