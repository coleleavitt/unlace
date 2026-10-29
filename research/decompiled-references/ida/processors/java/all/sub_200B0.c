__int64 __fastcall sub_200B0(__int64 a1, int a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rdi

  v3 = LOBYTE((&off_2CC40)[2 * a2 + 1]);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v3 <= v4 )
    goto LABEL_4;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(*(_QWORD *)a1, *(_QWORD *)(a1 + 40));
  v5 = 0;
  *(_QWORD *)(a1 + 24) = v4;
  if ( v4 )
  {
    ++*(_DWORD *)(a1 + 20);
LABEL_4:
    v6 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 24) = v4 - v3;
    (*(void (__fastcall **)(__int64, char *, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, (&off_2CC40)[2 * a2], 0);
    return 1;
  }
  return v5;
}

