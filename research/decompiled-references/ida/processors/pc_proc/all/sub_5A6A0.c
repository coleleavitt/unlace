__int64 __fastcall sub_5A6A0(unsigned int *a1)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx

  if ( (unsigned __int8)getinf_flag() )
    return sub_59840(a1);
  if ( (getinf() & 0xF) == 7 )
    return sub_5A300(a1);
  v3 = *((_QWORD *)a1 + 1);
  *a1 = 0;
  if ( v3 )
  {
    *((_QWORD *)a1 + 2) = 0;
    qfree();
    *((_QWORD *)a1 + 1) = 0;
    *((_QWORD *)a1 + 3) = 0;
  }
  if ( *((_QWORD *)a1 + 4) )
  {
    *((_QWORD *)a1 + 5) = 0;
    qfree();
    *((_QWORD *)a1 + 4) = 0;
    *((_QWORD *)a1 + 6) = 0;
  }
  v4 = *((_QWORD *)a1 + 2);
  v5 = *a1;
  a1[1] = v4;
  if ( (unsigned int)v5 <= 6 )
  {
    v6 = 84;
    if ( _bittest64(&v6, v5) )
      a1[1] = a1[10] + v4;
  }
  return 0;
}

