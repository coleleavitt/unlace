__int64 __fastcall sub_115A0(_BYTE *a1, double a2)
{
  __int64 v2; // r13
  char v3; // al
  __int64 v4; // r12
  int v5; // ebx
  int v6; // esi

  v2 = *((_QWORD *)a1 + 77);
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 296LL))(a1);
  v3 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0);
  if ( a1[305] )
  {
    if ( v3 )
      (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
  }
  if ( a1[345] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 2);
  }
  v4 = v2 + 272;
  v5 = 0;
  sub_E080(v2, (__int64)(a1 + 224));
  if ( *(int *)(v2 + 264) > 0 )
  {
    do
    {
      v6 = v5++;
      sub_11320((__int64)a1, v6, v4, a2);
      v4 += 80;
    }
    while ( *(_DWORD *)(v2 + 264) > v5 );
  }
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

