bool __fastcall sub_B8F0(_DWORD *a1)
{
  unsigned int (*v1)(void); // rdx
  unsigned int (*v2)(void); // rax

  v1 = *(unsigned int (**)(void))(*(_QWORD *)a1 + 64LL);
  if ( (char *)v1 != (char *)sub_B8C0 )
    return v1() == 0;
  v2 = *(unsigned int (**)(void))(*(_QWORD *)a1 + 56LL);
  if ( (char *)v2 == (char *)sub_B840 )
    return a1[20] == 0;
  else
    return v2() == 0;
}

