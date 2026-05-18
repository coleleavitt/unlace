__int64 __fastcall sub_CCE90(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int *v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // ebx

  v3 = *(_QWORD *)(a1 + 8);
  if ( *(_BYTE *)(a1 + 17) )
  {
    sub_CC740(a1);
    a2 = (unsigned int)a2;
  }
  v4 = *(int **)(*(_QWORD *)v3 + 288LL);
  if ( (_DWORD)a2 )
  {
    if ( (int)a2 < 0 )
    {
      a3 = -1024LL * (int)a2 % (v4[9] + v4[10]);
      a2 = (unsigned int)(-1024LL * (int)a2 / (v4[9] + v4[10]));
    }
    v4[8] = a2;
  }
  else
  {
    a2 = (unsigned int)v4[8];
  }
  v5 = v4[7];
  if ( (int)v5 < 0 )
  {
    v5 = -1024 * v5 / (v4[9] + v4[10]);
    a3 = 1000000000;
    if ( v5 > 1000000000 )
      LODWORD(v5) = 1000000000;
  }
  v6 = a2;
  if ( (int)v5 >= (int)a2 )
    v6 = v5;
  if ( *(_BYTE *)(a1 + 17) )
    sub_CCDE0(a1, a2, a3);
  return v6;
}
