unsigned __int64 __fastcall sub_126D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  char v4[1032]; // [rsp+0h] [rbp-428h] BYREF
  unsigned __int64 v5; // [rsp+408h] [rbp-20h]

  v2 = *(_QWORD *)a2;
  v5 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(v2 + 368))(a2, 15, 0, 0);
  if ( *(_WORD *)(a1 + 224) != 1 )
  {
    qsnprintf();
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 160LL))(a2, 1024);
    sub_11630(a2, 0xFFFF, (__int64)"%s", v4);
  }
  return v5 - __readfsqword(0x28u);
}

