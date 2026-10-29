__int64 __fastcall sub_138140(_QWORD *a1, __int64 a2, char a3, double a4)
{
  __int64 v5; // rbx
  __int64 v6; // r10
  _QWORD *v7; // rdx
  _QWORD *v8; // r9
  int v9; // eax
  int v10; // r10d
  _QWORD *v11; // r11
  unsigned __int64 v12; // rdi
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  __m128i v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  if ( a3 && !sub_11CA80(a2) && !sub_11CAD0(a2) && *(_DWORD *)(a1[188] + 92LL) != a2 )
  {
    if ( !under_debugger )
      sub_383060(0xC4F5u, a4);
    BUG();
  }
  v5 = *(_QWORD *)(a1[187] + 8LL);
  if ( *(_QWORD *)(v5 + 120) == a2 )
  {
    if ( (unsigned __int8)getinf() )
      LODWORD(v6) = (unsigned __int8)getinf();
    else
      v6 = *(_QWORD *)(v5 + 120);
  }
  else
  {
    LODWORD(v6) = a2;
  }
  v7 = (_QWORD *)a1[145];
  v8 = &v7[2 * a1[146]];
  if ( v7 == v8 )
    return 0xFFFFFFFFLL;
  v9 = v6 - 1;
  v10 = -(int)v6;
  v11 = &v7[2 * a1[146]];
  do
  {
    v12 = *v7 + v7[1];
    v13 = v10 & (*v7 + v9);
    if ( v12 >= a2 + v13 )
    {
      if ( *v7 == v13 || a2 + v13 == v12 )
        goto LABEL_12;
      v11 = v7;
    }
    v7 += 2;
  }
  while ( v8 != v7 );
  v7 = v11;
LABEL_12:
  if ( v7 == v8 )
    return 0xFFFFFFFFLL;
  v14 = *v7 + v9;
  v17.m128i_i64[1] = a2;
  v15 = v10 & v14;
  v17.m128i_i64[0] = v10 & v14;
  sub_317BD0(a1 + 145, &v17);
  return v15;
}

