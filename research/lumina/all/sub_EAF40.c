__int64 __fastcall sub_EAF40(__int64 a1, size_t a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // r13
  __int64 v5; // rdi
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdi
  _QWORD *v11; // rdx

  v2 = *(_QWORD **)(a1 + 64);
  if ( v2 )
  {
    v3 = *v2;
    v5 = *(_QWORD *)(*v2 + 8LL);
    if ( v5 )
      xmmword_241500(v5);
    v6 = *(_QWORD **)(v3 + 56);
    if ( v2 == v6 )
    {
      v11 = (_QWORD *)(v3 + 56);
    }
    else
    {
      while ( v2 != (_QWORD *)v6[1] )
        v6 = (_QWORD *)v6[1];
      v11 = v6 + 1;
    }
    *v11 = v2[1];
    sub_C91C0((__int64)v2, a2);
    *(_QWORD *)(a1 + 64) = 0;
    v8 = *(_QWORD *)(v3 + 8);
    if ( v8 )
      xmmword_241510(v8, a2, v7);
    if ( qword_242248 )
      xmmword_241500(qword_242248);
    if ( (*(_DWORD *)(v3 + 48))-- == 1 )
    {
      if ( (_DWORD)a2 && *(int *)(v3 + 24) >= 0 )
        off_2412E8(*(const char **)(v3 + 16));
      sub_EAE40(a1, a2);
    }
    if ( qword_242248 )
      xmmword_241510(qword_242248, a2, v7);
  }
  return 0;
}
