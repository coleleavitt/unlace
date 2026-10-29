__int64 __fastcall sub_9420(__int64 a1, __int64 a2, unsigned __int8 **a3, unsigned __int64 a4, int a5)
{
  unsigned __int8 *v6; // rax
  unsigned __int8 v8; // si

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v6 = *a3;
  if ( (unsigned __int64)*a3 >= a4 )
    return a1;
  if ( (_DWORD)a4 == (_DWORD)v6 )
    return a1;
  v8 = *v6;
  *a3 = v6 + 1;
  if ( (v8 & 0xF) != 6 )
    return a1;
  sub_65F0(a2, (__int64 *)a1, a3, a4, a5);
  return a1;
}

