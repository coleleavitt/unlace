_WORD *__fastcall sub_FA430(__int64 a1, int a2, int a3, __int64 a4, int a5, _QWORD *a6, double a7)
{
  unsigned __int16 v8; // r13
  _WORD *v9; // rbx
  _WORD *i; // rax
  __int64 v11; // rdx
  __int64 _0[21]; // [rsp+0h] [rbp+0h] BYREF

  v8 = a5 & 0x82;
  v9 = nullptr;
  _0[15] = __readfsqword(0x28u);
  for ( i = sub_FA360(_0, a7, a1, a2, a3, a5, a6); i; i = sub_F9FE0(_0, a7) )
  {
    v11 = *((_QWORD *)i + 5);
    if ( (a4 & v11) == 0 )
    {
      if ( !v11 && (v8 & i[10]) != 0 )
        return i;
      if ( !v9 )
        v9 = i;
    }
  }
  return v9;
}
