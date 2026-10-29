unsigned __int64 __fastcall sub_7D5E0(__int64 a1, __int64 *a2)
{
  size_t v2; // rax
  _BYTE v4[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_7D550(a2);
  v2 = pack_dq() - (_QWORD)v4;
  if ( v2 )
    sub_77B40(a2, v4, v2);
  return v5 - __readfsqword(0x28u);
}

