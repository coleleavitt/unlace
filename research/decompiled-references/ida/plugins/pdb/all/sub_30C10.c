__int64 __fastcall sub_30C10(__int64 a1, __int64 a2, __int64 *a3, double a4, double a5, double a6)
{
  __int64 v7; // rbx
  __int64 (*v8)(); // rax
  unsigned int *v9; // rax

  v7 = a2;
  v8 = *(__int64 (**)())(*(_QWORD *)a2 + 272LL);
  if ( v8 != sub_23EF0 )
    goto LABEL_5;
  do
  {
    a2 = 0x80000;
    v9 = (unsigned int *)sub_2CEC0(*(__int64 **)(v7 + 16), 0x80000, 0x400u, 0x4000000);
    if ( v9 )
      return sub_30940(a1, *v9, a3, a4, a5, a6);
    v8 = (__int64 (*)())sub_249A0();
LABEL_5:
    ;
  }
  while ( ((unsigned int (__fastcall *)(__int64))v8)(a2) == 1 );
  if ( under_debugger )
    BUG();
  interr(30540);
  return sub_30CA0();
}

