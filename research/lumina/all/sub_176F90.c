_BYTE *__fastcall sub_176F90(__int64 *a1, _BYTE *a2, unsigned __int8 *a3)
{
  _BYTE *v3; // rbx
  __int64 v4; // rdx
  _BYTE *v5; // r13
  __int64 v7; // rax
  unsigned __int8 v8[8]; // [rsp+0h] [rbp-58h] BYREF
  __int128 v9; // [rsp+8h] [rbp-50h]
  __int64 v10; // [rsp+18h] [rbp-40h]
  unsigned __int64 v11; // [rsp+28h] [rbp-30h]

  v3 = a2;
  v11 = __readfsqword(0x28u);
  v8[0] = 2;
  v10 = 0;
  v9 = 0;
  sub_176730(v8, a3);
  v4 = a1[1];
  v5 = &a2[-*a1];
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v7 = sub_1987B0(a1, *a1, v4 + 1, 32);
    *a1 = v7;
    v4 = a1[1];
    v3 = &v5[v7];
  }
  memmove(v3 + 32, v3, 32 * v4 - (_QWORD)v5);
  *v3 = 2;
  *((_QWORD *)v3 + 3) = 0;
  *(_OWORD *)(v3 + 8) = 0;
  sub_176730(v3, v8);
  ++a1[1];
  sub_176520((__int64)v8);
  return v3;
}
