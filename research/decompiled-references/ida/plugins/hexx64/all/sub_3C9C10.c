__int64 __fastcall sub_3C9C10(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx

  v4 = a4;
  v5 = a3;
  sub_66AC0();
  v6 = *(_QWORD *)(a1 + 184);
  v7 = *(_QWORD *)(v6 + 8 * v5);
  if ( *(int *)(v7 + 8) <= 69 )
  {
    v8 = *(_QWORD *)(v6 + 8 * v4);
    if ( *(_QWORD *)(v7 + 24) == v8 || v8 == *(_QWORD *)(v7 + 32) || v8 == *(_QWORD *)(v7 + 40) )
      sub_66AC0();
  }
  sub_66AC0();
  return 1;
}

