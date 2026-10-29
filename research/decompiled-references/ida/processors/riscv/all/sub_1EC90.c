__int64 __fastcall sub_1EC90(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 dword; // ax
  __int64 v5; // rax

  dword = get_dword(a2);
  put_dword(
    a2,
    dword & 0xFFF
  | (unsigned __int64)(((unsigned int)*(_QWORD *)(a3 + 24) + (unsigned int)*(_QWORD *)(a3 + 32) + 2048 - (_DWORD)a2)
                     & 0xFFFFF000));
  v5 = get_dword(a2 + 4);
  put_dword(a2 + 4, v5 & 0xFFFFF | (unsigned int)((*(_DWORD *)(a3 + 24) + *(_DWORD *)(a3 + 32) - (_DWORD)a2) << 20));
  return 1;
}

