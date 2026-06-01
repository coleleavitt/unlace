__int64 __fastcall sub_1FBA0(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rdi
  _QWORD v8[9]; // [rsp+0h] [rbp-48h] BYREF

  v8[5] = __readfsqword(0x28u);
  v3 = (int)qsnprintf(v8, 32, "\\u%04X", a2);
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
    (*(void (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v6 + 56LL))(v6, v8, 0);
    return 1;
  }
  return v5;
}
