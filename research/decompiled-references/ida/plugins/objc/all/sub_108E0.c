__int64 __fastcall sub_108E0(unsigned int *a1, unsigned __int64 *a2)
{
  void (*v2)(void); // rax
  unsigned __int64 i; // rbx

  v2 = *(void (**)(void))(*(_QWORD *)a1 + 264LL);
  if ( (char *)v2 == (char *)sub_10840 )
  {
    for ( i = *a2; i < a2[1]; i += a1[186] )
      op_offset();
    return 1;
  }
  else
  {
    v2();
    return 1;
  }
}
