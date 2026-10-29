__int64 __fastcall sub_11C8A0(__int64 a1, _BYTE *a2)
{
  __int64 v2; // r13
  __int64 result; // rax
  int v5; // r12d
  unsigned __int8 *v6; // rdi
  _BYTE *i; // rcx
  __int64 v8; // rdx

  v2 = *(_QWORD *)a1;
  result = *(unsigned int *)(*(_QWORD *)a1 + 40LL);
  if ( (int)result > 0 )
  {
    v5 = 0;
    do
    {
      result = *(_QWORD *)(v2 + 32) + 32LL * v5;
      if ( *(_QWORD *)(result + 8) )
      {
        if ( a2 )
        {
          v6 = *(unsigned __int8 **)result;
          for ( i = a2; ; ++i )
          {
            result = (unsigned __int8)*i;
            v8 = *v6;
            if ( (_DWORD)result == (_DWORD)v8 )
            {
              if ( !*i )
                break;
            }
            else if ( byte_1BF000[result] != byte_1BF000[v8] )
            {
              goto LABEL_11;
            }
            ++v6;
          }
        }
        result = sub_11C860(a1, v5);
      }
LABEL_11:
      ++v5;
    }
    while ( *(_DWORD *)(v2 + 40) > v5 );
  }
  return result;
}
