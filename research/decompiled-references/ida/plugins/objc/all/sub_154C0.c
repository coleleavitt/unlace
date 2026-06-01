__int64 __fastcall sub_154C0(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 (__fastcall **v7)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD); // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 (__fastcall **v12)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD); // rax
  __int64 v13; // rdx
  __int64 v14; // r13
  __int64 v15; // rax
  __int64 (__fastcall **v16)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD); // rax
  __int64 v17; // rdx
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 (__fastcall **v20)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD); // rax
  __int64 v21; // [rsp+8h] [rbp-60h] BYREF
  __int64 (__fastcall **v22)(); // [rsp+10h] [rbp-58h] BYREF
  _QWORD *v23; // [rsp+18h] [rbp-50h]
  __int64 v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+28h] [rbp-40h]
  unsigned __int64 v26; // [rsp+38h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  v4 = a1[70];
  v21 = 0;
  if ( v4 != -1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 136LL))(a1, &v21, a3 + v4) )
      return 0xFFFFFFFFLL;
    v5 = v21;
    v6 = sub_15060((__int64)a1, 5);
    v23 = a1;
    *(_QWORD *)(a2 + 24) = v6;
    v24 = a2;
    v22 = &off_3C598;
    v7 = (__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD))*a1;
    v25 = 1;
    result = (*v7)(a1, &v22, v5, 0, a3, 1, 0, 0);
    if ( (_DWORD)result )
      return result;
  }
  v9 = a1[71];
  if ( v9 != -1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 136LL))(a1, &v21, a3 + v9) )
      return 0xFFFFFFFFLL;
    v10 = v21;
    v11 = sub_15060((__int64)a1, 5);
    v23 = a1;
    *(_QWORD *)(a2 + 24) = v11;
    v24 = a2;
    v22 = &off_3C598;
    v12 = (__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD))*a1;
    v25 = 0;
    result = (*v12)(a1, &v22, v10, 0, a3, 1, 0, 0);
    if ( (_DWORD)result )
      return result;
  }
  v13 = a1[72];
  if ( v13 != -1 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 136LL))(a1, &v21, a3 + v13) )
      return 0xFFFFFFFFLL;
    v14 = v21;
    v15 = sub_15060((__int64)a1, 5);
    v23 = a1;
    *(_QWORD *)(a2 + 24) = v15;
    v24 = a2;
    v22 = &off_3C598;
    v16 = (__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD))*a1;
    v25 = 1;
    result = (*v16)(a1, &v22, v14, 0, a3, 1, 0, 0);
    if ( (_DWORD)result )
      return result;
  }
  v17 = a1[73];
  result = 0;
  if ( v17 == -1 )
    return result;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64 *, __int64))(*a1 + 136LL))(a1, &v21, a3 + v17) )
    return 0xFFFFFFFFLL;
  v18 = v21;
  v19 = sub_15060((__int64)a1, 5);
  v23 = a1;
  *(_QWORD *)(a2 + 24) = v19;
  v24 = a2;
  v22 = &off_3C598;
  v20 = (__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall ***)(), __int64, _QWORD, __int64, __int64, _QWORD, _QWORD))*a1;
  v25 = 0;
  return (*v20)(a1, &v22, v18, 0, a3, 1, 0, 0);
}
