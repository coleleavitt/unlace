__int64 sub_3653A0()
{
  unsigned int v0; // r13d
  __int64 v1; // rdi
  __int64 i; // rbp
  _QWORD *v3; // rbx
  __int64 v5; // [rsp+8h] [rbp-98h]

  v5 = qvector_reserve();
  *(_DWORD *)v5 = 0;
  *(_QWORD *)(v5 + 8) = 0;
  *(_QWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 64) = 0;
  *(_DWORD *)(v5 + 72) = 0;
  *(_OWORD *)(v5 + 24) = 0;
  *(_OWORD *)(v5 + 48) = 0;
  copy_tinfo_t();
  copy_tinfo_t();
  clear_tinfo_t();
  v0 = 1;
  if ( (unsigned __int8)calc_arglocs() )
    LOBYTE(v0) = *(_DWORD *)v5 != 1;
  cleanup_argloc();
  clear_tinfo_t();
  v1 = v5;
  if ( v5 )
  {
    for ( i = 0; i != 1; ++i )
    {
      v3 = (_QWORD *)(v1 + 80 * i);
      clear_tinfo_t();
      if ( v3[5] )
      {
        v3[6] = 0;
        qfree();
      }
      if ( v3[2] )
      {
        v3[3] = 0;
        qfree();
      }
      cleanup_argloc();
      v1 = v5;
    }
    qfree();
  }
  return v0;
}

