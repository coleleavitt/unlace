void sub_16E010()
{
  __int64 v0; // rbx
  _QWORD *v1; // r12
  __int64 v2; // rbp
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx

  v0 = qword_242680;
  sub_19A520(qword_242680);
  v1 = ptr;
  v2 = xmmword_242690;
  ptr = nullptr;
  xmmword_242690 = 0;
  sub_19A570(v0);
  v3 = &v1[v2];
  if ( v1 != v3 )
  {
    v4 = v1;
    do
    {
      (**(void (__fastcall ***)(_QWORD, __int64))*v4)(*v4, 0xFFFFFFFFLL);
      ++v4;
    }
    while ( v3 != v4 );
  }
  if ( v1 )
    j__free(v1);
}
