unsigned __int64 __fastcall sub_C3DE0(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, _QWORD *, _QWORD, _QWORD))
{
  __int64 v4; // rdi
  void (__fastcall *v5)(_QWORD, _QWORD); // rax
  unsigned __int64 result; // rax
  __int64 v7; // [rsp+8h] [rbp-30h] BYREF
  __int64 v8; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v4 = *(_QWORD *)a1;
  v9 = __readfsqword(0x28u);
  sub_C20C0(v4, &v7, a3);
  v5 = *(void (__fastcall **)(_QWORD, _QWORD))(a1 + 256);
  v8 = 1000000 * (v7 - *(_QWORD *)(a2 + 184));
  if ( v5 )
    v5(*(_QWORD *)(a1 + 264), *(_QWORD *)(a2 + 248));
  if ( (*(_BYTE *)(a1 + 110) & 2) != 0 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(a1 + 240))(2, *(_QWORD *)(a1 + 248), a2, &v8);
  result = __readfsqword(0x28u) ^ v9;
  *(_QWORD *)(a2 + 184) = 0;
  return result;
}
