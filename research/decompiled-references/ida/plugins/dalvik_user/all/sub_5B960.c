__int64 __fastcall sub_5B960(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  _QWORD *v6; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 *v8; // rbx
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  char v15; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v6 = (_QWORD *)a1[2];
  v7 = v6[57];
  v8 = (unsigned __int64 *)(v7 + 80LL * v6[58] - 80);
  if ( (unsigned __int64)v8 < v7 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v10 = *v8;
    if ( *v8 < a3 )
      break;
    v8 -= 10;
    if ( (unsigned __int64)v8 < v7 )
      return 0xFFFFFFFFLL;
  }
  v11 = v8[1];
  if ( a3 >= v11 )
  {
    if ( v11 == -1 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    v11 = a3;
  }
  if ( a2 >= v10 && a2 < v8[1] )
    v10 = a2;
  if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v6 + 288LL))(
         v6,
         v10,
         &v15,
         1,
         0) == 1 )
    goto LABEL_17;
LABEL_21:
  sub_58110(a1[2], (__int64)"dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
  while ( 1 )
  {
    v12 = (_QWORD *)a1[2];
    v8 -= 10;
    if ( (unsigned __int64)v8 < v12[57] )
      return 0xFFFFFFFFLL;
    v11 = v8[1];
    if ( a2 >= v11 )
      return 0xFFFFFFFFLL;
    v13 = *v8;
    if ( a2 >= *v8 )
      v13 = a2;
    v10 = v13;
    if ( (*(__int64 (__fastcall **)(_QWORD *, __int64, char *, __int64, _QWORD))(*v12 + 288LL))(v12, v13, &v15, 1, 0) != 1 )
      goto LABEL_21;
LABEL_17:
    result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v10, v11);
    if ( (_DWORD)result != -1 )
      return result;
  }
}

