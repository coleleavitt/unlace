unsigned __int64 __fastcall sub_110FD0(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 *v4; // rbx
  unsigned __int64 result; // rax
  __int64 v6; // rbx
  __int128 v7; // rdi

  v4 = a3;
  result = *a3;
  if ( (_BYTE)result != 4 )
  {
    while ( (_BYTE)result == 14 )
    {
      sub_110FD0(a1, a2, *((unsigned __int8 **)v4 + 1));
      v6 = *((_QWORD *)v4 + 1);
      result = *(unsigned __int8 *)(v6 + 16);
      v4 = (unsigned __int8 *)(v6 + 16);
      if ( (_BYTE)result == 4 )
        return result;
    }
    *((_QWORD *)&v7 + 1) = a1;
    *(_QWORD *)&v7 = a2;
    return sub_123EA0(v7, (__int64)v4, 0, 0xFFFF0000);
  }
  return result;
}

