__int64 __fastcall sub_C49D0(int a1, unsigned __int8 *a2)
{
  __int64 result; // rax
  _BYTE *v3; // r8
  unsigned __int8 *i; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  for ( result = qword_2425A0[a1]; result; result = *(_QWORD *)(result + 64) )
  {
    v3 = *(_BYTE **)(result + 56);
    for ( i = a2; ; ++i )
    {
      v5 = (unsigned __int8)*v3;
      v6 = *i;
      if ( (_DWORD)v5 != (_DWORD)v6 )
        break;
      if ( !*v3 )
        return result;
LABEL_4:
      ++v3;
    }
    if ( byte_1BF000[v5] == byte_1BF000[v6] )
      goto LABEL_4;
  }
  return result;
}
