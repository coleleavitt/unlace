__int64 __fastcall sub_30B60(__int64 a1, _QWORD *a2, unsigned int a3, double a4, double a5, double a6)
{
  __int64 (*v6)(); // rax
  __int64 v8[3]; // [rsp+0h] [rbp-18h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( (unsigned int)sub_30940(a1, a3, v8, a4, a5, a6) == 1 )
  {
    v6 = *(__int64 (**)())(*a2 + 272LL);
    if ( v6 == sub_23EF0 || ((unsigned int (__fastcall *)(_QWORD *))v6)(a2) == 1 )
    {
      a2[2] = v8[0];
      return 0;
    }
    if ( under_debugger )
      BUG();
    interr(30544);
  }
  return 2147500037LL;
}
