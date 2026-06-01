__int64 __fastcall sub_11E5A0(_DWORD *a1, __int64 a2, _DWORD *a3)
{
  int v5; // [rsp+0h] [rbp-28h]
  int v6; // [rsp+4h] [rbp-24h]

  if ( (unsigned int)qsscanf() != 2 )
    return (*(__int64 (__fastcall **)(_DWORD *, __int64, _DWORD *))(*(_QWORD *)a1 + 48LL))(a1, a2, a3);
  if ( a3 )
    *a3 = v6;
  return (unsigned int)(a1[17] + v5);
}

