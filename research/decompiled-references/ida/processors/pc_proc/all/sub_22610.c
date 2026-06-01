__int64 __fastcall sub_22610(unsigned int *a1)
{
  __int64 (*v1)(void); // rax

  v1 = *(__int64 (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v1 == (char *)sub_22350 )
    return a1[20];
  else
    return v1();
}

