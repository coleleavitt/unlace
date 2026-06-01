__int64 __fastcall sub_11FE0(__int64 a1, unsigned __int16 a2)
{
  __int64 outctx; // rax
  __int64 v3; // rcx
  _QWORD *v4; // rbp
  int v5; // r12d
  const char *v6; // rdx

  outctx = create_outctx(-1, 0, 0);
  v3 = (unsigned int)(*(_DWORD *)(a1 + 160) - *(_DWORD *)(a1 + 164));
  *(_DWORD *)(a1 + 160) = v3;
  v4 = (_QWORD *)outctx;
  v5 = sub_1B1E0(outctx, a1, a2, v3, 1, sub_12250);
  *(_DWORD *)(a1 + 160) += *(_DWORD *)(a1 + 164);
  if ( v5 < 0 )
  {
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    return 0;
  }
  else
  {
    v6 = s1;
    if ( v4[4] )
      v6 = (const char *)v4[3];
    sub_11D90(*(_QWORD *)(a1 + 33312), (__int64)"%s\n", v6);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
    return (unsigned int)(v5 + 1);
  }
}

