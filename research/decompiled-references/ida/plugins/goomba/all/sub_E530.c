void __fastcall sub_E530(std::exception *a1)
{
  __int64 v2; // rdi

  *(_QWORD *)a1 = off_4D788;
  v2 = *((_QWORD *)a1 + 3);
  if ( v2 )
  {
    *((_QWORD *)a1 + 4) = 0;
    qfree(v2);
  }
  std::exception::~exception(a1);
}

