__int64 __fastcall sub_6650(_BYTE *a1)
{
  char *v1; // rdx

  v1 = byte_C1A3;
  if ( (a1[252] & 1) == 0 )
    v1 = nullptr;
  return (*(__int64 (__fastcall **)(_BYTE *, __int64, char *))(*(_QWORD *)a1 + 280LL))(a1, 8, v1);
}

