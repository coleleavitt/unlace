bool __fastcall sub_129710(__int64 *a1, __int64 *a2, __int64 a3, double a4, __m128 a5)
{
  _BYTE *v5; // r12
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // r13
  bool result; // al
  __int64 v9; // rax
  _QWORD v10[7]; // [rsp+0h] [rbp-38h] BYREF

  v10[1] = __readfsqword(0x28u);
  if ( !*a2 )
    return 0;
  v5 = (_BYTE *)a1[1];
  if ( *v5 == 4 )
    return 0;
  v10[0] = *a2;
  v6 = (unsigned __int8 *)sub_129440(a3, (__int64)v5, (__int64)v10, 0, a4, a5);
  v7 = v6;
  if ( !v6
    || (unsigned int)(*(_DWORD *)v6 - 12) > 1
    || (v9 = sub_339CA0(), !sub_1255D0(v7 + 64, v9, (__int64)v5, 0, a4))
    || (*a1 = 0, a1[1] = 0, !(result = sub_122D40(a1, v7, 0))) )
  {
    a1[1] = (__int64)v5;
    return 0;
  }
  *a2 = v10[0];
  return result;
}

