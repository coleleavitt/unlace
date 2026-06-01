__int64 __fastcall sub_1FF40(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3, double a4, double a5)
{
  _QWORD *v6; // rdi
  unsigned __int64 *v8; // rbx
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // r15
  __int64 result; // rax
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  _QWORD *v15; // rdi
  char v16; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int64 v17; // [rsp+8h] [rbp-40h]

  v6 = (_QWORD *)a1[2];
  v17 = __readfsqword(0x28u);
  v8 = (unsigned __int64 *)v6[57];
  v9 = &v8[10 * v6[58]];
  if ( v8 < v9 )
  {
    v10 = a2;
    do
    {
      if ( a2 < *v8 )
        break;
      if ( a2 < v8[1] )
        goto LABEL_6;
      v8 += 10;
    }
    while ( v8 < v9 );
  }
  if ( v8 == v9 )
    return 0xFFFFFFFFLL;
  v10 = *v8;
  if ( *v8 >= a3 )
    return 0xFFFFFFFFLL;
LABEL_6:
  v11 = v8[1];
  if ( a3 <= v11 )
    v11 = a3;
  if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v6 + 288LL))(
         v6,
         v10,
         &v16,
         1,
         0) != 1 )
    goto LABEL_19;
  result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v10, v11);
  if ( (_DWORD)result == -1 )
  {
    while ( 1 )
    {
      v15 = (_QWORD *)a1[2];
      v8 += 10;
      if ( (unsigned __int64)v8 >= v15[57] + 80LL * v15[58] )
        break;
      v13 = v8[1];
      if ( a3 < v13 )
        break;
      v14 = *v8;
      if ( (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64, char *, __int64, _QWORD))(*v15 + 288LL))(
             v15,
             *v8,
             &v16,
             1,
             0) == 1 )
      {
        result = (*(__int64 (__fastcall **)(__int64 *, unsigned __int64, unsigned __int64))(*a1 + 24))(a1, v14, v13);
        if ( (_DWORD)result != -1 )
          return result;
      }
      else
      {
LABEL_19:
        sub_113D0(a1[2], (__int64)"dbg_bin_search memory range %a..%a is unreadable, skip it\n", a4, a5);
      }
    }
    return 0xFFFFFFFFLL;
  }
  return result;
}

