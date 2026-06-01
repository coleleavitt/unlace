__int64 __fastcall sub_76A80(_QWORD *a1, char **a2)
{
  __int64 (*v3)(void); // rax
  __int64 v4; // r14
  _BYTE *v5; // rdx
  char v6; // al
  unsigned int i; // ebp
  _BYTE *v8; // rcx
  __int64 (__fastcall *v9)(_QWORD *, __int64); // r15
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r12
  signed __int64 v14; // rdx
  char *v15; // rsi
  __int64 (__fastcall *v16)(_QWORD *, char *, signed __int64); // rax
  char *v18; // rsi
  __int64 v19; // rax

  v3 = *(__int64 (**)(void))(*a1 + 32LL);
  if ( (char *)v3 == (char *)sub_75F00 )
    v4 = a1[8];
  else
    v4 = v3();
  v5 = (_BYTE *)a1[6];
  v6 = 0;
  for ( i = 0; ; ++i )
  {
    if ( (_BYTE *)a1[7] != v5 )
    {
      v8 = v5++;
      if ( !*v8 )
        break;
      continue;
    }
    v9 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL);
    v10 = *(__int64 (__fastcall **)(__int64))(*a1 + 32LL);
    if ( v10 == sub_75F00 )
      v11 = a1[8];
    else
      v11 = v10((__int64)a1);
    v6 = v9(a1, v11 + i + 1);
    if ( !v6 )
      return 0;
    v5 = (_BYTE *)a1[6];
    v8 = v5 - 1;
    if ( !*(v5 - 1) )
      break;
  }
  if ( !i )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64, _BYTE *, _BYTE *))(*a1 + 40LL))(a1, v4 + 1, v5, v8);
  if ( v6 && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, _BYTE *, _BYTE *))(*a1 + 40LL))(a1, v4, v5, v8) )
    return 0;
  v12 = (unsigned __int64)a2[1];
  v13 = i + 1LL;
  if ( v12 < v13 )
  {
    v18 = *a2;
    if ( (unsigned __int64)a2[2] < v13 )
    {
      v19 = qvector_reserve(a2, v18, i + 1LL, 1);
      v12 = (unsigned __int64)a2[1];
      *a2 = (char *)v19;
      v18 = (char *)v19;
    }
    memset(&v18[v12], 0, v13 - v12);
    a2[1] = (char *)v13;
  }
  else if ( v13 != v12 )
  {
    a2[1] = (char *)v13;
  }
  v14 = i + 1;
  (*a2)[i] = 0;
  v15 = *a2;
  v16 = *(__int64 (__fastcall **)(_QWORD *, char *, signed __int64))(*a1 + 48LL);
  if ( v16 == sub_76A60 )
    return sub_76920(a1, v15, v14, 1);
  else
    return v16(a1, v15, v14);
}
