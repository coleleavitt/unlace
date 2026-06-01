__int64 __fastcall sub_3E1600(double a1, double a2, double a3, __m128 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  char *v7; // rax
  int v8; // ecx
  int v9; // r8d
  int v10; // r10d

  v7 = (char *)&unk_42C8A0;
  v8 = 1;
  v9 = *(_DWORD *)(a6 + 56);
  while ( 1 )
  {
    v10 = v8;
    v8 = *(_DWORD *)v7;
    if ( *(_DWORD *)v7 >= v9 )
      break;
    v7 += 4;
    if ( v7 == "$ mbui.view_id" )
      goto LABEL_4;
  }
  v8 = v10;
LABEL_4:
  if ( v9 != v8 )
    sub_3E03C0(a6, a7, 5u, v8, a1, a2, a3, a4);
  return 0;
}

