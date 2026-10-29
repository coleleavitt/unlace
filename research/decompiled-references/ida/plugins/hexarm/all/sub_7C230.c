unsigned __int64 __fastcall sub_7C230(__int64 *a1)
{
  size_t v1; // rax
  _BYTE v3[5]; // [rsp+3h] [rbp-25h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  v1 = pack_dd() - (_QWORD)v3;
  if ( v1 )
    sub_7B900(a1, v3, v1);
  return v4 - __readfsqword(0x28u);
}

