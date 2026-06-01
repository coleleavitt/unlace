__int64 __fastcall sub_B040(_BYTE *a1)
{
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 296LL))(a1);
  if ( (*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD))(*(_QWORD *)a1 + 304LL))(a1, 0)
    && (a1[308] & 8) != 0
    && a1[305] )
  {
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
    (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 32LL))(a1, 32);
  }
  (*(void (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 304LL))(a1, 1);
  (*(void (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 320LL))(a1);
  return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 128LL))(a1, 0xFFFFFFFFLL);
}

