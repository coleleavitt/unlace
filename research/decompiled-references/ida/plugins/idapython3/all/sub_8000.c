__int64 __fastcall sub_8000(int a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbx
  unsigned int v3; // r14d
  void (**v4)(void); // rax

  v1 = (*(__int64 (**)(void))(qword_24798 + 536))();
  v2 = xmmword_24678;
  v3 = v1;
  while ( v2 )
  {
    --v2;
    v4 = (void (**)(void))(qword_24670 + 24 * v2);
    if ( a1 == 1 )
    {
      v4[1]();
    }
    else if ( a1 == 2 )
    {
      v4[2]();
    }
    else
    {
      (*v4)();
    }
    if ( (*(__int64 (**)(void))(qword_24798 + 424))() )
    {
      sub_7F30((__int64)"Error during module lifecycle notification:\n");
      (*(void (**)(void))(qword_24798 + 432))();
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD))(qword_24798 + 552))(v3);
}

