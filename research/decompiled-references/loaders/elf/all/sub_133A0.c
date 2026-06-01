__int64 __fastcall sub_133A0(int a1, int *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  int v6; // r13d
  __int64 v7; // rbp
  int dword; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ecx
  __int64 result; // rax

  v5 = *(_QWORD *)(a2 + 1);
  v6 = *a2;
  v7 = *(_QWORD *)(a2 + 5);
  dword = get_dword(v5, a2, a3, a4, a5);
  switch ( (char)v6 )
  {
    case 2:
      v11 = dword + v7;
      goto LABEL_3;
    case 3:
    case 5:
      v11 = dword & 0xFF000000 | (v7 + dword) & 0xFFFFFF;
      goto LABEL_3;
    case 4:
      v11 = dword - v7;
      goto LABEL_3;
    case 6:
    case 7:
      v5 += 4;
      v11 = v7 + get_dword(v5, a2, (unsigned __int8)v6, v9, v10);
LABEL_3:
      sub_42050(a1, v5, v7, v11, 0, 4, 0, 0, 0);
      result = 0;
      break;
    default:
      result = 2;
      break;
  }
  return result;
}
