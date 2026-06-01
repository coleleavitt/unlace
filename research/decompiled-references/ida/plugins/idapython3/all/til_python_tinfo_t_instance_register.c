void __fastcall til_python_tinfo_t_instance_register(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax

  v1 = (char *)dest + 8 * xmmword_24738;
  if ( dest == v1 )
    goto LABEL_6;
  v2 = dest;
  while ( *v2 != a1 )
  {
    if ( v1 == ++v2 )
      goto LABEL_6;
  }
  if ( v2 == v1 )
  {
LABEL_6:
    if ( *((_QWORD *)&xmmword_24738 + 1) < (unsigned __int64)(xmmword_24738 + 1) )
    {
      dest = (void *)qvector_reserve();
      v1 = (char *)dest + 8 * xmmword_24738;
    }
    *v1 = a1;
    *(_QWORD *)&xmmword_24738 = xmmword_24738 + 1;
  }
}

