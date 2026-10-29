__int64 __fastcall sub_6CA60(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rdi
  unsigned __int64 *v6; // rbx
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // r15
  int v10; // r8d
  __int64 result; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r15
  int v14; // r8d
  _QWORD *v15; // rdi
  char v16; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]

  v4 = (_QWORD *)a1[2];
  v17 = __readfsqword(0x28u);
  v6 = (unsigned __int64 *)v4[57];
  v7 = &v6[10 * v4[58]];
  if ( v6 < v7 )
  {
    v8 = a2;
    do
    {
      if ( a2 < *v6 )
        break;
      if ( a2 < v6[1] )
        goto LABEL_6;
      v6 += 10;
    }
    while ( v6 < v7 );
  }
  if ( v6 == v7 )
    return 0xFFFFFFFFLL;
  v8 = *v6;
  if ( *v6 >= a3 )
    return 0xFFFFFFFFLL;
LABEL_6:
  v9 = v6[1];
  if ( a3 <= v9 )
    v9 = a3;
  if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v4 + 288LL))(
         v4,
         v8,
         &v16,
         1,
         0) != 1 )
  {
    sub_70460(a1[2], (unsigned int)"dbg_bin_search memory range %a..%a is unreadable, skip it\n", v8, v9, v10);
    goto LABEL_14;
  }
  result = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, unsigned __int64))(*a1 + 24LL))(a1, v8, v9);
  if ( (_DWORD)result == -1 )
  {
LABEL_14:
    while ( 1 )
    {
      v15 = (_QWORD *)a1[2];
      v6 += 10;
      if ( (unsigned __int64)v6 >= v15[57] + 80LL * v15[58] )
        break;
      v12 = v6[1];
      if ( a3 < v12 )
        break;
      v13 = *v6;
      if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v15 + 288LL))(
             v15,
             *v6,
             &v16,
             1,
             0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, unsigned __int64))(*a1 + 24LL))(a1, v13, v12);
        if ( (_DWORD)result != -1 )
          return result;
      }
      else
      {
        sub_70460(a1[2], (unsigned int)"dbg_bin_search memory range %a..%a is unreadable, skip it\n", v13, v12, v14);
      }
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}

