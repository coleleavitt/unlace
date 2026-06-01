unsigned __int64 __fastcall sub_89A30(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-10h]

  v5 = __readfsqword(0x28u);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  v4 = 0;
  if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(a2 + 120))(*a3, a1 + 8, a1 + 16, &v4) )
  {
    if ( (debug & 0x400000) != 0 )
      sub_88B80((__int64)"Couldn't retrieve location list.\n");
  }
  else
  {
    *(_DWORD *)(a1 + 24) = 1;
  }
  return v5 - __readfsqword(0x28u);
}

