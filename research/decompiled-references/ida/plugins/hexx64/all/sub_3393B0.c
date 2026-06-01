__int64 __fastcall sub_3393B0(unsigned __int64 *a1, __int64 a2, _QWORD *a3, unsigned __int64 a4, int a5, double a6)
{
  unsigned int v9; // eax
  unsigned int v10; // ebp
  __int64 v11; // rsi
  char v13; // al
  _QWORD v14[9]; // [rsp+0h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v9 = sub_13B090((__int64)a3, a5, a4);
  if ( !(_BYTE)v9 )
    return 0;
  v10 = v9;
  if ( *(_DWORD *)(a2 + 60) == a5 )
  {
    v14[0] = 0;
    v13 = sub_3324E0(a3, v14, a4, 1, a6);
    v11 = v14[0];
    if ( v13 )
      goto LABEL_4;
    return 0;
  }
  v11 = a3[11] - a3[13];
  v14[0] = v11;
LABEL_4:
  *a1 = sub_1CFE20((__int64)a3, v11, a4, a6);
  return v10;
}

