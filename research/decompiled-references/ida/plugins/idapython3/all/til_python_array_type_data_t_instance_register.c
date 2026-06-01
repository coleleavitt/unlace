void __fastcall til_python_array_type_data_t_instance_register(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax

  v1 = (char *)qword_246F0 + 8 * xmmword_246F8;
  if ( qword_246F0 == v1 )
    goto LABEL_6;
  v2 = qword_246F0;
  while ( *v2 != a1 )
  {
    if ( v1 == ++v2 )
      goto LABEL_6;
  }
  if ( v2 == v1 )
  {
LABEL_6:
    if ( *((_QWORD *)&xmmword_246F8 + 1) < (unsigned __int64)(xmmword_246F8 + 1) )
    {
      qword_246F0 = (void *)qvector_reserve();
      v1 = (char *)qword_246F0 + 8 * xmmword_246F8;
    }
    *v1 = a1;
    *(_QWORD *)&xmmword_246F8 = xmmword_246F8 + 1;
  }
}

