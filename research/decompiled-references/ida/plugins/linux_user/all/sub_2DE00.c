__int64 __fastcall sub_2DE00(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rax
  unsigned __int64 *v6; // rbx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  int v10; // r8d
  int v11; // r9d
  _QWORD *v12; // rdi
  __int64 v13; // rsi
  __int64 result; // rax
  char v15; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-40h]

  v16 = __readfsqword(0x28u);
  v4 = (_QWORD *)a1[2];
  v5 = v4[57];
  v6 = (unsigned __int64 *)(v5 + 80LL * v4[58] - 80);
  if ( (unsigned __int64)v6 < v5 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    v8 = *v6;
    if ( *v6 < a3 )
      break;
    v6 -= 10;
    if ( (unsigned __int64)v6 < v5 )
      return 0xFFFFFFFFLL;
  }
  v9 = v6[1];
  if ( a3 >= v9 )
  {
    if ( v9 == -1 )
      return 0xFFFFFFFFLL;
  }
  else
  {
    v9 = a3;
  }
  if ( a2 >= v8 && a2 < v6[1] )
    v8 = a2;
  if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v4 + 288LL))(
         v4,
         v8,
         &v15,
         1,
         0) == 1 )
    goto LABEL_17;
LABEL_21:
  sub_32190(a1[2], (unsigned int)"dbg_bin_search memory range %a..%a is unreadable, skip it\n", v8, v9, v10, v11);
  while ( 1 )
  {
    v12 = (_QWORD *)a1[2];
    v6 -= 10;
    if ( (unsigned __int64)v6 < v12[57] )
      return 0xFFFFFFFFLL;
    v9 = v6[1];
    if ( a2 >= v9 )
      return 0xFFFFFFFFLL;
    v13 = *v6;
    if ( a2 >= *v6 )
      v13 = a2;
    v8 = v13;
    if ( (*(__int64 (__fastcall **)(_QWORD *, __int64, char *, __int64, _QWORD))(*v12 + 288LL))(v12, v13, &v15, 1, 0) != 1 )
      goto LABEL_21;
LABEL_17:
    result = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, unsigned __int64))(*a1 + 24LL))(a1, v8, v9);
    if ( (_DWORD)result != -1 )
      return result;
  }
}

