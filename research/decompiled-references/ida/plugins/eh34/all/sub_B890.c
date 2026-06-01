__int64 __fastcall sub_B890(_DWORD *a1)
{
  unsigned int (*v1)(void); // rax

  v1 = *(unsigned int (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v1 == (char *)sub_B840 )
    return (unsigned int)(a1[20] - 1);
  else
    return v1() - 1;
}

