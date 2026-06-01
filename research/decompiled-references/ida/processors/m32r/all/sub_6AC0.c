unsigned __int64 __fastcall sub_6AC0(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  bool v4; // zf
  void (__fastcall *v5)(__int64 *, __int64, _QWORD, __int64 *); // rax
  __int64 v7; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v8; // [rsp+408h] [rbp-20h]

  v2 = qword_BED0;
  v3 = *a2;
  v4 = *(_QWORD *)(a1 + 144) == 0;
  v8 = __readfsqword(0x28u);
  v5 = *(void (__fastcall **)(__int64 *, __int64, _QWORD, __int64 *))(v3 + 368);
  if ( !v4 )
    v2 = *(__int64 **)(a1 + 136);
  v5(a2, 11, 0, v2);
  if ( *(_DWORD *)(a1 + 236) < 2u )
  {
    qsnprintf();
    (*(void (__fastcall **)(__int64 *, __int64 *, _QWORD))(*a2 + 136))(a2, &v7, 0);
  }
  return v8 - __readfsqword(0x28u);
}

