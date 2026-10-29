__int64 __fastcall sub_45C80(__int64 a1)
{
  unsigned __int16 *v2; // rdi
  unsigned __int16 *v3; // rdi
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  if ( (*(_DWORD *)debug & 0x10000) != 0 )
    sub_E960((__int64)"--Identity mapping boot sector--------------\n");
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48), 10);
  v2 = *(unsigned __int16 **)(a1 + 48);
  v5[0] = 31744;
  if ( (*(unsigned int (__fastcall **)(unsigned __int16 *, _QWORD, __int64, _QWORD *, __int64, _QWORD, __int64))(*(_QWORD *)v2 + 56LL))(
         v2,
         v2[8],
         31744,
         v5,
         1024,
         0,
         1)
    || ((*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 48) + 48LL))(*(_QWORD *)(a1 + 48), 3),
        v3 = *(unsigned __int16 **)(a1 + 48),
        v5[0] = 0x8000,
        (*(unsigned int (__fastcall **)(unsigned __int16 *, _QWORD, __int64, _QWORD *, __int64, _QWORD, __int64))(*(_QWORD *)v3 + 56LL))(
          v3,
          v3[8],
          0x8000,
          v5,
          512,
          0,
          1)) )
  {
    sub_45250(a1);
    return 9;
  }
  else
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
    return 0;
  }
}

