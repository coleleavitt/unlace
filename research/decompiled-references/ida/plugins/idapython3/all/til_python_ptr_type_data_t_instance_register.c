void __fastcall til_python_ptr_type_data_t_instance_register(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rax

  v1 = (char *)qword_24710 + 8 * xmmword_24718;
  if ( qword_24710 == v1 )
    goto LABEL_6;
  v2 = qword_24710;
  while ( *v2 != a1 )
  {
    if ( v1 == ++v2 )
      goto LABEL_6;
  }
  if ( v2 == v1 )
  {
LABEL_6:
    if ( *((_QWORD *)&xmmword_24718 + 1) < (unsigned __int64)(xmmword_24718 + 1) )
    {
      qword_24710 = (void *)qvector_reserve();
      v1 = (char *)qword_24710 + 8 * xmmword_24718;
    }
    *v1 = a1;
    *(_QWORD *)&xmmword_24718 = xmmword_24718 + 1;
  }
}

