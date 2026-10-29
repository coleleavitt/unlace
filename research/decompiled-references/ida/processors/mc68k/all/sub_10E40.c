__int64 __fastcall sub_10E40(_QWORD *a1, unsigned __int8 *a2)
{
  char v2; // dl
  __int64 result; // rax

  v2 = is_defarg(a1[90], *a2);
  result = 0;
  if ( !v2 )
    return (*(unsigned __int8 (__fastcall **)(_QWORD *, unsigned __int8 *, __int64))(*a1 + 120LL))(
             a1,
             a2,
             *((_QWORD *)a2 + 2) + 16LL * a1[28]);
  return result;
}

