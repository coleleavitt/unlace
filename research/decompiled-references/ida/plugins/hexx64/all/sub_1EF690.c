unsigned __int64 __fastcall sub_1EF690(__int64 a1, __int64 a2, int a3, int a4, __int64 *a5, int a6, __int64 a7)
{
  __int64 v9; // rsi
  char v10; // r8
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  *(_OWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 64) = 0;
  v9 = *a5;
  *(_DWORD *)(a1 + 24) = 1;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = a6;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 16) = a7;
  *(_DWORD *)a1 = 3;
  *(_DWORD *)(a1 + 8) = a3;
  if ( (_BYTE)v9 && a4 == get_tinfo_size() )
  {
    sub_1EF530(a1);
    *(_DWORD *)(a1 + 88) = a4;
    return v13 - __readfsqword(0x28u);
  }
  if ( !sub_11CA80(a4) && a4 != *(_DWORD *)(a2 + 92) )
  {
    sub_32C080(&v12, *(_QWORD *)(a2 + 96), a4);
    if ( (_BYTE)v12 )
    {
      clear_tinfo_t();
      v10 = 1;
      goto LABEL_5;
    }
    clear_tinfo_t();
  }
  v10 = 0;
LABEL_5:
  sub_1EF5A0((_DWORD *)a1, (_QWORD *)a2, a4, 0x10u, v10, 0.0);
  return v13 - __readfsqword(0x28u);
}

