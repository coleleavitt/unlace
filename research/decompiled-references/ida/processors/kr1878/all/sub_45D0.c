__int64 __fastcall sub_45D0(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5, int a6)
{
  __int64 v10; // rax
  __int64 v11; // r14
  __int64 *i; // r12
  _QWORD *v13; // rdi
  char *v14; // r10
  __int64 result; // rax
  __int64 *v16; // rax

  if ( !(_BYTE)byte_A328 && __cxa_guard_acquire(&byte_A328) )
  {
    sub_3A00(qword_A340);
    __cxa_guard_release(&byte_A328);
  }
  if ( a5 <= a6 )
  {
    v10 = a5;
    v11 = 3LL * a4;
    for ( i = &qword_A340[12 * a4 + 3 * a5]; ; i += 3 )
    {
      v16 = &qword_A340[4 * v11 + 3 * v10];
      v14 = (char *)v16[2];
      if ( !v14 )
        break;
      v13 = (_QWORD *)(a1 + i[3]);
      if ( ((unsigned __int8)v14 & 1) != 0 )
        v14 = *(char **)&v14[*v13 - 1];
      result = ((__int64 (__fastcall *)(_QWORD *, __int64, _QWORD))v14)(
                 v13,
                 a2,
                 (a3 & (_DWORD)v16[4]) >> *((_DWORD *)v16 + 9));
      if ( !(_BYTE)result )
        return result;
      if ( a6 < ++a5 )
        return 1;
      v10 = a5;
    }
  }
  return 1;
}

