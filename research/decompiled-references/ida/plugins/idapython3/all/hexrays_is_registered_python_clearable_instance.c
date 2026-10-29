__int64 __fastcall hexrays_is_registered_python_clearable_instance(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  if ( !(_QWORD)xmmword_24638 )
    return 0;
  v1 = qword_24630;
  v2 = 0;
  while ( *(_QWORD *)v1 != a1 )
  {
    ++v2;
    v1 += 16;
    if ( v2 == (_QWORD)xmmword_24638 )
      return 0;
  }
  return *(unsigned int *)(v1 + 8);
}

