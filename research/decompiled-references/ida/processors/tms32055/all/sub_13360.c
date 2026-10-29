unsigned __int64 __fastcall sub_13360(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v1 = *a1;
  v4 = __readfsqword(0x28u);
  (*(void (__fastcall **)(__int64 *, __int64))(v1 + 32))(a1, 35);
  qsnprintf();
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64))(*a1 + 56))(a1, &v3, 31);
  return v4 - __readfsqword(0x28u);
}

