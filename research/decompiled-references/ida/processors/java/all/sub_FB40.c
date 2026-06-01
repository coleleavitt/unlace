__int64 __fastcall sub_FB40(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  int v5; // ebp
  int v6; // r13d
  __int64 v7; // rax
  unsigned int v8; // ebp

  if ( a3 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 64LL))(a1, a3);
  v4 = a1[4];
  v5 = 0;
  v6 = v4 - 1;
  if ( !v4 )
    v6 = 0;
  sub_87F0((__int64)a1, (__int64)"%s %s", *(_QWORD *)(a1[79] + 48LL), a2);
  v7 = a1[4];
  if ( v7 )
    v5 = v7 - 1;
  v8 = v5 - v6;
  if ( a3 )
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 72LL))(a1, a3);
  return v8;
}

