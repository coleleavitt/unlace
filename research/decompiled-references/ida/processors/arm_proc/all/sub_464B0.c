__int64 __fastcall sub_464B0(_QWORD *a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax
  _DWORD *v3; // rbp

  v1 = (_DWORD *)a1[56];
  result = a1[57];
  v3 = &v1[result];
  if ( v3 != v1 )
  {
    do
    {
      if ( *v1 != -1 )
        result = unregister_custom_data_format();
      ++v1;
    }
    while ( v3 != v1 );
    v1 = (_DWORD *)a1[56];
  }
  if ( v1 )
  {
    a1[57] = 0;
    result = qfree();
    a1[56] = 0;
    a1[58] = 0;
  }
  return result;
}

