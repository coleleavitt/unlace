unsigned __int64 __fastcall sub_F3A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[5]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v8; // [rsp+28h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 128) != *(_DWORD *)(a1 + 116) && *(_QWORD *)(a1 + 784) )
  {
    memset(&v7[1], 0, 32);
    v7[0] = off_4AF990;
    ((void (__fastcall *)(__int64, _QWORD *, __int64, __int64, __int64, __int64))sub_11B520)(a1, v7, a3, a4, a5, a6);
    sub_62C20(a1, 1u, (__int64)"refine_call_lists");
  }
  return v8 - __readfsqword(0x28u);
}

