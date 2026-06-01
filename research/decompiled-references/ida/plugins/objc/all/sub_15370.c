__int64 __fastcall sub_15370(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall **v3)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD); // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 (__fastcall **v7)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD); // rax
  __int64 result; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 (__fastcall **v11)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD); // rax
  __int64 v12; // [rsp+8h] [rbp-80h]
  __int64 v13; // [rsp+18h] [rbp-70h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v15; // [rsp+28h] [rbp-60h]
  __int64 v16; // [rsp+30h] [rbp-58h]
  int v17; // [rsp+38h] [rbp-50h]
  unsigned __int64 v18; // [rsp+48h] [rbp-40h]

  v3 = (__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD))*a1;
  v18 = __readfsqword(0x28u);
  v5 = a1[77] + a3;
  v13 = 0;
  if ( !((unsigned __int8 (__fastcall *)(_QWORD *, __int64 *, __int64))v3[17])(a1, &v13, v5) )
    return 0xFFFFFFFFLL;
  v12 = v13;
  v6 = sub_15060((__int64)a1, 5);
  v14 = &off_3C598;
  *(_QWORD *)(a2 + 24) = v6;
  v7 = (__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD))*a1;
  v15 = a1;
  v16 = a2;
  v17 = 1;
  result = (*v7)(a1, &v14, v12, 0, a3, 2, 0, 0);
  if ( (_DWORD)result )
    return result;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 136LL))(a1, &v13, a3 + a1[78]) )
    return 0xFFFFFFFFLL;
  v9 = v13;
  v10 = sub_15060((__int64)a1, 5);
  v14 = &off_3C598;
  *(_QWORD *)(a2 + 24) = v10;
  v11 = (__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD))*a1;
  v15 = a1;
  v16 = a2;
  v17 = 0;
  return (*v11)(a1, &v14, v9, 0, a3, 2, 0, 0);
}
