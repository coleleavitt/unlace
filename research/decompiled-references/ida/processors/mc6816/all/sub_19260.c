__int64 __fastcall sub_19260(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 result; // rax
  int v6; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  if ( !a2 || !a3 )
    return 0xFFFFFFFFLL;
  v6 = -1;
  v4 = a1;
  do
  {
    if ( !*(_QWORD *)v4 )
      break;
    result = (*(__int64 (__fastcall **)(__int64, int *, __int64, _QWORD, _QWORD, _QWORD))v4)(
               a2,
               &v6,
               a3,
               *(unsigned int *)(v4 + 8),
               *(unsigned int *)(v4 + 12),
               *(unsigned int *)(v4 + 16));
    if ( (_DWORD)result == -2 )
      break;
    if ( (_DWORD)result != 1 )
      return result;
    v4 += 24;
  }
  while ( v4 != a1 + 192 );
  return 1;
}

