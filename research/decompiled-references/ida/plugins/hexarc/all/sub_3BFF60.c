__int64 __fastcall sub_3BFF60(_DWORD *a1)
{
  int v1; // eax
  int v3; // eax

  v1 = a1[4];
  if ( v1 > 0 )
  {
    a1[4] = v1 - 1;
LABEL_3:
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 48LL))(a1);
    return 1;
  }
  v3 = a1[3];
  if ( v3 <= 0 )
    goto LABEL_3;
  a1[4] = 10000;
  a1[3] = v3 - 1;
  (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 48LL))(a1);
  return 1;
}

