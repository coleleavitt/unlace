__int64 __fastcall sub_1F8E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned int v6; // edx
  __int64 v7; // rdi

  v4 = *(_QWORD *)(a1 + 24);
  if ( a3 <= v4 )
    goto LABEL_4;
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 48))(*(_QWORD *)a1, *(_QWORD *)(a1 + 40));
  v6 = 0;
  *(_QWORD *)(a1 + 24) = v4;
  if ( v4 )
  {
    ++*(_DWORD *)(a1 + 20);
LABEL_4:
    v7 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 24) = v4 - a3;
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v7 + 56LL))(v7, a2, 0);
    return 1;
  }
  return v6;
}
