void __fastcall __noreturn handler(unsigned int a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // r13
  __int64 v3; // r12
  _QWORD *v4; // r12
  _QWORD *v5; // rbx

  v1 = qword_242680;
  sub_19A520(qword_242680);
  v2 = ptr;
  v3 = xmmword_242690;
  ptr = nullptr;
  xmmword_242690 = 0;
  sub_19A570(v1);
  v4 = &v2[v3];
  if ( v2 != v4 )
  {
    v5 = v2;
    do
    {
      (**(void (__fastcall ***)(_QWORD, _QWORD))*v5)(*v5, a1);
      ++v5;
    }
    while ( v4 != v5 );
  }
  if ( v2 )
    j__free(v2);
  _exit((a1 == 15) - 1);
}
