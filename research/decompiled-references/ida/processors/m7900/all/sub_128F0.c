__int64 __fastcall sub_128F0(_DWORD *a1)
{
  char *v1; // rdx
  int v2; // eax

  v1 = byte_19051;
  v2 = a1[63];
  if ( v2 != 1 )
  {
    v1 = byte_19054;
    if ( v2 != 4 )
      v1 = &byte_19070;
  }
  return (*(__int64 (__fastcall **)(_DWORD *, __int64, char *))(*(_QWORD *)a1 + 280LL))(a1, 8, v1);
}

