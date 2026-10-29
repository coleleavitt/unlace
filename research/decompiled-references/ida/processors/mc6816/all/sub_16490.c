__int64 __fastcall sub_16490(_QWORD *a1)
{
  unsigned int v1; // ebp
  _BYTE *v2; // r12
  __int64 v3; // rax
  __int64 v4; // rsi

  v1 = 1;
  v2 = (char *)a1 + 305;
  (*(void (**)(void))(*a1 + 296LL))();
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*a1 + 304LL))(a1, 0);
  while ( 1 )
  {
    v3 = *a1;
    if ( !*v2 )
      break;
    (*(void (__fastcall **)(_QWORD *, __int64))(v3 + 32))(a1, 44);
    if ( *(_WORD *)(a1[79] + 4LL) == 1 )
      (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 32LL))(a1, 32);
    v4 = v1++;
    v2 += 40;
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 304LL))(a1, v4);
    if ( v1 == 8 )
    {
      v3 = *a1;
      break;
    }
  }
  (*(void (__fastcall **)(_QWORD *))(v3 + 320))(a1);
  return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

