int __fastcall sub_139D0(unsigned int *a1, _QWORD *a2)
{
  unsigned int *v2; // r12
  unsigned int v3; // ebp
  __int64 v4; // rbx
  unsigned int v5; // r13d
  int result; // eax

  v2 = a1;
  v3 = *a1;
  v4 = 208LL * *a1;
  while ( 1 )
  {
    v5 = *(v2 - 1);
    result = sub_86D0(v4 + *a2, *a2 + 208LL * v5);
    if ( result >= 0 )
      break;
    *v2-- = v5;
  }
  *v2 = v3;
  return result;
}
