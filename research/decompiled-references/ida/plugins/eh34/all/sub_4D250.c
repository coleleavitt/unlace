__int64 __fastcall sub_4D250(__int64 a1, __int64 a2, int a3, void *a4, __int64 a5, char a6)
{
  void *v7; // rbp
  __int64 v8; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  void *vars8; // [rsp+8h] [rbp+8h]
  __int64 vars10; // [rsp+10h] [rbp+10h]
  char vars18; // [rsp+18h] [rbp+18h]
  char vars20; // [rsp+20h] [rbp+20h]
  __int64 vars28; // [rsp+28h] [rbp+28h]
  int vars30; // [rsp+30h] [rbp+30h]
  unsigned __int64 vars38; // [rsp+38h] [rbp+38h]

  vars38 = __readfsqword(0x28u);
  vars28 = a2;
  vars10 = a5;
  vars18 = a6;
  vars20 = 1;
  vars30 = a3;
  LODWORD(vars0) = 7;
  vars8 = a4;
  sub_4CCA0((__int64 *)(a1 + 8), (unsigned __int64)&vars0);
  if ( (_DWORD)vars0 == 6 )
  {
    v7 = vars8;
    if ( vars8 )
    {
      v8 = *(_QWORD *)vars8;
      if ( *(_QWORD *)vars8 )
      {
        *((_QWORD *)vars8 + 1) = 0;
        qfree(v8);
      }
      operator delete(v7, 0x18u);
    }
  }
  return a1;
}

