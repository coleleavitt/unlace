__int64 __fastcall sub_C9F50(unsigned int *a1, __int64 a2)
{
  _QWORD *v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  __int64 result; // rax

  v2 = (_QWORD *)a2;
  v3 = (int)a1[6];
  v4 = *((_QWORD *)a1 + 4);
  if ( !*a1 )
  {
    a2 = *((_QWORD *)a1 + 1);
    if ( a2 )
    {
      v5 = a1[5];
      if ( v5 < (int)v3 )
      {
        a2 += v5;
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**((_QWORD **)a1 + 5) + 24LL))(
               *((_QWORD *)a1 + 5),
               a2,
               (unsigned int)(v3 - v5),
               v5 + v4);
        v3 = (int)a1[6];
        v4 = *((_QWORD *)a1 + 4);
        *a1 = v6;
      }
    }
  }
  *v2 = v4 + v3;
  sub_C91C0(*((_QWORD *)a1 + 1), a2);
  result = *a1;
  *(_OWORD *)a1 = 0;
  *((_OWORD *)a1 + 1) = 0;
  *((_OWORD *)a1 + 2) = 0;
  return result;
}
