void *__fastcall sub_E700(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // r12
  __int64 v4; // rdi
  __int64 v5; // rbx
  void *v6; // r12
  _QWORD *v7; // rbx
  void *v8; // rdi
  void *result; // rax

  sub_5F670();
  sub_25FC0(a1 + 592);
  *(_QWORD *)(a1 + 216) = a1 + 592;
  v2 = *(_QWORD *)(a1 + 1048);
  while ( v2 )
  {
    v3 = (_QWORD *)v2;
    sub_DAA0(*(_QWORD **)(v2 + 24));
    v4 = *(_QWORD *)(v2 + 64);
    v2 = *(_QWORD *)(v2 + 16);
    if ( v4 )
    {
      v3[9] = 0;
      qfree(v4);
    }
    operator delete(v3, 0x58u);
  }
  v5 = *(_QWORD *)(a1 + 1120);
  *(_QWORD *)(a1 + 1048) = 0;
  *(_QWORD *)(a1 + 1056) = a1 + 1040;
  *(_QWORD *)(a1 + 1064) = a1 + 1040;
  *(_QWORD *)(a1 + 1072) = 0;
  *(_QWORD *)(a1 + 1088) = 0;
  while ( v5 )
  {
    v6 = (void *)v5;
    sub_E4C0(*(_QWORD **)(v5 + 24));
    v5 = *(_QWORD *)(v5 + 16);
    sub_E270((__int64)v6 + 40);
    operator delete(v6, 0x1E0u);
  }
  v7 = *(_QWORD **)(a1 + 1168);
  *(_QWORD *)(a1 + 1120) = 0;
  *(_QWORD *)(a1 + 1128) = a1 + 1112;
  *(_QWORD *)(a1 + 1136) = a1 + 1112;
  *(_QWORD *)(a1 + 1144) = 0;
  while ( v7 )
  {
    v8 = v7;
    v7 = (_QWORD *)*v7;
    operator delete(v8, 0x18u);
  }
  result = memset(*(void **)(a1 + 1152), 0, 8LL * *(_QWORD *)(a1 + 1160));
  *(_QWORD *)(a1 + 1176) = 0;
  *(_QWORD *)(a1 + 1168) = 0;
  return result;
}
