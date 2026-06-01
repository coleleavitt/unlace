unsigned __int64 __fastcall sub_A0C30(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // edx
  unsigned __int64 v6; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( (unsigned __int8)sub_32F330(a2, &v6) )
  {
    v4 = *(_DWORD *)(a3 + 4);
    if ( v4 < *(_DWORD *)(a2 + 4) )
      sub_232200(a1, v6, v4, nullptr, 2);
  }
  sub_11CA10((char *)a2, (char *)a3);
  *(_BYTE *)(a2 + 1) &= ~4u;
  return v7 - __readfsqword(0x28u);
}

