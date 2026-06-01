void __fastcall sub_1EEEF0(__int64 a1, __int64 a2, _BYTE *a3, unsigned int a4, unsigned int a5, double a6)
{
  signed int tinfo_size; // r15d
  unsigned int v8; // ebx
  char v9; // al
  int v11[6]; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-40h]

  tinfo_size = a4;
  v8 = a4;
  v12 = __readfsqword(0x28u);
  if ( a3 )
    tinfo_size = get_tinfo_size();
  if ( *(_DWORD *)a1 != 1
    || *(_DWORD *)(a2 + 80) > tinfo_size
    || (*(_BYTE *)(a1 + 27) & 4) != 0
    || (sub_D67C0(*(int **)(a2 + 96), (_DWORD *)a1, (_DWORD **)a3, v8, a5), v9) )
  {
    v11[0] = 0;
    copy_argloc();
    if ( v8 == -1 )
      v8 = tinfo_size;
    sub_1C7920((__int64)v11, a2, a3, v8, a5, a6);
    sub_1C2AD0(v11, (int *)a1, a6);
    cleanup_argloc();
  }
}

